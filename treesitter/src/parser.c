#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 141
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 11

enum {
  anon_sym_include = 1,
  anon_sym_defopts = 2,
  anon_sym_defargs = 3,
  sym_at_identifier = 4,
  sym__comment = 5,
  anon_sym_sub = 6,
  anon_sym_cmd = 7,
  anon_sym_desc = 8,
  anon_sym_title = 9,
  anon_sym_arg = 10,
  anon_sym_varargs = 11,
  anon_sym_opts = 12,
  anon_sym_const = 13,
  anon_sym_shell = 14,
  anon_sym_delegate = 15,
  anon_sym_file = 16,
  anon_sym_dir = 17,
  anon_sym_method = 18,
  anon_sym_flagarg = 19,
  anon_sym_flag = 20,
  anon_sym_reqd = 21,
  sym_arg_modifier = 22,
  anon_sym_LBRACE = 23,
  anon_sym_RBRACE = 24,
  sym_string = 25,
  anon_sym_LPAREN = 26,
  anon_sym_RPAREN = 27,
  sym_source_file = 28,
  sym__toplevel_statement = 29,
  sym__common_statement = 30,
  sym__block_statement = 31,
  sym_include_statement = 32,
  sym_defopts_statement = 33,
  sym_defargs_statement = 34,
  sym_sub_statement = 35,
  sym_cmd_statement = 36,
  sym_desc_statement = 37,
  sym_title_statement = 38,
  sym_arg_type = 39,
  sym_arg_statement = 40,
  sym_opts_const_statement = 41,
  sym_opts_shell_statement = 42,
  sym_opts_delegate_statement = 43,
  sym_opts_file_statement = 44,
  sym_opts_dir_statement = 45,
  sym_opts_method_statement = 46,
  sym_flagarg_statement = 47,
  sym_flag_statement = 48,
  sym_flag_modifier = 49,
  sym_block = 50,
  sym_flag_name_list = 51,
  sym_arg_name_list = 52,
  sym_sub_name_list = 53,
  sym__strings = 54,
  sym__strings_list = 55,
  aux_sym_source_file_repeat1 = 56,
  aux_sym_sub_statement_repeat1 = 57,
  aux_sym_arg_statement_repeat1 = 58,
  aux_sym_block_repeat1 = 59,
  aux_sym__strings_list_repeat1 = 60,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_include] = "include",
  [anon_sym_defopts] = "defopts",
  [anon_sym_defargs] = "defargs",
  [sym_at_identifier] = "at_identifier",
  [sym__comment] = "_comment",
  [anon_sym_sub] = "sub",
  [anon_sym_cmd] = "cmd",
  [anon_sym_desc] = "desc",
  [anon_sym_title] = "title",
  [anon_sym_arg] = "arg",
  [anon_sym_varargs] = "varargs",
  [anon_sym_opts] = "opts",
  [anon_sym_const] = "const",
  [anon_sym_shell] = "shell",
  [anon_sym_delegate] = "delegate",
  [anon_sym_file] = "file",
  [anon_sym_dir] = "dir",
  [anon_sym_method] = "method",
  [anon_sym_flagarg] = "flagarg",
  [anon_sym_flag] = "flag",
  [anon_sym_reqd] = "reqd",
  [sym_arg_modifier] = "arg_modifier",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_string] = "string",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_source_file] = "source_file",
  [sym__toplevel_statement] = "_toplevel_statement",
  [sym__common_statement] = "_common_statement",
  [sym__block_statement] = "_block_statement",
  [sym_include_statement] = "include_statement",
  [sym_defopts_statement] = "defopts_statement",
  [sym_defargs_statement] = "defargs_statement",
  [sym_sub_statement] = "sub_statement",
  [sym_cmd_statement] = "cmd_statement",
  [sym_desc_statement] = "desc_statement",
  [sym_title_statement] = "title_statement",
  [sym_arg_type] = "arg_type",
  [sym_arg_statement] = "arg_statement",
  [sym_opts_const_statement] = "opts_const_statement",
  [sym_opts_shell_statement] = "opts_shell_statement",
  [sym_opts_delegate_statement] = "opts_delegate_statement",
  [sym_opts_file_statement] = "opts_file_statement",
  [sym_opts_dir_statement] = "opts_dir_statement",
  [sym_opts_method_statement] = "opts_method_statement",
  [sym_flagarg_statement] = "flagarg_statement",
  [sym_flag_statement] = "flag_statement",
  [sym_flag_modifier] = "flag_modifier",
  [sym_block] = "block",
  [sym_flag_name_list] = "flag_name_list",
  [sym_arg_name_list] = "arg_name_list",
  [sym_sub_name_list] = "sub_name_list",
  [sym__strings] = "_strings",
  [sym__strings_list] = "_strings_list",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_sub_statement_repeat1] = "sub_statement_repeat1",
  [aux_sym_arg_statement_repeat1] = "arg_statement_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym__strings_list_repeat1] = "_strings_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_defopts] = anon_sym_defopts,
  [anon_sym_defargs] = anon_sym_defargs,
  [sym_at_identifier] = sym_at_identifier,
  [sym__comment] = sym__comment,
  [anon_sym_sub] = anon_sym_sub,
  [anon_sym_cmd] = anon_sym_cmd,
  [anon_sym_desc] = anon_sym_desc,
  [anon_sym_title] = anon_sym_title,
  [anon_sym_arg] = anon_sym_arg,
  [anon_sym_varargs] = anon_sym_varargs,
  [anon_sym_opts] = anon_sym_opts,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_shell] = anon_sym_shell,
  [anon_sym_delegate] = anon_sym_delegate,
  [anon_sym_file] = anon_sym_file,
  [anon_sym_dir] = anon_sym_dir,
  [anon_sym_method] = anon_sym_method,
  [anon_sym_flagarg] = anon_sym_flagarg,
  [anon_sym_flag] = anon_sym_flag,
  [anon_sym_reqd] = anon_sym_reqd,
  [sym_arg_modifier] = sym_arg_modifier,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_string] = sym_string,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_source_file] = sym_source_file,
  [sym__toplevel_statement] = sym__toplevel_statement,
  [sym__common_statement] = sym__common_statement,
  [sym__block_statement] = sym__block_statement,
  [sym_include_statement] = sym_include_statement,
  [sym_defopts_statement] = sym_defopts_statement,
  [sym_defargs_statement] = sym_defargs_statement,
  [sym_sub_statement] = sym_sub_statement,
  [sym_cmd_statement] = sym_cmd_statement,
  [sym_desc_statement] = sym_desc_statement,
  [sym_title_statement] = sym_title_statement,
  [sym_arg_type] = sym_arg_type,
  [sym_arg_statement] = sym_arg_statement,
  [sym_opts_const_statement] = sym_opts_const_statement,
  [sym_opts_shell_statement] = sym_opts_shell_statement,
  [sym_opts_delegate_statement] = sym_opts_delegate_statement,
  [sym_opts_file_statement] = sym_opts_file_statement,
  [sym_opts_dir_statement] = sym_opts_dir_statement,
  [sym_opts_method_statement] = sym_opts_method_statement,
  [sym_flagarg_statement] = sym_flagarg_statement,
  [sym_flag_statement] = sym_flag_statement,
  [sym_flag_modifier] = sym_flag_modifier,
  [sym_block] = sym_block,
  [sym_flag_name_list] = sym_flag_name_list,
  [sym_arg_name_list] = sym_arg_name_list,
  [sym_sub_name_list] = sym_sub_name_list,
  [sym__strings] = sym__strings,
  [sym__strings_list] = sym__strings_list,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_sub_statement_repeat1] = aux_sym_sub_statement_repeat1,
  [aux_sym_arg_statement_repeat1] = aux_sym_arg_statement_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym__strings_list_repeat1] = aux_sym__strings_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defopts] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defargs] = {
    .visible = true,
    .named = false,
  },
  [sym_at_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_sub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_desc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_title] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_varargs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_opts] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shell] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delegate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_method] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_flagarg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_flag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reqd] = {
    .visible = true,
    .named = false,
  },
  [sym_arg_modifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__toplevel_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__common_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__block_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_include_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_defopts_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_defargs_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_sub_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_cmd_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_desc_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_title_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_type] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_opts_const_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_opts_shell_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_opts_delegate_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_opts_file_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_opts_dir_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_opts_method_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_flagarg_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_flag_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_flag_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_flag_name_list] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_name_list] = {
    .visible = true,
    .named = true,
  },
  [sym_sub_name_list] = {
    .visible = true,
    .named = true,
  },
  [sym__strings] = {
    .visible = false,
    .named = true,
  },
  [sym__strings_list] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sub_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arg_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__strings_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_at = 1,
  field_desc = 2,
  field_names = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_at] = "at",
  [field_desc] = "desc",
  [field_names] = "names",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 1},
  [8] = {.index = 9, .length = 1},
  [9] = {.index = 10, .length = 2},
  [10] = {.index = 12, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_names, 1},
  [1] =
    {field_at, 0},
  [2] =
    {field_at, 1, .inherited = true},
  [3] =
    {field_desc, 2},
    {field_names, 1},
  [5] =
    {field_at, 2, .inherited = true},
  [6] =
    {field_at, 0, .inherited = true},
    {field_at, 1, .inherited = true},
  [8] =
    {field_names, 2},
  [9] =
    {field_at, 3, .inherited = true},
  [10] =
    {field_desc, 3},
    {field_names, 2},
  [12] =
    {field_at, 4, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(68);
      if (lookahead == '#') ADVANCE(76);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == ')') ADVANCE(157);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'c') ADVANCE(41);
      if (lookahead == 'd') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'm') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(45);
      if (lookahead == 'r') ADVANCE(18);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == 't') ADVANCE(35);
      if (lookahead == 'v') ADVANCE(5);
      if (lookahead == '{') ADVANCE(106);
      if (lookahead == '}') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(76);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == 'a') ADVANCE(140);
      if (lookahead == 'd') ADVANCE(123);
      if (lookahead == 'f') ADVANCE(132);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead == 'o') ADVANCE(138);
      if (lookahead == 'r') ADVANCE(120);
      if (lookahead == 's') ADVANCE(153);
      if (lookahead == 't') ADVANCE(130);
      if (lookahead == 'v') ADVANCE(109);
      if (lookahead == '{') ADVANCE(106);
      if (lookahead == '}') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == ')') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(108);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 9:
      if (lookahead == 'b') ADVANCE(77);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'l') ADVANCE(23);
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 26:
      if (lookahead == 'g') ADVANCE(85);
      END_STATE();
    case 27:
      if (lookahead == 'g') ADVANCE(99);
      END_STATE();
    case 28:
      if (lookahead == 'g') ADVANCE(97);
      END_STATE();
    case 29:
      if (lookahead == 'g') ADVANCE(54);
      END_STATE();
    case 30:
      if (lookahead == 'g') ADVANCE(6);
      END_STATE();
    case 31:
      if (lookahead == 'g') ADVANCE(56);
      END_STATE();
    case 32:
      if (lookahead == 'h') ADVANCE(44);
      END_STATE();
    case 33:
      if (lookahead == 'h') ADVANCE(24);
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'l') ADVANCE(4);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 41:
      if (lookahead == 'm') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 45:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 46:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 47:
      if (lookahead == 'q') ADVANCE(13);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 64:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 65:
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 66:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 67:
      if (eof) ADVANCE(68);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(76);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == 'a') ADVANCE(140);
      if (lookahead == 'c') ADVANCE(134);
      if (lookahead == 'd') ADVANCE(119);
      if (lookahead == 'f') ADVANCE(132);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead == 'o') ADVANCE(136);
      if (lookahead == 'r') ADVANCE(120);
      if (lookahead == 's') ADVANCE(153);
      if (lookahead == 'v') ADVANCE(109);
      if (lookahead == '{') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(67)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_defopts);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_defopts);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_defargs);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_defargs);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_at_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_sub);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_cmd);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_desc);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_desc);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_arg);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_arg);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_varargs);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_varargs);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_opts);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_opts);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_shell);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_delegate);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_dir);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_flagarg);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_flagarg);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_flag);
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_flag);
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_reqd);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_reqd);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_arg_modifier);
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_arg_modifier);
      if (lookahead == 's') ADVANCE(90);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_arg_modifier);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(141);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(126);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == 'o') ADVANCE(137);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'b') ADVANCE(78);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'c') ADVANCE(82);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'c') ADVANCE(131);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'd') ADVANCE(80);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'd') ADVANCE(102);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'd') ADVANCE(121);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'f') ADVANCE(111);
      if (lookahead == 's') ADVANCE(114);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'g') ADVANCE(86);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'g') ADVANCE(100);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'g') ADVANCE(145);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'g') ADVANCE(98);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'g') ADVANCE(147);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'i') ADVANCE(152);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'l') ADVANCE(154);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'l') ADVANCE(110);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'l') ADVANCE(122);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'm') ADVANCE(116);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(115);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'p') ADVANCE(149);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'p') ADVANCE(151);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'p') ADVANCE(150);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'q') ADVANCE(117);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(112);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(127);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(129);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 's') ADVANCE(74);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 's') ADVANCE(72);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 's') ADVANCE(114);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(105);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(104);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(146);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(133);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'u') ADVANCE(113);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'u') ADVANCE(118);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 67},
  [8] = {.lex_state = 67},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 67},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 67},
  [39] = {.lex_state = 67},
  [40] = {.lex_state = 67},
  [41] = {.lex_state = 67},
  [42] = {.lex_state = 67},
  [43] = {.lex_state = 67},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 67},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 67},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 67},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 67},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 67},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_defopts] = ACTIONS(1),
    [anon_sym_defargs] = ACTIONS(1),
    [sym_at_identifier] = ACTIONS(1),
    [sym__comment] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
    [anon_sym_cmd] = ACTIONS(1),
    [anon_sym_desc] = ACTIONS(1),
    [anon_sym_title] = ACTIONS(1),
    [anon_sym_arg] = ACTIONS(1),
    [anon_sym_varargs] = ACTIONS(1),
    [anon_sym_opts] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_shell] = ACTIONS(1),
    [anon_sym_delegate] = ACTIONS(1),
    [anon_sym_file] = ACTIONS(1),
    [anon_sym_dir] = ACTIONS(1),
    [anon_sym_method] = ACTIONS(1),
    [anon_sym_flagarg] = ACTIONS(1),
    [anon_sym_flag] = ACTIONS(1),
    [anon_sym_reqd] = ACTIONS(1),
    [sym_arg_modifier] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(140),
    [sym__toplevel_statement] = STATE(6),
    [sym__common_statement] = STATE(6),
    [sym_include_statement] = STATE(6),
    [sym_defopts_statement] = STATE(6),
    [sym_defargs_statement] = STATE(6),
    [sym_sub_statement] = STATE(6),
    [sym_cmd_statement] = STATE(6),
    [sym_desc_statement] = STATE(6),
    [sym_arg_type] = STATE(8),
    [sym_arg_statement] = STATE(6),
    [sym_flagarg_statement] = STATE(6),
    [sym_flag_statement] = STATE(6),
    [sym_flag_modifier] = STATE(124),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_include] = ACTIONS(5),
    [anon_sym_defopts] = ACTIONS(7),
    [anon_sym_defargs] = ACTIONS(9),
    [sym__comment] = ACTIONS(11),
    [anon_sym_sub] = ACTIONS(13),
    [anon_sym_cmd] = ACTIONS(15),
    [anon_sym_desc] = ACTIONS(17),
    [anon_sym_arg] = ACTIONS(19),
    [anon_sym_varargs] = ACTIONS(19),
    [anon_sym_flagarg] = ACTIONS(21),
    [anon_sym_flag] = ACTIONS(23),
    [anon_sym_reqd] = ACTIONS(25),
    [sym_arg_modifier] = ACTIONS(27),
  },
  [2] = {
    [sym__common_statement] = STATE(3),
    [sym__block_statement] = STATE(3),
    [sym_include_statement] = STATE(3),
    [sym_sub_statement] = STATE(3),
    [sym_desc_statement] = STATE(3),
    [sym_title_statement] = STATE(3),
    [sym_arg_type] = STATE(9),
    [sym_arg_statement] = STATE(3),
    [sym_opts_const_statement] = STATE(3),
    [sym_opts_shell_statement] = STATE(3),
    [sym_opts_delegate_statement] = STATE(3),
    [sym_opts_file_statement] = STATE(3),
    [sym_opts_dir_statement] = STATE(3),
    [sym_opts_method_statement] = STATE(3),
    [sym_flagarg_statement] = STATE(3),
    [sym_flag_statement] = STATE(3),
    [sym_flag_modifier] = STATE(128),
    [aux_sym_block_repeat1] = STATE(3),
    [anon_sym_include] = ACTIONS(5),
    [sym__comment] = ACTIONS(29),
    [anon_sym_sub] = ACTIONS(31),
    [anon_sym_desc] = ACTIONS(17),
    [anon_sym_title] = ACTIONS(33),
    [anon_sym_arg] = ACTIONS(35),
    [anon_sym_varargs] = ACTIONS(35),
    [anon_sym_opts] = ACTIONS(37),
    [anon_sym_flagarg] = ACTIONS(39),
    [anon_sym_flag] = ACTIONS(41),
    [anon_sym_reqd] = ACTIONS(25),
    [sym_arg_modifier] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(45),
  },
  [3] = {
    [sym__common_statement] = STATE(3),
    [sym__block_statement] = STATE(3),
    [sym_include_statement] = STATE(3),
    [sym_sub_statement] = STATE(3),
    [sym_desc_statement] = STATE(3),
    [sym_title_statement] = STATE(3),
    [sym_arg_type] = STATE(9),
    [sym_arg_statement] = STATE(3),
    [sym_opts_const_statement] = STATE(3),
    [sym_opts_shell_statement] = STATE(3),
    [sym_opts_delegate_statement] = STATE(3),
    [sym_opts_file_statement] = STATE(3),
    [sym_opts_dir_statement] = STATE(3),
    [sym_opts_method_statement] = STATE(3),
    [sym_flagarg_statement] = STATE(3),
    [sym_flag_statement] = STATE(3),
    [sym_flag_modifier] = STATE(128),
    [aux_sym_block_repeat1] = STATE(3),
    [anon_sym_include] = ACTIONS(47),
    [sym__comment] = ACTIONS(50),
    [anon_sym_sub] = ACTIONS(53),
    [anon_sym_desc] = ACTIONS(56),
    [anon_sym_title] = ACTIONS(59),
    [anon_sym_arg] = ACTIONS(62),
    [anon_sym_varargs] = ACTIONS(62),
    [anon_sym_opts] = ACTIONS(65),
    [anon_sym_flagarg] = ACTIONS(68),
    [anon_sym_flag] = ACTIONS(71),
    [anon_sym_reqd] = ACTIONS(74),
    [sym_arg_modifier] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(80),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(5), 1,
      anon_sym_include,
    ACTIONS(17), 1,
      anon_sym_desc,
    ACTIONS(25), 1,
      anon_sym_reqd,
    ACTIONS(31), 1,
      anon_sym_sub,
    ACTIONS(33), 1,
      anon_sym_title,
    ACTIONS(37), 1,
      anon_sym_opts,
    ACTIONS(39), 1,
      anon_sym_flagarg,
    ACTIONS(41), 1,
      anon_sym_flag,
    ACTIONS(43), 1,
      sym_arg_modifier,
    ACTIONS(82), 1,
      sym__comment,
    STATE(9), 1,
      sym_arg_type,
    STATE(128), 1,
      sym_flag_modifier,
    ACTIONS(35), 2,
      anon_sym_arg,
      anon_sym_varargs,
    STATE(2), 16,
      sym__common_statement,
      sym__block_statement,
      sym_include_statement,
      sym_sub_statement,
      sym_desc_statement,
      sym_title_statement,
      sym_arg_statement,
      sym_opts_const_statement,
      sym_opts_shell_statement,
      sym_opts_delegate_statement,
      sym_opts_file_statement,
      sym_opts_dir_statement,
      sym_opts_method_statement,
      sym_flagarg_statement,
      sym_flag_statement,
      aux_sym_block_repeat1,
  [59] = 16,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    ACTIONS(86), 1,
      anon_sym_include,
    ACTIONS(89), 1,
      anon_sym_defopts,
    ACTIONS(92), 1,
      anon_sym_defargs,
    ACTIONS(95), 1,
      sym__comment,
    ACTIONS(98), 1,
      anon_sym_sub,
    ACTIONS(101), 1,
      anon_sym_cmd,
    ACTIONS(104), 1,
      anon_sym_desc,
    ACTIONS(110), 1,
      anon_sym_flagarg,
    ACTIONS(113), 1,
      anon_sym_flag,
    ACTIONS(116), 1,
      anon_sym_reqd,
    ACTIONS(119), 1,
      sym_arg_modifier,
    STATE(8), 1,
      sym_arg_type,
    STATE(124), 1,
      sym_flag_modifier,
    ACTIONS(107), 2,
      anon_sym_arg,
      anon_sym_varargs,
    STATE(5), 12,
      sym__toplevel_statement,
      sym__common_statement,
      sym_include_statement,
      sym_defopts_statement,
      sym_defargs_statement,
      sym_sub_statement,
      sym_cmd_statement,
      sym_desc_statement,
      sym_arg_statement,
      sym_flagarg_statement,
      sym_flag_statement,
      aux_sym_source_file_repeat1,
  [120] = 16,
    ACTIONS(5), 1,
      anon_sym_include,
    ACTIONS(7), 1,
      anon_sym_defopts,
    ACTIONS(9), 1,
      anon_sym_defargs,
    ACTIONS(13), 1,
      anon_sym_sub,
    ACTIONS(15), 1,
      anon_sym_cmd,
    ACTIONS(17), 1,
      anon_sym_desc,
    ACTIONS(21), 1,
      anon_sym_flagarg,
    ACTIONS(23), 1,
      anon_sym_flag,
    ACTIONS(25), 1,
      anon_sym_reqd,
    ACTIONS(27), 1,
      sym_arg_modifier,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    ACTIONS(124), 1,
      sym__comment,
    STATE(8), 1,
      sym_arg_type,
    STATE(124), 1,
      sym_flag_modifier,
    ACTIONS(19), 2,
      anon_sym_arg,
      anon_sym_varargs,
    STATE(5), 12,
      sym__toplevel_statement,
      sym__common_statement,
      sym_include_statement,
      sym_defopts_statement,
      sym_defargs_statement,
      sym_sub_statement,
      sym_cmd_statement,
      sym_desc_statement,
      sym_arg_statement,
      sym_flagarg_statement,
      sym_flag_statement,
      aux_sym_source_file_repeat1,
  [181] = 10,
    ACTIONS(130), 1,
      sym_at_identifier,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(134), 1,
      sym_string,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      aux_sym_arg_statement_repeat1,
    STATE(43), 1,
      sym_arg_name_list,
    STATE(59), 1,
      sym_block,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      sym__comment,
    STATE(74), 2,
      sym__strings,
      sym__strings_list,
    ACTIONS(128), 12,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      sym_arg_modifier,
  [225] = 10,
    ACTIONS(130), 1,
      sym_at_identifier,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(134), 1,
      sym_string,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      aux_sym_arg_statement_repeat1,
    STATE(40), 1,
      sym_arg_name_list,
    STATE(76), 1,
      sym_block,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      sym__comment,
    STATE(74), 2,
      sym__strings,
      sym__strings_list,
    ACTIONS(140), 12,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      sym_arg_modifier,
  [269] = 10,
    ACTIONS(130), 1,
      sym_at_identifier,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(142), 1,
      sym_string,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      aux_sym_arg_statement_repeat1,
    STATE(49), 1,
      sym_arg_name_list,
    STATE(76), 1,
      sym_block,
    ACTIONS(138), 2,
      sym__comment,
      anon_sym_RBRACE,
    STATE(91), 2,
      sym__strings,
      sym__strings_list,
    ACTIONS(140), 11,
      anon_sym_include,
      anon_sym_sub,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      sym_arg_modifier,
  [312] = 10,
    ACTIONS(130), 1,
      sym_at_identifier,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(142), 1,
      sym_string,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      aux_sym_arg_statement_repeat1,
    STATE(50), 1,
      sym_arg_name_list,
    STATE(59), 1,
      sym_block,
    ACTIONS(126), 2,
      sym__comment,
      anon_sym_RBRACE,
    STATE(91), 2,
      sym__strings,
      sym__strings_list,
    ACTIONS(128), 11,
      anon_sym_include,
      anon_sym_sub,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      sym_arg_modifier,
  [355] = 6,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(148), 1,
      sym_at_identifier,
    STATE(32), 1,
      aux_sym_sub_statement_repeat1,
    STATE(68), 1,
      sym_block,
    ACTIONS(150), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(146), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [389] = 6,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(154), 1,
      sym_at_identifier,
    STATE(34), 1,
      aux_sym_sub_statement_repeat1,
    STATE(53), 1,
      sym_block,
    ACTIONS(156), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(152), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [423] = 6,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(160), 1,
      sym_at_identifier,
    STATE(33), 1,
      aux_sym_sub_statement_repeat1,
    STATE(65), 1,
      sym_block,
    ACTIONS(162), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(158), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [457] = 6,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(154), 1,
      sym_at_identifier,
    STATE(34), 1,
      aux_sym_sub_statement_repeat1,
    STATE(66), 1,
      sym_block,
    ACTIONS(166), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(164), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [491] = 6,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(154), 1,
      sym_at_identifier,
    STATE(34), 1,
      aux_sym_sub_statement_repeat1,
    STATE(55), 1,
      sym_block,
    ACTIONS(170), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(168), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [525] = 6,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(154), 1,
      sym_at_identifier,
    STATE(34), 1,
      aux_sym_sub_statement_repeat1,
    STATE(60), 1,
      sym_block,
    ACTIONS(174), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(172), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [559] = 6,
    ACTIONS(130), 1,
      sym_at_identifier,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      aux_sym_arg_statement_repeat1,
    STATE(61), 1,
      sym_block,
    ACTIONS(178), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(176), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [593] = 6,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(154), 1,
      sym_at_identifier,
    STATE(34), 1,
      aux_sym_sub_statement_repeat1,
    STATE(64), 1,
      sym_block,
    ACTIONS(182), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(180), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [627] = 6,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      sym_at_identifier,
    STATE(15), 1,
      aux_sym_sub_statement_repeat1,
    STATE(67), 1,
      sym_block,
    ACTIONS(188), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(184), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [661] = 6,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(154), 1,
      sym_at_identifier,
    STATE(34), 1,
      aux_sym_sub_statement_repeat1,
    STATE(69), 1,
      sym_block,
    ACTIONS(192), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(190), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [695] = 6,
    ACTIONS(130), 1,
      sym_at_identifier,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      aux_sym_arg_statement_repeat1,
    STATE(75), 1,
      sym_block,
    ACTIONS(196), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(194), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [729] = 6,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(200), 1,
      sym_at_identifier,
    STATE(16), 1,
      aux_sym_sub_statement_repeat1,
    STATE(52), 1,
      sym_block,
    ACTIONS(202), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(198), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [763] = 6,
    ACTIONS(130), 1,
      sym_at_identifier,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      aux_sym_arg_statement_repeat1,
    STATE(78), 1,
      sym_block,
    ACTIONS(206), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(204), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [797] = 6,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(154), 1,
      sym_at_identifier,
    STATE(34), 1,
      aux_sym_sub_statement_repeat1,
    STATE(73), 1,
      sym_block,
    ACTIONS(210), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(208), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [831] = 6,
    ACTIONS(130), 1,
      sym_at_identifier,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      aux_sym_arg_statement_repeat1,
    STATE(77), 1,
      sym_block,
    ACTIONS(214), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(212), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [865] = 6,
    ACTIONS(130), 1,
      sym_at_identifier,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      aux_sym_arg_statement_repeat1,
    STATE(79), 1,
      sym_block,
    ACTIONS(206), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(204), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [899] = 6,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(154), 1,
      sym_at_identifier,
    STATE(34), 1,
      aux_sym_sub_statement_repeat1,
    STATE(70), 1,
      sym_block,
    ACTIONS(218), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(216), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [933] = 6,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(222), 1,
      sym_at_identifier,
    STATE(12), 1,
      aux_sym_sub_statement_repeat1,
    STATE(71), 1,
      sym_block,
    ACTIONS(224), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(220), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [967] = 6,
    ACTIONS(130), 1,
      sym_at_identifier,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      aux_sym_arg_statement_repeat1,
    STATE(80), 1,
      sym_block,
    ACTIONS(228), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(226), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [1001] = 6,
    ACTIONS(130), 1,
      sym_at_identifier,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      aux_sym_arg_statement_repeat1,
    STATE(88), 1,
      sym_block,
    ACTIONS(214), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(212), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [1035] = 6,
    ACTIONS(130), 1,
      sym_at_identifier,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      aux_sym_arg_statement_repeat1,
    STATE(62), 1,
      sym_block,
    ACTIONS(232), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(230), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [1069] = 6,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(154), 1,
      sym_at_identifier,
    STATE(34), 1,
      aux_sym_sub_statement_repeat1,
    STATE(81), 1,
      sym_block,
    ACTIONS(236), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(234), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [1103] = 6,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(154), 1,
      sym_at_identifier,
    STATE(34), 1,
      aux_sym_sub_statement_repeat1,
    STATE(82), 1,
      sym_block,
    ACTIONS(240), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(238), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [1137] = 4,
    ACTIONS(244), 1,
      sym_at_identifier,
    STATE(34), 1,
      aux_sym_sub_statement_repeat1,
    ACTIONS(247), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(242), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1166] = 4,
    ACTIONS(251), 1,
      sym_at_identifier,
    STATE(35), 1,
      aux_sym_arg_statement_repeat1,
    ACTIONS(254), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(249), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1195] = 7,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(260), 1,
      sym_at_identifier,
    ACTIONS(262), 1,
      sym_string,
    STATE(27), 1,
      aux_sym_sub_statement_repeat1,
    STATE(57), 1,
      sym_block,
    ACTIONS(256), 2,
      ts_builtin_sym_end,
      sym__comment,
    ACTIONS(258), 12,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      sym_arg_modifier,
  [1229] = 2,
    ACTIONS(266), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(264), 17,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym_at_identifier,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1253] = 7,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      sym_at_identifier,
    ACTIONS(274), 1,
      sym_string,
    STATE(20), 1,
      aux_sym_sub_statement_repeat1,
    STATE(89), 1,
      sym_block,
    ACTIONS(268), 2,
      ts_builtin_sym_end,
      sym__comment,
    ACTIONS(270), 12,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      sym_arg_modifier,
  [1287] = 7,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(280), 1,
      sym_at_identifier,
    ACTIONS(282), 1,
      sym_string,
    STATE(18), 1,
      aux_sym_sub_statement_repeat1,
    STATE(83), 1,
      sym_block,
    ACTIONS(276), 2,
      ts_builtin_sym_end,
      sym__comment,
    ACTIONS(278), 12,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      sym_arg_modifier,
  [1321] = 7,
    ACTIONS(130), 1,
      sym_at_identifier,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(284), 1,
      sym_string,
    STATE(30), 1,
      aux_sym_arg_statement_repeat1,
    STATE(59), 1,
      sym_block,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      sym__comment,
    ACTIONS(128), 12,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      sym_arg_modifier,
  [1355] = 7,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(290), 1,
      sym_at_identifier,
    ACTIONS(292), 1,
      sym_string,
    STATE(24), 1,
      aux_sym_sub_statement_repeat1,
    STATE(58), 1,
      sym_block,
    ACTIONS(286), 2,
      ts_builtin_sym_end,
      sym__comment,
    ACTIONS(288), 12,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      sym_arg_modifier,
  [1389] = 7,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(298), 1,
      sym_at_identifier,
    ACTIONS(300), 1,
      sym_string,
    STATE(14), 1,
      aux_sym_sub_statement_repeat1,
    STATE(56), 1,
      sym_block,
    ACTIONS(294), 2,
      ts_builtin_sym_end,
      sym__comment,
    ACTIONS(296), 12,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      sym_arg_modifier,
  [1423] = 7,
    ACTIONS(130), 1,
      sym_at_identifier,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(302), 1,
      sym_string,
    STATE(26), 1,
      aux_sym_arg_statement_repeat1,
    STATE(75), 1,
      sym_block,
    ACTIONS(194), 2,
      ts_builtin_sym_end,
      sym__comment,
    ACTIONS(196), 12,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      sym_arg_modifier,
  [1457] = 7,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(280), 1,
      sym_at_identifier,
    ACTIONS(282), 1,
      sym_string,
    STATE(18), 1,
      aux_sym_sub_statement_repeat1,
    STATE(83), 1,
      sym_block,
    ACTIONS(276), 2,
      sym__comment,
      anon_sym_RBRACE,
    ACTIONS(278), 11,
      anon_sym_include,
      anon_sym_sub,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      sym_arg_modifier,
  [1490] = 7,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(298), 1,
      sym_at_identifier,
    ACTIONS(300), 1,
      sym_string,
    STATE(14), 1,
      aux_sym_sub_statement_repeat1,
    STATE(56), 1,
      sym_block,
    ACTIONS(294), 2,
      sym__comment,
      anon_sym_RBRACE,
    ACTIONS(296), 11,
      anon_sym_include,
      anon_sym_sub,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      sym_arg_modifier,
  [1523] = 7,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(260), 1,
      sym_at_identifier,
    ACTIONS(262), 1,
      sym_string,
    STATE(27), 1,
      aux_sym_sub_statement_repeat1,
    STATE(57), 1,
      sym_block,
    ACTIONS(256), 2,
      sym__comment,
      anon_sym_RBRACE,
    ACTIONS(258), 11,
      anon_sym_include,
      anon_sym_sub,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      sym_arg_modifier,
  [1556] = 2,
    ACTIONS(304), 5,
      ts_builtin_sym_end,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
    ACTIONS(306), 13,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      sym_arg_modifier,
      sym_string,
  [1579] = 7,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(290), 1,
      sym_at_identifier,
    ACTIONS(292), 1,
      sym_string,
    STATE(24), 1,
      aux_sym_sub_statement_repeat1,
    STATE(58), 1,
      sym_block,
    ACTIONS(286), 2,
      sym__comment,
      anon_sym_RBRACE,
    ACTIONS(288), 11,
      anon_sym_include,
      anon_sym_sub,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      sym_arg_modifier,
  [1612] = 7,
    ACTIONS(130), 1,
      sym_at_identifier,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(284), 1,
      sym_string,
    STATE(30), 1,
      aux_sym_arg_statement_repeat1,
    STATE(59), 1,
      sym_block,
    ACTIONS(126), 2,
      sym__comment,
      anon_sym_RBRACE,
    ACTIONS(128), 11,
      anon_sym_include,
      anon_sym_sub,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      sym_arg_modifier,
  [1645] = 7,
    ACTIONS(130), 1,
      sym_at_identifier,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(302), 1,
      sym_string,
    STATE(26), 1,
      aux_sym_arg_statement_repeat1,
    STATE(75), 1,
      sym_block,
    ACTIONS(194), 2,
      sym__comment,
      anon_sym_RBRACE,
    ACTIONS(196), 11,
      anon_sym_include,
      anon_sym_sub,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      sym_arg_modifier,
  [1678] = 7,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      sym_at_identifier,
    ACTIONS(274), 1,
      sym_string,
    STATE(20), 1,
      aux_sym_sub_statement_repeat1,
    STATE(89), 1,
      sym_block,
    ACTIONS(268), 2,
      sym__comment,
      anon_sym_RBRACE,
    ACTIONS(270), 11,
      anon_sym_include,
      anon_sym_sub,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      sym_arg_modifier,
  [1711] = 2,
    ACTIONS(174), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(172), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [1733] = 2,
    ACTIONS(310), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(308), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [1755] = 2,
    ACTIONS(304), 5,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
    ACTIONS(306), 12,
      anon_sym_include,
      anon_sym_sub,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      sym_arg_modifier,
      sym_string,
  [1777] = 2,
    ACTIONS(314), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(312), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [1799] = 2,
    ACTIONS(166), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(164), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [1821] = 2,
    ACTIONS(218), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(216), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [1843] = 2,
    ACTIONS(210), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(208), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [1865] = 2,
    ACTIONS(196), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(194), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [1887] = 2,
    ACTIONS(318), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(316), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [1909] = 2,
    ACTIONS(322), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(320), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [1931] = 2,
    ACTIONS(326), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(324), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [1953] = 2,
    ACTIONS(328), 4,
      ts_builtin_sym_end,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
    ACTIONS(330), 13,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      sym_arg_modifier,
      sym_string,
  [1975] = 2,
    ACTIONS(334), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(332), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [1997] = 2,
    ACTIONS(240), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(238), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [2019] = 2,
    ACTIONS(338), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(336), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [2041] = 2,
    ACTIONS(170), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(168), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [2063] = 2,
    ACTIONS(236), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(234), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [2085] = 2,
    ACTIONS(342), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(340), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [2107] = 2,
    ACTIONS(346), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(344), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [2129] = 2,
    ACTIONS(156), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(152), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [2151] = 2,
    ACTIONS(350), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(348), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [2173] = 2,
    ACTIONS(354), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(352), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [2195] = 2,
    ACTIONS(356), 4,
      ts_builtin_sym_end,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
    ACTIONS(358), 13,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      sym_arg_modifier,
      sym_string,
  [2217] = 2,
    ACTIONS(228), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(226), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [2239] = 2,
    ACTIONS(128), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(126), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [2261] = 2,
    ACTIONS(362), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(360), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [2283] = 2,
    ACTIONS(366), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(364), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [2305] = 2,
    ACTIONS(366), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(364), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [2327] = 2,
    ACTIONS(370), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(368), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [2349] = 2,
    ACTIONS(374), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(372), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [2371] = 2,
    ACTIONS(378), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(376), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [2393] = 2,
    ACTIONS(182), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(180), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [2415] = 2,
    ACTIONS(380), 4,
      ts_builtin_sym_end,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
    ACTIONS(382), 13,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      sym_arg_modifier,
      sym_string,
  [2437] = 2,
    ACTIONS(386), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(384), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [2459] = 2,
    ACTIONS(388), 4,
      ts_builtin_sym_end,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
    ACTIONS(390), 13,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      sym_arg_modifier,
      sym_string,
  [2481] = 2,
    ACTIONS(394), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(392), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [2503] = 2,
    ACTIONS(362), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(360), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [2525] = 2,
    ACTIONS(192), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(190), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [2547] = 2,
    ACTIONS(328), 4,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(330), 12,
      anon_sym_include,
      anon_sym_sub,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      sym_arg_modifier,
      sym_string,
  [2568] = 2,
    ACTIONS(356), 4,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(358), 12,
      anon_sym_include,
      anon_sym_sub,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      sym_arg_modifier,
      sym_string,
  [2589] = 2,
    ACTIONS(388), 4,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(390), 12,
      anon_sym_include,
      anon_sym_sub,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      sym_arg_modifier,
      sym_string,
  [2610] = 2,
    ACTIONS(380), 4,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(382), 12,
      anon_sym_include,
      anon_sym_sub,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      sym_arg_modifier,
      sym_string,
  [2631] = 2,
    ACTIONS(398), 1,
      anon_sym_flag,
    ACTIONS(396), 13,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_flagarg,
      anon_sym_reqd,
      sym_arg_modifier,
  [2650] = 2,
    ACTIONS(402), 1,
      anon_sym_flag,
    ACTIONS(400), 13,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_flagarg,
      anon_sym_reqd,
      sym_arg_modifier,
  [2669] = 2,
    ACTIONS(406), 1,
      anon_sym_flag,
    ACTIONS(404), 13,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_flagarg,
      anon_sym_reqd,
      sym_arg_modifier,
  [2688] = 2,
    ACTIONS(330), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(328), 11,
      anon_sym_include,
      sym__comment,
      anon_sym_sub,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [2706] = 2,
    ACTIONS(410), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(408), 11,
      anon_sym_include,
      sym__comment,
      anon_sym_sub,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [2724] = 2,
    ACTIONS(414), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(412), 11,
      anon_sym_include,
      sym__comment,
      anon_sym_sub,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [2742] = 2,
    ACTIONS(418), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(416), 11,
      anon_sym_include,
      sym__comment,
      anon_sym_sub,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [2760] = 2,
    ACTIONS(422), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(420), 11,
      anon_sym_include,
      sym__comment,
      anon_sym_sub,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [2778] = 2,
    ACTIONS(426), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(424), 11,
      anon_sym_include,
      sym__comment,
      anon_sym_sub,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [2796] = 2,
    ACTIONS(430), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(428), 11,
      anon_sym_include,
      sym__comment,
      anon_sym_sub,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [2814] = 2,
    ACTIONS(434), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(432), 11,
      anon_sym_include,
      sym__comment,
      anon_sym_sub,
      anon_sym_desc,
      anon_sym_title,
      anon_sym_arg,
      anon_sym_varargs,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_RBRACE,
  [2832] = 6,
    ACTIONS(436), 1,
      anon_sym_const,
    ACTIONS(438), 1,
      anon_sym_shell,
    ACTIONS(440), 1,
      anon_sym_delegate,
    ACTIONS(442), 1,
      anon_sym_file,
    ACTIONS(444), 1,
      anon_sym_dir,
    ACTIONS(446), 1,
      anon_sym_method,
  [2851] = 4,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_string,
    STATE(51), 1,
      sym_flag_name_list,
    STATE(92), 2,
      sym__strings,
      sym__strings_list,
  [2865] = 4,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_string,
    STATE(44), 1,
      sym_flag_name_list,
    STATE(92), 2,
      sym__strings,
      sym__strings_list,
  [2879] = 4,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 1,
      sym_string,
    STATE(39), 1,
      sym_flag_name_list,
    STATE(86), 2,
      sym__strings,
      sym__strings_list,
  [2893] = 4,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_string,
    STATE(48), 1,
      sym_flag_name_list,
    STATE(92), 2,
      sym__strings,
      sym__strings_list,
  [2907] = 4,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_string,
    STATE(46), 1,
      sym_flag_name_list,
    STATE(92), 2,
      sym__strings,
      sym__strings_list,
  [2921] = 4,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 1,
      sym_string,
    STATE(38), 1,
      sym_flag_name_list,
    STATE(86), 2,
      sym__strings,
      sym__strings_list,
  [2935] = 4,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(452), 1,
      sym_string,
    STATE(45), 1,
      sym_sub_name_list,
    STATE(93), 2,
      sym__strings,
      sym__strings_list,
  [2949] = 4,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 1,
      sym_string,
    STATE(41), 1,
      sym_flag_name_list,
    STATE(86), 2,
      sym__strings,
      sym__strings_list,
  [2963] = 4,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(454), 1,
      sym_string,
    STATE(42), 1,
      sym_sub_name_list,
    STATE(84), 2,
      sym__strings,
      sym__strings_list,
  [2977] = 4,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 1,
      sym_string,
    STATE(36), 1,
      sym_flag_name_list,
    STATE(86), 2,
      sym__strings,
      sym__strings_list,
  [2991] = 3,
    ACTIONS(456), 1,
      sym_string,
    ACTIONS(458), 1,
      anon_sym_LPAREN,
    STATE(100), 2,
      sym__strings,
      sym__strings_list,
  [3002] = 3,
    ACTIONS(460), 1,
      sym_string,
    ACTIONS(462), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      aux_sym__strings_list_repeat1,
  [3012] = 3,
    ACTIONS(460), 1,
      sym_string,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      aux_sym__strings_list_repeat1,
  [3022] = 3,
    ACTIONS(466), 1,
      sym_string,
    ACTIONS(469), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      aux_sym__strings_list_repeat1,
  [3032] = 3,
    ACTIONS(460), 1,
      sym_string,
    ACTIONS(471), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      aux_sym__strings_list_repeat1,
  [3042] = 2,
    STATE(10), 1,
      sym_arg_type,
    ACTIONS(35), 2,
      anon_sym_arg,
      anon_sym_varargs,
  [3050] = 2,
    STATE(7), 1,
      sym_arg_type,
    ACTIONS(19), 2,
      anon_sym_arg,
      anon_sym_varargs,
  [3058] = 2,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    STATE(96), 1,
      sym_block,
  [3065] = 2,
    ACTIONS(473), 1,
      anon_sym_flagarg,
    ACTIONS(475), 1,
      anon_sym_flag,
  [3072] = 2,
    ACTIONS(477), 1,
      sym_string,
    STATE(120), 1,
      aux_sym__strings_list_repeat1,
  [3079] = 2,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    STATE(95), 1,
      sym_block,
  [3086] = 2,
    ACTIONS(479), 1,
      anon_sym_flagarg,
    ACTIONS(481), 1,
      anon_sym_flag,
  [3093] = 2,
    ACTIONS(483), 1,
      anon_sym_flagarg,
    ACTIONS(485), 1,
      anon_sym_flag,
  [3100] = 2,
    ACTIONS(487), 1,
      sym_string,
    STATE(118), 1,
      aux_sym__strings_list_repeat1,
  [3107] = 2,
    ACTIONS(489), 1,
      sym_string,
    STATE(117), 1,
      aux_sym__strings_list_repeat1,
  [3114] = 1,
    ACTIONS(491), 1,
      sym_string,
  [3118] = 1,
    ACTIONS(493), 1,
      sym_string,
  [3122] = 1,
    ACTIONS(495), 1,
      sym_string,
  [3126] = 1,
    ACTIONS(497), 1,
      sym_at_identifier,
  [3130] = 1,
    ACTIONS(499), 1,
      sym_string,
  [3134] = 1,
    ACTIONS(501), 1,
      sym_at_identifier,
  [3138] = 1,
    ACTIONS(503), 1,
      sym_at_identifier,
  [3142] = 1,
    ACTIONS(505), 1,
      sym_string,
  [3146] = 1,
    ACTIONS(507), 1,
      sym_string,
  [3150] = 1,
    ACTIONS(509), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 59,
  [SMALL_STATE(6)] = 120,
  [SMALL_STATE(7)] = 181,
  [SMALL_STATE(8)] = 225,
  [SMALL_STATE(9)] = 269,
  [SMALL_STATE(10)] = 312,
  [SMALL_STATE(11)] = 355,
  [SMALL_STATE(12)] = 389,
  [SMALL_STATE(13)] = 423,
  [SMALL_STATE(14)] = 457,
  [SMALL_STATE(15)] = 491,
  [SMALL_STATE(16)] = 525,
  [SMALL_STATE(17)] = 559,
  [SMALL_STATE(18)] = 593,
  [SMALL_STATE(19)] = 627,
  [SMALL_STATE(20)] = 661,
  [SMALL_STATE(21)] = 695,
  [SMALL_STATE(22)] = 729,
  [SMALL_STATE(23)] = 763,
  [SMALL_STATE(24)] = 797,
  [SMALL_STATE(25)] = 831,
  [SMALL_STATE(26)] = 865,
  [SMALL_STATE(27)] = 899,
  [SMALL_STATE(28)] = 933,
  [SMALL_STATE(29)] = 967,
  [SMALL_STATE(30)] = 1001,
  [SMALL_STATE(31)] = 1035,
  [SMALL_STATE(32)] = 1069,
  [SMALL_STATE(33)] = 1103,
  [SMALL_STATE(34)] = 1137,
  [SMALL_STATE(35)] = 1166,
  [SMALL_STATE(36)] = 1195,
  [SMALL_STATE(37)] = 1229,
  [SMALL_STATE(38)] = 1253,
  [SMALL_STATE(39)] = 1287,
  [SMALL_STATE(40)] = 1321,
  [SMALL_STATE(41)] = 1355,
  [SMALL_STATE(42)] = 1389,
  [SMALL_STATE(43)] = 1423,
  [SMALL_STATE(44)] = 1457,
  [SMALL_STATE(45)] = 1490,
  [SMALL_STATE(46)] = 1523,
  [SMALL_STATE(47)] = 1556,
  [SMALL_STATE(48)] = 1579,
  [SMALL_STATE(49)] = 1612,
  [SMALL_STATE(50)] = 1645,
  [SMALL_STATE(51)] = 1678,
  [SMALL_STATE(52)] = 1711,
  [SMALL_STATE(53)] = 1733,
  [SMALL_STATE(54)] = 1755,
  [SMALL_STATE(55)] = 1777,
  [SMALL_STATE(56)] = 1799,
  [SMALL_STATE(57)] = 1821,
  [SMALL_STATE(58)] = 1843,
  [SMALL_STATE(59)] = 1865,
  [SMALL_STATE(60)] = 1887,
  [SMALL_STATE(61)] = 1909,
  [SMALL_STATE(62)] = 1931,
  [SMALL_STATE(63)] = 1953,
  [SMALL_STATE(64)] = 1975,
  [SMALL_STATE(65)] = 1997,
  [SMALL_STATE(66)] = 2019,
  [SMALL_STATE(67)] = 2041,
  [SMALL_STATE(68)] = 2063,
  [SMALL_STATE(69)] = 2085,
  [SMALL_STATE(70)] = 2107,
  [SMALL_STATE(71)] = 2129,
  [SMALL_STATE(72)] = 2151,
  [SMALL_STATE(73)] = 2173,
  [SMALL_STATE(74)] = 2195,
  [SMALL_STATE(75)] = 2217,
  [SMALL_STATE(76)] = 2239,
  [SMALL_STATE(77)] = 2261,
  [SMALL_STATE(78)] = 2283,
  [SMALL_STATE(79)] = 2305,
  [SMALL_STATE(80)] = 2327,
  [SMALL_STATE(81)] = 2349,
  [SMALL_STATE(82)] = 2371,
  [SMALL_STATE(83)] = 2393,
  [SMALL_STATE(84)] = 2415,
  [SMALL_STATE(85)] = 2437,
  [SMALL_STATE(86)] = 2459,
  [SMALL_STATE(87)] = 2481,
  [SMALL_STATE(88)] = 2503,
  [SMALL_STATE(89)] = 2525,
  [SMALL_STATE(90)] = 2547,
  [SMALL_STATE(91)] = 2568,
  [SMALL_STATE(92)] = 2589,
  [SMALL_STATE(93)] = 2610,
  [SMALL_STATE(94)] = 2631,
  [SMALL_STATE(95)] = 2650,
  [SMALL_STATE(96)] = 2669,
  [SMALL_STATE(97)] = 2688,
  [SMALL_STATE(98)] = 2706,
  [SMALL_STATE(99)] = 2724,
  [SMALL_STATE(100)] = 2742,
  [SMALL_STATE(101)] = 2760,
  [SMALL_STATE(102)] = 2778,
  [SMALL_STATE(103)] = 2796,
  [SMALL_STATE(104)] = 2814,
  [SMALL_STATE(105)] = 2832,
  [SMALL_STATE(106)] = 2851,
  [SMALL_STATE(107)] = 2865,
  [SMALL_STATE(108)] = 2879,
  [SMALL_STATE(109)] = 2893,
  [SMALL_STATE(110)] = 2907,
  [SMALL_STATE(111)] = 2921,
  [SMALL_STATE(112)] = 2935,
  [SMALL_STATE(113)] = 2949,
  [SMALL_STATE(114)] = 2963,
  [SMALL_STATE(115)] = 2977,
  [SMALL_STATE(116)] = 2991,
  [SMALL_STATE(117)] = 3002,
  [SMALL_STATE(118)] = 3012,
  [SMALL_STATE(119)] = 3022,
  [SMALL_STATE(120)] = 3032,
  [SMALL_STATE(121)] = 3042,
  [SMALL_STATE(122)] = 3050,
  [SMALL_STATE(123)] = 3058,
  [SMALL_STATE(124)] = 3065,
  [SMALL_STATE(125)] = 3072,
  [SMALL_STATE(126)] = 3079,
  [SMALL_STATE(127)] = 3086,
  [SMALL_STATE(128)] = 3093,
  [SMALL_STATE(129)] = 3100,
  [SMALL_STATE(130)] = 3107,
  [SMALL_STATE(131)] = 3114,
  [SMALL_STATE(132)] = 3118,
  [SMALL_STATE(133)] = 3122,
  [SMALL_STATE(134)] = 3126,
  [SMALL_STATE(135)] = 3130,
  [SMALL_STATE(136)] = 3134,
  [SMALL_STATE(137)] = 3138,
  [SMALL_STATE(138)] = 3142,
  [SMALL_STATE(139)] = 3146,
  [SMALL_STATE(140)] = 3150,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(134),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(3),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(112),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(135),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(138),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(54),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(105),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(110),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(109),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(127),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(121),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(134),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(137),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(136),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(114),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(131),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(135),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(115),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(113),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(127),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(122),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 3, .production_id = 4),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 3, .production_id = 4),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 4, .production_id = 4),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 4, .production_id = 4),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_statement, 3, .production_id = 4),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_statement, 3, .production_id = 4),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_statement, 3, .production_id = 1),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_statement, 3, .production_id = 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 5, .production_id = 9),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 5, .production_id = 9),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 5, .production_id = 9),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 5, .production_id = 9),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 5, .production_id = 10),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 5, .production_id = 10),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 4, .production_id = 7),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 4, .production_id = 7),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 4, .production_id = 9),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 4, .production_id = 9),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 4, .production_id = 7),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 4, .production_id = 7),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 3),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 4, .production_id = 9),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 4, .production_id = 9),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 4, .production_id = 8),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 4, .production_id = 8),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 3, .production_id = 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 3, .production_id = 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 3, .production_id = 5),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 3, .production_id = 5),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 3, .production_id = 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 3, .production_id = 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 3, .production_id = 4),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 3, .production_id = 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 4),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 2, .production_id = 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 2, .production_id = 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 4, .production_id = 4),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 4, .production_id = 4),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_statement, 4, .production_id = 4),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_statement, 4, .production_id = 4),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sub_statement_repeat1, 2),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sub_statement_repeat1, 2), SHIFT_REPEAT(34),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sub_statement_repeat1, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_statement_repeat1, 2, .production_id = 6),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_statement_repeat1, 2, .production_id = 6), SHIFT_REPEAT(37),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arg_statement_repeat1, 2, .production_id = 6),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 2, .production_id = 1),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 2, .production_id = 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_statement_repeat1, 1, .production_id = 2),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arg_statement_repeat1, 1, .production_id = 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 3, .production_id = 7),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 3, .production_id = 7),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 3, .production_id = 7),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 3, .production_id = 7),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 2, .production_id = 1),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 2, .production_id = 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_statement, 2, .production_id = 1),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_statement, 2, .production_id = 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_type, 1),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_type, 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 5, .production_id = 4),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 5, .production_id = 4),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 6, .production_id = 9),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 6, .production_id = 9),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 6, .production_id = 9),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 6, .production_id = 9),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 6, .production_id = 10),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 6, .production_id = 10),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 3, .production_id = 3),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 3, .production_id = 3),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__strings_list, 3),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__strings_list, 3),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 5, .production_id = 7),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 5, .production_id = 7),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_statement, 4, .production_id = 1),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_statement, 4, .production_id = 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 5, .production_id = 7),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 5, .production_id = 7),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 4, .production_id = 1),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 4, .production_id = 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 2),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 4, .production_id = 1),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 4, .production_id = 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_name_list, 1),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_name_list, 1),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 4, .production_id = 5),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 4, .production_id = 5),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 5, .production_id = 8),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 5, .production_id = 8),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 5),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 5),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 5, .production_id = 4),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 5, .production_id = 4),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_statement, 5, .production_id = 4),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_statement, 5, .production_id = 4),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_name_list, 1),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_name_list, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_name_list, 1),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_name_list, 1),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_desc_statement, 2),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_desc_statement, 2),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_statement, 2),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_statement, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defopts_statement, 3),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defopts_statement, 3),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defargs_statement, 3),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defargs_statement, 3),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opts_dir_statement, 2),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opts_dir_statement, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opts_file_statement, 2),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opts_file_statement, 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opts_const_statement, 3),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opts_const_statement, 3),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opts_shell_statement, 3),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opts_shell_statement, 3),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opts_delegate_statement, 3),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opts_delegate_statement, 3),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opts_method_statement, 3),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opts_method_statement, 3),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_statement, 2),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_statement, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__strings_list_repeat1, 2), SHIFT_REPEAT(119),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__strings_list_repeat1, 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_modifier, 1),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_modifier, 1),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [509] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_tabry(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
