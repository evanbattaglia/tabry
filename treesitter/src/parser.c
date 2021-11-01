#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 137
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
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
  anon_sym_file = 15,
  anon_sym_dir = 16,
  anon_sym_flagarg = 17,
  anon_sym_flag = 18,
  anon_sym_reqd = 19,
  anon_sym_hidden = 20,
  sym_arg_modifier = 21,
  anon_sym_LBRACE = 22,
  anon_sym_RBRACE = 23,
  sym_string = 24,
  anon_sym_LPAREN = 25,
  anon_sym_RPAREN = 26,
  sym_source_file = 27,
  sym__toplevel_statement = 28,
  sym__common_statement = 29,
  sym__block_statement = 30,
  sym_include_statement = 31,
  sym_defopts_statement = 32,
  sym_defargs_statement = 33,
  sym_sub_statement = 34,
  sym_cmd_statement = 35,
  sym_desc_statement = 36,
  sym_title_statement = 37,
  sym_arg_type = 38,
  sym_arg_statement = 39,
  sym_opts_const_statement = 40,
  sym_opts_shell_statement = 41,
  sym_opts_file_statement = 42,
  sym_opts_dir_statement = 43,
  sym_flagarg_statement = 44,
  sym_flag_statement = 45,
  sym_flag_modifier = 46,
  sym_block = 47,
  sym_flag_name_list = 48,
  sym_arg_name_list = 49,
  sym_sub_name_list = 50,
  sym__strings = 51,
  sym__strings_list = 52,
  aux_sym_source_file_repeat1 = 53,
  aux_sym_sub_statement_repeat1 = 54,
  aux_sym_arg_statement_repeat1 = 55,
  aux_sym_block_repeat1 = 56,
  aux_sym__strings_list_repeat1 = 57,
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
  [anon_sym_file] = "file",
  [anon_sym_dir] = "dir",
  [anon_sym_flagarg] = "flagarg",
  [anon_sym_flag] = "flag",
  [anon_sym_reqd] = "reqd",
  [anon_sym_hidden] = "hidden",
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
  [sym_opts_file_statement] = "opts_file_statement",
  [sym_opts_dir_statement] = "opts_dir_statement",
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
  [anon_sym_file] = anon_sym_file,
  [anon_sym_dir] = anon_sym_dir,
  [anon_sym_flagarg] = anon_sym_flagarg,
  [anon_sym_flag] = anon_sym_flag,
  [anon_sym_reqd] = anon_sym_reqd,
  [anon_sym_hidden] = anon_sym_hidden,
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
  [sym_opts_file_statement] = sym_opts_file_statement,
  [sym_opts_dir_statement] = sym_opts_dir_statement,
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
  [anon_sym_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dir] = {
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
  [anon_sym_hidden] = {
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
  [sym_opts_file_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_opts_dir_statement] = {
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
      if (eof) ADVANCE(63);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == ')') ADVANCE(157);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'c') ADVANCE(38);
      if (lookahead == 'd') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(30);
      if (lookahead == 'h') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(17);
      if (lookahead == 's') ADVANCE(29);
      if (lookahead == 't') ADVANCE(32);
      if (lookahead == 'v') ADVANCE(5);
      if (lookahead == '{') ADVANCE(101);
      if (lookahead == '}') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == 'a') ADVANCE(140);
      if (lookahead == 'd') ADVANCE(121);
      if (lookahead == 'f') ADVANCE(131);
      if (lookahead == 'h') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 'o') ADVANCE(138);
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead == 's') ADVANCE(153);
      if (lookahead == 't') ADVANCE(129);
      if (lookahead == 'v') ADVANCE(104);
      if (lookahead == '{') ADVANCE(101);
      if (lookahead == '}') ADVANCE(102);
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
      if (lookahead == '"') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 8:
      if (lookahead == 'b') ADVANCE(72);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(74);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 24:
      if (lookahead == 'g') ADVANCE(80);
      END_STATE();
    case 25:
      if (lookahead == 'g') ADVANCE(92);
      END_STATE();
    case 26:
      if (lookahead == 'g') ADVANCE(90);
      END_STATE();
    case 27:
      if (lookahead == 'g') ADVANCE(51);
      END_STATE();
    case 28:
      if (lookahead == 'g') ADVANCE(53);
      END_STATE();
    case 29:
      if (lookahead == 'h') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'l') ADVANCE(4);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 42:
      if (lookahead == 'p') ADVANCE(55);
      END_STATE();
    case 43:
      if (lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 44:
      if (lookahead == 'q') ADVANCE(12);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 60:
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 61:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 62:
      if (eof) ADVANCE(63);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == 'a') ADVANCE(140);
      if (lookahead == 'c') ADVANCE(133);
      if (lookahead == 'd') ADVANCE(116);
      if (lookahead == 'f') ADVANCE(131);
      if (lookahead == 'h') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 'o') ADVANCE(136);
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead == 's') ADVANCE(153);
      if (lookahead == 'v') ADVANCE(104);
      if (lookahead == '{') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(62)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_defopts);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_defopts);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_defargs);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_defargs);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_at_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_sub);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_cmd);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_desc);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_desc);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_arg);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_arg);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_varargs);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_varargs);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_opts);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_opts);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_shell);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_dir);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_flagarg);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_flagarg);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_flag);
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_flag);
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_reqd);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_reqd);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_hidden);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_hidden);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_arg_modifier);
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_arg_modifier);
      if (lookahead == 's') ADVANCE(85);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_arg_modifier);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(141);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 106:
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
    case 107:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'b') ADVANCE(73);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'c') ADVANCE(77);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'c') ADVANCE(130);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'd') ADVANCE(75);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'd') ADVANCE(95);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'd') ADVANCE(120);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'd') ADVANCE(113);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'd') ADVANCE(118);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'f') ADVANCE(106);
      if (lookahead == 's') ADVANCE(109);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'g') ADVANCE(81);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'g') ADVANCE(93);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'g') ADVANCE(145);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'g') ADVANCE(91);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'g') ADVANCE(147);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'i') ADVANCE(114);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'i') ADVANCE(152);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'l') ADVANCE(154);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'l') ADVANCE(105);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'l') ADVANCE(119);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'm') ADVANCE(111);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(110);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(97);
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
      if (lookahead == 'q') ADVANCE(112);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(123);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(107);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(127);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(126);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 's') ADVANCE(69);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 's') ADVANCE(67);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 's') ADVANCE(109);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(100);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(99);
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
      if (lookahead == 't') ADVANCE(132);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'u') ADVANCE(108);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'u') ADVANCE(115);
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
  [7] = {.lex_state = 62},
  [8] = {.lex_state = 62},
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
  [36] = {.lex_state = 62},
  [37] = {.lex_state = 62},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 62},
  [40] = {.lex_state = 62},
  [41] = {.lex_state = 62},
  [42] = {.lex_state = 62},
  [43] = {.lex_state = 62},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 62},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 62},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 62},
  [63] = {.lex_state = 0},
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
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 62},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 62},
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
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 0},
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
    [anon_sym_file] = ACTIONS(1),
    [anon_sym_dir] = ACTIONS(1),
    [anon_sym_flagarg] = ACTIONS(1),
    [anon_sym_flag] = ACTIONS(1),
    [anon_sym_reqd] = ACTIONS(1),
    [anon_sym_hidden] = ACTIONS(1),
    [sym_arg_modifier] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(130),
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
    [sym_flag_modifier] = STATE(123),
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
    [anon_sym_hidden] = ACTIONS(25),
    [sym_arg_modifier] = ACTIONS(27),
  },
  [2] = {
    [sym__common_statement] = STATE(2),
    [sym__block_statement] = STATE(2),
    [sym_include_statement] = STATE(2),
    [sym_sub_statement] = STATE(2),
    [sym_desc_statement] = STATE(2),
    [sym_title_statement] = STATE(2),
    [sym_arg_type] = STATE(9),
    [sym_arg_statement] = STATE(2),
    [sym_opts_const_statement] = STATE(2),
    [sym_opts_shell_statement] = STATE(2),
    [sym_opts_file_statement] = STATE(2),
    [sym_opts_dir_statement] = STATE(2),
    [sym_flagarg_statement] = STATE(2),
    [sym_flag_statement] = STATE(2),
    [sym_flag_modifier] = STATE(126),
    [aux_sym_block_repeat1] = STATE(2),
    [anon_sym_include] = ACTIONS(29),
    [sym__comment] = ACTIONS(32),
    [anon_sym_sub] = ACTIONS(35),
    [anon_sym_desc] = ACTIONS(38),
    [anon_sym_title] = ACTIONS(41),
    [anon_sym_arg] = ACTIONS(44),
    [anon_sym_varargs] = ACTIONS(44),
    [anon_sym_opts] = ACTIONS(47),
    [anon_sym_flagarg] = ACTIONS(50),
    [anon_sym_flag] = ACTIONS(53),
    [anon_sym_reqd] = ACTIONS(56),
    [anon_sym_hidden] = ACTIONS(56),
    [sym_arg_modifier] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(62),
  },
  [3] = {
    [sym__common_statement] = STATE(2),
    [sym__block_statement] = STATE(2),
    [sym_include_statement] = STATE(2),
    [sym_sub_statement] = STATE(2),
    [sym_desc_statement] = STATE(2),
    [sym_title_statement] = STATE(2),
    [sym_arg_type] = STATE(9),
    [sym_arg_statement] = STATE(2),
    [sym_opts_const_statement] = STATE(2),
    [sym_opts_shell_statement] = STATE(2),
    [sym_opts_file_statement] = STATE(2),
    [sym_opts_dir_statement] = STATE(2),
    [sym_flagarg_statement] = STATE(2),
    [sym_flag_statement] = STATE(2),
    [sym_flag_modifier] = STATE(126),
    [aux_sym_block_repeat1] = STATE(2),
    [anon_sym_include] = ACTIONS(5),
    [sym__comment] = ACTIONS(64),
    [anon_sym_sub] = ACTIONS(66),
    [anon_sym_desc] = ACTIONS(17),
    [anon_sym_title] = ACTIONS(68),
    [anon_sym_arg] = ACTIONS(70),
    [anon_sym_varargs] = ACTIONS(70),
    [anon_sym_opts] = ACTIONS(72),
    [anon_sym_flagarg] = ACTIONS(74),
    [anon_sym_flag] = ACTIONS(76),
    [anon_sym_reqd] = ACTIONS(25),
    [anon_sym_hidden] = ACTIONS(25),
    [sym_arg_modifier] = ACTIONS(78),
    [anon_sym_RBRACE] = ACTIONS(80),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 1,
      anon_sym_include,
    ACTIONS(87), 1,
      anon_sym_defopts,
    ACTIONS(90), 1,
      anon_sym_defargs,
    ACTIONS(93), 1,
      sym__comment,
    ACTIONS(96), 1,
      anon_sym_sub,
    ACTIONS(99), 1,
      anon_sym_cmd,
    ACTIONS(102), 1,
      anon_sym_desc,
    ACTIONS(108), 1,
      anon_sym_flagarg,
    ACTIONS(111), 1,
      anon_sym_flag,
    ACTIONS(117), 1,
      sym_arg_modifier,
    STATE(8), 1,
      sym_arg_type,
    STATE(123), 1,
      sym_flag_modifier,
    ACTIONS(105), 2,
      anon_sym_arg,
      anon_sym_varargs,
    ACTIONS(114), 2,
      anon_sym_reqd,
      anon_sym_hidden,
    STATE(4), 12,
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
  [62] = 14,
    ACTIONS(5), 1,
      anon_sym_include,
    ACTIONS(17), 1,
      anon_sym_desc,
    ACTIONS(66), 1,
      anon_sym_sub,
    ACTIONS(68), 1,
      anon_sym_title,
    ACTIONS(72), 1,
      anon_sym_opts,
    ACTIONS(74), 1,
      anon_sym_flagarg,
    ACTIONS(76), 1,
      anon_sym_flag,
    ACTIONS(78), 1,
      sym_arg_modifier,
    ACTIONS(120), 1,
      sym__comment,
    STATE(9), 1,
      sym_arg_type,
    STATE(126), 1,
      sym_flag_modifier,
    ACTIONS(25), 2,
      anon_sym_reqd,
      anon_sym_hidden,
    ACTIONS(70), 2,
      anon_sym_arg,
      anon_sym_varargs,
    STATE(3), 14,
      sym__common_statement,
      sym__block_statement,
      sym_include_statement,
      sym_sub_statement,
      sym_desc_statement,
      sym_title_statement,
      sym_arg_statement,
      sym_opts_const_statement,
      sym_opts_shell_statement,
      sym_opts_file_statement,
      sym_opts_dir_statement,
      sym_flagarg_statement,
      sym_flag_statement,
      aux_sym_block_repeat1,
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
    ACTIONS(27), 1,
      sym_arg_modifier,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    ACTIONS(124), 1,
      sym__comment,
    STATE(8), 1,
      sym_arg_type,
    STATE(123), 1,
      sym_flag_modifier,
    ACTIONS(19), 2,
      anon_sym_arg,
      anon_sym_varargs,
    ACTIONS(25), 2,
      anon_sym_reqd,
      anon_sym_hidden,
    STATE(4), 12,
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
  [182] = 10,
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
    STATE(58), 1,
      sym_block,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      sym__comment,
    STATE(52), 2,
      sym__strings,
      sym__strings_list,
    ACTIONS(128), 13,
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
      anon_sym_hidden,
      sym_arg_modifier,
  [227] = 10,
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
    STATE(36), 1,
      sym_arg_name_list,
    STATE(74), 1,
      sym_block,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      sym__comment,
    STATE(52), 2,
      sym__strings,
      sym__strings_list,
    ACTIONS(140), 13,
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
      anon_sym_hidden,
      sym_arg_modifier,
  [272] = 10,
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
    STATE(74), 1,
      sym_block,
    ACTIONS(138), 2,
      sym__comment,
      anon_sym_RBRACE,
    STATE(91), 2,
      sym__strings,
      sym__strings_list,
    ACTIONS(140), 12,
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
      anon_sym_hidden,
      sym_arg_modifier,
  [316] = 10,
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
    STATE(58), 1,
      sym_block,
    ACTIONS(126), 2,
      sym__comment,
      anon_sym_RBRACE,
    STATE(91), 2,
      sym__strings,
      sym__strings_list,
    ACTIONS(128), 12,
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
      anon_sym_hidden,
      sym_arg_modifier,
  [360] = 6,
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
    ACTIONS(146), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [395] = 6,
    ACTIONS(130), 1,
      sym_at_identifier,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      aux_sym_arg_statement_repeat1,
    STATE(78), 1,
      sym_block,
    ACTIONS(154), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(152), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [430] = 6,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(158), 1,
      sym_at_identifier,
    STATE(35), 1,
      aux_sym_sub_statement_repeat1,
    STATE(66), 1,
      sym_block,
    ACTIONS(160), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(156), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [465] = 6,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(158), 1,
      sym_at_identifier,
    STATE(35), 1,
      aux_sym_sub_statement_repeat1,
    STATE(59), 1,
      sym_block,
    ACTIONS(164), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(162), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [500] = 6,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(158), 1,
      sym_at_identifier,
    STATE(35), 1,
      aux_sym_sub_statement_repeat1,
    STATE(60), 1,
      sym_block,
    ACTIONS(168), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(166), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [535] = 6,
    ACTIONS(130), 1,
      sym_at_identifier,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      aux_sym_arg_statement_repeat1,
    STATE(63), 1,
      sym_block,
    ACTIONS(172), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(170), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [570] = 6,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(158), 1,
      sym_at_identifier,
    STATE(35), 1,
      aux_sym_sub_statement_repeat1,
    STATE(65), 1,
      sym_block,
    ACTIONS(176), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(174), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [605] = 6,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(180), 1,
      sym_at_identifier,
    STATE(14), 1,
      aux_sym_sub_statement_repeat1,
    STATE(67), 1,
      sym_block,
    ACTIONS(182), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(178), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [640] = 6,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(158), 1,
      sym_at_identifier,
    STATE(35), 1,
      aux_sym_sub_statement_repeat1,
    STATE(69), 1,
      sym_block,
    ACTIONS(186), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(184), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [675] = 6,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(190), 1,
      sym_at_identifier,
    STATE(15), 1,
      aux_sym_sub_statement_repeat1,
    STATE(72), 1,
      sym_block,
    ACTIONS(192), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(188), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [710] = 6,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(196), 1,
      sym_at_identifier,
    STATE(22), 1,
      aux_sym_sub_statement_repeat1,
    STATE(64), 1,
      sym_block,
    ACTIONS(198), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(194), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [745] = 6,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(158), 1,
      sym_at_identifier,
    STATE(35), 1,
      aux_sym_sub_statement_repeat1,
    STATE(85), 1,
      sym_block,
    ACTIONS(202), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(200), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [780] = 6,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(158), 1,
      sym_at_identifier,
    STATE(35), 1,
      aux_sym_sub_statement_repeat1,
    STATE(73), 1,
      sym_block,
    ACTIONS(206), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(204), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [815] = 6,
    ACTIONS(130), 1,
      sym_at_identifier,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      aux_sym_arg_statement_repeat1,
    STATE(79), 1,
      sym_block,
    ACTIONS(154), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(152), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [850] = 6,
    ACTIONS(130), 1,
      sym_at_identifier,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      aux_sym_arg_statement_repeat1,
    STATE(77), 1,
      sym_block,
    ACTIONS(210), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(208), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [885] = 6,
    ACTIONS(130), 1,
      sym_at_identifier,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      aux_sym_arg_statement_repeat1,
    STATE(81), 1,
      sym_block,
    ACTIONS(214), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(212), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [920] = 6,
    ACTIONS(130), 1,
      sym_at_identifier,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      aux_sym_arg_statement_repeat1,
    STATE(75), 1,
      sym_block,
    ACTIONS(218), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(216), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [955] = 6,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(158), 1,
      sym_at_identifier,
    STATE(35), 1,
      aux_sym_sub_statement_repeat1,
    STATE(70), 1,
      sym_block,
    ACTIONS(222), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(220), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [990] = 6,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(158), 1,
      sym_at_identifier,
    STATE(35), 1,
      aux_sym_sub_statement_repeat1,
    STATE(53), 1,
      sym_block,
    ACTIONS(226), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(224), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [1025] = 6,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(230), 1,
      sym_at_identifier,
    STATE(29), 1,
      aux_sym_sub_statement_repeat1,
    STATE(71), 1,
      sym_block,
    ACTIONS(232), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(228), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [1060] = 6,
    ACTIONS(130), 1,
      sym_at_identifier,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      aux_sym_arg_statement_repeat1,
    STATE(61), 1,
      sym_block,
    ACTIONS(236), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(234), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [1095] = 6,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(158), 1,
      sym_at_identifier,
    STATE(35), 1,
      aux_sym_sub_statement_repeat1,
    STATE(82), 1,
      sym_block,
    ACTIONS(240), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(238), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [1130] = 6,
    ACTIONS(130), 1,
      sym_at_identifier,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      aux_sym_arg_statement_repeat1,
    STATE(86), 1,
      sym_block,
    ACTIONS(210), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(208), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [1165] = 4,
    ACTIONS(244), 1,
      sym_at_identifier,
    STATE(34), 1,
      aux_sym_arg_statement_repeat1,
    ACTIONS(247), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(242), 17,
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
      anon_sym_hidden,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1195] = 4,
    ACTIONS(251), 1,
      sym_at_identifier,
    STATE(35), 1,
      aux_sym_sub_statement_repeat1,
    ACTIONS(254), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(249), 17,
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
      anon_sym_hidden,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1225] = 7,
    ACTIONS(130), 1,
      sym_at_identifier,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      sym_string,
    STATE(33), 1,
      aux_sym_arg_statement_repeat1,
    STATE(58), 1,
      sym_block,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      sym__comment,
    ACTIONS(128), 13,
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
      anon_sym_hidden,
      sym_arg_modifier,
  [1260] = 7,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      sym_at_identifier,
    ACTIONS(264), 1,
      sym_string,
    STATE(23), 1,
      aux_sym_sub_statement_repeat1,
    STATE(57), 1,
      sym_block,
    ACTIONS(258), 2,
      ts_builtin_sym_end,
      sym__comment,
    ACTIONS(260), 13,
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
      anon_sym_hidden,
      sym_arg_modifier,
  [1295] = 2,
    ACTIONS(268), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(266), 18,
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
      anon_sym_hidden,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1320] = 7,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(274), 1,
      sym_at_identifier,
    ACTIONS(276), 1,
      sym_string,
    STATE(19), 1,
      aux_sym_sub_statement_repeat1,
    STATE(88), 1,
      sym_block,
    ACTIONS(270), 2,
      ts_builtin_sym_end,
      sym__comment,
    ACTIONS(272), 13,
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
      anon_sym_hidden,
      sym_arg_modifier,
  [1355] = 7,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(282), 1,
      sym_at_identifier,
    ACTIONS(284), 1,
      sym_string,
    STATE(28), 1,
      aux_sym_sub_statement_repeat1,
    STATE(56), 1,
      sym_block,
    ACTIONS(278), 2,
      ts_builtin_sym_end,
      sym__comment,
    ACTIONS(280), 13,
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
      anon_sym_hidden,
      sym_arg_modifier,
  [1390] = 7,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(290), 1,
      sym_at_identifier,
    ACTIONS(292), 1,
      sym_string,
    STATE(13), 1,
      aux_sym_sub_statement_repeat1,
    STATE(55), 1,
      sym_block,
    ACTIONS(286), 2,
      ts_builtin_sym_end,
      sym__comment,
    ACTIONS(288), 13,
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
      anon_sym_hidden,
      sym_arg_modifier,
  [1425] = 7,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(298), 1,
      sym_at_identifier,
    ACTIONS(300), 1,
      sym_string,
    STATE(17), 1,
      aux_sym_sub_statement_repeat1,
    STATE(89), 1,
      sym_block,
    ACTIONS(294), 2,
      ts_builtin_sym_end,
      sym__comment,
    ACTIONS(296), 13,
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
      anon_sym_hidden,
      sym_arg_modifier,
  [1460] = 7,
    ACTIONS(130), 1,
      sym_at_identifier,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(302), 1,
      sym_string,
    STATE(24), 1,
      aux_sym_arg_statement_repeat1,
    STATE(75), 1,
      sym_block,
    ACTIONS(216), 2,
      ts_builtin_sym_end,
      sym__comment,
    ACTIONS(218), 13,
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
      anon_sym_hidden,
      sym_arg_modifier,
  [1495] = 7,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(298), 1,
      sym_at_identifier,
    ACTIONS(300), 1,
      sym_string,
    STATE(17), 1,
      aux_sym_sub_statement_repeat1,
    STATE(89), 1,
      sym_block,
    ACTIONS(294), 2,
      sym__comment,
      anon_sym_RBRACE,
    ACTIONS(296), 12,
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
      anon_sym_hidden,
      sym_arg_modifier,
  [1529] = 7,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(290), 1,
      sym_at_identifier,
    ACTIONS(292), 1,
      sym_string,
    STATE(13), 1,
      aux_sym_sub_statement_repeat1,
    STATE(55), 1,
      sym_block,
    ACTIONS(286), 2,
      sym__comment,
      anon_sym_RBRACE,
    ACTIONS(288), 12,
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
      anon_sym_hidden,
      sym_arg_modifier,
  [1563] = 7,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(282), 1,
      sym_at_identifier,
    ACTIONS(284), 1,
      sym_string,
    STATE(28), 1,
      aux_sym_sub_statement_repeat1,
    STATE(56), 1,
      sym_block,
    ACTIONS(278), 2,
      sym__comment,
      anon_sym_RBRACE,
    ACTIONS(280), 12,
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
      anon_sym_hidden,
      sym_arg_modifier,
  [1597] = 2,
    ACTIONS(304), 5,
      ts_builtin_sym_end,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
    ACTIONS(306), 14,
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
      anon_sym_hidden,
      sym_arg_modifier,
      sym_string,
  [1621] = 7,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      sym_at_identifier,
    ACTIONS(264), 1,
      sym_string,
    STATE(23), 1,
      aux_sym_sub_statement_repeat1,
    STATE(57), 1,
      sym_block,
    ACTIONS(258), 2,
      sym__comment,
      anon_sym_RBRACE,
    ACTIONS(260), 12,
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
      anon_sym_hidden,
      sym_arg_modifier,
  [1655] = 7,
    ACTIONS(130), 1,
      sym_at_identifier,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      sym_string,
    STATE(33), 1,
      aux_sym_arg_statement_repeat1,
    STATE(58), 1,
      sym_block,
    ACTIONS(126), 2,
      sym__comment,
      anon_sym_RBRACE,
    ACTIONS(128), 12,
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
      anon_sym_hidden,
      sym_arg_modifier,
  [1689] = 7,
    ACTIONS(130), 1,
      sym_at_identifier,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(302), 1,
      sym_string,
    STATE(24), 1,
      aux_sym_arg_statement_repeat1,
    STATE(75), 1,
      sym_block,
    ACTIONS(216), 2,
      sym__comment,
      anon_sym_RBRACE,
    ACTIONS(218), 12,
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
      anon_sym_hidden,
      sym_arg_modifier,
  [1723] = 7,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(274), 1,
      sym_at_identifier,
    ACTIONS(276), 1,
      sym_string,
    STATE(19), 1,
      aux_sym_sub_statement_repeat1,
    STATE(88), 1,
      sym_block,
    ACTIONS(270), 2,
      sym__comment,
      anon_sym_RBRACE,
    ACTIONS(272), 12,
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
      anon_sym_hidden,
      sym_arg_modifier,
  [1757] = 2,
    ACTIONS(308), 4,
      ts_builtin_sym_end,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
    ACTIONS(310), 14,
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
      anon_sym_hidden,
      sym_arg_modifier,
      sym_string,
  [1780] = 2,
    ACTIONS(314), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(312), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [1803] = 2,
    ACTIONS(304), 5,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
    ACTIONS(306), 13,
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
      anon_sym_hidden,
      sym_arg_modifier,
      sym_string,
  [1826] = 2,
    ACTIONS(160), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(156), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [1849] = 2,
    ACTIONS(222), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(220), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [1872] = 2,
    ACTIONS(206), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(204), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [1895] = 2,
    ACTIONS(218), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(216), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [1918] = 2,
    ACTIONS(318), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(316), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [1941] = 2,
    ACTIONS(322), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(320), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [1964] = 2,
    ACTIONS(326), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(324), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [1987] = 2,
    ACTIONS(328), 4,
      ts_builtin_sym_end,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
    ACTIONS(330), 14,
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
      anon_sym_hidden,
      sym_arg_modifier,
      sym_string,
  [2010] = 2,
    ACTIONS(334), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(332), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2033] = 2,
    ACTIONS(202), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(200), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2056] = 2,
    ACTIONS(338), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(336), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2079] = 2,
    ACTIONS(342), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(340), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2102] = 2,
    ACTIONS(164), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(162), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2125] = 2,
    ACTIONS(240), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(238), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2148] = 2,
    ACTIONS(346), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(344), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2171] = 2,
    ACTIONS(350), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(348), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2194] = 2,
    ACTIONS(226), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(224), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2217] = 2,
    ACTIONS(168), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(166), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2240] = 2,
    ACTIONS(354), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(352), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2263] = 2,
    ACTIONS(128), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(126), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2286] = 2,
    ACTIONS(214), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(212), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2309] = 2,
    ACTIONS(356), 4,
      ts_builtin_sym_end,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
    ACTIONS(358), 14,
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
      anon_sym_hidden,
      sym_arg_modifier,
      sym_string,
  [2332] = 2,
    ACTIONS(362), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(360), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2355] = 2,
    ACTIONS(366), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(364), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2378] = 2,
    ACTIONS(366), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(364), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2401] = 2,
    ACTIONS(370), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(368), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2424] = 2,
    ACTIONS(374), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(372), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2447] = 2,
    ACTIONS(378), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(376), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2470] = 2,
    ACTIONS(382), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(380), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2493] = 2,
    ACTIONS(386), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(384), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2516] = 2,
    ACTIONS(390), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(388), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2539] = 2,
    ACTIONS(362), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(360), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2562] = 2,
    ACTIONS(392), 4,
      ts_builtin_sym_end,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
    ACTIONS(394), 14,
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
      anon_sym_hidden,
      sym_arg_modifier,
      sym_string,
  [2585] = 2,
    ACTIONS(186), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(184), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2608] = 2,
    ACTIONS(176), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(174), 16,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2631] = 2,
    ACTIONS(328), 4,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(330), 13,
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
      anon_sym_hidden,
      sym_arg_modifier,
      sym_string,
  [2653] = 2,
    ACTIONS(308), 4,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(310), 13,
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
      anon_sym_hidden,
      sym_arg_modifier,
      sym_string,
  [2675] = 2,
    ACTIONS(356), 4,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(358), 13,
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
      anon_sym_hidden,
      sym_arg_modifier,
      sym_string,
  [2697] = 2,
    ACTIONS(392), 4,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(394), 13,
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
      anon_sym_hidden,
      sym_arg_modifier,
      sym_string,
  [2719] = 2,
    ACTIONS(398), 1,
      anon_sym_flag,
    ACTIONS(396), 14,
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
      anon_sym_hidden,
      sym_arg_modifier,
  [2739] = 2,
    ACTIONS(402), 1,
      anon_sym_flag,
    ACTIONS(400), 14,
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
      anon_sym_hidden,
      sym_arg_modifier,
  [2759] = 2,
    ACTIONS(406), 1,
      anon_sym_flag,
    ACTIONS(404), 14,
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
      anon_sym_hidden,
      sym_arg_modifier,
  [2779] = 2,
    ACTIONS(330), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(328), 12,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2798] = 2,
    ACTIONS(410), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(408), 12,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2817] = 2,
    ACTIONS(414), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(412), 12,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2836] = 2,
    ACTIONS(418), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(416), 12,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2855] = 2,
    ACTIONS(422), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(420), 12,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2874] = 2,
    ACTIONS(426), 2,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(424), 12,
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
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2893] = 4,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(428), 1,
      sym_string,
    STATE(44), 1,
      sym_flag_name_list,
    STATE(92), 2,
      sym__strings,
      sym__strings_list,
  [2907] = 4,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(428), 1,
      sym_string,
    STATE(51), 1,
      sym_flag_name_list,
    STATE(92), 2,
      sym__strings,
      sym__strings_list,
  [2921] = 4,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      sym_string,
    STATE(42), 1,
      sym_flag_name_list,
    STATE(76), 2,
      sym__strings,
      sym__strings_list,
  [2935] = 4,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(428), 1,
      sym_string,
    STATE(48), 1,
      sym_flag_name_list,
    STATE(92), 2,
      sym__strings,
      sym__strings_list,
  [2949] = 4,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(428), 1,
      sym_string,
    STATE(46), 1,
      sym_flag_name_list,
    STATE(92), 2,
      sym__strings,
      sym__strings_list,
  [2963] = 4,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(432), 1,
      sym_string,
    STATE(45), 1,
      sym_sub_name_list,
    STATE(93), 2,
      sym__strings,
      sym__strings_list,
  [2977] = 4,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      sym_string,
    STATE(37), 1,
      sym_flag_name_list,
    STATE(76), 2,
      sym__strings,
      sym__strings_list,
  [2991] = 4,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      sym_string,
    STATE(39), 1,
      sym_flag_name_list,
    STATE(76), 2,
      sym__strings,
      sym__strings_list,
  [3005] = 4,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      sym_string,
    STATE(40), 1,
      sym_flag_name_list,
    STATE(76), 2,
      sym__strings,
      sym__strings_list,
  [3019] = 4,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(434), 1,
      sym_string,
    STATE(41), 1,
      sym_sub_name_list,
    STATE(87), 2,
      sym__strings,
      sym__strings_list,
  [3033] = 4,
    ACTIONS(436), 1,
      anon_sym_const,
    ACTIONS(438), 1,
      anon_sym_shell,
    ACTIONS(440), 1,
      anon_sym_file,
    ACTIONS(442), 1,
      anon_sym_dir,
  [3046] = 3,
    ACTIONS(444), 1,
      sym_string,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    STATE(100), 2,
      sym__strings,
      sym__strings_list,
  [3057] = 3,
    ACTIONS(448), 1,
      sym_string,
    ACTIONS(450), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      aux_sym__strings_list_repeat1,
  [3067] = 3,
    ACTIONS(448), 1,
      sym_string,
    ACTIONS(452), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      aux_sym__strings_list_repeat1,
  [3077] = 3,
    ACTIONS(454), 1,
      sym_string,
    ACTIONS(457), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      aux_sym__strings_list_repeat1,
  [3087] = 3,
    ACTIONS(448), 1,
      sym_string,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      aux_sym__strings_list_repeat1,
  [3097] = 2,
    STATE(10), 1,
      sym_arg_type,
    ACTIONS(70), 2,
      anon_sym_arg,
      anon_sym_varargs,
  [3105] = 2,
    STATE(7), 1,
      sym_arg_type,
    ACTIONS(19), 2,
      anon_sym_arg,
      anon_sym_varargs,
  [3113] = 2,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    STATE(94), 1,
      sym_block,
  [3120] = 2,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    STATE(96), 1,
      sym_block,
  [3127] = 2,
    ACTIONS(461), 1,
      anon_sym_flagarg,
    ACTIONS(463), 1,
      anon_sym_flag,
  [3134] = 2,
    ACTIONS(465), 1,
      sym_string,
    STATE(118), 1,
      aux_sym__strings_list_repeat1,
  [3141] = 2,
    ACTIONS(467), 1,
      anon_sym_flagarg,
    ACTIONS(469), 1,
      anon_sym_flag,
  [3148] = 2,
    ACTIONS(471), 1,
      anon_sym_flagarg,
    ACTIONS(473), 1,
      anon_sym_flag,
  [3155] = 2,
    ACTIONS(475), 1,
      sym_string,
    STATE(116), 1,
      aux_sym__strings_list_repeat1,
  [3162] = 2,
    ACTIONS(477), 1,
      sym_string,
    STATE(115), 1,
      aux_sym__strings_list_repeat1,
  [3169] = 1,
    ACTIONS(479), 1,
      sym_string,
  [3173] = 1,
    ACTIONS(481), 1,
      ts_builtin_sym_end,
  [3177] = 1,
    ACTIONS(483), 1,
      sym_at_identifier,
  [3181] = 1,
    ACTIONS(485), 1,
      sym_at_identifier,
  [3185] = 1,
    ACTIONS(487), 1,
      sym_string,
  [3189] = 1,
    ACTIONS(489), 1,
      sym_string,
  [3193] = 1,
    ACTIONS(491), 1,
      sym_string,
  [3197] = 1,
    ACTIONS(493), 1,
      sym_at_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 62,
  [SMALL_STATE(6)] = 120,
  [SMALL_STATE(7)] = 182,
  [SMALL_STATE(8)] = 227,
  [SMALL_STATE(9)] = 272,
  [SMALL_STATE(10)] = 316,
  [SMALL_STATE(11)] = 360,
  [SMALL_STATE(12)] = 395,
  [SMALL_STATE(13)] = 430,
  [SMALL_STATE(14)] = 465,
  [SMALL_STATE(15)] = 500,
  [SMALL_STATE(16)] = 535,
  [SMALL_STATE(17)] = 570,
  [SMALL_STATE(18)] = 605,
  [SMALL_STATE(19)] = 640,
  [SMALL_STATE(20)] = 675,
  [SMALL_STATE(21)] = 710,
  [SMALL_STATE(22)] = 745,
  [SMALL_STATE(23)] = 780,
  [SMALL_STATE(24)] = 815,
  [SMALL_STATE(25)] = 850,
  [SMALL_STATE(26)] = 885,
  [SMALL_STATE(27)] = 920,
  [SMALL_STATE(28)] = 955,
  [SMALL_STATE(29)] = 990,
  [SMALL_STATE(30)] = 1025,
  [SMALL_STATE(31)] = 1060,
  [SMALL_STATE(32)] = 1095,
  [SMALL_STATE(33)] = 1130,
  [SMALL_STATE(34)] = 1165,
  [SMALL_STATE(35)] = 1195,
  [SMALL_STATE(36)] = 1225,
  [SMALL_STATE(37)] = 1260,
  [SMALL_STATE(38)] = 1295,
  [SMALL_STATE(39)] = 1320,
  [SMALL_STATE(40)] = 1355,
  [SMALL_STATE(41)] = 1390,
  [SMALL_STATE(42)] = 1425,
  [SMALL_STATE(43)] = 1460,
  [SMALL_STATE(44)] = 1495,
  [SMALL_STATE(45)] = 1529,
  [SMALL_STATE(46)] = 1563,
  [SMALL_STATE(47)] = 1597,
  [SMALL_STATE(48)] = 1621,
  [SMALL_STATE(49)] = 1655,
  [SMALL_STATE(50)] = 1689,
  [SMALL_STATE(51)] = 1723,
  [SMALL_STATE(52)] = 1757,
  [SMALL_STATE(53)] = 1780,
  [SMALL_STATE(54)] = 1803,
  [SMALL_STATE(55)] = 1826,
  [SMALL_STATE(56)] = 1849,
  [SMALL_STATE(57)] = 1872,
  [SMALL_STATE(58)] = 1895,
  [SMALL_STATE(59)] = 1918,
  [SMALL_STATE(60)] = 1941,
  [SMALL_STATE(61)] = 1964,
  [SMALL_STATE(62)] = 1987,
  [SMALL_STATE(63)] = 2010,
  [SMALL_STATE(64)] = 2033,
  [SMALL_STATE(65)] = 2056,
  [SMALL_STATE(66)] = 2079,
  [SMALL_STATE(67)] = 2102,
  [SMALL_STATE(68)] = 2125,
  [SMALL_STATE(69)] = 2148,
  [SMALL_STATE(70)] = 2171,
  [SMALL_STATE(71)] = 2194,
  [SMALL_STATE(72)] = 2217,
  [SMALL_STATE(73)] = 2240,
  [SMALL_STATE(74)] = 2263,
  [SMALL_STATE(75)] = 2286,
  [SMALL_STATE(76)] = 2309,
  [SMALL_STATE(77)] = 2332,
  [SMALL_STATE(78)] = 2355,
  [SMALL_STATE(79)] = 2378,
  [SMALL_STATE(80)] = 2401,
  [SMALL_STATE(81)] = 2424,
  [SMALL_STATE(82)] = 2447,
  [SMALL_STATE(83)] = 2470,
  [SMALL_STATE(84)] = 2493,
  [SMALL_STATE(85)] = 2516,
  [SMALL_STATE(86)] = 2539,
  [SMALL_STATE(87)] = 2562,
  [SMALL_STATE(88)] = 2585,
  [SMALL_STATE(89)] = 2608,
  [SMALL_STATE(90)] = 2631,
  [SMALL_STATE(91)] = 2653,
  [SMALL_STATE(92)] = 2675,
  [SMALL_STATE(93)] = 2697,
  [SMALL_STATE(94)] = 2719,
  [SMALL_STATE(95)] = 2739,
  [SMALL_STATE(96)] = 2759,
  [SMALL_STATE(97)] = 2779,
  [SMALL_STATE(98)] = 2798,
  [SMALL_STATE(99)] = 2817,
  [SMALL_STATE(100)] = 2836,
  [SMALL_STATE(101)] = 2855,
  [SMALL_STATE(102)] = 2874,
  [SMALL_STATE(103)] = 2893,
  [SMALL_STATE(104)] = 2907,
  [SMALL_STATE(105)] = 2921,
  [SMALL_STATE(106)] = 2935,
  [SMALL_STATE(107)] = 2949,
  [SMALL_STATE(108)] = 2963,
  [SMALL_STATE(109)] = 2977,
  [SMALL_STATE(110)] = 2991,
  [SMALL_STATE(111)] = 3005,
  [SMALL_STATE(112)] = 3019,
  [SMALL_STATE(113)] = 3033,
  [SMALL_STATE(114)] = 3046,
  [SMALL_STATE(115)] = 3057,
  [SMALL_STATE(116)] = 3067,
  [SMALL_STATE(117)] = 3077,
  [SMALL_STATE(118)] = 3087,
  [SMALL_STATE(119)] = 3097,
  [SMALL_STATE(120)] = 3105,
  [SMALL_STATE(121)] = 3113,
  [SMALL_STATE(122)] = 3120,
  [SMALL_STATE(123)] = 3127,
  [SMALL_STATE(124)] = 3134,
  [SMALL_STATE(125)] = 3141,
  [SMALL_STATE(126)] = 3148,
  [SMALL_STATE(127)] = 3155,
  [SMALL_STATE(128)] = 3162,
  [SMALL_STATE(129)] = 3169,
  [SMALL_STATE(130)] = 3173,
  [SMALL_STATE(131)] = 3177,
  [SMALL_STATE(132)] = 3181,
  [SMALL_STATE(133)] = 3185,
  [SMALL_STATE(134)] = 3189,
  [SMALL_STATE(135)] = 3193,
  [SMALL_STATE(136)] = 3197,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(136),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(108),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(134),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(135),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(54),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(113),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(107),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(106),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(125),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(119),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(136),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(132),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(131),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(112),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(129),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(134),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(111),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(109),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(125),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(120),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 3, .production_id = 4),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 3, .production_id = 4),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 4, .production_id = 8),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 4, .production_id = 8),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_statement, 3, .production_id = 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_statement, 3, .production_id = 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 5, .production_id = 9),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 5, .production_id = 9),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 5, .production_id = 9),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 5, .production_id = 9),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 5, .production_id = 10),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 5, .production_id = 10),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 4, .production_id = 7),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 4, .production_id = 7),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 4, .production_id = 9),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 4, .production_id = 9),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 4, .production_id = 7),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 4, .production_id = 7),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 4, .production_id = 9),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 4, .production_id = 9),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_statement, 3, .production_id = 4),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_statement, 3, .production_id = 4),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_statement, 4, .production_id = 4),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_statement, 4, .production_id = 4),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 3, .production_id = 1),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 3, .production_id = 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 3, .production_id = 5),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 3, .production_id = 5),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 4),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 4),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 3),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 3, .production_id = 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 3, .production_id = 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 4, .production_id = 4),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 4, .production_id = 4),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 3, .production_id = 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 3, .production_id = 4),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 2, .production_id = 3),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 2, .production_id = 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 4, .production_id = 4),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 4, .production_id = 4),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_statement_repeat1, 2, .production_id = 6),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_statement_repeat1, 2, .production_id = 6), SHIFT_REPEAT(38),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arg_statement_repeat1, 2, .production_id = 6),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sub_statement_repeat1, 2),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sub_statement_repeat1, 2), SHIFT_REPEAT(35),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sub_statement_repeat1, 2),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 2, .production_id = 1),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 2, .production_id = 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_statement_repeat1, 1, .production_id = 2),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arg_statement_repeat1, 1, .production_id = 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 3, .production_id = 7),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 3, .production_id = 7),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 2, .production_id = 1),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 2, .production_id = 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_statement, 2, .production_id = 1),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_statement, 2, .production_id = 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 3, .production_id = 7),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 3, .production_id = 7),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_type, 1),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_type, 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_name_list, 1),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_name_list, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 5, .production_id = 4),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 5, .production_id = 4),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 6, .production_id = 9),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 6, .production_id = 9),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 6, .production_id = 9),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 6, .production_id = 9),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 3, .production_id = 3),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 3, .production_id = 3),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__strings_list, 3),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__strings_list, 3),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 6, .production_id = 10),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 6, .production_id = 10),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 5, .production_id = 7),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 5, .production_id = 7),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_statement, 4, .production_id = 1),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_statement, 4, .production_id = 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 5, .production_id = 7),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 5, .production_id = 7),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 4, .production_id = 1),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 4, .production_id = 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 4, .production_id = 1),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 4, .production_id = 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_name_list, 1),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_name_list, 1),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 4, .production_id = 5),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 4, .production_id = 5),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 5, .production_id = 8),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 5, .production_id = 8),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 2),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 5),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 5),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 5, .production_id = 4),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 5, .production_id = 4),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_desc_statement, 2),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_desc_statement, 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_statement, 5, .production_id = 4),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_statement, 5, .production_id = 4),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_name_list, 1),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_name_list, 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defopts_statement, 3),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defopts_statement, 3),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_statement, 2),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_statement, 2),
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
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_statement, 2),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_statement, 2),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__strings_list_repeat1, 2), SHIFT_REPEAT(117),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__strings_list_repeat1, 2),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_modifier, 1),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_modifier, 1),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [481] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
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
