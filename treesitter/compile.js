#!/usr/bin/env node
// TODO: run through grammar and take stock of what is NOT implemented here. look at TODOs.
// TODO: tests, maybe more syntax checks
const fs = require('fs');
const YAML = require('yaml');
const Parser = require('tree-sitter');
const TabryGrammar = require('./bindings/node/index.js');

///////////////////////////////////////////////////////////////////

// HELPERS

function die(err) {
  console.error(`ERROR: ${err}`);
  process.exit(1);
}

function handleChildren(state, node) {
  for (const child of node.namedChildren) {
    const handler = 'handle' + child.type.replace(/((_|^)\w)/g, k => (k[1] || k[0]).toUpperCase());
    if (handlers[handler]) {
      handlers[handler](state, child);
    } else {
      console.error(`WARNING: no handler for type ${child.type} (make fn ${handler})`)
    }
  }
}

const childrenOfType = (node, type) => node.namedChildren.filter(x => x.type == type);
const firstChildOfType = (node, type) => childrenOfType(node, type)[0];

function pickMultiple(node, mappings) {
  const result = {};
  for (const name in mappings) {
    result[name] = childrenOfType(node, mappings[name]);
  }
  return result;
}
function pickFirst(node, mappings) {
  const result = {};
  for (const name in mappings) {
    result[name] = firstChildOfType(node, mappings[name]);
  }
  return result;
}

function pick(node, firsts, multiples) {
  return {...pickFirst(node, firsts), ...pickMultiple(node, multiples)};
}

function textFromString(node) {
  if (node.type !== 'string') {
    throw new Error("node is not a string");
  }
  let text = node.text;
  if (text[0] == '"') {
    try {
      text = JSON.parse(text);
    } catch (e) {
    }
  }
  return text;
}

function nameFromAt(node) {
  if (node.type !== 'at_identifier') {
    throw new Error("node is not a at_identifier");
  }
  return node.text.slice(1);
}

function safePush(object, field, value) {
  if (!object[field]) {
    object[field] = [];
  }
  object[field].push(value);
}

function safeSet(object, field, key, value) {
  if (!object[field]) {
    object[field] = {}
  }
  if (object[field][key]) {
    die(`ERROR! duplicate ${field} -- ${key}`);
  }
  object[field][key] = value;
}

function checkContext(state, node, allowable) {
  if (!allowable.includes(state.context)) {
    die(`ERROR: ${node.type} found in context ${state.context}. Allowable: ${allowable}`);
  }
}

/// CREATE* (part II of handlers)

function createFlag(state, {nameAndAliases, desc, mods, ats, block, arg}) {
  const [name, ...aliases] = textFromString(nameAndAliases).split(",");
  const flag = {name};
  if (aliases.length) {
    flag.aliases = aliases;
  }

  for (const at of ats) {
    safePush(flag, 'options', {type: 'include', value: nameFromAt(at)});
  }

  setMods(flag, mods, {reqd: 'required'});

  if (desc) {
    flag.description = textFromString(desc);
  }
  if (arg) {
    flag.arg = true;
  }

  safePush(state.currentNode, 'flags', flag);

  if (block) {
    handleChildren({...state, currentNode: flag, context: 'flag'}, block);
  }
}

function createIncludeObjectOnSub(state, {at, type}) {
  const name = nameFromAt(at);
  const typeFromMap = state.includeTypeMap[name];
  if (!typeFromMap) {
    const typeDesc = type ? `def${type}s` : "defflags/defargs/defsubs";
    die(`Reference to unknown ${typeDesc} ${JSON.stringify('@' + name)}`);
  } else if (type && typeFromMap !== type) {
    die(`Invalid include type for @${at} -- expected ${type} but @${at} is a def${typeFromMap}s`);
  }
  type = typeFromMap;

  safePush(state.currentNode, type + 's', {include: name});
}

function createSub(state, {nameAndAliases, ats, block, desc}) {
  const [name, ...aliases] = textFromString(nameAndAliases).split(",");
  const sub = {name};
  safePush(state.currentNode, 'subs', sub);

  if (aliases.length) {
    sub.aliases = aliases;
  }
  if (desc) {
    sub.description = textFromString(desc);
  }

  const newState = {...state, currentNode: sub, context: 'sub'};

  for (const at of ats) {
    createIncludeObjectOnSub(newState, {at});
  }

  if (block) {
    handleChildren(newState, block);
  }
}

function createOpts(state, {type, value}) {
  safePush(state.currentNode, 'options', { type: type, value: value});
}

function setMods(object, mods, tabryToYaml) {
  for (const mod of mods) {
    const yamlName = tabryToYaml[mod.text];
    if (yamlName) {
      object[yamlName] = true
    } else {
      die(`Unknown mod ${mod.text}`);
    }
  }
}

function createArg(state, {name, desc, type, mods, ats, block}) {
  // TODO: final args (type = args)
  const arg = {};
  if (name) {
    arg.name = textFromString(name);
  }
  setMods(arg, mods, {opt: 'optional', strict: 'strict'})

  for (const at of ats) {
    safePush(arg, 'options', {type: 'include', value: nameFromAt(at)});
  }

  if (desc) {
    arg.description = textFromString(desc);
  }

  safePush(state.currentNode, 'args', arg);

  if (block) {
    handleChildren({...state, currentNode: arg, context: 'arg'}, block);
  }
}

function createIncludes(state, {type, at, block}) {
  const include = {};
  safePush(state.currentNode, type + '_includes', include);
  handleChildren({...state, currentNode: include, context: type + '_include'}, block);
}

/// STATEMENT HANDLERS

