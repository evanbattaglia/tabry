const tabryCompile = require('./tabry-compile');
const fs = require('fs');
const yaml = require('yaml');

function loadTreesitterExamplesFromTxtFile(filename) {
  const examples = [];
  const lines = fs.readFileSync(filename).toString().split("\n");
  let nameMode = false;
  // ============
  // Example name
  // ============
  // example stuff
  // ---
  // example stuff2
  for (const l of lines) {
    if (l.match(/^===+/)) {
      nameMode = !nameMode;
    } else if (nameMode) {
      examples.push({name: l, text: ''});
    } else if (examples.length) {
      const lastExample = examples[examples.length - 1];
      lastExample.text += l + "\n";
    }
  };

  // result: {name: "example_name", text: "example stuff"}
  return examples.map(ex => ({
    name: ex.name,
    filename: ex.name.toLowerCase().replace(/[^a-zA-Z0-9]/g, '_'),
    text: ex.text.split("\n---\n")[0]
  }));
}

const corpusFile = __dirname + "/corpus/examples_from_language_reference.txt";
const examples = loadTreesitterExamplesFromTxtFile(corpusFile);
const fixtureDir = __dirname + "/jest_fixtures/examples_from_language_reference/";

describe('examples from language reference', () => {
  for (const example of examples) {
    describe(example.name, () => {
      it("parses correctly", () => {
        const fixture = `${fixtureDir}${example.filename}.yml`;
        const expected = yaml.parse(fs.readFileSync(fixture).toString());

        const actual = tabryCompile.transformText(example.text);

        expect(actual).toEqual(expected);
      });
    });
  }
});
