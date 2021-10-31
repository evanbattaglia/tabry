#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 136
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
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
  anon_sym_arg = 9,
  anon_sym_args = 10,
  anon_sym_opts = 11,
  anon_sym_const = 12,
  anon_sym_shell = 13,
  anon_sym_file = 14,
  anon_sym_dir = 15,
  anon_sym_flagarg = 16,
  anon_sym_flag = 17,
  anon_sym_reqd = 18,
  anon_sym_hidden = 19,
  sym_arg_modifier = 20,
  anon_sym_LBRACE = 21,
  anon_sym_RBRACE = 22,
  sym_string = 23,
  anon_sym_LPAREN = 24,
  anon_sym_RPAREN = 25,
  sym_source_file = 26,
  sym__toplevel_statement = 27,
  sym__common_statement = 28,
  sym__block_statement = 29,
  sym_include_statement = 30,
  sym_defopts_statement = 31,
  sym_defargs_statement = 32,
  sym_sub_statement = 33,
  sym_cmd_statement = 34,
  sym_desc_statement = 35,
  sym_arg_type = 36,
  sym_arg_statement = 37,
  sym_opts_const_statement = 38,
  sym_opts_shell_statement = 39,
  sym_opts_file_statement = 40,
  sym_opts_dir_statement = 41,
  sym_flagarg_statement = 42,
  sym_flag_statement = 43,
  sym_flag_modifier = 44,
  sym_block = 45,
  sym_flag_name_list = 46,
  sym_arg_name_list = 47,
  sym_sub_name_list = 48,
  sym__strings = 49,
  sym__strings_list = 50,
  aux_sym_source_file_repeat1 = 51,
  aux_sym_sub_statement_repeat1 = 52,
  aux_sym_arg_statement_repeat1 = 53,
  aux_sym_block_repeat1 = 54,
  aux_sym__strings_list_repeat1 = 55,
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
      if (eof) ADVANCE(53);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '(') ADVANCE(134);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'c') ADVANCE(32);
      if (lookahead == 'd') ADVANCE(14);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'h') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == 's') ADVANCE(25);
      if (lookahead == '{') ADVANCE(89);
      if (lookahead == '}') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '(') ADVANCE(134);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == 'd') ADVANCE(106);
      if (lookahead == 'f') ADVANCE(113);
      if (lookahead == 'h') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(117);
      if (lookahead == 'o') ADVANCE(120);
      if (lookahead == 'r') ADVANCE(103);
      if (lookahead == 's') ADVANCE(131);
      if (lookahead == '{') ADVANCE(89);
      if (lookahead == '}') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(134);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(91);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 6:
      if (lookahead == 'b') ADVANCE(62);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(82);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 20:
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 21:
      if (lookahead == 'g') ADVANCE(68);
      END_STATE();
    case 22:
      if (lookahead == 'g') ADVANCE(80);
      END_STATE();
    case 23:
      if (lookahead == 'g') ADVANCE(78);
      END_STATE();
    case 24:
      if (lookahead == 'g') ADVANCE(43);
      END_STATE();
    case 25:
      if (lookahead == 'h') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(4);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 32:
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 36:
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 37:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 38:
      if (lookahead == 'q') ADVANCE(10);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 50:
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 51:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 52:
      if (eof) ADVANCE(53);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '(') ADVANCE(134);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == 'c') ADVANCE(115);
      if (lookahead == 'd') ADVANCE(102);
      if (lookahead == 'f') ADVANCE(113);
      if (lookahead == 'h') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(103);
      if (lookahead == 's') ADVANCE(131);
      if (lookahead == '{') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_defopts);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_defopts);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_defargs);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_defargs);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_at_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_sub);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_cmd);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_desc);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_desc);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_arg);
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_arg);
      if (lookahead == 's') ADVANCE(71);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_args);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_args);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_opts);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_opts);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_shell);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_dir);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_flagarg);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_flagarg);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_flag);
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_flag);
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_reqd);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_reqd);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_hidden);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_hidden);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_arg_modifier);
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_arg_modifier);
      if (lookahead == 's') ADVANCE(73);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_arg_modifier);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(119);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'b') ADVANCE(63);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'c') ADVANCE(67);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'c') ADVANCE(114);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'd') ADVANCE(65);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'd') ADVANCE(83);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'd') ADVANCE(104);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'd') ADVANCE(99);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'd') ADVANCE(105);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'f') ADVANCE(93);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'g') ADVANCE(69);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'g') ADVANCE(81);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'g') ADVANCE(126);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'g') ADVANCE(79);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'i') ADVANCE(100);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'l') ADVANCE(92);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'l') ADVANCE(132);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'm') ADVANCE(97);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(85);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'p') ADVANCE(128);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'p') ADVANCE(130);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'p') ADVANCE(129);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'q') ADVANCE(98);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(108);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(110);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(111);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 's') ADVANCE(57);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(127);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'u') ADVANCE(94);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'u') ADVANCE(101);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 135:
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
  [7] = {.lex_state = 52},
  [8] = {.lex_state = 52},
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
  [36] = {.lex_state = 52},
  [37] = {.lex_state = 52},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 52},
  [40] = {.lex_state = 52},
  [41] = {.lex_state = 52},
  [42] = {.lex_state = 52},
  [43] = {.lex_state = 52},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 52},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 52},
  [62] = {.lex_state = 0},
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
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 52},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 52},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 52},
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
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
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
    [sym_source_file] = STATE(129),
    [sym__toplevel_statement] = STATE(6),
    [sym__common_statement] = STATE(6),
    [sym_defopts_statement] = STATE(6),
    [sym_defargs_statement] = STATE(6),
    [sym_sub_statement] = STATE(6),
    [sym_cmd_statement] = STATE(6),
    [sym_desc_statement] = STATE(6),
    [sym_arg_type] = STATE(8),
    [sym_arg_statement] = STATE(6),
    [sym_flagarg_statement] = STATE(6),
    [sym_flag_statement] = STATE(6),
    [sym_flag_modifier] = STATE(127),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_defopts] = ACTIONS(5),
    [anon_sym_defargs] = ACTIONS(7),
    [sym__comment] = ACTIONS(9),
    [anon_sym_sub] = ACTIONS(11),
    [anon_sym_cmd] = ACTIONS(13),
    [anon_sym_desc] = ACTIONS(15),
    [anon_sym_arg] = ACTIONS(17),
    [anon_sym_args] = ACTIONS(19),
    [anon_sym_flagarg] = ACTIONS(21),
    [anon_sym_flag] = ACTIONS(23),
    [anon_sym_reqd] = ACTIONS(25),
    [anon_sym_hidden] = ACTIONS(25),
    [sym_arg_modifier] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(15), 1,
      anon_sym_desc,
    ACTIONS(29), 1,
      anon_sym_include,
    ACTIONS(31), 1,
      sym__comment,
    ACTIONS(33), 1,
      anon_sym_sub,
    ACTIONS(35), 1,
      anon_sym_arg,
    ACTIONS(37), 1,
      anon_sym_args,
    ACTIONS(39), 1,
      anon_sym_opts,
    ACTIONS(41), 1,
      anon_sym_flagarg,
    ACTIONS(43), 1,
      anon_sym_flag,
    ACTIONS(45), 1,
      sym_arg_modifier,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      sym_arg_type,
    STATE(128), 1,
      sym_flag_modifier,
    ACTIONS(25), 2,
      anon_sym_reqd,
      anon_sym_hidden,
    STATE(3), 13,
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
    ACTIONS(49), 1,
      anon_sym_include,
    ACTIONS(52), 1,
      sym__comment,
    ACTIONS(55), 1,
      anon_sym_sub,
    ACTIONS(58), 1,
      anon_sym_desc,
    ACTIONS(61), 1,
      anon_sym_arg,
    ACTIONS(64), 1,
      anon_sym_args,
    ACTIONS(67), 1,
      anon_sym_opts,
    ACTIONS(70), 1,
      anon_sym_flagarg,
    ACTIONS(73), 1,
      anon_sym_flag,
    ACTIONS(79), 1,
      sym_arg_modifier,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      sym_arg_type,
    STATE(128), 1,
      sym_flag_modifier,
    ACTIONS(76), 2,
      anon_sym_reqd,
      anon_sym_hidden,
    STATE(3), 13,
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
    ACTIONS(15), 1,
      anon_sym_desc,
    ACTIONS(29), 1,
      anon_sym_include,
    ACTIONS(33), 1,
      anon_sym_sub,
    ACTIONS(35), 1,
      anon_sym_arg,
    ACTIONS(37), 1,
      anon_sym_args,
    ACTIONS(39), 1,
      anon_sym_opts,
    ACTIONS(41), 1,
      anon_sym_flagarg,
    ACTIONS(43), 1,
      anon_sym_flag,
    ACTIONS(45), 1,
      sym_arg_modifier,
    ACTIONS(84), 1,
      sym__comment,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      sym_arg_type,
    STATE(128), 1,
      sym_flag_modifier,
    ACTIONS(25), 2,
      anon_sym_reqd,
      anon_sym_hidden,
    STATE(2), 13,
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
  [177] = 16,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(90), 1,
      anon_sym_defopts,
    ACTIONS(93), 1,
      anon_sym_defargs,
    ACTIONS(96), 1,
      sym__comment,
    ACTIONS(99), 1,
      anon_sym_sub,
    ACTIONS(102), 1,
      anon_sym_cmd,
    ACTIONS(105), 1,
      anon_sym_desc,
    ACTIONS(108), 1,
      anon_sym_arg,
    ACTIONS(111), 1,
      anon_sym_args,
    ACTIONS(114), 1,
      anon_sym_flagarg,
    ACTIONS(117), 1,
      anon_sym_flag,
    ACTIONS(123), 1,
      sym_arg_modifier,
    STATE(8), 1,
      sym_arg_type,
    STATE(127), 1,
      sym_flag_modifier,
    ACTIONS(120), 2,
      anon_sym_reqd,
      anon_sym_hidden,
    STATE(5), 11,
      sym__toplevel_statement,
      sym__common_statement,
      sym_defopts_statement,
      sym_defargs_statement,
      sym_sub_statement,
      sym_cmd_statement,
      sym_desc_statement,
      sym_arg_statement,
      sym_flagarg_statement,
      sym_flag_statement,
      aux_sym_source_file_repeat1,
  [237] = 16,
    ACTIONS(5), 1,
      anon_sym_defopts,
    ACTIONS(7), 1,
      anon_sym_defargs,
    ACTIONS(11), 1,
      anon_sym_sub,
    ACTIONS(13), 1,
      anon_sym_cmd,
    ACTIONS(15), 1,
      anon_sym_desc,
    ACTIONS(17), 1,
      anon_sym_arg,
    ACTIONS(19), 1,
      anon_sym_args,
    ACTIONS(21), 1,
      anon_sym_flagarg,
    ACTIONS(23), 1,
      anon_sym_flag,
    ACTIONS(27), 1,
      sym_arg_modifier,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(128), 1,
      sym__comment,
    STATE(8), 1,
      sym_arg_type,
    STATE(127), 1,
      sym_flag_modifier,
    ACTIONS(25), 2,
      anon_sym_reqd,
      anon_sym_hidden,
    STATE(5), 11,
      sym__toplevel_statement,
      sym__common_statement,
      sym_defopts_statement,
      sym_defargs_statement,
      sym_sub_statement,
      sym_cmd_statement,
      sym_desc_statement,
      sym_arg_statement,
      sym_flagarg_statement,
      sym_flag_statement,
      aux_sym_source_file_repeat1,
  [297] = 10,
    ACTIONS(134), 1,
      sym_at_identifier,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(138), 1,
      sym_string,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      aux_sym_arg_statement_repeat1,
    STATE(42), 1,
      sym_arg_name_list,
    STATE(56), 1,
      sym_block,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      sym__comment,
    STATE(83), 2,
      sym__strings,
      sym__strings_list,
    ACTIONS(132), 12,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [341] = 10,
    ACTIONS(134), 1,
      sym_at_identifier,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(138), 1,
      sym_string,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      aux_sym_arg_statement_repeat1,
    STATE(36), 1,
      sym_arg_name_list,
    STATE(84), 1,
      sym_block,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      sym__comment,
    STATE(83), 2,
      sym__strings,
      sym__strings_list,
    ACTIONS(144), 12,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [385] = 10,
    ACTIONS(134), 1,
      sym_at_identifier,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(146), 1,
      sym_string,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      aux_sym_arg_statement_repeat1,
    STATE(46), 1,
      sym_arg_name_list,
    STATE(84), 1,
      sym_block,
    ACTIONS(142), 2,
      sym__comment,
      anon_sym_RBRACE,
    STATE(91), 2,
      sym__strings,
      sym__strings_list,
    ACTIONS(144), 11,
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
  [428] = 10,
    ACTIONS(134), 1,
      sym_at_identifier,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(146), 1,
      sym_string,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      aux_sym_arg_statement_repeat1,
    STATE(45), 1,
      sym_arg_name_list,
    STATE(56), 1,
      sym_block,
    ACTIONS(130), 2,
      sym__comment,
      anon_sym_RBRACE,
    STATE(91), 2,
      sym__strings,
      sym__strings_list,
    ACTIONS(132), 11,
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
  [471] = 6,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(152), 1,
      sym_at_identifier,
    STATE(29), 1,
      aux_sym_sub_statement_repeat1,
    STATE(63), 1,
      sym_block,
    ACTIONS(154), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(150), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [505] = 6,
    ACTIONS(134), 1,
      sym_at_identifier,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      aux_sym_arg_statement_repeat1,
    STATE(60), 1,
      sym_block,
    ACTIONS(158), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(156), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [539] = 6,
    ACTIONS(134), 1,
      sym_at_identifier,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      aux_sym_arg_statement_repeat1,
    STATE(76), 1,
      sym_block,
    ACTIONS(162), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(160), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [573] = 6,
    ACTIONS(134), 1,
      sym_at_identifier,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      aux_sym_arg_statement_repeat1,
    STATE(85), 1,
      sym_block,
    ACTIONS(162), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(160), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [607] = 6,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      sym_at_identifier,
    STATE(34), 1,
      aux_sym_sub_statement_repeat1,
    STATE(58), 1,
      sym_block,
    ACTIONS(168), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(164), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [641] = 6,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      sym_at_identifier,
    STATE(34), 1,
      aux_sym_sub_statement_repeat1,
    STATE(62), 1,
      sym_block,
    ACTIONS(172), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(170), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [675] = 6,
    ACTIONS(134), 1,
      sym_at_identifier,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      aux_sym_arg_statement_repeat1,
    STATE(64), 1,
      sym_block,
    ACTIONS(176), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(174), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [709] = 6,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      sym_at_identifier,
    STATE(34), 1,
      aux_sym_sub_statement_repeat1,
    STATE(66), 1,
      sym_block,
    ACTIONS(180), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(178), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [743] = 6,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      sym_at_identifier,
    STATE(34), 1,
      aux_sym_sub_statement_repeat1,
    STATE(72), 1,
      sym_block,
    ACTIONS(184), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(182), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [777] = 6,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      sym_at_identifier,
    STATE(15), 1,
      aux_sym_sub_statement_repeat1,
    STATE(68), 1,
      sym_block,
    ACTIONS(190), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(186), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [811] = 6,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      sym_at_identifier,
    STATE(34), 1,
      aux_sym_sub_statement_repeat1,
    STATE(71), 1,
      sym_block,
    ACTIONS(194), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(192), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      sym_at_identifier,
    STATE(16), 1,
      aux_sym_sub_statement_repeat1,
    STATE(52), 1,
      sym_block,
    ACTIONS(200), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(196), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [879] = 6,
    ACTIONS(134), 1,
      sym_at_identifier,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      aux_sym_arg_statement_repeat1,
    STATE(74), 1,
      sym_block,
    ACTIONS(204), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(202), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [913] = 6,
    ACTIONS(134), 1,
      sym_at_identifier,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      aux_sym_arg_statement_repeat1,
    STATE(73), 1,
      sym_block,
    ACTIONS(208), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(206), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [947] = 6,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      sym_at_identifier,
    STATE(32), 1,
      aux_sym_sub_statement_repeat1,
    STATE(70), 1,
      sym_block,
    ACTIONS(214), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(210), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [981] = 6,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      sym_at_identifier,
    STATE(34), 1,
      aux_sym_sub_statement_repeat1,
    STATE(69), 1,
      sym_block,
    ACTIONS(218), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(216), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [1015] = 6,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(222), 1,
      sym_at_identifier,
    STATE(30), 1,
      aux_sym_sub_statement_repeat1,
    STATE(67), 1,
      sym_block,
    ACTIONS(224), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(220), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [1049] = 6,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      sym_at_identifier,
    STATE(34), 1,
      aux_sym_sub_statement_repeat1,
    STATE(65), 1,
      sym_block,
    ACTIONS(228), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(226), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [1083] = 6,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      sym_at_identifier,
    STATE(34), 1,
      aux_sym_sub_statement_repeat1,
    STATE(80), 1,
      sym_block,
    ACTIONS(232), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(230), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [1117] = 6,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      sym_at_identifier,
    STATE(34), 1,
      aux_sym_sub_statement_repeat1,
    STATE(53), 1,
      sym_block,
    ACTIONS(236), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(234), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [1151] = 6,
    ACTIONS(134), 1,
      sym_at_identifier,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      aux_sym_arg_statement_repeat1,
    STATE(75), 1,
      sym_block,
    ACTIONS(208), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(206), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [1185] = 6,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      sym_at_identifier,
    STATE(34), 1,
      aux_sym_sub_statement_repeat1,
    STATE(78), 1,
      sym_block,
    ACTIONS(240), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(238), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [1219] = 6,
    ACTIONS(134), 1,
      sym_at_identifier,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      aux_sym_arg_statement_repeat1,
    STATE(77), 1,
      sym_block,
    ACTIONS(244), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(242), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [1253] = 4,
    ACTIONS(248), 1,
      sym_at_identifier,
    STATE(34), 1,
      aux_sym_sub_statement_repeat1,
    ACTIONS(251), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(246), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [1282] = 4,
    ACTIONS(255), 1,
      sym_at_identifier,
    STATE(35), 1,
      aux_sym_arg_statement_repeat1,
    ACTIONS(258), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(253), 15,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [1311] = 7,
    ACTIONS(134), 1,
      sym_at_identifier,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(260), 1,
      sym_string,
    STATE(14), 1,
      aux_sym_arg_statement_repeat1,
    STATE(56), 1,
      sym_block,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      sym__comment,
    ACTIONS(132), 12,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [1345] = 7,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      sym_at_identifier,
    ACTIONS(268), 1,
      sym_string,
    STATE(21), 1,
      aux_sym_sub_statement_repeat1,
    STATE(87), 1,
      sym_block,
    ACTIONS(262), 2,
      ts_builtin_sym_end,
      sym__comment,
    ACTIONS(264), 12,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [1379] = 2,
    ACTIONS(272), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(270), 16,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [1403] = 7,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      sym_at_identifier,
    ACTIONS(280), 1,
      sym_string,
    STATE(19), 1,
      aux_sym_sub_statement_repeat1,
    STATE(55), 1,
      sym_block,
    ACTIONS(274), 2,
      ts_builtin_sym_end,
      sym__comment,
    ACTIONS(276), 12,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [1437] = 7,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(286), 1,
      sym_at_identifier,
    ACTIONS(288), 1,
      sym_string,
    STATE(26), 1,
      aux_sym_sub_statement_repeat1,
    STATE(54), 1,
      sym_block,
    ACTIONS(282), 2,
      ts_builtin_sym_end,
      sym__comment,
    ACTIONS(284), 12,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [1471] = 7,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(294), 1,
      sym_at_identifier,
    ACTIONS(296), 1,
      sym_string,
    STATE(28), 1,
      aux_sym_sub_statement_repeat1,
    STATE(79), 1,
      sym_block,
    ACTIONS(290), 2,
      ts_builtin_sym_end,
      sym__comment,
    ACTIONS(292), 12,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [1505] = 7,
    ACTIONS(134), 1,
      sym_at_identifier,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(298), 1,
      sym_string,
    STATE(31), 1,
      aux_sym_arg_statement_repeat1,
    STATE(74), 1,
      sym_block,
    ACTIONS(202), 2,
      ts_builtin_sym_end,
      sym__comment,
    ACTIONS(204), 12,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [1539] = 7,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(304), 1,
      sym_at_identifier,
    ACTIONS(306), 1,
      sym_string,
    STATE(18), 1,
      aux_sym_sub_statement_repeat1,
    STATE(89), 1,
      sym_block,
    ACTIONS(300), 2,
      ts_builtin_sym_end,
      sym__comment,
    ACTIONS(302), 12,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [1573] = 7,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      sym_at_identifier,
    ACTIONS(280), 1,
      sym_string,
    STATE(19), 1,
      aux_sym_sub_statement_repeat1,
    STATE(55), 1,
      sym_block,
    ACTIONS(274), 2,
      sym__comment,
      anon_sym_RBRACE,
    ACTIONS(276), 11,
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
  [1606] = 7,
    ACTIONS(134), 1,
      sym_at_identifier,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(298), 1,
      sym_string,
    STATE(31), 1,
      aux_sym_arg_statement_repeat1,
    STATE(74), 1,
      sym_block,
    ACTIONS(202), 2,
      sym__comment,
      anon_sym_RBRACE,
    ACTIONS(204), 11,
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
  [1639] = 7,
    ACTIONS(134), 1,
      sym_at_identifier,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(260), 1,
      sym_string,
    STATE(14), 1,
      aux_sym_arg_statement_repeat1,
    STATE(56), 1,
      sym_block,
    ACTIONS(130), 2,
      sym__comment,
      anon_sym_RBRACE,
    ACTIONS(132), 11,
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
  [1672] = 2,
    ACTIONS(308), 5,
      ts_builtin_sym_end,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
    ACTIONS(310), 13,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [1695] = 7,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      sym_at_identifier,
    ACTIONS(268), 1,
      sym_string,
    STATE(21), 1,
      aux_sym_sub_statement_repeat1,
    STATE(87), 1,
      sym_block,
    ACTIONS(262), 2,
      sym__comment,
      anon_sym_RBRACE,
    ACTIONS(264), 11,
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
  [1728] = 7,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(304), 1,
      sym_at_identifier,
    ACTIONS(306), 1,
      sym_string,
    STATE(18), 1,
      aux_sym_sub_statement_repeat1,
    STATE(89), 1,
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
  [1761] = 7,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(294), 1,
      sym_at_identifier,
    ACTIONS(296), 1,
      sym_string,
    STATE(28), 1,
      aux_sym_sub_statement_repeat1,
    STATE(79), 1,
      sym_block,
    ACTIONS(290), 2,
      sym__comment,
      anon_sym_RBRACE,
    ACTIONS(292), 11,
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
  [1794] = 7,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(286), 1,
      sym_at_identifier,
    ACTIONS(288), 1,
      sym_string,
    STATE(26), 1,
      aux_sym_sub_statement_repeat1,
    STATE(54), 1,
      sym_block,
    ACTIONS(282), 2,
      sym__comment,
      anon_sym_RBRACE,
    ACTIONS(284), 11,
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
  [1827] = 2,
    ACTIONS(172), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(170), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [1849] = 2,
    ACTIONS(314), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(312), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [1871] = 2,
    ACTIONS(218), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(216), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [1893] = 2,
    ACTIONS(184), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(182), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [1915] = 2,
    ACTIONS(204), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(202), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [1937] = 2,
    ACTIONS(308), 5,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
    ACTIONS(310), 12,
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
  [1959] = 2,
    ACTIONS(318), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(316), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [1981] = 2,
    ACTIONS(322), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(320), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [2003] = 2,
    ACTIONS(326), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(324), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [2025] = 2,
    ACTIONS(328), 4,
      ts_builtin_sym_end,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
    ACTIONS(330), 13,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [2047] = 2,
    ACTIONS(334), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(332), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [2069] = 2,
    ACTIONS(232), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(230), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [2091] = 2,
    ACTIONS(338), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(336), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [2113] = 2,
    ACTIONS(342), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(340), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [2135] = 2,
    ACTIONS(346), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(344), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [2157] = 2,
    ACTIONS(236), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(234), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [2179] = 2,
    ACTIONS(168), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(164), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [2201] = 2,
    ACTIONS(350), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(348), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [2223] = 2,
    ACTIONS(240), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(238), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [2245] = 2,
    ACTIONS(354), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(352), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [2267] = 2,
    ACTIONS(358), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(356), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [2289] = 2,
    ACTIONS(362), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(360), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [2311] = 2,
    ACTIONS(244), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(242), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [2333] = 2,
    ACTIONS(362), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(360), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [2355] = 2,
    ACTIONS(366), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(364), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [2377] = 2,
    ACTIONS(370), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(368), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [2399] = 2,
    ACTIONS(374), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(372), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [2421] = 2,
    ACTIONS(228), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(226), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [2443] = 2,
    ACTIONS(378), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(376), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [2465] = 2,
    ACTIONS(380), 4,
      ts_builtin_sym_end,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
    ACTIONS(382), 13,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [2487] = 2,
    ACTIONS(386), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(384), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [2509] = 2,
    ACTIONS(388), 4,
      ts_builtin_sym_end,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
    ACTIONS(390), 13,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [2531] = 2,
    ACTIONS(132), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(130), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [2553] = 2,
    ACTIONS(366), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(364), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [2575] = 2,
    ACTIONS(392), 4,
      ts_builtin_sym_end,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
    ACTIONS(394), 13,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [2597] = 2,
    ACTIONS(194), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(192), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [2619] = 2,
    ACTIONS(398), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(396), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [2641] = 2,
    ACTIONS(180), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(178), 14,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_defopts,
      anon_sym_defargs,
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
  [2663] = 2,
    ACTIONS(328), 4,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(330), 12,
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
  [2684] = 2,
    ACTIONS(388), 4,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(390), 12,
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
  [2705] = 2,
    ACTIONS(392), 4,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(394), 12,
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
  [2726] = 2,
    ACTIONS(380), 4,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(382), 12,
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
  [2747] = 2,
    ACTIONS(402), 2,
      anon_sym_arg,
      anon_sym_flag,
    ACTIONS(400), 12,
      ts_builtin_sym_end,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      sym_arg_modifier,
  [2766] = 2,
    ACTIONS(406), 2,
      anon_sym_arg,
      anon_sym_flag,
    ACTIONS(404), 12,
      ts_builtin_sym_end,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      sym_arg_modifier,
  [2785] = 2,
    ACTIONS(410), 2,
      anon_sym_arg,
      anon_sym_flag,
    ACTIONS(408), 12,
      ts_builtin_sym_end,
      anon_sym_defopts,
      anon_sym_defargs,
      sym__comment,
      anon_sym_sub,
      anon_sym_cmd,
      anon_sym_desc,
      anon_sym_args,
      anon_sym_flagarg,
      anon_sym_reqd,
      anon_sym_hidden,
      sym_arg_modifier,
  [2804] = 2,
    ACTIONS(414), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(412), 10,
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
  [2822] = 2,
    ACTIONS(418), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(416), 10,
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
  [2840] = 2,
    ACTIONS(330), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(328), 10,
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
  [2858] = 2,
    ACTIONS(422), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(420), 10,
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
  [2876] = 2,
    ACTIONS(426), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(424), 10,
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
  [2894] = 2,
    ACTIONS(430), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(428), 10,
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
  [2912] = 4,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    ACTIONS(432), 1,
      sym_string,
    STATE(39), 1,
      sym_flag_name_list,
    STATE(86), 2,
      sym__strings,
      sym__strings_list,
  [2926] = 4,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    ACTIONS(434), 1,
      sym_string,
    STATE(41), 1,
      sym_sub_name_list,
    STATE(81), 2,
      sym__strings,
      sym__strings_list,
  [2940] = 4,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    ACTIONS(436), 1,
      sym_string,
    STATE(44), 1,
      sym_flag_name_list,
    STATE(92), 2,
      sym__strings,
      sym__strings_list,
  [2954] = 4,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    ACTIONS(436), 1,
      sym_string,
    STATE(51), 1,
      sym_flag_name_list,
    STATE(92), 2,
      sym__strings,
      sym__strings_list,
  [2968] = 4,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    ACTIONS(438), 1,
      sym_string,
    STATE(50), 1,
      sym_sub_name_list,
    STATE(93), 2,
      sym__strings,
      sym__strings_list,
  [2982] = 4,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    ACTIONS(436), 1,
      sym_string,
    STATE(49), 1,
      sym_flag_name_list,
    STATE(92), 2,
      sym__strings,
      sym__strings_list,
  [2996] = 4,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    ACTIONS(436), 1,
      sym_string,
    STATE(48), 1,
      sym_flag_name_list,
    STATE(92), 2,
      sym__strings,
      sym__strings_list,
  [3010] = 4,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    ACTIONS(432), 1,
      sym_string,
    STATE(37), 1,
      sym_flag_name_list,
    STATE(86), 2,
      sym__strings,
      sym__strings_list,
  [3024] = 4,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    ACTIONS(432), 1,
      sym_string,
    STATE(40), 1,
      sym_flag_name_list,
    STATE(86), 2,
      sym__strings,
      sym__strings_list,
  [3038] = 4,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    ACTIONS(432), 1,
      sym_string,
    STATE(43), 1,
      sym_flag_name_list,
    STATE(86), 2,
      sym__strings,
      sym__strings_list,
  [3052] = 4,
    ACTIONS(440), 1,
      anon_sym_const,
    ACTIONS(442), 1,
      anon_sym_shell,
    ACTIONS(444), 1,
      anon_sym_file,
    ACTIONS(446), 1,
      anon_sym_dir,
  [3065] = 3,
    ACTIONS(448), 1,
      sym_string,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    STATE(101), 2,
      sym__strings,
      sym__strings_list,
  [3076] = 3,
    ACTIONS(17), 1,
      anon_sym_arg,
    ACTIONS(19), 1,
      anon_sym_args,
    STATE(7), 1,
      sym_arg_type,
  [3086] = 3,
    ACTIONS(452), 1,
      sym_string,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      aux_sym__strings_list_repeat1,
  [3096] = 3,
    ACTIONS(35), 1,
      anon_sym_arg,
    ACTIONS(37), 1,
      anon_sym_args,
    STATE(10), 1,
      sym_arg_type,
  [3106] = 3,
    ACTIONS(452), 1,
      sym_string,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      aux_sym__strings_list_repeat1,
  [3116] = 3,
    ACTIONS(458), 1,
      sym_string,
    ACTIONS(461), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      aux_sym__strings_list_repeat1,
  [3126] = 3,
    ACTIONS(452), 1,
      sym_string,
    ACTIONS(463), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      aux_sym__strings_list_repeat1,
  [3136] = 2,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    STATE(96), 1,
      sym_block,
  [3143] = 2,
    ACTIONS(465), 1,
      anon_sym_flagarg,
    ACTIONS(467), 1,
      anon_sym_flag,
  [3150] = 2,
    ACTIONS(469), 1,
      sym_string,
    STATE(118), 1,
      aux_sym__strings_list_repeat1,
  [3157] = 2,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    STATE(94), 1,
      sym_block,
  [3164] = 2,
    ACTIONS(471), 1,
      sym_string,
    STATE(120), 1,
      aux_sym__strings_list_repeat1,
  [3171] = 2,
    ACTIONS(473), 1,
      sym_string,
    STATE(116), 1,
      aux_sym__strings_list_repeat1,
  [3178] = 2,
    ACTIONS(475), 1,
      anon_sym_flagarg,
    ACTIONS(477), 1,
      anon_sym_flag,
  [3185] = 2,
    ACTIONS(479), 1,
      anon_sym_flagarg,
    ACTIONS(481), 1,
      anon_sym_flag,
  [3192] = 1,
    ACTIONS(483), 1,
      ts_builtin_sym_end,
  [3196] = 1,
    ACTIONS(485), 1,
      sym_string,
  [3200] = 1,
    ACTIONS(487), 1,
      sym_at_identifier,
  [3204] = 1,
    ACTIONS(489), 1,
      sym_string,
  [3208] = 1,
    ACTIONS(491), 1,
      sym_string,
  [3212] = 1,
    ACTIONS(493), 1,
      sym_at_identifier,
  [3216] = 1,
    ACTIONS(495), 1,
      sym_at_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 59,
  [SMALL_STATE(4)] = 118,
  [SMALL_STATE(5)] = 177,
  [SMALL_STATE(6)] = 237,
  [SMALL_STATE(7)] = 297,
  [SMALL_STATE(8)] = 341,
  [SMALL_STATE(9)] = 385,
  [SMALL_STATE(10)] = 428,
  [SMALL_STATE(11)] = 471,
  [SMALL_STATE(12)] = 505,
  [SMALL_STATE(13)] = 539,
  [SMALL_STATE(14)] = 573,
  [SMALL_STATE(15)] = 607,
  [SMALL_STATE(16)] = 641,
  [SMALL_STATE(17)] = 675,
  [SMALL_STATE(18)] = 709,
  [SMALL_STATE(19)] = 743,
  [SMALL_STATE(20)] = 777,
  [SMALL_STATE(21)] = 811,
  [SMALL_STATE(22)] = 845,
  [SMALL_STATE(23)] = 879,
  [SMALL_STATE(24)] = 913,
  [SMALL_STATE(25)] = 947,
  [SMALL_STATE(26)] = 981,
  [SMALL_STATE(27)] = 1015,
  [SMALL_STATE(28)] = 1049,
  [SMALL_STATE(29)] = 1083,
  [SMALL_STATE(30)] = 1117,
  [SMALL_STATE(31)] = 1151,
  [SMALL_STATE(32)] = 1185,
  [SMALL_STATE(33)] = 1219,
  [SMALL_STATE(34)] = 1253,
  [SMALL_STATE(35)] = 1282,
  [SMALL_STATE(36)] = 1311,
  [SMALL_STATE(37)] = 1345,
  [SMALL_STATE(38)] = 1379,
  [SMALL_STATE(39)] = 1403,
  [SMALL_STATE(40)] = 1437,
  [SMALL_STATE(41)] = 1471,
  [SMALL_STATE(42)] = 1505,
  [SMALL_STATE(43)] = 1539,
  [SMALL_STATE(44)] = 1573,
  [SMALL_STATE(45)] = 1606,
  [SMALL_STATE(46)] = 1639,
  [SMALL_STATE(47)] = 1672,
  [SMALL_STATE(48)] = 1695,
  [SMALL_STATE(49)] = 1728,
  [SMALL_STATE(50)] = 1761,
  [SMALL_STATE(51)] = 1794,
  [SMALL_STATE(52)] = 1827,
  [SMALL_STATE(53)] = 1849,
  [SMALL_STATE(54)] = 1871,
  [SMALL_STATE(55)] = 1893,
  [SMALL_STATE(56)] = 1915,
  [SMALL_STATE(57)] = 1937,
  [SMALL_STATE(58)] = 1959,
  [SMALL_STATE(59)] = 1981,
  [SMALL_STATE(60)] = 2003,
  [SMALL_STATE(61)] = 2025,
  [SMALL_STATE(62)] = 2047,
  [SMALL_STATE(63)] = 2069,
  [SMALL_STATE(64)] = 2091,
  [SMALL_STATE(65)] = 2113,
  [SMALL_STATE(66)] = 2135,
  [SMALL_STATE(67)] = 2157,
  [SMALL_STATE(68)] = 2179,
  [SMALL_STATE(69)] = 2201,
  [SMALL_STATE(70)] = 2223,
  [SMALL_STATE(71)] = 2245,
  [SMALL_STATE(72)] = 2267,
  [SMALL_STATE(73)] = 2289,
  [SMALL_STATE(74)] = 2311,
  [SMALL_STATE(75)] = 2333,
  [SMALL_STATE(76)] = 2355,
  [SMALL_STATE(77)] = 2377,
  [SMALL_STATE(78)] = 2399,
  [SMALL_STATE(79)] = 2421,
  [SMALL_STATE(80)] = 2443,
  [SMALL_STATE(81)] = 2465,
  [SMALL_STATE(82)] = 2487,
  [SMALL_STATE(83)] = 2509,
  [SMALL_STATE(84)] = 2531,
  [SMALL_STATE(85)] = 2553,
  [SMALL_STATE(86)] = 2575,
  [SMALL_STATE(87)] = 2597,
  [SMALL_STATE(88)] = 2619,
  [SMALL_STATE(89)] = 2641,
  [SMALL_STATE(90)] = 2663,
  [SMALL_STATE(91)] = 2684,
  [SMALL_STATE(92)] = 2705,
  [SMALL_STATE(93)] = 2726,
  [SMALL_STATE(94)] = 2747,
  [SMALL_STATE(95)] = 2766,
  [SMALL_STATE(96)] = 2785,
  [SMALL_STATE(97)] = 2804,
  [SMALL_STATE(98)] = 2822,
  [SMALL_STATE(99)] = 2840,
  [SMALL_STATE(100)] = 2858,
  [SMALL_STATE(101)] = 2876,
  [SMALL_STATE(102)] = 2894,
  [SMALL_STATE(103)] = 2912,
  [SMALL_STATE(104)] = 2926,
  [SMALL_STATE(105)] = 2940,
  [SMALL_STATE(106)] = 2954,
  [SMALL_STATE(107)] = 2968,
  [SMALL_STATE(108)] = 2982,
  [SMALL_STATE(109)] = 2996,
  [SMALL_STATE(110)] = 3010,
  [SMALL_STATE(111)] = 3024,
  [SMALL_STATE(112)] = 3038,
  [SMALL_STATE(113)] = 3052,
  [SMALL_STATE(114)] = 3065,
  [SMALL_STATE(115)] = 3076,
  [SMALL_STATE(116)] = 3086,
  [SMALL_STATE(117)] = 3096,
  [SMALL_STATE(118)] = 3106,
  [SMALL_STATE(119)] = 3116,
  [SMALL_STATE(120)] = 3126,
  [SMALL_STATE(121)] = 3136,
  [SMALL_STATE(122)] = 3143,
  [SMALL_STATE(123)] = 3150,
  [SMALL_STATE(124)] = 3157,
  [SMALL_STATE(125)] = 3164,
  [SMALL_STATE(126)] = 3171,
  [SMALL_STATE(127)] = 3178,
  [SMALL_STATE(128)] = 3185,
  [SMALL_STATE(129)] = 3192,
  [SMALL_STATE(130)] = 3196,
  [SMALL_STATE(131)] = 3200,
  [SMALL_STATE(132)] = 3204,
  [SMALL_STATE(133)] = 3208,
  [SMALL_STATE(134)] = 3212,
  [SMALL_STATE(135)] = 3216,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(134),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(3),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(107),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(130),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(57),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(57),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(113),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(106),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(105),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(122),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(117),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(135),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(131),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(104),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(132),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(130),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(111),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(103),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(122),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(115),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_statement, 3, .production_id = 4),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_statement, 3, .production_id = 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 2, .production_id = 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 2, .production_id = 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 3, .production_id = 5),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 3, .production_id = 5),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 5, .production_id = 9),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 5, .production_id = 9),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 5, .production_id = 9),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 5, .production_id = 9),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 5, .production_id = 10),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 5, .production_id = 10),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 4, .production_id = 7),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 4, .production_id = 7),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 3, .production_id = 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 3, .production_id = 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 4, .production_id = 9),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 4, .production_id = 9),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 4, .production_id = 7),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 4, .production_id = 7),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 4, .production_id = 9),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 4, .production_id = 9),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 4, .production_id = 8),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 4, .production_id = 8),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 3, .production_id = 4),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 3, .production_id = 4),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 3, .production_id = 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 3, .production_id = 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 3, .production_id = 4),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 3, .production_id = 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_statement, 3, .production_id = 1),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_statement, 3, .production_id = 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_statement, 4, .production_id = 4),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_statement, 4, .production_id = 4),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 4, .production_id = 4),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 4, .production_id = 4),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 4, .production_id = 4),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 4, .production_id = 4),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 4),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 4),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sub_statement_repeat1, 2),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sub_statement_repeat1, 2), SHIFT_REPEAT(34),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sub_statement_repeat1, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_statement_repeat1, 2, .production_id = 6),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_statement_repeat1, 2, .production_id = 6), SHIFT_REPEAT(38),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arg_statement_repeat1, 2, .production_id = 6),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 3, .production_id = 7),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 3, .production_id = 7),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_statement_repeat1, 1, .production_id = 2),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arg_statement_repeat1, 1, .production_id = 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 2, .production_id = 1),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 2, .production_id = 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 2, .production_id = 1),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 2, .production_id = 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_statement, 2, .production_id = 1),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_statement, 2, .production_id = 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 3, .production_id = 7),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 3, .production_id = 7),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_type, 1),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_type, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 5, .production_id = 4),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 5, .production_id = 4),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 6, .production_id = 9),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 6, .production_id = 9),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 3, .production_id = 3),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 3, .production_id = 3),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__strings_list, 3),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__strings_list, 3),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 6, .production_id = 9),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 6, .production_id = 9),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 6, .production_id = 10),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 6, .production_id = 10),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_statement, 4, .production_id = 1),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_statement, 4, .production_id = 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 5, .production_id = 7),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 5, .production_id = 7),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 4, .production_id = 1),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 4, .production_id = 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 5, .production_id = 7),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 5, .production_id = 7),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 4, .production_id = 1),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 4, .production_id = 1),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 5, .production_id = 8),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 5, .production_id = 8),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 4, .production_id = 5),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 4, .production_id = 5),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 5),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 5),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 5, .production_id = 4),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 5, .production_id = 4),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_statement, 5, .production_id = 4),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_statement, 5, .production_id = 4),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_name_list, 1),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_name_list, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_name_list, 1),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_name_list, 1),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_name_list, 1),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_name_list, 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_desc_statement, 2),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_desc_statement, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defopts_statement, 3),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defopts_statement, 3),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_statement, 2),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_statement, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defargs_statement, 3),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defargs_statement, 3),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opts_dir_statement, 2),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opts_dir_statement, 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opts_file_statement, 2),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opts_file_statement, 2),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 2),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opts_const_statement, 3),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opts_const_statement, 3),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opts_shell_statement, 3),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opts_shell_statement, 3),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__strings_list_repeat1, 2), SHIFT_REPEAT(119),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__strings_list_repeat1, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_modifier, 1),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_modifier, 1),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [483] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
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