const handlers = {
  handleDescStatement(state, node) {
    checkContext(state, node, ['main', 'sub', 'arg', 'flag']);
    state.currentNode.description = textFromString(firstChildOfType(node, 'string'));
  },

  handleFlagStatement(state, node, arg=false) {
    checkContext(state, node, ['sub', 'flag_include']);
    const {mods, desc, names, ats, block} = pick(node, {
      block: 'block',
      names: 'flag_name_list',
      desc: 'string',
    }, {
      mods: 'flag_modifier',
      ats: 'at_identifier',
    });

    for (const nameAndAliases of names.namedChildren) {
      createFlag(state, {nameAndAliases, desc, mods, ats, block, arg});
    }
  },

  handleFlagargStatement(state, node) {
    handlers.handleFlagStatement(state, node, true);
  },

  handleCmdStatement(state, node) {
    checkContext(state, node, ['main']);
    state.output.cmd = textFromString(firstChildOfType(node, 'string'));
  },

  handleSubStatement(state, node) {
    checkContext(state, node, ['main', 'sub', 'sub_include']);
    const {names, ats, block, desc} = pick(node, {
      block: 'block',
      names: 'sub_name_list',
      desc: 'string',
    }, {
      ats: 'at_identifier',
    });

    for (const nameAndAliases of names.namedChildren) {
      createSub(state, {nameAndAliases, ats, block, desc});
    }
  },

  handleArgStatement(state, node) {
    checkContext(state, node, ['main', 'sub', 'arg_include']);
    const {mods, type, names, ats, block, desc} = pick(node, {
      type: 'arg_type',
      block: 'block',
      desc: 'string',
      names: 'arg_name_list',
    }, {
      mods: 'arg_modifier',
      ats: 'at_identifier',
    });
    const effectiveNames = names ? names.namedChildren : [undefined];
    for (const name of effectiveNames) {
      createArg(state, {name, type, mods, ats, block, desc});
    }
  },

  handleOptsConstStatement(state, node) {
    checkContext(state, node, ['arg', 'flag', 'option_include']);
    const {names} = pick(node, {}, {names: 'string'});
    for (const name of names) {
      createOpts(state, {type: 'const', value: textFromString(name)});
    }
  },

  handleOptsShellStatement(state, node) {
    checkContext(state, node, ['arg', 'flag', 'option_include']);
    const {value} = pick(node, {value: 'string'});
    createOpts(state, {type: 'include', value: textFromString(value)});
  },

  handleOptsFileStatement(state, node) {
    checkContext(state, node, ['arg', 'flag', 'option_include']);
    createOpts(state, {type: 'file'});
  },

  handleOptsDirStatement(state, node) {
    checkContext(state, node, ['arg', 'flag', 'option_include']);
    createOpts(state, {type: 'directory'});
  },

  handleIncludeStatement(state, node) {
    checkContext(state, node, ['arg', 'flag', 'option_include',
      'arg_include', 'sub_include', 'flag_include', 'sub']);
    const {at} = pick(node, {at: 'at_identifier'});
    if (state.context.match(/^(arg|flag|sub)_include$/)) {
      const type = state.context.split('_')[0];
      createIncludeObjectOnSub(state, {at, type});
    } else if (state.context == 'sub') {
      createIncludeObjectOnSub(state, {at});
    } else {
      createOpts(state, {type: 'include', value: nameFromAt(at)});
    }
  },

  _handleDefStatement(state, node, type) {
    checkContext(state, node, ['main']);
    const {at, block} = pick(node, {at: 'at_identifier', block: 'block'});
    createIncludes(state, {type, at, block});
  },

  handleDefargsStatement(state, node) {
    handlers._handleDefStatement(state, node, 'arg');
  },
  handleDefoptsStatement(state, node) {
    handlers._handleDefStatement(state, node, 'option');
  },
  handleDefsubsStatement(state, node) {
    handlers._handleDefStatement(state, node, 'sub');
  },
  handleDefflagsStatement(state, node) {
    handlers._handleDefStatement(state, node, 'flag');
  },

  handleERROR(state, node) {
    die(`Tree-sitter parse error. Try running npx tree-sitter parse. State:\n${JSON.stringify(state)}`);
  },
}

//////////////////////////////////////////////////////////////////

// Need to know type of include so we know what type "include @foo" refers to
function makeIncludeTypeMap(rootNode) {
  const map = {};
  for (const type of ['flag', 'sub', 'arg']) {
    for (const node of childrenOfType(rootNode, 'def' + type + 's_statement')) {
      const {at} = pick(node, {at: 'at_identifier'});
      const name = nameFromAt(at);
      if (map[name]) {
        die(`Duplicate flag/sub/arg include name ${name}`);
      }
      map[name] = type;
    }
  }
  return map;
}

function parseFile(filename) {
  const parser = new Parser();
  parser.setLanguage(TabryGrammar);
  const tree = parser.parse(fs.readFileSync(filename).toString());
  return tree;
}

const filename = process.argv[2];
const outputFn = process.argv[3];
if (!filename) { die("usage: compile.js file.tabry [output.json] # or output.yml"); }
const tree = parseFile(filename);

const output = {cmd: null, main: {}};
const state = {
  output,
  context: 'main', currentNode: output,
  includeTypeMap: makeIncludeTypeMap(tree.rootNode),
};
handleChildren(state, tree.rootNode);

if (!outputFn) {
  console.log(YAML.stringify(output, null, {aliasDuplicateObjects: false, version: '1.1'}));
} else if (outputFn.match(/\.yml/)) {
  fs.writeFileSync(outputFn, YAML.stringify(output, null, {aliasDuplicateObjects: false, version: '1.1'}));
} else {
  fs.writeFileSync(outputFn, JSON.stringify(output));
}

