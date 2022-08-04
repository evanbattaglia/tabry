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

    // TODO fix restrictions here, e.g. can't have flagarg inside flagarg
    // make an _opts_block_statement with only opts_*_statement. and make an opts_block
    _common_statement: $ => choice(
      $.arg_statement,
      $.flagarg_statement,
      $.flag_statement,
      $.sub_statement,
      $._comment,
      $.desc_statement,
      $.include_statement,
    ),

    _block_statement: $ => choice(
      $._common_statement,
      $.opts_const_statement,
      $.opts_shell_statement,
      $.opts_file_statement,
      $.opts_dir_statement,
      $.title_statement,
    ),

    include_statement: $ => seq(
      'include',
      $.at_identifier,
    ),

    // TODO limit types of statements inside defopts and defargs etc.
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

    title_statement: $ => seq(
      'title',
      $.string,
    ),

    arg_type: $ => choice(
      'arg',
      'varargs',
    ),

    arg_statement: $ => seq(
      optional($.arg_modifier),
      // restrictions:
      // * 'arg' or 'varargs' cannot after 'args'.
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
    ),

    arg_modifier: $ => 'opt',

    block: $ => seq(
      '{',
      repeat1($._block_statement),
      '}',
    ),

    flag_name_list: $ => $._strings,
    arg_name_list: $ => $._strings,
    sub_name_list: $ => $._strings,

    _strings: $ => choice(
      $.string,
      $._strings_list,
    ),

    string: $ => /[A-Za-z_][a-zA-Z0-9_,-]*|"([^"\\]|\\"|\\\\)*"/,

    _strings_list: $ => seq(
      '(',
      repeat1($.string),
      ')',
    ),
  }
});
