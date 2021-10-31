#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 135
#define LARGE_STATE_COUNT 4
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
      if (lookahead == 'i') ADVANCE(116);
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
      if (lookahead == 'i') ADVANCE(116);
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
      if (lookahead == 'd') ADVANCE(105);
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
      if (lookahead == 'd') ADVANCE(104);
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
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(127);
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
      if (lookahead == 'g') ADVANCE(125);
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
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(85);
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
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 's') ADVANCE(57);
      if (lookahead == ',' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 's') ADVANCE(95);
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
      if (lookahead == 't') ADVANCE(126);
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
  [34] = {.lex_state = 52},
  [35] = {.lex_state = 52},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 52},
  [39] = {.lex_state = 52},
  [40] = {.lex_state = 52},
  [41] = {.lex_state = 52},
  [42] = {.lex_state = 52},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 52},
  [45] = {.lex_state = 52},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 52},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 52},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 52},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 1},
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
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
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
  [102] = {.lex_state = 2},
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
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
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
    [sym_source_file] = STATE(133),
    [sym__toplevel_statement] = STATE(3),
    [sym__common_statement] = STATE(3),
    [sym_include_statement] = STATE(3),
    [sym_defopts_statement] = STATE(3),
    [sym_defargs_statement] = STATE(3),
    [sym_sub_statement] = STATE(3),
    [sym_cmd_statement] = STATE(3),
    [sym_desc_statement] = STATE(3),
    [sym_arg_type] = STATE(8),
    [sym_arg_statement] = STATE(3),
    [sym_flagarg_statement] = STATE(3),
    [sym_flag_statement] = STATE(3),
    [sym_flag_modifier] = STATE(126),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_include] = ACTIONS(5),
    [anon_sym_defopts] = ACTIONS(7),
    [anon_sym_defargs] = ACTIONS(9),
    [sym__comment] = ACTIONS(11),
    [anon_sym_sub] = ACTIONS(13),
    [anon_sym_cmd] = ACTIONS(15),
    [anon_sym_desc] = ACTIONS(17),
    [anon_sym_arg] = ACTIONS(19),
    [anon_sym_args] = ACTIONS(21),
    [anon_sym_flagarg] = ACTIONS(23),
    [anon_sym_flag] = ACTIONS(25),
    [anon_sym_reqd] = ACTIONS(27),
    [anon_sym_hidden] = ACTIONS(27),
    [sym_arg_modifier] = ACTIONS(29),
  },
  [2] = {
    [sym__toplevel_statement] = STATE(2),
    [sym__common_statement] = STATE(2),
    [sym_include_statement] = STATE(2),
    [sym_defopts_statement] = STATE(2),
    [sym_defargs_statement] = STATE(2),
    [sym_sub_statement] = STATE(2),
    [sym_cmd_statement] = STATE(2),
    [sym_desc_statement] = STATE(2),
    [sym_arg_type] = STATE(8),
    [sym_arg_statement] = STATE(2),
    [sym_flagarg_statement] = STATE(2),
    [sym_flag_statement] = STATE(2),
    [sym_flag_modifier] = STATE(126),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_include] = ACTIONS(33),
    [anon_sym_defopts] = ACTIONS(36),
    [anon_sym_defargs] = ACTIONS(39),
    [sym__comment] = ACTIONS(42),
    [anon_sym_sub] = ACTIONS(45),
    [anon_sym_cmd] = ACTIONS(48),
    [anon_sym_desc] = ACTIONS(51),
    [anon_sym_arg] = ACTIONS(54),
    [anon_sym_args] = ACTIONS(57),
    [anon_sym_flagarg] = ACTIONS(60),
    [anon_sym_flag] = ACTIONS(63),
    [anon_sym_reqd] = ACTIONS(66),
    [anon_sym_hidden] = ACTIONS(66),
    [sym_arg_modifier] = ACTIONS(69),
  },
  [3] = {
    [sym__toplevel_statement] = STATE(2),
    [sym__common_statement] = STATE(2),
    [sym_include_statement] = STATE(2),
    [sym_defopts_statement] = STATE(2),
    [sym_defargs_statement] = STATE(2),
    [sym_sub_statement] = STATE(2),
    [sym_cmd_statement] = STATE(2),
    [sym_desc_statement] = STATE(2),
    [sym_arg_type] = STATE(8),
    [sym_arg_statement] = STATE(2),
    [sym_flagarg_statement] = STATE(2),
    [sym_flag_statement] = STATE(2),
    [sym_flag_modifier] = STATE(126),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(72),
    [anon_sym_include] = ACTIONS(5),
    [anon_sym_defopts] = ACTIONS(7),
    [anon_sym_defargs] = ACTIONS(9),
    [sym__comment] = ACTIONS(74),
    [anon_sym_sub] = ACTIONS(13),
    [anon_sym_cmd] = ACTIONS(15),
    [anon_sym_desc] = ACTIONS(17),
    [anon_sym_arg] = ACTIONS(19),
    [anon_sym_args] = ACTIONS(21),
    [anon_sym_flagarg] = ACTIONS(23),
    [anon_sym_flag] = ACTIONS(25),
    [anon_sym_reqd] = ACTIONS(27),
    [anon_sym_hidden] = ACTIONS(27),
    [sym_arg_modifier] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(5), 1,
      anon_sym_include,
    ACTIONS(17), 1,
      anon_sym_desc,
    ACTIONS(76), 1,
      sym__comment,
    ACTIONS(78), 1,
      anon_sym_sub,
    ACTIONS(80), 1,
      anon_sym_arg,
    ACTIONS(82), 1,
      anon_sym_args,
    ACTIONS(84), 1,
      anon_sym_opts,
    ACTIONS(86), 1,
      anon_sym_flagarg,
    ACTIONS(88), 1,
      anon_sym_flag,
    ACTIONS(90), 1,
      sym_arg_modifier,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      sym_arg_type,
    STATE(124), 1,
      sym_flag_modifier,
    ACTIONS(27), 2,
      anon_sym_reqd,
      anon_sym_hidden,
    STATE(5), 13,
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
    ACTIONS(94), 1,
      anon_sym_include,
    ACTIONS(97), 1,
      sym__comment,
    ACTIONS(100), 1,
      anon_sym_sub,
    ACTIONS(103), 1,
      anon_sym_desc,
    ACTIONS(106), 1,
      anon_sym_arg,
    ACTIONS(109), 1,
      anon_sym_args,
    ACTIONS(112), 1,
      anon_sym_opts,
    ACTIONS(115), 1,
      anon_sym_flagarg,
    ACTIONS(118), 1,
      anon_sym_flag,
    ACTIONS(124), 1,
      sym_arg_modifier,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      sym_arg_type,
    STATE(124), 1,
      sym_flag_modifier,
    ACTIONS(121), 2,
      anon_sym_reqd,
      anon_sym_hidden,
    STATE(5), 13,
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
  [118] = 14,
    ACTIONS(5), 1,
      anon_sym_include,
    ACTIONS(17), 1,
      anon_sym_desc,
    ACTIONS(78), 1,
      anon_sym_sub,
    ACTIONS(80), 1,
      anon_sym_arg,
    ACTIONS(82), 1,
      anon_sym_args,
    ACTIONS(84), 1,
      anon_sym_opts,
    ACTIONS(86), 1,
      anon_sym_flagarg,
    ACTIONS(88), 1,
      anon_sym_flag,
    ACTIONS(90), 1,
      sym_arg_modifier,
    ACTIONS(129), 1,
      sym__comment,
    STATE(9), 1,
      sym_arg_type,
    STATE(124), 1,
      sym_flag_modifier,
    ACTIONS(27), 2,
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
  [174] = 10,
    ACTIONS(135), 1,
      sym_at_identifier,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(139), 1,
      sym_string,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      aux_sym_arg_statement_repeat1,
    STATE(38), 1,
      sym_arg_name_list,
    STATE(59), 1,
      sym_block,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      sym__comment,
    STATE(50), 2,
      sym__strings,
      sym__strings_list,
    ACTIONS(133), 13,
      anon_sym_include,
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
  [219] = 10,
    ACTIONS(135), 1,
      sym_at_identifier,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(139), 1,
      sym_string,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      aux_sym_arg_statement_repeat1,
    STATE(34), 1,
      sym_arg_name_list,
    STATE(82), 1,
      sym_block,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      sym__comment,
    STATE(50), 2,
      sym__strings,
      sym__strings_list,
    ACTIONS(145), 13,
      anon_sym_include,
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
  [264] = 10,
    ACTIONS(135), 1,
      sym_at_identifier,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(147), 1,
      sym_string,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      aux_sym_arg_statement_repeat1,
    STATE(46), 1,
      sym_arg_name_list,
    STATE(82), 1,
      sym_block,
    ACTIONS(143), 2,
      sym__comment,
      anon_sym_RBRACE,
    STATE(93), 2,
      sym__strings,
      sym__strings_list,
    ACTIONS(145), 11,
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
  [307] = 10,
    ACTIONS(135), 1,
      sym_at_identifier,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(147), 1,
      sym_string,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      aux_sym_arg_statement_repeat1,
    STATE(47), 1,
      sym_arg_name_list,
    STATE(59), 1,
      sym_block,
    ACTIONS(131), 2,
      sym__comment,
      anon_sym_RBRACE,
    STATE(93), 2,
      sym__strings,
      sym__strings_list,
    ACTIONS(133), 11,
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
  [350] = 6,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      sym_at_identifier,
    STATE(37), 1,
      aux_sym_sub_statement_repeat1,
    STATE(89), 1,
      sym_block,
    ACTIONS(155), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(151), 14,
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
  [384] = 6,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      sym_at_identifier,
    STATE(37), 1,
      aux_sym_sub_statement_repeat1,
    STATE(87), 1,
      sym_block,
    ACTIONS(159), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(157), 14,
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
  [418] = 6,
    ACTIONS(135), 1,
      sym_at_identifier,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      aux_sym_arg_statement_repeat1,
    STATE(74), 1,
      sym_block,
    ACTIONS(163), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(161), 14,
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
  [452] = 6,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      sym_at_identifier,
    STATE(12), 1,
      aux_sym_sub_statement_repeat1,
    STATE(70), 1,
      sym_block,
    ACTIONS(169), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(165), 14,
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
  [486] = 6,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      sym_at_identifier,
    STATE(37), 1,
      aux_sym_sub_statement_repeat1,
    STATE(64), 1,
      sym_block,
    ACTIONS(173), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(171), 14,
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
  [520] = 6,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      sym_at_identifier,
    STATE(37), 1,
      aux_sym_sub_statement_repeat1,
    STATE(66), 1,
      sym_block,
    ACTIONS(177), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(175), 14,
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
  [554] = 6,
    ACTIONS(135), 1,
      sym_at_identifier,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      aux_sym_arg_statement_repeat1,
    STATE(68), 1,
      sym_block,
    ACTIONS(181), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(179), 14,
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
  [588] = 6,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      sym_at_identifier,
    STATE(37), 1,
      aux_sym_sub_statement_repeat1,
    STATE(71), 1,
      sym_block,
    ACTIONS(185), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(183), 14,
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
  [622] = 6,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(189), 1,
      sym_at_identifier,
    STATE(15), 1,
      aux_sym_sub_statement_repeat1,
    STATE(73), 1,
      sym_block,
    ACTIONS(191), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(187), 14,
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
  [656] = 6,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      sym_at_identifier,
    STATE(37), 1,
      aux_sym_sub_statement_repeat1,
    STATE(75), 1,
      sym_block,
    ACTIONS(195), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(193), 14,
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
  [690] = 6,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(199), 1,
      sym_at_identifier,
    STATE(16), 1,
      aux_sym_sub_statement_repeat1,
    STATE(77), 1,
      sym_block,
    ACTIONS(201), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(197), 14,
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
  [724] = 6,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      sym_at_identifier,
    STATE(37), 1,
      aux_sym_sub_statement_repeat1,
    STATE(69), 1,
      sym_block,
    ACTIONS(205), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(203), 14,
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
  [758] = 6,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(209), 1,
      sym_at_identifier,
    STATE(29), 1,
      aux_sym_sub_statement_repeat1,
    STATE(67), 1,
      sym_block,
    ACTIONS(211), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(207), 14,
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
  [792] = 6,
    ACTIONS(135), 1,
      sym_at_identifier,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      aux_sym_arg_statement_repeat1,
    STATE(78), 1,
      sym_block,
    ACTIONS(215), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(213), 14,
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
  [826] = 6,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      sym_at_identifier,
    STATE(37), 1,
      aux_sym_sub_statement_repeat1,
    STATE(56), 1,
      sym_block,
    ACTIONS(219), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(217), 14,
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
  [860] = 6,
    ACTIONS(135), 1,
      sym_at_identifier,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      aux_sym_arg_statement_repeat1,
    STATE(76), 1,
      sym_block,
    ACTIONS(223), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(221), 14,
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
  [894] = 6,
    ACTIONS(135), 1,
      sym_at_identifier,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      aux_sym_arg_statement_repeat1,
    STATE(84), 1,
      sym_block,
    ACTIONS(223), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(221), 14,
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
  [928] = 6,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(227), 1,
      sym_at_identifier,
    STATE(11), 1,
      aux_sym_sub_statement_repeat1,
    STATE(63), 1,
      sym_block,
    ACTIONS(229), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(225), 14,
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
  [962] = 6,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      sym_at_identifier,
    STATE(37), 1,
      aux_sym_sub_statement_repeat1,
    STATE(57), 1,
      sym_block,
    ACTIONS(233), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(231), 14,
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
  [996] = 6,
    ACTIONS(135), 1,
      sym_at_identifier,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      aux_sym_arg_statement_repeat1,
    STATE(85), 1,
      sym_block,
    ACTIONS(237), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(235), 14,
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
  [1030] = 6,
    ACTIONS(135), 1,
      sym_at_identifier,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      aux_sym_arg_statement_repeat1,
    STATE(79), 1,
      sym_block,
    ACTIONS(215), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(213), 14,
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
  [1064] = 6,
    ACTIONS(135), 1,
      sym_at_identifier,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      aux_sym_arg_statement_repeat1,
    STATE(61), 1,
      sym_block,
    ACTIONS(241), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(239), 14,
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
  [1098] = 6,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      sym_at_identifier,
    STATE(37), 1,
      aux_sym_sub_statement_repeat1,
    STATE(72), 1,
      sym_block,
    ACTIONS(245), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(243), 14,
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
  [1132] = 7,
    ACTIONS(135), 1,
      sym_at_identifier,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(247), 1,
      sym_string,
    STATE(27), 1,
      aux_sym_arg_statement_repeat1,
    STATE(59), 1,
      sym_block,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      sym__comment,
    ACTIONS(133), 13,
      anon_sym_include,
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
  [1167] = 7,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(253), 1,
      sym_at_identifier,
    ACTIONS(255), 1,
      sym_string,
    STATE(20), 1,
      aux_sym_sub_statement_repeat1,
    STATE(86), 1,
      sym_block,
    ACTIONS(249), 2,
      ts_builtin_sym_end,
      sym__comment,
    ACTIONS(251), 13,
      anon_sym_include,
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
  [1202] = 4,
    ACTIONS(259), 1,
      sym_at_identifier,
    STATE(36), 1,
      aux_sym_arg_statement_repeat1,
    ACTIONS(262), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(257), 15,
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
  [1231] = 4,
    ACTIONS(266), 1,
      sym_at_identifier,
    STATE(37), 1,
      aux_sym_sub_statement_repeat1,
    ACTIONS(269), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(264), 15,
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
  [1260] = 7,
    ACTIONS(135), 1,
      sym_at_identifier,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(271), 1,
      sym_string,
    STATE(31), 1,
      aux_sym_arg_statement_repeat1,
    STATE(74), 1,
      sym_block,
    ACTIONS(161), 2,
      ts_builtin_sym_end,
      sym__comment,
    ACTIONS(163), 13,
      anon_sym_include,
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
  [1295] = 7,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(277), 1,
      sym_at_identifier,
    ACTIONS(279), 1,
      sym_string,
    STATE(33), 1,
      aux_sym_sub_statement_repeat1,
    STATE(58), 1,
      sym_block,
    ACTIONS(273), 2,
      ts_builtin_sym_end,
      sym__comment,
    ACTIONS(275), 13,
      anon_sym_include,
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
  [1330] = 7,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(285), 1,
      sym_at_identifier,
    ACTIONS(287), 1,
      sym_string,
    STATE(22), 1,
      aux_sym_sub_statement_repeat1,
    STATE(60), 1,
      sym_block,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      sym__comment,
    ACTIONS(283), 13,
      anon_sym_include,
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
  [1365] = 7,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(293), 1,
      sym_at_identifier,
    ACTIONS(295), 1,
      sym_string,
    STATE(25), 1,
      aux_sym_sub_statement_repeat1,
    STATE(65), 1,
      sym_block,
    ACTIONS(289), 2,
      ts_builtin_sym_end,
      sym__comment,
    ACTIONS(291), 13,
      anon_sym_include,
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
  [1400] = 7,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(301), 1,
      sym_at_identifier,
    ACTIONS(303), 1,
      sym_string,
    STATE(18), 1,
      aux_sym_sub_statement_repeat1,
    STATE(88), 1,
      sym_block,
    ACTIONS(297), 2,
      ts_builtin_sym_end,
      sym__comment,
    ACTIONS(299), 13,
      anon_sym_include,
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
  [1435] = 2,
    ACTIONS(307), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(305), 16,
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
  [1459] = 2,
    ACTIONS(309), 5,
      ts_builtin_sym_end,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
    ACTIONS(311), 14,
      anon_sym_include,
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
  [1483] = 2,
    ACTIONS(313), 4,
      ts_builtin_sym_end,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
    ACTIONS(315), 14,
      anon_sym_include,
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
  [1506] = 7,
    ACTIONS(135), 1,
      sym_at_identifier,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(247), 1,
      sym_string,
    STATE(27), 1,
      aux_sym_arg_statement_repeat1,
    STATE(59), 1,
      sym_block,
    ACTIONS(131), 2,
      sym__comment,
      anon_sym_RBRACE,
    ACTIONS(133), 11,
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
  [1539] = 7,
    ACTIONS(135), 1,
      sym_at_identifier,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(271), 1,
      sym_string,
    STATE(31), 1,
      aux_sym_arg_statement_repeat1,
    STATE(74), 1,
      sym_block,
    ACTIONS(161), 2,
      sym__comment,
      anon_sym_RBRACE,
    ACTIONS(163), 11,
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
  [1572] = 2,
    ACTIONS(317), 4,
      ts_builtin_sym_end,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
    ACTIONS(319), 14,
      anon_sym_include,
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
  [1595] = 7,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(285), 1,
      sym_at_identifier,
    ACTIONS(287), 1,
      sym_string,
    STATE(22), 1,
      aux_sym_sub_statement_repeat1,
    STATE(60), 1,
      sym_block,
    ACTIONS(281), 2,
      sym__comment,
      anon_sym_RBRACE,
    ACTIONS(283), 11,
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
  [1628] = 2,
    ACTIONS(321), 4,
      ts_builtin_sym_end,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
    ACTIONS(323), 14,
      anon_sym_include,
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
  [1651] = 7,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(277), 1,
      sym_at_identifier,
    ACTIONS(279), 1,
      sym_string,
    STATE(33), 1,
      aux_sym_sub_statement_repeat1,
    STATE(58), 1,
      sym_block,
    ACTIONS(273), 2,
      sym__comment,
      anon_sym_RBRACE,
    ACTIONS(275), 11,
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
  [1684] = 7,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(301), 1,
      sym_at_identifier,
    ACTIONS(303), 1,
      sym_string,
    STATE(18), 1,
      aux_sym_sub_statement_repeat1,
    STATE(88), 1,
      sym_block,
    ACTIONS(297), 2,
      sym__comment,
      anon_sym_RBRACE,
    ACTIONS(299), 11,
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
  [1717] = 2,
    ACTIONS(325), 4,
      ts_builtin_sym_end,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
    ACTIONS(327), 14,
      anon_sym_include,
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
  [1740] = 7,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(253), 1,
      sym_at_identifier,
    ACTIONS(255), 1,
      sym_string,
    STATE(20), 1,
      aux_sym_sub_statement_repeat1,
    STATE(86), 1,
      sym_block,
    ACTIONS(249), 2,
      sym__comment,
      anon_sym_RBRACE,
    ACTIONS(251), 11,
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
  [1773] = 7,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(293), 1,
      sym_at_identifier,
    ACTIONS(295), 1,
      sym_string,
    STATE(25), 1,
      aux_sym_sub_statement_repeat1,
    STATE(65), 1,
      sym_block,
    ACTIONS(289), 2,
      sym__comment,
      anon_sym_RBRACE,
    ACTIONS(291), 11,
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
  [1806] = 2,
    ACTIONS(331), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(329), 14,
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
  [1828] = 2,
    ACTIONS(335), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(333), 14,
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
  [1850] = 2,
    ACTIONS(245), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(243), 14,
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
  [1872] = 2,
    ACTIONS(163), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(161), 14,
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
  [1894] = 2,
    ACTIONS(205), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(203), 14,
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
  [1916] = 2,
    ACTIONS(339), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(337), 14,
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
  [1938] = 2,
    ACTIONS(309), 5,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
    ACTIONS(311), 12,
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
  [1960] = 2,
    ACTIONS(155), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(151), 14,
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
  [1982] = 2,
    ACTIONS(343), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(341), 14,
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
  [2004] = 2,
    ACTIONS(219), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(217), 14,
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
  [2026] = 2,
    ACTIONS(347), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(345), 14,
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
  [2048] = 2,
    ACTIONS(233), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(231), 14,
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
  [2070] = 2,
    ACTIONS(351), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(349), 14,
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
  [2092] = 2,
    ACTIONS(355), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(353), 14,
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
  [2114] = 2,
    ACTIONS(159), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(157), 14,
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
  [2136] = 2,
    ACTIONS(359), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(357), 14,
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
  [2158] = 2,
    ACTIONS(363), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(361), 14,
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
  [2180] = 2,
    ACTIONS(173), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(171), 14,
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
  [2202] = 2,
    ACTIONS(237), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(235), 14,
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
  [2224] = 2,
    ACTIONS(367), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(365), 14,
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
  [2246] = 2,
    ACTIONS(371), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(369), 14,
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
  [2268] = 2,
    ACTIONS(177), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(175), 14,
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
  [2290] = 2,
    ACTIONS(375), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(373), 14,
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
  [2312] = 2,
    ACTIONS(375), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(373), 14,
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
  [2334] = 2,
    ACTIONS(379), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(377), 14,
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
  [2356] = 2,
    ACTIONS(383), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(381), 14,
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
  [2378] = 2,
    ACTIONS(133), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(131), 14,
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
  [2400] = 2,
    ACTIONS(387), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(385), 14,
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
  [2422] = 2,
    ACTIONS(371), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(369), 14,
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
  [2444] = 2,
    ACTIONS(391), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(389), 14,
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
  [2466] = 2,
    ACTIONS(195), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(193), 14,
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
  [2488] = 2,
    ACTIONS(395), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(393), 14,
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
  [2510] = 2,
    ACTIONS(185), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(183), 14,
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
  [2532] = 2,
    ACTIONS(399), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(397), 14,
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
  [2554] = 2,
    ACTIONS(325), 4,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(327), 12,
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
  [2575] = 2,
    ACTIONS(317), 4,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(319), 12,
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
  [2596] = 2,
    ACTIONS(313), 4,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(315), 12,
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
  [2617] = 2,
    ACTIONS(321), 4,
      sym_at_identifier,
      sym__comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(323), 12,
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
  [2638] = 2,
    ACTIONS(403), 2,
      anon_sym_arg,
      anon_sym_flag,
    ACTIONS(401), 13,
      ts_builtin_sym_end,
      anon_sym_include,
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
  [2658] = 2,
    ACTIONS(407), 2,
      anon_sym_arg,
      anon_sym_flag,
    ACTIONS(405), 13,
      ts_builtin_sym_end,
      anon_sym_include,
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
  [2678] = 2,
    ACTIONS(411), 2,
      anon_sym_arg,
      anon_sym_flag,
    ACTIONS(409), 13,
      ts_builtin_sym_end,
      anon_sym_include,
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
  [2698] = 2,
    ACTIONS(415), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(413), 10,
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
  [2716] = 2,
    ACTIONS(419), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(417), 10,
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
  [2734] = 2,
    ACTIONS(423), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(421), 10,
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
  [2752] = 2,
    ACTIONS(427), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(425), 10,
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
  [2770] = 2,
    ACTIONS(319), 3,
      anon_sym_arg,
      anon_sym_flag,
      sym_arg_modifier,
    ACTIONS(317), 10,
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
  [2788] = 4,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 1,
      sym_string,
    STATE(55), 1,
      sym_sub_name_list,
    STATE(92), 2,
      sym__strings,
      sym__strings_list,
  [2802] = 4,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(431), 1,
      sym_string,
    STATE(41), 1,
      sym_sub_name_list,
    STATE(45), 2,
      sym__strings,
      sym__strings_list,
  [2816] = 4,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      sym_string,
    STATE(35), 1,
      sym_flag_name_list,
    STATE(53), 2,
      sym__strings,
      sym__strings_list,
  [2830] = 4,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(435), 1,
      sym_string,
    STATE(52), 1,
      sym_flag_name_list,
    STATE(90), 2,
      sym__strings,
      sym__strings_list,
  [2844] = 4,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      sym_string,
    STATE(42), 1,
      sym_flag_name_list,
    STATE(53), 2,
      sym__strings,
      sym__strings_list,
  [2858] = 4,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      sym_string,
    STATE(39), 1,
      sym_flag_name_list,
    STATE(53), 2,
      sym__strings,
      sym__strings_list,
  [2872] = 4,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(435), 1,
      sym_string,
    STATE(54), 1,
      sym_flag_name_list,
    STATE(90), 2,
      sym__strings,
      sym__strings_list,
  [2886] = 4,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(435), 1,
      sym_string,
    STATE(51), 1,
      sym_flag_name_list,
    STATE(90), 2,
      sym__strings,
      sym__strings_list,
  [2900] = 4,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      sym_string,
    STATE(40), 1,
      sym_flag_name_list,
    STATE(53), 2,
      sym__strings,
      sym__strings_list,
  [2914] = 4,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(435), 1,
      sym_string,
    STATE(49), 1,
      sym_flag_name_list,
    STATE(90), 2,
      sym__strings,
      sym__strings_list,
  [2928] = 3,
    ACTIONS(437), 1,
      sym_string,
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    STATE(98), 2,
      sym__strings,
      sym__strings_list,
  [2939] = 4,
    ACTIONS(441), 1,
      anon_sym_const,
    ACTIONS(443), 1,
      anon_sym_shell,
    ACTIONS(445), 1,
      anon_sym_file,
    ACTIONS(447), 1,
      anon_sym_dir,
  [2952] = 3,
    ACTIONS(449), 1,
      sym_string,
    ACTIONS(452), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      aux_sym__strings_list_repeat1,
  [2962] = 3,
    ACTIONS(19), 1,
      anon_sym_arg,
    ACTIONS(21), 1,
      anon_sym_args,
    STATE(7), 1,
      sym_arg_type,
  [2972] = 3,
    ACTIONS(80), 1,
      anon_sym_arg,
    ACTIONS(82), 1,
      anon_sym_args,
    STATE(10), 1,
      sym_arg_type,
  [2982] = 3,
    ACTIONS(454), 1,
      sym_string,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      aux_sym__strings_list_repeat1,
  [2992] = 3,
    ACTIONS(454), 1,
      sym_string,
    ACTIONS(458), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      aux_sym__strings_list_repeat1,
  [3002] = 3,
    ACTIONS(454), 1,
      sym_string,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      aux_sym__strings_list_repeat1,
  [3012] = 2,
    ACTIONS(462), 1,
      anon_sym_flagarg,
    ACTIONS(464), 1,
      anon_sym_flag,
  [3019] = 2,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    STATE(94), 1,
      sym_block,
  [3026] = 2,
    ACTIONS(466), 1,
      sym_string,
    STATE(118), 1,
      aux_sym__strings_list_repeat1,
  [3033] = 2,
    ACTIONS(468), 1,
      sym_string,
    STATE(119), 1,
      aux_sym__strings_list_repeat1,
  [3040] = 2,
    ACTIONS(470), 1,
      anon_sym_flagarg,
    ACTIONS(472), 1,
      anon_sym_flag,
  [3047] = 2,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    STATE(96), 1,
      sym_block,
  [3054] = 2,
    ACTIONS(474), 1,
      anon_sym_flagarg,
    ACTIONS(476), 1,
      anon_sym_flag,
  [3061] = 2,
    ACTIONS(478), 1,
      sym_string,
    STATE(117), 1,
      aux_sym__strings_list_repeat1,
  [3068] = 1,
    ACTIONS(480), 1,
      sym_string,
  [3072] = 1,
    ACTIONS(482), 1,
      sym_string,
  [3076] = 1,
    ACTIONS(484), 1,
      sym_string,
  [3080] = 1,
    ACTIONS(486), 1,
      sym_at_identifier,
  [3084] = 1,
    ACTIONS(488), 1,
      sym_at_identifier,
  [3088] = 1,
    ACTIONS(490), 1,
      ts_builtin_sym_end,
  [3092] = 1,
    ACTIONS(492), 1,
      sym_at_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 59,
  [SMALL_STATE(6)] = 118,
  [SMALL_STATE(7)] = 174,
  [SMALL_STATE(8)] = 219,
  [SMALL_STATE(9)] = 264,
  [SMALL_STATE(10)] = 307,
  [SMALL_STATE(11)] = 350,
  [SMALL_STATE(12)] = 384,
  [SMALL_STATE(13)] = 418,
  [SMALL_STATE(14)] = 452,
  [SMALL_STATE(15)] = 486,
  [SMALL_STATE(16)] = 520,
  [SMALL_STATE(17)] = 554,
  [SMALL_STATE(18)] = 588,
  [SMALL_STATE(19)] = 622,
  [SMALL_STATE(20)] = 656,
  [SMALL_STATE(21)] = 690,
  [SMALL_STATE(22)] = 724,
  [SMALL_STATE(23)] = 758,
  [SMALL_STATE(24)] = 792,
  [SMALL_STATE(25)] = 826,
  [SMALL_STATE(26)] = 860,
  [SMALL_STATE(27)] = 894,
  [SMALL_STATE(28)] = 928,
  [SMALL_STATE(29)] = 962,
  [SMALL_STATE(30)] = 996,
  [SMALL_STATE(31)] = 1030,
  [SMALL_STATE(32)] = 1064,
  [SMALL_STATE(33)] = 1098,
  [SMALL_STATE(34)] = 1132,
  [SMALL_STATE(35)] = 1167,
  [SMALL_STATE(36)] = 1202,
  [SMALL_STATE(37)] = 1231,
  [SMALL_STATE(38)] = 1260,
  [SMALL_STATE(39)] = 1295,
  [SMALL_STATE(40)] = 1330,
  [SMALL_STATE(41)] = 1365,
  [SMALL_STATE(42)] = 1400,
  [SMALL_STATE(43)] = 1435,
  [SMALL_STATE(44)] = 1459,
  [SMALL_STATE(45)] = 1483,
  [SMALL_STATE(46)] = 1506,
  [SMALL_STATE(47)] = 1539,
  [SMALL_STATE(48)] = 1572,
  [SMALL_STATE(49)] = 1595,
  [SMALL_STATE(50)] = 1628,
  [SMALL_STATE(51)] = 1651,
  [SMALL_STATE(52)] = 1684,
  [SMALL_STATE(53)] = 1717,
  [SMALL_STATE(54)] = 1740,
  [SMALL_STATE(55)] = 1773,
  [SMALL_STATE(56)] = 1806,
  [SMALL_STATE(57)] = 1828,
  [SMALL_STATE(58)] = 1850,
  [SMALL_STATE(59)] = 1872,
  [SMALL_STATE(60)] = 1894,
  [SMALL_STATE(61)] = 1916,
  [SMALL_STATE(62)] = 1938,
  [SMALL_STATE(63)] = 1960,
  [SMALL_STATE(64)] = 1982,
  [SMALL_STATE(65)] = 2004,
  [SMALL_STATE(66)] = 2026,
  [SMALL_STATE(67)] = 2048,
  [SMALL_STATE(68)] = 2070,
  [SMALL_STATE(69)] = 2092,
  [SMALL_STATE(70)] = 2114,
  [SMALL_STATE(71)] = 2136,
  [SMALL_STATE(72)] = 2158,
  [SMALL_STATE(73)] = 2180,
  [SMALL_STATE(74)] = 2202,
  [SMALL_STATE(75)] = 2224,
  [SMALL_STATE(76)] = 2246,
  [SMALL_STATE(77)] = 2268,
  [SMALL_STATE(78)] = 2290,
  [SMALL_STATE(79)] = 2312,
  [SMALL_STATE(80)] = 2334,
  [SMALL_STATE(81)] = 2356,
  [SMALL_STATE(82)] = 2378,
  [SMALL_STATE(83)] = 2400,
  [SMALL_STATE(84)] = 2422,
  [SMALL_STATE(85)] = 2444,
  [SMALL_STATE(86)] = 2466,
  [SMALL_STATE(87)] = 2488,
  [SMALL_STATE(88)] = 2510,
  [SMALL_STATE(89)] = 2532,
  [SMALL_STATE(90)] = 2554,
  [SMALL_STATE(91)] = 2575,
  [SMALL_STATE(92)] = 2596,
  [SMALL_STATE(93)] = 2617,
  [SMALL_STATE(94)] = 2638,
  [SMALL_STATE(95)] = 2658,
  [SMALL_STATE(96)] = 2678,
  [SMALL_STATE(97)] = 2698,
  [SMALL_STATE(98)] = 2716,
  [SMALL_STATE(99)] = 2734,
  [SMALL_STATE(100)] = 2752,
  [SMALL_STATE(101)] = 2770,
  [SMALL_STATE(102)] = 2788,
  [SMALL_STATE(103)] = 2802,
  [SMALL_STATE(104)] = 2816,
  [SMALL_STATE(105)] = 2830,
  [SMALL_STATE(106)] = 2844,
  [SMALL_STATE(107)] = 2858,
  [SMALL_STATE(108)] = 2872,
  [SMALL_STATE(109)] = 2886,
  [SMALL_STATE(110)] = 2900,
  [SMALL_STATE(111)] = 2914,
  [SMALL_STATE(112)] = 2928,
  [SMALL_STATE(113)] = 2939,
  [SMALL_STATE(114)] = 2952,
  [SMALL_STATE(115)] = 2962,
  [SMALL_STATE(116)] = 2972,
  [SMALL_STATE(117)] = 2982,
  [SMALL_STATE(118)] = 2992,
  [SMALL_STATE(119)] = 3002,
  [SMALL_STATE(120)] = 3012,
  [SMALL_STATE(121)] = 3019,
  [SMALL_STATE(122)] = 3026,
  [SMALL_STATE(123)] = 3033,
  [SMALL_STATE(124)] = 3040,
  [SMALL_STATE(125)] = 3047,
  [SMALL_STATE(126)] = 3054,
  [SMALL_STATE(127)] = 3061,
  [SMALL_STATE(128)] = 3068,
  [SMALL_STATE(129)] = 3072,
  [SMALL_STATE(130)] = 3076,
  [SMALL_STATE(131)] = 3080,
  [SMALL_STATE(132)] = 3084,
  [SMALL_STATE(133)] = 3088,
  [SMALL_STATE(134)] = 3092,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(134),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(131),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(132),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(103),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(128),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(130),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(110),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(107),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(120),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(115),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(134),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(5),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(102),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(130),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(62),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(62),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(113),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(111),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(109),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(120),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(116),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_statement, 4, .production_id = 4),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_statement, 4, .production_id = 4),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 4, .production_id = 4),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 4, .production_id = 4),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 3, .production_id = 4),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 3, .production_id = 4),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 5, .production_id = 9),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 5, .production_id = 9),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 5, .production_id = 9),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 5, .production_id = 9),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 5, .production_id = 10),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 5, .production_id = 10),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 4, .production_id = 7),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 4, .production_id = 7),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 4, .production_id = 9),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 4, .production_id = 9),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 4, .production_id = 7),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 4, .production_id = 7),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 4, .production_id = 9),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 4, .production_id = 9),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 3, .production_id = 1),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 3, .production_id = 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 3, .production_id = 4),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 3, .production_id = 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 4, .production_id = 8),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 4, .production_id = 8),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_statement, 3, .production_id = 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_statement, 3, .production_id = 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 3, .production_id = 5),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 3, .production_id = 5),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_statement, 3, .production_id = 4),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_statement, 3, .production_id = 4),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 4, .production_id = 4),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 4, .production_id = 4),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 4),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 4),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 2, .production_id = 3),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 2, .production_id = 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 3, .production_id = 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 3, .production_id = 1),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 3, .production_id = 7),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 3, .production_id = 7),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_statement_repeat1, 2, .production_id = 6),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_statement_repeat1, 2, .production_id = 6), SHIFT_REPEAT(43),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arg_statement_repeat1, 2, .production_id = 6),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sub_statement_repeat1, 2),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sub_statement_repeat1, 2), SHIFT_REPEAT(37),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sub_statement_repeat1, 2),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 2, .production_id = 1),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 2, .production_id = 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 2, .production_id = 1),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 2, .production_id = 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_statement, 2, .production_id = 1),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_statement, 2, .production_id = 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 3, .production_id = 7),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 3, .production_id = 7),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_statement_repeat1, 1, .production_id = 2),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arg_statement_repeat1, 1, .production_id = 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_type, 1),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_type, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_name_list, 1),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_name_list, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__strings_list, 3),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__strings_list, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_name_list, 1),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_name_list, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_name_list, 1),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_name_list, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_statement, 4, .production_id = 1),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_statement, 4, .production_id = 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 5, .production_id = 4),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 5, .production_id = 4),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 3, .production_id = 3),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 3, .production_id = 3),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 6, .production_id = 9),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 6, .production_id = 9),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 6, .production_id = 9),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 6, .production_id = 9),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 6, .production_id = 10),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 6, .production_id = 10),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 4, .production_id = 1),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 4, .production_id = 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 5, .production_id = 7),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 5, .production_id = 7),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 4, .production_id = 1),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 4, .production_id = 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flagarg_statement, 5, .production_id = 7),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flagarg_statement, 5, .production_id = 7),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 4, .production_id = 5),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 4, .production_id = 5),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 5, .production_id = 8),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 5, .production_id = 8),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 2),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_desc_statement, 2),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_desc_statement, 2),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_statement, 5),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_statement, 5),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_statement, 5, .production_id = 4),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_statement, 5, .production_id = 4),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_statement, 5, .production_id = 4),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_statement, 5, .production_id = 4),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defopts_statement, 3),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defopts_statement, 3),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_statement, 2),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_statement, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defargs_statement, 3),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defargs_statement, 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opts_dir_statement, 2),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opts_dir_statement, 2),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opts_const_statement, 3),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opts_const_statement, 3),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opts_shell_statement, 3),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opts_shell_statement, 3),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opts_file_statement, 2),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opts_file_statement, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__strings_list_repeat1, 2), SHIFT_REPEAT(114),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__strings_list_repeat1, 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_modifier, 1),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_modifier, 1),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [490] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
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
