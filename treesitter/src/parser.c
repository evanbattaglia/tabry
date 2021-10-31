#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 142
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 60
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
  anon_sym_defflags = 4,
  anon_sym_defsubs = 5,
  sym_at_identifier = 6,
  sym__comment = 7,
  anon_sym_sub = 8,
  anon_sym_cmd = 9,
  anon_sym_desc = 10,
  anon_sym_arg = 11,
  anon_sym_args = 12,
  anon_sym_opts = 13,
  anon_sym_const = 14,
  anon_sym_shell = 15,
  anon_sym_file = 16,
  anon_sym_dir = 17,
  anon_sym_flagarg = 18,
  anon_sym_flag = 19,
  anon_sym_reqd = 20,
  anon_sym_hidden = 21,
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
  sym_defflags_statement = 35,
  sym_defsubs_statement = 36,
  sym_sub_statement = 37,
  sym_cmd_statement = 38,
  sym_desc_statement = 39,
  sym_arg_type = 40,
  sym_arg_statement = 41,
  sym_opts_const_statement = 42,
  sym_opts_shell_statement = 43,
  sym_opts_file_statement = 44,
  sym_opts_dir_statement = 45,
  sym_flagarg_statement = 46,
  sym_flag_statement = 47,
  sym_flag_modifier = 48,
  sym_block = 49,
  sym_flag_name_list = 50,
  sym_arg_name_list = 51,
  sym_sub_name_list = 52,
  sym__strings = 53,
  sym__strings_list = 54,
  aux_sym_source_file_repeat1 = 55,
  aux_sym_sub_statement_repeat1 = 56,
  aux_sym_arg_statement_repeat1 = 57,
  aux_sym_block_repeat1 = 58,
  aux_sym__strings_list_repeat1 = 59,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_include] = "include",
  [anon_sym_defopts] = "defopts",
  [anon_sym_defargs] = "defargs",
  [anon_sym_defflags] = "defflags",
  [anon_sym_defsubs] = "defsubs",
  [sym_at_identifier] = "at_identifier",
  [sym__comment] = "_comment",
  [anon_sym_sub] = "sub",
  [anon_sym_cmd] = "cmd",
  [anon_sym_desc] = "desc",
  [anon_sym_arg] = "arg",
  [anon_sym_args] = "args",
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
  [sym_defflags_statement] = "defflags_statement",
  [sym_defsubs_statement] = "defsubs_statement",
  [sym_sub_statement] = "sub_statement",
  [sym_cmd_statement] = "cmd_statement",
  [sym_desc_statement] = "desc_statement",
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
  [anon_sym_defflags] = anon_sym_defflags,
  [anon_sym_defsubs] = anon_sym_defsubs,
  [sym_at_identifier] = sym_at_identifier,
  [sym__comment] = sym__comment,
  [anon_sym_sub] = anon_sym_sub,
  [anon_sym_cmd] = anon_sym_cmd,
  [anon_sym_desc] = anon_sym_desc,
  [anon_sym_arg] = anon_sym_arg,
  [anon_sym_args] = anon_sym_args,
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
  [sym_defflags_statement] = sym_defflags_statement,
  [sym_defsubs_statement] = sym_defsubs_statement,
  [sym_sub_statement] = sym_sub_statement,
  [sym_cmd_statement] = sym_cmd_statement,
  [sym_desc_statement] = sym_desc_statement,
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
  [anon_sym_defflags] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defsubs] = {
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
  [anon_sym_arg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_args] = {
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
  [sym_defflags_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_defsubs_statement] = {
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
      if (eof) ADVANCE(60);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '(') ADVANCE(152);
      if (lookahead == ')') ADVANCE(153);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'c') ADVANCE(36);
      if (lookahead == 'd') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == 'h') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(17);
      if (lookahead == 's') ADVANCE(28);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '}') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '(') ADVANCE(152);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == 'a') ADVANCE(137);
      if (lookahead == 'd') ADVANCE(119);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == 'h') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(132);
      if (lookahead == 'o') ADVANCE(135);
      if (lookahead == 'r') ADVANCE(116);
      if (lookahead == 's') ADVANCE(148);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '}') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(152);
      if (lookahead == ')') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(41);
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 7:
      if (lookahead == 'b') ADVANCE(73);
      END_STATE();
    case 8:
      if (lookahead == 'b') ADVANCE(49);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(93);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 23:
      if (lookahead == 'g') ADVANCE(79);
      END_STATE();
    case 24:
      if (lookahead == 'g') ADVANCE(91);
      END_STATE();
    case 25:
      if (lookahead == 'g') ADVANCE(89);
      END_STATE();
    case 26:
      if (lookahead == 'g') ADVANCE(47);
      END_STATE();
    case 27:
      if (lookahead == 'g') ADVANCE(50);
      END_STATE();
    case 28:
      if (lookahead == 'h') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(7);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'l') ADVANCE(4);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 36:
      if (lookahead == 'm') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 40:
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 41:
      if (lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 42:
      if (lookahead == 'q') ADVANCE(12);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 55:
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 56:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 57:
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 58:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 59:
      if (eof) ADVANCE(60);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '(') ADVANCE(152);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == 'a') ADVANCE(137);
      if (lookahead == 'c') ADVANCE(130);
      if (lookahead == 'd') ADVANCE(115);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == 'h') ADVANCE(126);
      if (lookahead == 'o') ADVANCE(133);
      if (lookahead == 'r') ADVANCE(116);
      if (lookahead == 's') ADVANCE(148);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(59)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_defopts);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_defopts);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_defargs);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_defargs);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_defflags);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_defflags);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_defsubs);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_defsubs);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_at_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_sub);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_cmd);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_desc);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_desc);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_arg);
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_arg);
      if (lookahead == 's') ADVANCE(82);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_args);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_args);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_opts);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_opts);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_shell);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_dir);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_flagarg);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_flagarg);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_flag);
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_flag);
      if (lookahead == 'a') ADVANCE(139);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_reqd);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_reqd);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_hidden);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_hidden);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_arg_modifier);
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_arg_modifier);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_arg_modifier);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(138);
      if (lookahead == 'f') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(134);
      if (lookahead == 's') ADVANCE(149);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'b') ADVANCE(74);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'b') ADVANCE(143);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'c') ADVANCE(78);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'c') ADVANCE(128);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'd') ADVANCE(76);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'd') ADVANCE(94);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'd') ADVANCE(117);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'd') ADVANCE(112);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'd') ADVANCE(118);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'f') ADVANCE(105);
      if (lookahead == 's') ADVANCE(108);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'g') ADVANCE(80);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'g') ADVANCE(92);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'g') ADVANCE(141);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'g') ADVANCE(90);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'g') ADVANCE(144);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'l') ADVANCE(103);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'l') ADVANCE(150);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'l') ADVANCE(104);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'm') ADVANCE(110);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(109);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'p') ADVANCE(145);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'p') ADVANCE(147);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'p') ADVANCE(146);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'q') ADVANCE(111);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(121);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(123);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 's') ADVANCE(108);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 's') ADVANCE(66);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 's') ADVANCE(70);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 's') ADVANCE(68);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'u') ADVANCE(106);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'u') ADVANCE(107);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'u') ADVANCE(114);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 153:
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
  [7] = {.lex_state = 59},
  [8] = {.lex_state = 59},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
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
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 59},
  [38] = {.lex_state = 59},
  [39] = {.lex_state = 59},
  [40] = {.lex_state = 59},
  [41] = {.lex_state = 59},
  [42] = {.lex_state = 59},
  [43] = {.lex_state = 59},
  [44] = {.lex_state = 59},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 59},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 59},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 59},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 59},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 2},
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
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_defopts] = ACTIONS(1),
    [anon_sym_defargs] = ACTIONS(1),
    [anon_sym_defflags] = ACTIONS(1),
    [anon_sym_defsubs] = ACTIONS(1),
    [sym_at_identifier] = ACTIONS(1),
    [sym__comment] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
    [anon_sym_cmd] = ACTIONS(1),
    [anon_sym_desc] = ACTIONS(1),
    [anon_sym_arg] = ACTIONS(1),
    [anon_sym_args] = ACTIONS(1),
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
    [sym_source_file] = STATE(140),
    [sym__toplevel_statement] = STATE(3),
    [sym__common_statement] = STATE(3),
    [sym_defopts_statement] = STATE(3),
    [sym_defargs_statement] = STATE(3),
    [sym_defflags_statement] = STATE(3),
    [sym_defsubs_statement] = STATE(3),
    [sym_sub_statement] = STATE(3),
    [sym_cmd_statement] = STATE(3),
    [sym_desc_statement] = STATE(3),
    [sym_arg_type] = STATE(7),
    [sym_arg_statement] = STATE(3),
    [sym_flagarg_statement] = STATE(3),
    [sym_flag_statement] = STATE(3),
    [sym_flag_modifier] = STATE(124),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_defopts] = ACTIONS(5),
    [anon_sym_defargs] = ACTIONS(7),
    [anon_sym_defflags] = ACTIONS(9),
    [anon_sym_defsubs] = ACTIONS(11),
    [sym__comment] = ACTIONS(13),
    [anon_sym_sub] = ACTIONS(15),
    [anon_sym_cmd] = ACTIONS(17),
    [anon_sym_desc] = ACTIONS(19),
    [anon_sym_arg] = ACTIONS(21),
    [anon_sym_args] = ACTIONS(23),
    [anon_sym_flagarg] = ACTIONS(25),
    [anon_sym_flag] = ACTIONS(27),
    [anon_sym_reqd] = ACTIONS(29),
    [anon_sym_hidden] = ACTIONS(29),
    [sym_arg_modifier] = ACTIONS(31),
  },
  [2] = {
    [sym__toplevel_statement] = STATE(2),
    [sym__common_statement] = STATE(2),
    [sym_defopts_statement] = STATE(2),
    [sym_defargs_statement] = STATE(2),
    [sym_defflags_statement] = STATE(2),
    [sym_defsubs_statement] = STATE(2),
    [sym_sub_statement] = STATE(2),
    [sym_cmd_statement] = STATE(2),
    [sym_desc_statement] = STATE(2),
    [sym_arg_type] = STATE(7),
    [sym_arg_statement] = STATE(2),
    [sym_flagarg_statement] = STATE(2),
    [sym_flag_statement] = STATE(2),
    [sym_flag_modifier] = STATE(124),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_defopts] = ACTIONS(35),
    [anon_sym_defargs] = ACTIONS(38),
    [anon_sym_defflags] = ACTIONS(41),
    [anon_sym_defsubs] = ACTIONS(44),
    [sym__comment] = ACTIONS(47),
    [anon_sym_sub] = ACTIONS(50),
    [anon_sym_cmd] = ACTIONS(53),
    [anon_sym_desc] = ACTIONS(56),
    [anon_sym_arg] = ACTIONS(59),
    [anon_sym_args] = ACTIONS(62),
    [anon_sym_flagarg] = ACTIONS(65),
    [anon_sym_flag] = ACTIONS(68),
    [anon_sym_reqd] = ACTIONS(71),
    [anon_sym_hidden] = ACTIONS(71),
    [sym_arg_modifier] = ACTIONS(74),
  },
  [3] = {
    [sym__toplevel_statement] = STATE(2),
    [sym__common_statement] = STATE(2),
    [sym_defopts_statement] = STATE(2),
    [sym_defargs_statement] = STATE(2),
    [sym_defflags_statement] = STATE(2),
    [sym_defsubs_statement] = STATE(2),
    [sym_sub_statement] = STATE(2),
    [sym_cmd_statement] = STATE(2),
    [sym_desc_statement] = STATE(2),
    [sym_arg_type] = STATE(7),
    [sym_arg_statement] = STATE(2),
    [sym_flagarg_statement] = STATE(2),
    [sym_flag_statement] = STATE(2),
    [sym_flag_modifier] = STATE(124),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_defopts] = ACTIONS(5),
    [anon_sym_defargs] = ACTIONS(7),
    [anon_sym_defflags] = ACTIONS(9),
    [anon_sym_defsubs] = ACTIONS(11),
    [sym__comment] = ACTIONS(79),
    [anon_sym_sub] = ACTIONS(15),
    [anon_sym_cmd] = ACTIONS(17),
    [anon_sym_desc] = ACTIONS(19),
    [anon_sym_arg] = ACTIONS(21),
    [anon_sym_args] = ACTIONS(23),
    [anon_sym_flagarg] = ACTIONS(25),
    [anon_sym_flag] = ACTIONS(27),
    [anon_sym_reqd] = ACTIONS(29),
    [anon_sym_hidden] = ACTIONS(29),
    [sym_arg_modifier] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(19), 1,
      anon_sym_desc,
    ACTIONS(81), 1,
      anon_sym_include,
    ACTIONS(83), 1,
      sym__comment,
    ACTIONS(85), 1,
      anon_sym_sub,
    ACTIONS(87), 1,
      anon_sym_arg,
    ACTIONS(89), 1,
      anon_sym_args,
    ACTIONS(91), 1,
      anon_sym_opts,
    ACTIONS(93), 1,
      anon_sym_flagarg,
    ACTIONS(95), 1,
      anon_sym_flag,
    ACTIONS(97), 1,
      sym_arg_modifier,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym_arg_type,
    STATE(123), 1,
      sym_flag_modifier,
    ACTIONS(29), 2,
      anon_sym_reqd,
      anon_sym_hidden,
    STATE(6), 13,
      sym__common_statement,
      sym__block_statement,
      sym_include_statement,
      sym_sub_statement,
      sym_desc_statement,
      sym_arg_statement,
      sym_opts_const_statement,
      sym_opts_shell_statement,
      sym_opts_file_statement,
      sym_opts_dir_statement,
      sym_flagarg_statement,
      sym_flag_statement,
      aux_sym_block_repeat1,
  [59] = 15,
    ACTIONS(19), 1,
      anon_sym_desc,
    ACTIONS(81), 1,
      anon_sym_include,
    ACTIONS(85), 1,
      anon_sym_sub,
    ACTIONS(87), 1,
      anon_sym_arg,
    ACTIONS(89), 1,
      anon_sym_args,
    ACTIONS(91), 1,
      anon_sym_opts,
    ACTIONS(93), 1,
      anon_sym_flagarg,
    ACTIONS(95), 1,
      anon_sym_flag,
    ACTIONS(97), 1,
      sym_arg_modifier,
    ACTIONS(101), 1,
      sym__comment,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym_arg_type,
    STATE(123), 1,
      sym_flag_modifier,
    ACTIONS(29), 2,
      anon_sym_reqd,
      anon_sym_hidden,
    STATE(4), 13,
      sym__common_statement,
      sym__block_statement,
      sym_include_statement,
      sym_sub_statement,
      sym_desc_statement,
      sym_arg_statement,
      sym_opts_const_statement,
      sym_opts_shell_statement,
      sym_opts_file_statement,
      sym_opts_dir_statement,
      sym_flagarg_statement,
      sym_flag_statement,
      aux_sym_block_repeat1,
  [118] = 15,
    ACTIONS(105), 1,
      anon_sym_include,
    ACTIONS(108), 1,
      sym__comment,
    ACTIONS(111), 1,
      anon_sym_sub,
    ACTIONS(114), 1,
      anon_sym_desc,
    ACTIONS(117), 1,
      anon_sym_arg,
    ACTIONS(120), 1,
      anon_sym_args,
    ACTIONS(123), 1,
      anon_sym_opts,
    ACTIONS(126), 1,
      anon_sym_flagarg,
    ACTIONS(129), 1,
      anon_sym_flag,
    ACTIONS(135), 1,
      sym_arg_modifier,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym_arg_type,
    STATE(123), 1,
      sym_flag_modifier,
    ACTIONS(132), 2,
      anon_sym_reqd,
      anon_sym_hidden,
    STATE(6), 13,
      sym__common_statement,
      sym__block_statement,
      sym_include_statement,
      sym_sub_statement,
      sym_desc_statement,
      sym_arg_statement,
      sym_opts_const_statement,
      sym_opts_shell_statement,
      sym_opts_file_statement,
      sym_opts_dir_statement,
      sym_flagarg_statement,
      sym_flag_statement,
      aux_sym_block_repeat1,
  [177] = 10,
    ACTIONS(144), 1,
      sym_at_identifier,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(148), 1,
      sym_string,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      aux_sym_arg_statement_repeat1,
    STATE(37), 1,
      sym_arg_name_list,
    STATE(47), 1,
      sym_block,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      sym__comment,
    STATE(48), 2,
      sym__strings,
      sym__strings_list,
    ACTIONS(142), 14,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_args,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      anon_sym_hidden,
      sym_arg_modifier,
  [223] = 10,
    ACTIONS(144), 1,
      sym_at_identifier,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(148), 1,
      sym_string,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      aux_sym_arg_statement_repeat1,
    STATE(43), 1,
      sym_arg_name_list,
    STATE(59), 1,
      sym_block,
    ACTIONS(152), 2,
      ts_builtin_sym_end,
      sym__comment,
    STATE(48), 2,
      sym__strings,
      sym__strings_list,
    ACTIONS(154), 14,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_args,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      anon_sym_hidden,
      sym_arg_modifier,
  [269] = 6,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(158), 1,
      sym_at_identifier,
    STATE(30), 1,
      aux_sym_sub_statement_repeat1,
    STATE(50), 1,
      sym_block,
    ACTIONS(160), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(156), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [305] = 6,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(164), 1,
      sym_at_identifier,
    STATE(35), 1,
      aux_sym_sub_statement_repeat1,
    STATE(78), 1,
      sym_block,
    ACTIONS(166), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(162), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [341] = 6,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(170), 1,
      sym_at_identifier,
    STATE(25), 1,
      aux_sym_sub_statement_repeat1,
    STATE(72), 1,
      sym_block,
    ACTIONS(172), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(168), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [377] = 6,
    ACTIONS(144), 1,
      sym_at_identifier,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      aux_sym_arg_statement_repeat1,
    STATE(68), 1,
      sym_block,
    ACTIONS(176), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(174), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [413] = 6,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(164), 1,
      sym_at_identifier,
    STATE(35), 1,
      aux_sym_sub_statement_repeat1,
    STATE(49), 1,
      sym_block,
    ACTIONS(180), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(178), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [449] = 6,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      sym_at_identifier,
    STATE(21), 1,
      aux_sym_sub_statement_repeat1,
    STATE(45), 1,
      sym_block,
    ACTIONS(186), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(182), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [485] = 6,
    ACTIONS(144), 1,
      sym_at_identifier,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      aux_sym_arg_statement_repeat1,
    STATE(51), 1,
      sym_block,
    ACTIONS(190), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(188), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [521] = 6,
    ACTIONS(144), 1,
      sym_at_identifier,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      aux_sym_arg_statement_repeat1,
    STATE(52), 1,
      sym_block,
    ACTIONS(190), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(188), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [557] = 6,
    ACTIONS(144), 1,
      sym_at_identifier,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      aux_sym_arg_statement_repeat1,
    STATE(53), 1,
      sym_block,
    ACTIONS(194), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(192), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [593] = 6,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(164), 1,
      sym_at_identifier,
    STATE(35), 1,
      aux_sym_sub_statement_repeat1,
    STATE(54), 1,
      sym_block,
    ACTIONS(198), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(196), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [629] = 6,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(164), 1,
      sym_at_identifier,
    STATE(35), 1,
      aux_sym_sub_statement_repeat1,
    STATE(55), 1,
      sym_block,
    ACTIONS(202), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(200), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [665] = 6,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_at_identifier,
    STATE(19), 1,
      aux_sym_sub_statement_repeat1,
    STATE(73), 1,
      sym_block,
    ACTIONS(208), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(204), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [701] = 6,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(164), 1,
      sym_at_identifier,
    STATE(35), 1,
      aux_sym_sub_statement_repeat1,
    STATE(60), 1,
      sym_block,
    ACTIONS(212), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(210), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [737] = 6,
    ACTIONS(144), 1,
      sym_at_identifier,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      aux_sym_arg_statement_repeat1,
    STATE(80), 1,
      sym_block,
    ACTIONS(216), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(214), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [773] = 6,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(220), 1,
      sym_at_identifier,
    STATE(18), 1,
      aux_sym_sub_statement_repeat1,
    STATE(76), 1,
      sym_block,
    ACTIONS(222), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(218), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [809] = 6,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(164), 1,
      sym_at_identifier,
    STATE(35), 1,
      aux_sym_sub_statement_repeat1,
    STATE(75), 1,
      sym_block,
    ACTIONS(226), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(224), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [845] = 6,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(164), 1,
      sym_at_identifier,
    STATE(35), 1,
      aux_sym_sub_statement_repeat1,
    STATE(79), 1,
      sym_block,
    ACTIONS(230), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(228), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [881] = 6,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(164), 1,
      sym_at_identifier,
    STATE(35), 1,
      aux_sym_sub_statement_repeat1,
    STATE(70), 1,
      sym_block,
    ACTIONS(234), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(232), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [917] = 6,
    ACTIONS(144), 1,
      sym_at_identifier,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      aux_sym_arg_statement_repeat1,
    STATE(63), 1,
      sym_block,
    ACTIONS(238), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(236), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [953] = 6,
    ACTIONS(144), 1,
      sym_at_identifier,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      aux_sym_arg_statement_repeat1,
    STATE(81), 1,
      sym_block,
    ACTIONS(176), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(174), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [989] = 6,
    ACTIONS(144), 1,
      sym_at_identifier,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      aux_sym_arg_statement_repeat1,
    STATE(46), 1,
      sym_block,
    ACTIONS(242), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(240), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [1025] = 6,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(164), 1,
      sym_at_identifier,
    STATE(35), 1,
      aux_sym_sub_statement_repeat1,
    STATE(77), 1,
      sym_block,
    ACTIONS(246), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(244), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [1061] = 6,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(164), 1,
      sym_at_identifier,
    STATE(35), 1,
      aux_sym_sub_statement_repeat1,
    STATE(71), 1,
      sym_block,
    ACTIONS(250), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(248), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [1097] = 4,
    ACTIONS(254), 1,
      sym_at_identifier,
    STATE(32), 1,
      aux_sym_arg_statement_repeat1,
    ACTIONS(257), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(252), 17,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1128] = 10,
    ACTIONS(144), 1,
      sym_at_identifier,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(259), 1,
      sym_string,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      aux_sym_arg_statement_repeat1,
    STATE(47), 1,
      sym_block,
    STATE(88), 1,
      sym_arg_name_list,
    ACTIONS(140), 2,
      sym__comment,
      anon_sym_RBRACE,
    STATE(92), 2,
      sym__strings,
      sym__strings_list,
    ACTIONS(142), 11,
      anon_sym_include,
      anon_sym_sub,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      anon_sym_hidden,
      sym_arg_modifier,
  [1171] = 10,
    ACTIONS(144), 1,
      sym_at_identifier,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(259), 1,
      sym_string,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      aux_sym_arg_statement_repeat1,
    STATE(59), 1,
      sym_block,
    STATE(86), 1,
      sym_arg_name_list,
    ACTIONS(152), 2,
      sym__comment,
      anon_sym_RBRACE,
    STATE(92), 2,
      sym__strings,
      sym__strings_list,
    ACTIONS(154), 11,
      anon_sym_include,
      anon_sym_sub,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      anon_sym_hidden,
      sym_arg_modifier,
  [1214] = 4,
    ACTIONS(265), 1,
      sym_at_identifier,
    STATE(35), 1,
      aux_sym_sub_statement_repeat1,
    ACTIONS(268), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(263), 17,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1245] = 2,
    ACTIONS(272), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(270), 18,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym_at_identifier,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1271] = 7,
    ACTIONS(144), 1,
      sym_at_identifier,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(274), 1,
      sym_string,
    STATE(12), 1,
      aux_sym_arg_statement_repeat1,
    STATE(59), 1,
      sym_block,
    ACTIONS(152), 2,
      ts_builtin_sym_end,
      sym__comment,
    ACTIONS(154), 14,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_args,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      anon_sym_hidden,
      sym_arg_modifier,
  [1307] = 7,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(280), 1,
      sym_at_identifier,
    ACTIONS(282), 1,
      sym_string,
    STATE(10), 1,
      aux_sym_sub_statement_repeat1,
    STATE(58), 1,
      sym_block,
    ACTIONS(276), 2,
      ts_builtin_sym_end,
      sym__comment,
    ACTIONS(278), 14,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_args,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      anon_sym_hidden,
      sym_arg_modifier,
  [1343] = 7,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(288), 1,
      sym_at_identifier,
    ACTIONS(290), 1,
      sym_string,
    STATE(24), 1,
      aux_sym_sub_statement_repeat1,
    STATE(57), 1,
      sym_block,
    ACTIONS(284), 2,
      ts_builtin_sym_end,
      sym__comment,
    ACTIONS(286), 14,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_args,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      anon_sym_hidden,
      sym_arg_modifier,
  [1379] = 7,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(296), 1,
      sym_at_identifier,
    ACTIONS(298), 1,
      sym_string,
    STATE(13), 1,
      aux_sym_sub_statement_repeat1,
    STATE(66), 1,
      sym_block,
    ACTIONS(292), 2,
      ts_builtin_sym_end,
      sym__comment,
    ACTIONS(294), 14,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_args,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      anon_sym_hidden,
      sym_arg_modifier,
  [1415] = 7,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(304), 1,
      sym_at_identifier,
    ACTIONS(306), 1,
      sym_string,
    STATE(26), 1,
      aux_sym_sub_statement_repeat1,
    STATE(61), 1,
      sym_block,
    ACTIONS(300), 2,
      ts_builtin_sym_end,
      sym__comment,
    ACTIONS(302), 14,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_args,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      anon_sym_hidden,
      sym_arg_modifier,
  [1451] = 7,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(312), 1,
      sym_at_identifier,
    ACTIONS(314), 1,
      sym_string,
    STATE(31), 1,
      aux_sym_sub_statement_repeat1,
    STATE(56), 1,
      sym_block,
    ACTIONS(308), 2,
      ts_builtin_sym_end,
      sym__comment,
    ACTIONS(310), 14,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_args,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      anon_sym_hidden,
      sym_arg_modifier,
  [1487] = 7,
    ACTIONS(144), 1,
      sym_at_identifier,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(316), 1,
      sym_string,
    STATE(16), 1,
      aux_sym_arg_statement_repeat1,
    STATE(80), 1,
      sym_block,
    ACTIONS(214), 2,
      ts_builtin_sym_end,
      sym__comment,
    ACTIONS(216), 14,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_args,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      anon_sym_hidden,
      sym_arg_modifier,
  [1523] = 2,
    ACTIONS(318), 5,
      ts_builtin_sym_end,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
    ACTIONS(320), 15,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_args,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      anon_sym_hidden,
      sym_arg_modifier,
      sym_string,
  [1548] = 2,
    ACTIONS(212), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(210), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [1572] = 2,
    ACTIONS(324), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(322), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [1596] = 2,
    ACTIONS(154), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(152), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [1620] = 2,
    ACTIONS(326), 4,
      ts_builtin_sym_end,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
    ACTIONS(328), 15,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_args,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      anon_sym_hidden,
      sym_arg_modifier,
      sym_string,
  [1644] = 2,
    ACTIONS(332), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(330), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [1668] = 2,
    ACTIONS(246), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(244), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [1692] = 2,
    ACTIONS(336), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(334), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [1716] = 2,
    ACTIONS(336), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(334), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [1740] = 2,
    ACTIONS(340), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(338), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [1764] = 2,
    ACTIONS(344), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(342), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [1788] = 2,
    ACTIONS(348), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(346), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [1812] = 2,
    ACTIONS(250), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(248), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [1836] = 2,
    ACTIONS(226), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(224), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [1860] = 2,
    ACTIONS(166), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(162), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [1884] = 2,
    ACTIONS(216), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(214), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [1908] = 2,
    ACTIONS(352), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(350), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [1932] = 2,
    ACTIONS(234), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(232), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [1956] = 2,
    ACTIONS(356), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(354), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [1980] = 2,
    ACTIONS(360), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(358), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2004] = 2,
    ACTIONS(362), 4,
      ts_builtin_sym_end,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
    ACTIONS(364), 15,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_args,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      anon_sym_hidden,
      sym_arg_modifier,
      sym_string,
  [2028] = 2,
    ACTIONS(368), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(366), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2052] = 2,
    ACTIONS(180), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(178), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2076] = 2,
    ACTIONS(370), 4,
      ts_builtin_sym_end,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
    ACTIONS(372), 15,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_args,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      anon_sym_hidden,
      sym_arg_modifier,
      sym_string,
  [2100] = 2,
    ACTIONS(376), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(374), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2124] = 2,
    ACTIONS(378), 4,
      ts_builtin_sym_end,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
    ACTIONS(380), 15,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_args,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      anon_sym_hidden,
      sym_arg_modifier,
      sym_string,
  [2148] = 2,
    ACTIONS(384), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(382), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2172] = 2,
    ACTIONS(388), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(386), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2196] = 2,
    ACTIONS(230), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(228), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2220] = 2,
    ACTIONS(202), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(200), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2244] = 2,
    ACTIONS(392), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(390), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2268] = 2,
    ACTIONS(396), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(394), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2292] = 2,
    ACTIONS(198), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(196), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2316] = 2,
    ACTIONS(400), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(398), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2340] = 2,
    ACTIONS(404), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(402), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2364] = 2,
    ACTIONS(408), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(406), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2388] = 2,
    ACTIONS(194), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(192), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2412] = 2,
    ACTIONS(376), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(374), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2436] = 7,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(280), 1,
      sym_at_identifier,
    ACTIONS(282), 1,
      sym_string,
    STATE(10), 1,
      aux_sym_sub_statement_repeat1,
    STATE(58), 1,
      sym_block,
    ACTIONS(276), 2,
      sym__comment,
      anon_sym_RBRACE,
    ACTIONS(278), 11,
      anon_sym_include,
      anon_sym_sub,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      anon_sym_hidden,
      sym_arg_modifier,
  [2469] = 7,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(312), 1,
      sym_at_identifier,
    ACTIONS(314), 1,
      sym_string,
    STATE(31), 1,
      aux_sym_sub_statement_repeat1,
    STATE(56), 1,
      sym_block,
    ACTIONS(308), 2,
      sym__comment,
      anon_sym_RBRACE,
    ACTIONS(310), 11,
      anon_sym_include,
      anon_sym_sub,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      anon_sym_hidden,
      sym_arg_modifier,
  [2502] = 7,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(304), 1,
      sym_at_identifier,
    ACTIONS(306), 1,
      sym_string,
    STATE(26), 1,
      aux_sym_sub_statement_repeat1,
    STATE(61), 1,
      sym_block,
    ACTIONS(300), 2,
      sym__comment,
      anon_sym_RBRACE,
    ACTIONS(302), 11,
      anon_sym_include,
      anon_sym_sub,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      anon_sym_hidden,
      sym_arg_modifier,
  [2535] = 7,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(296), 1,
      sym_at_identifier,
    ACTIONS(298), 1,
      sym_string,
    STATE(13), 1,
      aux_sym_sub_statement_repeat1,
    STATE(66), 1,
      sym_block,
    ACTIONS(292), 2,
      sym__comment,
      anon_sym_RBRACE,
    ACTIONS(294), 11,
      anon_sym_include,
      anon_sym_sub,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      anon_sym_hidden,
      sym_arg_modifier,
  [2568] = 7,
    ACTIONS(144), 1,
      sym_at_identifier,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(316), 1,
      sym_string,
    STATE(16), 1,
      aux_sym_arg_statement_repeat1,
    STATE(80), 1,
      sym_block,
    ACTIONS(214), 2,
      sym__comment,
      anon_sym_RBRACE,
    ACTIONS(216), 11,
      anon_sym_include,
      anon_sym_sub,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      anon_sym_hidden,
      sym_arg_modifier,
  [2601] = 7,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(288), 1,
      sym_at_identifier,
    ACTIONS(290), 1,
      sym_string,
    STATE(24), 1,
      aux_sym_sub_statement_repeat1,
    STATE(57), 1,
      sym_block,
    ACTIONS(284), 2,
      sym__comment,
      anon_sym_RBRACE,
    ACTIONS(286), 11,
      anon_sym_include,
      anon_sym_sub,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      anon_sym_hidden,
      sym_arg_modifier,
  [2634] = 7,
    ACTIONS(144), 1,
      sym_at_identifier,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(274), 1,
      sym_string,
    STATE(12), 1,
      aux_sym_arg_statement_repeat1,
    STATE(59), 1,
      sym_block,
    ACTIONS(152), 2,
      sym__comment,
      anon_sym_RBRACE,
    ACTIONS(154), 11,
      anon_sym_include,
      anon_sym_sub,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      anon_sym_hidden,
      sym_arg_modifier,
  [2667] = 2,
    ACTIONS(318), 5,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
    ACTIONS(320), 12,
      anon_sym_include,
      anon_sym_sub,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      anon_sym_hidden,
      sym_arg_modifier,
      sym_string,
  [2689] = 2,
    ACTIONS(412), 2,
      anon_sym_arg,
      anon_sym_flag,
    ACTIONS(410), 14,
      ts_builtin_sym_end,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      sym_arg_modifier,
  [2710] = 2,
    ACTIONS(416), 2,
      anon_sym_arg,
      anon_sym_flag,
    ACTIONS(414), 14,
      ts_builtin_sym_end,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      sym_arg_modifier,
  [2731] = 2,
    ACTIONS(326), 4,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(328), 12,
      anon_sym_include,
      anon_sym_sub,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      anon_sym_hidden,
      sym_arg_modifier,
      sym_string,
  [2752] = 2,
    ACTIONS(362), 4,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(364), 12,
      anon_sym_include,
      anon_sym_sub,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      anon_sym_hidden,
      sym_arg_modifier,
      sym_string,
  [2773] = 2,
    ACTIONS(378), 4,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(380), 12,
      anon_sym_include,
      anon_sym_sub,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      anon_sym_hidden,
      sym_arg_modifier,
      sym_string,
  [2794] = 2,
    ACTIONS(420), 2,
      anon_sym_arg,
      anon_sym_flag,
    ACTIONS(418), 14,
      ts_builtin_sym_end,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      sym_arg_modifier,
  [2815] = 2,
    ACTIONS(424), 2,
      anon_sym_arg,
      anon_sym_flag,
    ACTIONS(422), 14,
      ts_builtin_sym_end,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      sym_arg_modifier,
  [2836] = 2,
    ACTIONS(428), 2,
      anon_sym_arg,
      anon_sym_flag,
    ACTIONS(426), 14,
      ts_builtin_sym_end,
      anon_sym_defopts,
      anon_sym_defargs,
      anon_sym_defflags,
      anon_sym_defsubs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      sym_arg_modifier,
  [2857] = 2,
    ACTIONS(370), 4,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(372), 12,
      anon_sym_include,
      anon_sym_sub,
      anon_sym_desc,
      anon_sym_arg,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_flag,
      anon_sym_reqd,
      anon_sym_hidden,
      sym_arg_modifier,
      sym_string,
  [2878] = 2,
    ACTIONS(432), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(430), 10,
      anon_sym_include,
      sym__comment,
      anon_sym_sub,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2896] = 2,
    ACTIONS(436), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(434), 10,
      anon_sym_include,
      sym__comment,
      anon_sym_sub,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2914] = 2,
    ACTIONS(440), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(438), 10,
      anon_sym_include,
      sym__comment,
      anon_sym_sub,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2932] = 2,
    ACTIONS(444), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(442), 10,
      anon_sym_include,
      sym__comment,
      anon_sym_sub,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2950] = 2,
    ACTIONS(448), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(446), 10,
      anon_sym_include,
      sym__comment,
      anon_sym_sub,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2968] = 2,
    ACTIONS(372), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(370), 10,
      anon_sym_include,
      sym__comment,
      anon_sym_sub,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_opts,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      anon_sym_RBRACE,
  [2986] = 4,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 1,
      sym_string,
    STATE(38), 1,
      sym_flag_name_list,
    STATE(64), 2,
      sym__strings,
      sym__strings_list,
  [3000] = 4,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(452), 1,
      sym_string,
    STATE(82), 1,
      sym_flag_name_list,
    STATE(93), 2,
      sym__strings,
      sym__strings_list,
  [3014] = 4,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(454), 1,
      sym_string,
    STATE(83), 1,
      sym_sub_name_list,
    STATE(94), 2,
      sym__strings,
      sym__strings_list,
  [3028] = 4,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    ACTIONS(456), 1,
      sym_string,
    STATE(42), 1,
      sym_sub_name_list,
    STATE(69), 2,
      sym__strings,
      sym__strings_list,
  [3042] = 4,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 1,
      sym_string,
    STATE(41), 1,
      sym_flag_name_list,
    STATE(64), 2,
      sym__strings,
      sym__strings_list,
  [3056] = 4,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 1,
      sym_string,
    STATE(39), 1,
      sym_flag_name_list,
    STATE(64), 2,
      sym__strings,
      sym__strings_list,
  [3070] = 4,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(452), 1,
      sym_string,
    STATE(84), 1,
      sym_flag_name_list,
    STATE(93), 2,
      sym__strings,
      sym__strings_list,
  [3084] = 4,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 1,
      sym_string,
    STATE(40), 1,
      sym_flag_name_list,
    STATE(64), 2,
      sym__strings,
      sym__strings_list,
  [3098] = 4,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(452), 1,
      sym_string,
    STATE(85), 1,
      sym_flag_name_list,
    STATE(93), 2,
      sym__strings,
      sym__strings_list,
  [3112] = 4,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(452), 1,
      sym_string,
    STATE(87), 1,
      sym_flag_name_list,
    STATE(93), 2,
      sym__strings,
      sym__strings_list,
  [3126] = 3,
    ACTIONS(458), 1,
      sym_string,
    ACTIONS(460), 1,
      anon_sym_LPAREN,
    STATE(102), 2,
      sym__strings,
      sym__strings_list,
  [3137] = 4,
    ACTIONS(462), 1,
      anon_sym_const,
    ACTIONS(464), 1,
      anon_sym_shell,
    ACTIONS(466), 1,
      anon_sym_file,
    ACTIONS(468), 1,
      anon_sym_dir,
  [3150] = 3,
    ACTIONS(470), 1,
      sym_string,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      aux_sym__strings_list_repeat1,
  [3160] = 3,
    ACTIONS(87), 1,
      anon_sym_arg,
    ACTIONS(89), 1,
      anon_sym_args,
    STATE(34), 1,
      sym_arg_type,
  [3170] = 3,
    ACTIONS(470), 1,
      sym_string,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      aux_sym__strings_list_repeat1,
  [3180] = 3,
    ACTIONS(476), 1,
      sym_string,
    ACTIONS(479), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      aux_sym__strings_list_repeat1,
  [3190] = 3,
    ACTIONS(21), 1,
      anon_sym_arg,
    ACTIONS(23), 1,
      anon_sym_args,
    STATE(8), 1,
      sym_arg_type,
  [3200] = 3,
    ACTIONS(470), 1,
      sym_string,
    ACTIONS(481), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      aux_sym__strings_list_repeat1,
  [3210] = 2,
    ACTIONS(483), 1,
      anon_sym_flagarg,
    ACTIONS(485), 1,
      anon_sym_flag,
  [3217] = 2,
    ACTIONS(487), 1,
      anon_sym_flagarg,
    ACTIONS(489), 1,
      anon_sym_flag,
  [3224] = 2,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    STATE(97), 1,
      sym_block,
  [3231] = 2,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    STATE(96), 1,
      sym_block,
  [3238] = 2,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    STATE(95), 1,
      sym_block,
  [3245] = 2,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    STATE(90), 1,
      sym_block,
  [3252] = 2,
    ACTIONS(491), 1,
      sym_string,
    STATE(122), 1,
      aux_sym__strings_list_repeat1,
  [3259] = 2,
    ACTIONS(493), 1,
      sym_string,
    STATE(117), 1,
      aux_sym__strings_list_repeat1,
  [3266] = 2,
    ACTIONS(495), 1,
      sym_string,
    STATE(119), 1,
      aux_sym__strings_list_repeat1,
  [3273] = 2,
    ACTIONS(497), 1,
      anon_sym_flagarg,
    ACTIONS(499), 1,
      anon_sym_flag,
  [3280] = 1,
    ACTIONS(501), 1,
      sym_string,
  [3284] = 1,
    ACTIONS(503), 1,
      sym_at_identifier,
  [3288] = 1,
    ACTIONS(505), 1,
      sym_at_identifier,
  [3292] = 1,
    ACTIONS(507), 1,
      sym_string,
  [3296] = 1,
    ACTIONS(509), 1,
      sym_at_identifier,
  [3300] = 1,
    ACTIONS(511), 1,
      sym_at_identifier,
  [3304] = 1,
    ACTIONS(513), 1,
      sym_string,
  [3308] = 1,
    ACTIONS(515), 1,
      ts_builtin_sym_end,
  [3312] = 1,
    ACTIONS(517), 1,
      sym_at_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 59,
  [SMALL_STATE(6)] = 118,
  [SMALL_STATE(7)] = 177,
  [SMALL_STATE(8)] = 223,
  [SMALL_STATE(9)] = 269,
  [SMALL_STATE(10)] = 305,
  [SMALL_STATE(11)] = 341,
  [SMALL_STATE(12)] = 377,
  [SMALL_STATE(13)] = 413,
  [SMALL_STATE(14)] = 449,
  [SMALL_STATE(15)] = 485,
  [SMALL_STATE(16)] = 521,
  [SMALL_STATE(17)] = 557,
  [SMALL_STATE(18)] = 593,
  [SMALL_STATE(19)] = 629,
  [SMALL_STATE(20)] = 665,
  [SMALL_STATE(21)] = 701,
  [SMALL_STATE(22)] = 737,
  [SMALL_STATE(23)] = 773,
  [SMALL_STATE(24)] = 809,
  [SMALL_STATE(25)] = 845,
  [SMALL_STATE(26)] = 881,
  [SMALL_STATE(27)] = 917,
  [SMALL_STATE(28)] = 953,
  [SMALL_STATE(29)] = 989,
  [SMALL_STATE(30)] = 1025,
  [SMALL_STATE(31)] = 1061,
  [SMALL_STATE(32)] = 1097,
  [SMALL_STATE(33)] = 1128,
  [SMALL_STATE(34)] = 1171,
  [SMALL_STATE(35)] = 1214,
  [SMALL_STATE(36)] = 1245,
  [SMALL_STATE(37)] = 1271,
  [SMALL_STATE(38)] = 1307,
  [SMALL_STATE(39)] = 1343,
  [SMALL_STATE(40)] = 1379,
  [SMALL_STATE(41)] = 1415,
  [SMALL_STATE(42)] = 1451,
  [SMALL_STATE(43)] = 1487,
  [SMALL_STATE(44)] = 1523,
  [SMALL_STATE(45)] = 1548,
  [SMALL_STATE(46)] = 1572,
  [SMALL_STATE(47)] = 1596,
  [SMALL_STATE(48)] = 1620,
  [SMALL_STATE(49)] = 1644,
  [SMALL_STATE(50)] = 1668,
  [SMALL_STATE(51)] = 1692,
  [SMALL_STATE(52)] = 1716,
  [SMALL_STATE(53)] = 1740,
  [SMALL_STATE(54)] = 1764,
  [SMALL_STATE(55)] = 1788,
  [SMALL_STATE(56)] = 1812,
  [SMALL_STATE(57)] = 1836,
  [SMALL_STATE(58)] = 1860,
  [SMALL_STATE(59)] = 1884,
  [SMALL_STATE(60)] = 1908,
  [SMALL_STATE(61)] = 1932,
  [SMALL_STATE(62)] = 1956,
  [SMALL_STATE(63)] = 1980,
  [SMALL_STATE(64)] = 2004,
  [SMALL_STATE(65)] = 2028,
  [SMALL_STATE(66)] = 2052,
  [SMALL_STATE(67)] = 2076,
  [SMALL_STATE(68)] = 2100,
  [SMALL_STATE(69)] = 2124,
  [SMALL_STATE(70)] = 2148,
  [SMALL_STATE(71)] = 2172,
  [SMALL_STATE(72)] = 2196,
  [SMALL_STATE(73)] = 2220,
  [SMALL_STATE(74)] = 2244,
  [SMALL_STATE(75)] = 2268,
  [SMALL_STATE(76)] = 2292,
  [SMALL_STATE(77)] = 2316,
  [SMALL_STATE(78)] = 2340,
  [SMALL_STATE(79)] = 2364,
  [SMALL_STATE(80)] = 2388,
  [SMALL_STATE(81)] = 2412,
  [SMALL_STATE(82)] = 2436,
  [SMALL_STATE(83)] = 2469,
  [SMALL_STATE(84)] = 2502,
  [SMALL_STATE(85)] = 2535,
  [SMALL_STATE(86)] = 2568,
  [SMALL_STATE(87)] = 2601,
  [SMALL_STATE(88)] = 2634,
  [SMALL_STATE(89)] = 2667,
  [SMALL_STATE(90)] = 2689,
  [SMALL_STATE(91)] = 2710,
  [SMALL_STATE(92)] = 2731,
  [SMALL_STATE(93)] = 2752,
  [SMALL_STATE(94)] = 2773,
  [SMALL_STATE(95)] = 2794,
  [SMALL_STATE(96)] = 2815,
  [SMALL_STATE(97)] = 2836,
  [SMALL_STATE(98)] = 2857,
  [SMALL_STATE(99)] = 2878,
  [SMALL_STATE(100)] = 2896,
  [SMALL_STATE(101)] = 2914,
  [SMALL_STATE(102)] = 2932,
  [SMALL_STATE(103)] = 2950,
  [SMALL_STATE(104)] = 2968,
  [SMALL_STATE(105)] = 2986,
  [SMALL_STATE(106)] = 3000,
  [SMALL_STATE(107)] = 3014,
  [SMALL_STATE(108)] = 3028,
  [SMALL_STATE(109)] = 3042,
  [SMALL_STATE(110)] = 3056,
  [SMALL_STATE(111)] = 3070,
  [SMALL_STATE(112)] = 3084,
  [SMALL_STATE(113)] = 3098,
  [SMALL_STATE(114)] = 3112,
  [SMALL_STATE(115)] = 3126,
  [SMALL_STATE(116)] = 3137,
  [SMALL_STATE(117)] = 3150,
  [SMALL_STATE(118)] = 3160,
  [SMALL_STATE(119)] = 3170,
  [SMALL_STATE(120)] = 3180,
  [SMALL_STATE(121)] = 3190,
  [SMALL_STATE(122)] = 3200,
  [SMALL_STATE(123)] = 3210,
  [SMALL_STATE(124)] = 3217,
  [SMALL_STATE(125)] = 3224,
  [SMALL_STATE(126)] = 3231,
  [SMALL_STATE(127)] = 3238,
  [SMALL_STATE(128)] = 3245,
  [SMALL_STATE(129)] = 3252,
  [SMALL_STATE(130)] = 3259,
  [SMALL_STATE(131)] = 3266,
  [SMALL_STATE(132)] = 3273,
  [SMALL_STATE(133)] = 3280,
  [SMALL_STATE(134)] = 3284,
  [SMALL_STATE(135)] = 3288,
  [SMALL_STATE(136)] = 3292,
  [SMALL_STATE(137)] = 3296,
  [SMALL_STATE(138)] = 3300,
  [SMALL_STATE(139)] = 3304,
  [SMALL_STATE(140)] = 3308,
  [SMALL_STATE(141)] = 3312,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(134),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(137),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(138),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(141),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(108),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(139),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(136),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(110),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(105),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(132),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(121),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(135),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(6),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(107),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(136),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(89),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(89),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(116),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(114),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(106),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(132),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(118),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 4, .production_id = 9),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 4, .production_id = 9),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 3, .production_id = 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 3, .production_id = 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 4, .production_id = 9),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 4, .production_id = 9),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 3, .production_id = 5),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 3, .production_id = 5),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 4, .production_id = 7),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 4, .production_id = 7),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_statement, 3, .production_id = 4),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_statement, 3, .production_id = 4),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 4, .production_id = 8),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 4, .production_id = 8),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 4),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 4),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 4, .production_id = 4),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 4, .production_id = 4),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 4, .production_id = 4),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 4, .production_id = 4),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 3, .production_id = 4),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 3, .production_id = 4),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_statement, 4, .production_id = 4),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_statement, 4, .production_id = 4),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 3),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 3, .production_id = 4),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 3, .production_id = 4),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 3, .production_id = 1),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 3, .production_id = 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 5, .production_id = 9),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 5, .production_id = 9),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 4, .production_id = 7),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 4, .production_id = 7),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 2, .production_id = 3),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 2, .production_id = 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 5, .production_id = 10),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 5, .production_id = 10),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 5, .production_id = 9),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 5, .production_id = 9),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_statement, 3, .production_id = 1),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_statement, 3, .production_id = 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_statement_repeat1, 2, .production_id = 6),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_statement_repeat1, 2, .production_id = 6), SHIFT_REPEAT(36),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arg_statement_repeat1, 2, .production_id = 6),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sub_statement_repeat1, 2),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sub_statement_repeat1, 2), SHIFT_REPEAT(35),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sub_statement_repeat1, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_statement_repeat1, 1, .production_id = 2),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arg_statement_repeat1, 1, .production_id = 2),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 2, .production_id = 1),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 2, .production_id = 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 2, .production_id = 1),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 2, .production_id = 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 3, .production_id = 7),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 3, .production_id = 7),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 3, .production_id = 7),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 3, .production_id = 7),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_statement, 2, .production_id = 1),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_statement, 2, .production_id = 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_type, 1),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_type, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 6, .production_id = 10),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 6, .production_id = 10),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_name_list, 1),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_name_list, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 5, .production_id = 7),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 5, .production_id = 7),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 5, .production_id = 8),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 5, .production_id = 8),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 5),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 5),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 5, .production_id = 4),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 5, .production_id = 4),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 5, .production_id = 4),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 5, .production_id = 4),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_statement, 5, .production_id = 4),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_statement, 5, .production_id = 4),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 3, .production_id = 3),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 3, .production_id = 3),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_name_list, 1),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_name_list, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_desc_statement, 2),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_desc_statement, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__strings_list, 3),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__strings_list, 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 4, .production_id = 5),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 4, .production_id = 5),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_name_list, 1),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_name_list, 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 5, .production_id = 7),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 5, .production_id = 7),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_statement, 4, .production_id = 1),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_statement, 4, .production_id = 1),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 4, .production_id = 1),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 4, .production_id = 1),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 6, .production_id = 9),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 6, .production_id = 9),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 4, .production_id = 1),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 4, .production_id = 1),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 6, .production_id = 9),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 6, .production_id = 9),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defsubs_statement, 3),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defsubs_statement, 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_statement, 2),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_statement, 2),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defflags_statement, 3),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defflags_statement, 3),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defargs_statement, 3),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defargs_statement, 3),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defopts_statement, 3),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defopts_statement, 3),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 2),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 2),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opts_dir_statement, 2),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opts_dir_statement, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opts_file_statement, 2),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opts_file_statement, 2),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opts_const_statement, 3),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opts_const_statement, 3),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opts_shell_statement, 3),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opts_shell_statement, 3),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__strings_list_repeat1, 2), SHIFT_REPEAT(120),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__strings_list_repeat1, 2),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_modifier, 1),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_modifier, 1),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [515] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
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
