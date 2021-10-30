module.exports = grammar({
  name: 'tabry',

  rules: {
    source_file: $ => repeat($._toplevel_statement),

    _toplevel_statement: $ => choice(
      $._common_statement,
      $.cmd_statement,
      $.defopts_statement,
      $.defargs_statement,
    ),

    // TODO fix restrictions here, e.g. cna't have flagarg inside flagarg
    _common_statement: $ => choice(
      $.arg_statement,
      $.flagarg_statement,
      $.flag_statement,
      $.sub_statement,
      $._comment,
      $.desc_statement,
    ),

    _block_statement: $ => choice(
      $._common_statement,
      $.opts_const_statement,
      $.opts_shell_statement,
      $.opts_file_statement,
      $.opts_dir_statement,
      $.include_statement,
    ),

    include_statement: $ => seq(
      'include',
      $.at_identifier,
    ),

    // TODO limit types of statements inside defopts and defargs
    defopts_statement: $ => seq(
      'defopts',
      $.at_identifier,
      $.block,
    ),
    defargs_statement: $ => seq(
      'defargs',
      $.at_identifier,
      $.block,
    ),

    at_identifier: $ => /@[a-zA-Z_][a-zA-Z0-9_-]*/,

    _comment: $ => /#.*/,

    sub_statement: $ => seq(
      'sub',
      field('names', $.sub_name_list),
      optional(field('desc', $.string)),
      repeat($.at_identifier),
      optional($.block),
    ),

    cmd_statement: $ => seq(
      'cmd',
      $.string,
    ),

    desc_statement: $ => seq(
      'desc',
      $.string,
    ),

    arg_type: $ => choice(
      'arg',
      'args',
    ),

    arg_statement: $ => seq(
      optional($.arg_modifier),
      // restrictions:
      // * 'arg' or 'args' cannot after 'args'.
      // * non-optional arg(s) cannot come after optional arg
      $.arg_type,
      optional(
        choice(
          seq($.arg_name_list, $.string),
          seq($.arg_name_list)
        )
      ),
      repeat(
        field("at", $.at_identifier),
      ),
      optional($.block),
    ),

    opts_const_statement: $ => seq(
      'opts',
      'const', // TODO this is weird: doesn't require a space between them
      $._strings,
    ),

    opts_shell_statement: $ => seq(
      'opts',
      'shell',
      $.string,
    ),

    opts_file_statement: $ => seq(
      'opts',
      'file',
    ),

    opts_dir_statement: $ => seq(
      'opts',
      'dir',
    ),

    flagarg_statement: $ => seq(
      optional($.flag_modifier),
      'flagarg',
      field('names', $.flag_name_list),
      optional(field('desc', $.string)),
      repeat($.at_identifier),
      optional($.block),
    ),

    flag_statement: $ => seq(
      optional($.flag_modifier),
      'flag',
      field('names', $.flag_name_list),
      optional(field('desc', $.string)),
      repeat($.at_identifier),
      optional($.block),
    ),

    flag_modifier: $ => choice(
      'reqd',
      'hidden',
    ),

    arg_modifier: $ => 'opt',

    block: $ => seq(
      '{',
      repeat($._block_statement),
      '}',
    ),

    flag_name_list: $ => $._strings,
    arg_name_list: $ => $._strings,
    sub_name_list: $ => $._strings,

    _strings: $ => choice(
      $.string,
      $._strings_list,
    ),

    string: $ => /[A-Za-z_][a-zA-Z0-9_,-]*|"([^"\\\n]|\\"|\\\\)*"/,

    _strings_list: $ => seq(
      '(',
      repeat1($.string),
      ')',
    ),
  }
});
