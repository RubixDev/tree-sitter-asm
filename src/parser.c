#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 123
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  anon_sym_COMMA = 2,
  anon_sym_COLON = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_label = 6,
  anon_sym_const = 7,
  anon_sym_byte = 8,
  anon_sym_word = 9,
  anon_sym_dword = 10,
  anon_sym_qword = 11,
  anon_sym_ptr = 12,
  anon_sym_LBRACK = 13,
  anon_sym_PLUS = 14,
  anon_sym_DASH = 15,
  anon_sym_RBRACK = 16,
  anon_sym_STAR = 17,
  anon_sym_rel = 18,
  anon_sym_BANG = 19,
  anon_sym_SLASH = 20,
  anon_sym_PERCENT = 21,
  anon_sym_PIPE = 22,
  anon_sym_CARET = 23,
  anon_sym_AMP = 24,
  anon_sym_POUND = 25,
  aux_sym_int_token1 = 26,
  aux_sym_int_token2 = 27,
  sym_float = 28,
  sym_string = 29,
  sym_word = 30,
  sym__reg = 31,
  sym_address = 32,
  sym_meta_ident = 33,
  sym__ident = 34,
  aux_sym_line_comment_token1 = 35,
  aux_sym_line_comment_token2 = 36,
  sym_block_comment = 37,
  sym_program = 38,
  sym__item = 39,
  sym_meta = 40,
  sym_label = 41,
  sym_const = 42,
  sym_instruction = 43,
  sym__expr = 44,
  sym_ptr = 45,
  sym__tc_expr = 46,
  sym_tc_infix = 47,
  sym_int = 48,
  sym_reg = 49,
  sym_ident = 50,
  sym_line_comment = 51,
  aux_sym_program_repeat1 = 52,
  aux_sym_program_repeat2 = 53,
  aux_sym_meta_repeat1 = 54,
  aux_sym_meta_repeat2 = 55,
  aux_sym_meta_repeat3 = 56,
  aux_sym_instruction_repeat1 = 57,
  aux_sym_instruction_repeat2 = 58,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_label] = "label",
  [anon_sym_const] = "const",
  [anon_sym_byte] = "byte",
  [anon_sym_word] = "word",
  [anon_sym_dword] = "dword",
  [anon_sym_qword] = "qword",
  [anon_sym_ptr] = "ptr",
  [anon_sym_LBRACK] = "[",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_RBRACK] = "]",
  [anon_sym_STAR] = "*",
  [anon_sym_rel] = "rel",
  [anon_sym_BANG] = "!",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_AMP] = "&",
  [anon_sym_POUND] = "#",
  [aux_sym_int_token1] = "int_token1",
  [aux_sym_int_token2] = "int_token2",
  [sym_float] = "float",
  [sym_string] = "string",
  [sym_word] = "word",
  [sym__reg] = "_reg",
  [sym_address] = "address",
  [sym_meta_ident] = "meta_ident",
  [sym__ident] = "_ident",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [aux_sym_line_comment_token2] = "line_comment_token2",
  [sym_block_comment] = "block_comment",
  [sym_program] = "program",
  [sym__item] = "_item",
  [sym_meta] = "meta",
  [sym_label] = "label",
  [sym_const] = "const",
  [sym_instruction] = "instruction",
  [sym__expr] = "_expr",
  [sym_ptr] = "ptr",
  [sym__tc_expr] = "_tc_expr",
  [sym_tc_infix] = "tc_infix",
  [sym_int] = "int",
  [sym_reg] = "reg",
  [sym_ident] = "ident",
  [sym_line_comment] = "line_comment",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_program_repeat2] = "program_repeat2",
  [aux_sym_meta_repeat1] = "meta_repeat1",
  [aux_sym_meta_repeat2] = "meta_repeat2",
  [aux_sym_meta_repeat3] = "meta_repeat3",
  [aux_sym_instruction_repeat1] = "instruction_repeat1",
  [aux_sym_instruction_repeat2] = "instruction_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_word] = anon_sym_word,
  [anon_sym_dword] = anon_sym_dword,
  [anon_sym_qword] = anon_sym_qword,
  [anon_sym_ptr] = anon_sym_ptr,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_rel] = anon_sym_rel,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_int_token1] = aux_sym_int_token1,
  [aux_sym_int_token2] = aux_sym_int_token2,
  [sym_float] = sym_float,
  [sym_string] = sym_string,
  [sym_word] = sym_word,
  [sym__reg] = sym__reg,
  [sym_address] = sym_address,
  [sym_meta_ident] = sym_meta_ident,
  [sym__ident] = sym__ident,
  [aux_sym_line_comment_token1] = aux_sym_line_comment_token1,
  [aux_sym_line_comment_token2] = aux_sym_line_comment_token2,
  [sym_block_comment] = sym_block_comment,
  [sym_program] = sym_program,
  [sym__item] = sym__item,
  [sym_meta] = sym_meta,
  [sym_label] = sym_label,
  [sym_const] = sym_const,
  [sym_instruction] = sym_instruction,
  [sym__expr] = sym__expr,
  [sym_ptr] = sym_ptr,
  [sym__tc_expr] = sym__tc_expr,
  [sym_tc_infix] = sym_tc_infix,
  [sym_int] = sym_int,
  [sym_reg] = sym_reg,
  [sym_ident] = sym_ident,
  [sym_line_comment] = sym_line_comment,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_program_repeat2] = aux_sym_program_repeat2,
  [aux_sym_meta_repeat1] = aux_sym_meta_repeat1,
  [aux_sym_meta_repeat2] = aux_sym_meta_repeat2,
  [aux_sym_meta_repeat3] = aux_sym_meta_repeat3,
  [aux_sym_instruction_repeat1] = aux_sym_instruction_repeat1,
  [aux_sym_instruction_repeat2] = aux_sym_instruction_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_word] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_qword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ptr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_int_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_int_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym__reg] = {
    .visible = false,
    .named = true,
  },
  [sym_address] = {
    .visible = true,
    .named = true,
  },
  [sym_meta_ident] = {
    .visible = true,
    .named = true,
  },
  [sym__ident] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_line_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__item] = {
    .visible = false,
    .named = true,
  },
  [sym_meta] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_const] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_ptr] = {
    .visible = true,
    .named = true,
  },
  [sym__tc_expr] = {
    .visible = false,
    .named = true,
  },
  [sym_tc_infix] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_reg] = {
    .visible = true,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_program_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_meta_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_meta_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_meta_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_kind = 1,
  field_lhs = 2,
  field_name = 3,
  field_op = 4,
  field_rhs = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_kind] = "kind",
  [field_lhs] = "lhs",
  [field_name] = "name",
  [field_op] = "op",
  [field_rhs] = "rhs",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 2},
  [5] = {.index = 4, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_kind, 0},
  [1] =
    {field_name, 1},
  [2] =
    {field_name, 1},
    {field_value, 2},
  [4] =
    {field_lhs, 0},
    {field_op, 1},
    {field_rhs, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [0] = sym_ident,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 11,
  [24] = 8,
  [25] = 9,
  [26] = 26,
  [27] = 27,
  [28] = 7,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 29,
  [34] = 34,
  [35] = 30,
  [36] = 32,
  [37] = 34,
  [38] = 38,
  [39] = 39,
  [40] = 31,
  [41] = 15,
  [42] = 18,
  [43] = 12,
  [44] = 17,
  [45] = 45,
  [46] = 13,
  [47] = 14,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 111,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(29);
      ADVANCE_MAP(
        '\n', 30,
        '!', 55,
        '"', 1,
        '#', 62,
        '$', 18,
        '%', 57,
        '&', 61,
        '(', 33,
        ')', 34,
        '*', 52,
        '+', 48,
        ',', 31,
        '-', 50,
        '.', 143,
        '/', 56,
        '0', 71,
        ':', 32,
        ';', 150,
        '[', 47,
        ']', 51,
        '^', 60,
        'b', 130,
        'c', 106,
        'd', 125,
        'l', 91,
        'p', 121,
        'q', 126,
        'r', 99,
        'w', 108,
        '|', 59,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(90);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '#', 62,
        '$', 19,
        '-', 6,
        '/', 9,
        '0', 81,
        ';', 150,
        'p', 15,
        'r', 12,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ';') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '$') ADVANCE(20);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(64);
      if (lookahead == ';') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ';') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5);
      END_STATE();
    case 6:
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '0') ADVANCE(81);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 7:
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '0') ADVANCE(79);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 8:
      if (lookahead == '$') ADVANCE(20);
      if (lookahead == '0') ADVANCE(64);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(150);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(151);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(82);
      END_STATE();
    case 17:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(65);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 21:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 24:
      if (eof) ADVANCE(29);
      ADVANCE_MAP(
        '\n', 30,
        '"', 1,
        '#', 62,
        '$', 18,
        '%', 22,
        '(', 33,
        '*', 52,
        '-', 7,
        '.', 143,
        '/', 9,
        '0', 76,
        ':', 32,
        ';', 150,
        '[', 47,
        'b', 129,
        'd', 127,
        'q', 128,
        'w', 107,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      END_STATE();
    case 25:
      if (eof) ADVANCE(29);
      ADVANCE_MAP(
        '\n', 30,
        '"', 1,
        '#', 62,
        '$', 18,
        '%', 22,
        '-', 7,
        '.', 143,
        '/', 9,
        '0', 76,
        ':', 32,
        ';', 150,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      END_STATE();
    case 26:
      if (eof) ADVANCE(29);
      ADVANCE_MAP(
        '\n', 30,
        '"', 1,
        '#', 62,
        '$', 18,
        '%', 58,
        '&', 61,
        '(', 33,
        '*', 52,
        '+', 48,
        ',', 31,
        '-', 50,
        '.', 143,
        '/', 56,
        '0', 68,
        ';', 150,
        '^', 60,
        '|', 59,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      END_STATE();
    case 27:
      if (eof) ADVANCE(29);
      ADVANCE_MAP(
        '\n', 30,
        '#', 62,
        '$', 23,
        '%', 22,
        '(', 33,
        '.', 21,
        '/', 9,
        ';', 150,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 28:
      if (eof) ADVANCE(29);
      ADVANCE_MAP(
        '\n', 30,
        '#', 62,
        '%', 57,
        '&', 61,
        '(', 33,
        ')', 34,
        '*', 52,
        '+', 48,
        ',', 31,
        '-', 49,
        '.', 143,
        '/', 56,
        ';', 150,
        ']', 51,
        '^', 60,
        'c', 106,
        'l', 91,
        '|', 59,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_label);
      if (lookahead == '.') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == '.') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == '.') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == '.') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_dword);
      if (lookahead == '.') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_dword);
      if (lookahead == '.') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_qword);
      if (lookahead == '.') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_qword);
      if (lookahead == '.') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_ptr);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_ptr);
      if (lookahead == '.') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '0') ADVANCE(81);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_rel);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_rel);
      if (lookahead == '.') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(150);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == 'b') ADVANCE(17);
      if (lookahead == 'x') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '_') ADVANCE(74);
      if (lookahead == 'b') ADVANCE(132);
      if (lookahead == 'x') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(136);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '_') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(136);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '_') ADVANCE(72);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(136);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'b') ADVANCE(131);
      if (lookahead == 'x') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(72);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(136);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == '_') ADVANCE(78);
      if (lookahead == 'b') ADVANCE(132);
      if (lookahead == 'x') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(136);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == '_') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(136);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'b') ADVANCE(16);
      if (lookahead == 'x') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == 'b') ADVANCE(16);
      if (lookahead == 'x') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(83);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(88);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'a') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'b') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'd') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'd') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'd') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'd') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'd') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'd') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 's') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 't') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 't') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 't') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 't') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'w') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'w') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'w') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'w') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'y') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'y') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(72);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_word);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__reg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_meta_ident);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_meta_ident);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '*') ADVANCE(145);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '*') ADVANCE(145);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '/') ADVANCE(148);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_line_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 28},
  [2] = {.lex_state = 24},
  [3] = {.lex_state = 24},
  [4] = {.lex_state = 24},
  [5] = {.lex_state = 24},
  [6] = {.lex_state = 26},
  [7] = {.lex_state = 26},
  [8] = {.lex_state = 26},
  [9] = {.lex_state = 26},
  [10] = {.lex_state = 26},
  [11] = {.lex_state = 26},
  [12] = {.lex_state = 26},
  [13] = {.lex_state = 26},
  [14] = {.lex_state = 26},
  [15] = {.lex_state = 26},
  [16] = {.lex_state = 26},
  [17] = {.lex_state = 26},
  [18] = {.lex_state = 26},
  [19] = {.lex_state = 26},
  [20] = {.lex_state = 26},
  [21] = {.lex_state = 25},
  [22] = {.lex_state = 28},
  [23] = {.lex_state = 28},
  [24] = {.lex_state = 28},
  [25] = {.lex_state = 28},
  [26] = {.lex_state = 25},
  [27] = {.lex_state = 28},
  [28] = {.lex_state = 28},
  [29] = {.lex_state = 26},
  [30] = {.lex_state = 26},
  [31] = {.lex_state = 26},
  [32] = {.lex_state = 26},
  [33] = {.lex_state = 26},
  [34] = {.lex_state = 26},
  [35] = {.lex_state = 26},
  [36] = {.lex_state = 26},
  [37] = {.lex_state = 26},
  [38] = {.lex_state = 28},
  [39] = {.lex_state = 26},
  [40] = {.lex_state = 26},
  [41] = {.lex_state = 28},
  [42] = {.lex_state = 28},
  [43] = {.lex_state = 28},
  [44] = {.lex_state = 28},
  [45] = {.lex_state = 28},
  [46] = {.lex_state = 28},
  [47] = {.lex_state = 28},
  [48] = {.lex_state = 26},
  [49] = {.lex_state = 26},
  [50] = {.lex_state = 28},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 28},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 27},
  [55] = {.lex_state = 27},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 27},
  [58] = {.lex_state = 27},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 27},
  [65] = {.lex_state = 27},
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
  [77] = {.lex_state = 28},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 28},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 147},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 24},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 27},
  [120] = {.lex_state = 27},
  [121] = {(TSStateId)(-1)},
  [122] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_word] = ACTIONS(1),
    [anon_sym_dword] = ACTIONS(1),
    [anon_sym_qword] = ACTIONS(1),
    [anon_sym_ptr] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_rel] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
    [aux_sym_int_token2] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [sym_address] = ACTIONS(1),
    [sym_meta_ident] = ACTIONS(1),
    [sym__ident] = ACTIONS(1),
    [aux_sym_line_comment_token2] = ACTIONS(5),
    [sym_block_comment] = ACTIONS(7),
  },
  [1] = {
    [sym_program] = STATE(117),
    [sym__item] = STATE(73),
    [sym_meta] = STATE(92),
    [sym_label] = STATE(92),
    [sym_const] = STATE(92),
    [sym_instruction] = STATE(92),
    [sym_line_comment] = STATE(1),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_label] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(3),
    [sym_word] = ACTIONS(15),
    [sym_meta_ident] = ACTIONS(17),
    [sym__ident] = ACTIONS(19),
    [aux_sym_line_comment_token2] = ACTIONS(5),
    [sym_block_comment] = ACTIONS(7),
  },
  [2] = {
    [sym__expr] = STATE(67),
    [sym_ptr] = STATE(81),
    [sym__tc_expr] = STATE(16),
    [sym_tc_infix] = STATE(15),
    [sym_int] = STATE(6),
    [sym_reg] = STATE(9),
    [sym_ident] = STATE(10),
    [sym_line_comment] = STATE(2),
    [aux_sym_instruction_repeat2] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_LF] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_byte] = ACTIONS(27),
    [anon_sym_word] = ACTIONS(27),
    [anon_sym_dword] = ACTIONS(27),
    [anon_sym_qword] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_POUND] = ACTIONS(33),
    [aux_sym_int_token2] = ACTIONS(35),
    [sym_float] = ACTIONS(37),
    [sym_string] = ACTIONS(39),
    [sym_word] = ACTIONS(41),
    [sym__reg] = ACTIONS(41),
    [sym_address] = ACTIONS(41),
    [sym_meta_ident] = ACTIONS(43),
    [sym__ident] = ACTIONS(43),
    [aux_sym_line_comment_token2] = ACTIONS(5),
    [sym_block_comment] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(37), 1,
      sym_float,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      aux_sym_int_token2,
    ACTIONS(51), 1,
      sym_string,
    STATE(3), 1,
      sym_line_comment,
    STATE(25), 1,
      sym_reg,
    STATE(70), 1,
      sym_int,
    STATE(83), 1,
      sym__expr,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(55), 2,
      sym_meta_ident,
      sym__ident,
    STATE(81), 2,
      sym_ptr,
      sym_ident,
    ACTIONS(53), 3,
      sym_word,
      sym__reg,
      sym_address,
    ACTIONS(27), 4,
      anon_sym_byte,
      anon_sym_word,
      anon_sym_dword,
      anon_sym_qword,
  [63] = 18,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(37), 1,
      sym_float,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      aux_sym_int_token2,
    ACTIONS(51), 1,
      sym_string,
    STATE(4), 1,
      sym_line_comment,
    STATE(25), 1,
      sym_reg,
    STATE(70), 1,
      sym_int,
    STATE(83), 1,
      sym__expr,
    ACTIONS(55), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(81), 2,
      sym_ptr,
      sym_ident,
    ACTIONS(53), 3,
      sym_word,
      sym__reg,
      sym_address,
    ACTIONS(27), 4,
      anon_sym_byte,
      anon_sym_word,
      anon_sym_dword,
      anon_sym_qword,
  [126] = 17,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(37), 1,
      sym_float,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      aux_sym_int_token2,
    ACTIONS(51), 1,
      sym_string,
    STATE(5), 1,
      sym_line_comment,
    STATE(25), 1,
      sym_reg,
    STATE(70), 1,
      sym_int,
    STATE(83), 1,
      sym__expr,
    ACTIONS(55), 2,
      sym_meta_ident,
      sym__ident,
    STATE(81), 2,
      sym_ptr,
      sym_ident,
    ACTIONS(53), 3,
      sym_word,
      sym__reg,
      sym_address,
    ACTIONS(27), 4,
      anon_sym_byte,
      anon_sym_word,
      anon_sym_dword,
      anon_sym_qword,
  [185] = 8,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(62), 1,
      anon_sym_COMMA,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym_line_comment,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(66), 7,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
    ACTIONS(68), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [225] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(7), 1,
      sym_line_comment,
    ACTIONS(72), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
    ACTIONS(70), 11,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
  [259] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(8), 1,
      sym_line_comment,
    ACTIONS(76), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
    ACTIONS(74), 11,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
  [293] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(9), 1,
      sym_line_comment,
    ACTIONS(80), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
    ACTIONS(78), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
  [326] = 7,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(62), 1,
      anon_sym_COMMA,
    STATE(10), 1,
      sym_line_comment,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(66), 7,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
    ACTIONS(68), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [363] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(11), 1,
      sym_line_comment,
    ACTIONS(84), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
    ACTIONS(82), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
  [396] = 7,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(90), 1,
      anon_sym_CARET,
    ACTIONS(92), 1,
      anon_sym_AMP,
    STATE(12), 1,
      sym_line_comment,
    ACTIONS(86), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_POUND,
      sym_string,
    ACTIONS(88), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [432] = 8,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(90), 1,
      anon_sym_CARET,
    ACTIONS(92), 1,
      anon_sym_AMP,
    ACTIONS(94), 1,
      anon_sym_PIPE,
    STATE(13), 1,
      sym_line_comment,
    ACTIONS(86), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_string,
    ACTIONS(88), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [470] = 10,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(90), 1,
      anon_sym_CARET,
    ACTIONS(92), 1,
      anon_sym_AMP,
    ACTIONS(94), 1,
      anon_sym_PIPE,
    ACTIONS(96), 1,
      anon_sym_STAR,
    STATE(14), 1,
      sym_line_comment,
    ACTIONS(98), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(86), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_POUND,
      sym_string,
    ACTIONS(88), 7,
      anon_sym_DASH,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [512] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(15), 1,
      sym_line_comment,
    ACTIONS(66), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
    ACTIONS(68), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [544] = 12,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(90), 1,
      anon_sym_CARET,
    ACTIONS(92), 1,
      anon_sym_AMP,
    ACTIONS(94), 1,
      anon_sym_PIPE,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(102), 1,
      anon_sym_PLUS,
    ACTIONS(104), 1,
      anon_sym_DASH,
    STATE(16), 1,
      sym_line_comment,
    ACTIONS(98), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(100), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_POUND,
      sym_string,
    ACTIONS(106), 6,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [590] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(17), 1,
      sym_line_comment,
    ACTIONS(86), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
    ACTIONS(88), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [622] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(92), 1,
      anon_sym_AMP,
    STATE(18), 1,
      sym_line_comment,
    ACTIONS(86), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_POUND,
      sym_string,
    ACTIONS(88), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [656] = 13,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      aux_sym_int_token2,
    ACTIONS(110), 1,
      sym_string,
    STATE(9), 1,
      sym_reg,
    STATE(16), 1,
      sym__tc_expr,
    STATE(19), 1,
      sym_line_comment,
    STATE(20), 1,
      aux_sym_instruction_repeat2,
    ACTIONS(43), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(41), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(15), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [702] = 12,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(114), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      aux_sym_int_token2,
    ACTIONS(120), 1,
      sym_string,
    STATE(9), 1,
      sym_reg,
    STATE(16), 1,
      sym__tc_expr,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(126), 2,
      sym_meta_ident,
      sym__ident,
    STATE(20), 2,
      sym_line_comment,
      aux_sym_instruction_repeat2,
    ACTIONS(123), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(15), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [746] = 14,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      aux_sym_int_token2,
    ACTIONS(131), 1,
      anon_sym_COLON,
    ACTIONS(133), 1,
      sym_float,
    ACTIONS(135), 1,
      sym_string,
    STATE(21), 1,
      sym_line_comment,
    STATE(25), 1,
      sym_reg,
    STATE(74), 1,
      sym_int,
    STATE(96), 1,
      sym_ident,
    ACTIONS(55), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(53), 3,
      sym_word,
      sym__reg,
      sym_address,
  [793] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(11), 1,
      anon_sym_label,
    ACTIONS(13), 1,
      anon_sym_const,
    ACTIONS(15), 1,
      sym_word,
    ACTIONS(17), 1,
      sym_meta_ident,
    ACTIONS(19), 1,
      sym__ident,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 1,
      anon_sym_LF,
    STATE(22), 1,
      sym_line_comment,
    STATE(50), 1,
      aux_sym_program_repeat1,
    STATE(91), 1,
      sym__item,
    STATE(92), 4,
      sym_meta,
      sym_label,
      sym_const,
      sym_instruction,
  [839] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(84), 1,
      anon_sym_SLASH,
    STATE(23), 1,
      sym_line_comment,
    ACTIONS(82), 12,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
  [869] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(76), 1,
      anon_sym_SLASH,
    STATE(24), 1,
      sym_line_comment,
    ACTIONS(74), 12,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
  [899] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(80), 1,
      anon_sym_SLASH,
    STATE(25), 1,
      sym_line_comment,
    ACTIONS(78), 12,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
  [929] = 13,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      aux_sym_int_token2,
    ACTIONS(133), 1,
      sym_float,
    ACTIONS(135), 1,
      sym_string,
    STATE(25), 1,
      sym_reg,
    STATE(26), 1,
      sym_line_comment,
    STATE(74), 1,
      sym_int,
    STATE(96), 1,
      sym_ident,
    ACTIONS(55), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(53), 3,
      sym_word,
      sym__reg,
      sym_address,
  [973] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(11), 1,
      anon_sym_label,
    ACTIONS(13), 1,
      anon_sym_const,
    ACTIONS(15), 1,
      sym_word,
    ACTIONS(17), 1,
      sym_meta_ident,
    ACTIONS(19), 1,
      sym__ident,
    ACTIONS(139), 1,
      anon_sym_LF,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    STATE(27), 1,
      sym_line_comment,
    STATE(50), 1,
      aux_sym_program_repeat1,
    STATE(91), 1,
      sym__item,
    STATE(92), 4,
      sym_meta,
      sym_label,
      sym_const,
      sym_instruction,
  [1019] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(72), 1,
      anon_sym_SLASH,
    STATE(28), 1,
      sym_line_comment,
    ACTIONS(70), 12,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
  [1049] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      aux_sym_int_token2,
    ACTIONS(143), 1,
      sym_string,
    STATE(25), 1,
      sym_reg,
    STATE(29), 1,
      sym_line_comment,
    STATE(46), 1,
      sym__tc_expr,
    ACTIONS(55), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(53), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(41), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1088] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      aux_sym_int_token2,
    ACTIONS(110), 1,
      sym_string,
    STATE(9), 1,
      sym_reg,
    STATE(17), 1,
      sym__tc_expr,
    STATE(30), 1,
      sym_line_comment,
    ACTIONS(43), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(41), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(15), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1127] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      aux_sym_int_token2,
    ACTIONS(110), 1,
      sym_string,
    STATE(9), 1,
      sym_reg,
    STATE(18), 1,
      sym__tc_expr,
    STATE(31), 1,
      sym_line_comment,
    ACTIONS(43), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(41), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(15), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1166] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      aux_sym_int_token2,
    ACTIONS(110), 1,
      sym_string,
    STATE(9), 1,
      sym_reg,
    STATE(12), 1,
      sym__tc_expr,
    STATE(32), 1,
      sym_line_comment,
    ACTIONS(43), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(41), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(15), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1205] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      aux_sym_int_token2,
    ACTIONS(110), 1,
      sym_string,
    STATE(9), 1,
      sym_reg,
    STATE(13), 1,
      sym__tc_expr,
    STATE(33), 1,
      sym_line_comment,
    ACTIONS(43), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(41), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(15), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1244] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      aux_sym_int_token2,
    ACTIONS(110), 1,
      sym_string,
    STATE(9), 1,
      sym_reg,
    STATE(14), 1,
      sym__tc_expr,
    STATE(34), 1,
      sym_line_comment,
    ACTIONS(43), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(41), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(15), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1283] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      aux_sym_int_token2,
    ACTIONS(143), 1,
      sym_string,
    STATE(25), 1,
      sym_reg,
    STATE(35), 1,
      sym_line_comment,
    STATE(44), 1,
      sym__tc_expr,
    ACTIONS(55), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(53), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(41), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1322] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      aux_sym_int_token2,
    ACTIONS(143), 1,
      sym_string,
    STATE(25), 1,
      sym_reg,
    STATE(36), 1,
      sym_line_comment,
    STATE(43), 1,
      sym__tc_expr,
    ACTIONS(55), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(53), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(41), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1361] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      aux_sym_int_token2,
    ACTIONS(143), 1,
      sym_string,
    STATE(25), 1,
      sym_reg,
    STATE(37), 1,
      sym_line_comment,
    STATE(47), 1,
      sym__tc_expr,
    ACTIONS(55), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(53), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(41), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1400] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(11), 1,
      anon_sym_label,
    ACTIONS(13), 1,
      anon_sym_const,
    ACTIONS(15), 1,
      sym_word,
    ACTIONS(17), 1,
      sym_meta_ident,
    ACTIONS(19), 1,
      sym__ident,
    ACTIONS(139), 1,
      anon_sym_LF,
    STATE(38), 1,
      sym_line_comment,
    STATE(50), 1,
      aux_sym_program_repeat1,
    STATE(91), 1,
      sym__item,
    STATE(92), 4,
      sym_meta,
      sym_label,
      sym_const,
      sym_instruction,
  [1443] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      aux_sym_int_token2,
    ACTIONS(143), 1,
      sym_string,
    STATE(25), 1,
      sym_reg,
    STATE(39), 1,
      sym_line_comment,
    STATE(45), 1,
      sym__tc_expr,
    ACTIONS(55), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(53), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(41), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1482] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      aux_sym_int_token2,
    ACTIONS(143), 1,
      sym_string,
    STATE(25), 1,
      sym_reg,
    STATE(40), 1,
      sym_line_comment,
    STATE(42), 1,
      sym__tc_expr,
    ACTIONS(55), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(53), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(41), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1521] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(68), 1,
      anon_sym_SLASH,
    STATE(41), 1,
      sym_line_comment,
    ACTIONS(66), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
  [1548] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(145), 1,
      anon_sym_AMP,
    STATE(42), 1,
      sym_line_comment,
    ACTIONS(86), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
  [1577] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(145), 1,
      anon_sym_AMP,
    ACTIONS(147), 1,
      anon_sym_CARET,
    STATE(43), 1,
      sym_line_comment,
    ACTIONS(86), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
  [1608] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    STATE(44), 1,
      sym_line_comment,
    ACTIONS(86), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
  [1635] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(145), 1,
      anon_sym_AMP,
    ACTIONS(147), 1,
      anon_sym_CARET,
    ACTIONS(155), 1,
      anon_sym_SLASH,
    ACTIONS(157), 1,
      anon_sym_PIPE,
    STATE(45), 1,
      sym_line_comment,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(153), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [1672] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(145), 1,
      anon_sym_AMP,
    ACTIONS(147), 1,
      anon_sym_CARET,
    ACTIONS(157), 1,
      anon_sym_PIPE,
    STATE(46), 1,
      sym_line_comment,
    ACTIONS(86), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [1705] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(145), 1,
      anon_sym_AMP,
    ACTIONS(147), 1,
      anon_sym_CARET,
    ACTIONS(155), 1,
      anon_sym_SLASH,
    ACTIONS(157), 1,
      anon_sym_PIPE,
    STATE(47), 1,
      sym_line_comment,
    ACTIONS(153), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(86), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1740] = 9,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      aux_sym_int_token2,
    STATE(25), 1,
      sym_reg,
    STATE(48), 1,
      sym_line_comment,
    ACTIONS(55), 2,
      sym_meta_ident,
      sym__ident,
    STATE(104), 2,
      sym_int,
      sym_ident,
    ACTIONS(53), 3,
      sym_word,
      sym__reg,
      sym_address,
  [1772] = 9,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      aux_sym_int_token2,
    STATE(25), 1,
      sym_reg,
    STATE(49), 1,
      sym_line_comment,
    ACTIONS(55), 2,
      sym_meta_ident,
      sym__ident,
    STATE(109), 2,
      sym_int,
      sym_ident,
    ACTIONS(53), 3,
      sym_word,
      sym__reg,
      sym_address,
  [1804] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    ACTIONS(161), 1,
      anon_sym_LF,
    STATE(50), 2,
      sym_line_comment,
      aux_sym_program_repeat1,
    ACTIONS(164), 5,
      anon_sym_label,
      anon_sym_const,
      sym_word,
      sym_meta_ident,
      sym__ident,
  [1831] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(166), 1,
      sym_address,
    STATE(25), 1,
      sym_reg,
    STATE(51), 1,
      sym_line_comment,
    STATE(105), 1,
      sym_ident,
    ACTIONS(53), 2,
      sym_word,
      sym__reg,
    ACTIONS(55), 2,
      sym_meta_ident,
      sym__ident,
  [1861] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(52), 1,
      sym_line_comment,
    ACTIONS(168), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(170), 5,
      anon_sym_label,
      anon_sym_const,
      sym_word,
      sym_meta_ident,
      sym__ident,
  [1885] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(166), 1,
      sym_address,
    STATE(25), 1,
      sym_reg,
    STATE(53), 1,
      sym_line_comment,
    STATE(108), 1,
      sym_ident,
    ACTIONS(53), 2,
      sym_word,
      sym__reg,
    ACTIONS(55), 2,
      sym_meta_ident,
      sym__ident,
  [1915] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      sym_meta_ident,
    STATE(54), 1,
      sym_line_comment,
    STATE(97), 1,
      sym_meta,
    ACTIONS(172), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1941] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(176), 1,
      sym_meta_ident,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym_line_comment,
    STATE(99), 1,
      sym_meta,
    ACTIONS(178), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1967] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      sym_line_comment,
    STATE(78), 1,
      aux_sym_meta_repeat2,
    ACTIONS(182), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1990] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(53), 1,
      sym__reg,
    STATE(57), 1,
      sym_line_comment,
    STATE(80), 1,
      sym_reg,
    ACTIONS(166), 2,
      sym_word,
      sym_address,
  [2013] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(53), 1,
      sym__reg,
    STATE(58), 1,
      sym_line_comment,
    STATE(77), 1,
      sym_reg,
    ACTIONS(166), 2,
      sym_word,
      sym_address,
  [2036] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    ACTIONS(186), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(59), 2,
      sym_line_comment,
      aux_sym_meta_repeat1,
  [2057] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(193), 1,
      anon_sym_BANG,
    STATE(60), 1,
      sym_line_comment,
    ACTIONS(191), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2078] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(197), 1,
      anon_sym_COMMA,
    ACTIONS(195), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(61), 2,
      sym_line_comment,
      aux_sym_meta_repeat3,
  [2099] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym_meta_repeat3,
    STATE(62), 1,
      sym_line_comment,
    ACTIONS(182), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2122] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    STATE(59), 1,
      aux_sym_meta_repeat1,
    STATE(63), 1,
      sym_line_comment,
    ACTIONS(182), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2145] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(53), 1,
      sym__reg,
    STATE(64), 1,
      sym_line_comment,
    STATE(106), 1,
      sym_reg,
    ACTIONS(166), 2,
      sym_word,
      sym_address,
  [2168] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(53), 1,
      sym__reg,
    STATE(65), 1,
      sym_line_comment,
    STATE(101), 1,
      sym_reg,
    ACTIONS(166), 2,
      sym_word,
      sym_address,
  [2191] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    ACTIONS(206), 1,
      anon_sym_LF,
    STATE(38), 1,
      aux_sym_program_repeat1,
    STATE(66), 2,
      sym_line_comment,
      aux_sym_program_repeat2,
  [2214] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    STATE(67), 1,
      sym_line_comment,
    STATE(75), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2237] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      aux_sym_meta_repeat2,
    STATE(68), 1,
      sym_line_comment,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2260] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_BANG,
    STATE(69), 1,
      sym_line_comment,
    ACTIONS(213), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2281] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    STATE(70), 1,
      sym_line_comment,
    ACTIONS(62), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2302] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      aux_sym_meta_repeat3,
    STATE(71), 1,
      sym_line_comment,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2325] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(217), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(72), 2,
      sym_line_comment,
      aux_sym_instruction_repeat1,
  [2346] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(139), 1,
      anon_sym_LF,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      aux_sym_program_repeat1,
    STATE(73), 1,
      sym_line_comment,
    STATE(76), 1,
      aux_sym_program_repeat2,
  [2371] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    STATE(63), 1,
      aux_sym_meta_repeat1,
    STATE(74), 1,
      sym_line_comment,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2394] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(224), 1,
      anon_sym_COMMA,
    STATE(72), 1,
      aux_sym_instruction_repeat1,
    STATE(75), 1,
      sym_line_comment,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2417] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 1,
      anon_sym_LF,
    STATE(27), 1,
      aux_sym_program_repeat1,
    STATE(66), 1,
      aux_sym_program_repeat2,
    STATE(76), 1,
      sym_line_comment,
  [2442] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    ACTIONS(230), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      sym_line_comment,
    ACTIONS(228), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2465] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(232), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(78), 2,
      sym_line_comment,
      aux_sym_meta_repeat2,
  [2486] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(79), 1,
      sym_line_comment,
    ACTIONS(195), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2504] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(239), 1,
      anon_sym_RBRACK,
    STATE(80), 1,
      sym_line_comment,
    ACTIONS(237), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2524] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(81), 1,
      sym_line_comment,
    ACTIONS(62), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2542] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(82), 1,
      sym_line_comment,
    ACTIONS(241), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2560] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(83), 1,
      sym_line_comment,
    ACTIONS(217), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2578] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(84), 1,
      sym_line_comment,
    ACTIONS(213), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2596] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(85), 1,
      sym_line_comment,
    ACTIONS(243), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2614] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(86), 1,
      sym_line_comment,
    ACTIONS(191), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2632] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(87), 1,
      sym_line_comment,
    ACTIONS(232), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2650] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(88), 1,
      sym_line_comment,
    ACTIONS(245), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2668] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(89), 1,
      sym_line_comment,
    ACTIONS(186), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2686] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(90), 1,
      sym_line_comment,
    ACTIONS(247), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2703] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(91), 1,
      sym_line_comment,
    ACTIONS(204), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2720] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(92), 1,
      sym_line_comment,
    ACTIONS(249), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2737] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(93), 1,
      sym_line_comment,
    ACTIONS(251), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2754] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      aux_sym_int_token2,
    STATE(94), 1,
      sym_line_comment,
    STATE(109), 1,
      sym_int,
  [2773] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(95), 1,
      sym_line_comment,
    ACTIONS(255), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2790] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(96), 1,
      sym_line_comment,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2807] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(97), 1,
      sym_line_comment,
    ACTIONS(257), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2824] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      aux_sym_int_token2,
    STATE(98), 1,
      sym_line_comment,
    STATE(110), 1,
      sym_int,
  [2843] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(99), 1,
      sym_line_comment,
    ACTIONS(259), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2860] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      aux_sym_int_token2,
    STATE(89), 1,
      sym_int,
    STATE(100), 1,
      sym_line_comment,
  [2879] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      sym_line_comment,
  [2895] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(263), 1,
      anon_sym_rel,
    STATE(102), 1,
      sym_line_comment,
  [2911] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    STATE(103), 1,
      sym_line_comment,
  [2927] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(267), 1,
      anon_sym_RBRACK,
    STATE(104), 1,
      sym_line_comment,
  [2943] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      sym_line_comment,
  [2959] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      sym_line_comment,
  [2975] = 5,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      aux_sym_line_comment_token1,
    ACTIONS(275), 1,
      aux_sym_line_comment_token2,
    ACTIONS(277), 1,
      sym_block_comment,
    STATE(107), 1,
      sym_line_comment,
  [2991] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      sym_line_comment,
  [3007] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(239), 1,
      anon_sym_RBRACK,
    STATE(109), 1,
      sym_line_comment,
  [3023] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(281), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      sym_line_comment,
  [3039] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(283), 1,
      aux_sym_int_token1,
    STATE(111), 1,
      sym_line_comment,
  [3055] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    STATE(112), 1,
      sym_line_comment,
  [3071] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(287), 1,
      anon_sym_ptr,
    STATE(113), 1,
      sym_line_comment,
  [3087] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(289), 1,
      sym_float,
    STATE(114), 1,
      sym_line_comment,
  [3103] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(291), 1,
      aux_sym_int_token1,
    STATE(115), 1,
      sym_line_comment,
  [3119] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(293), 1,
      sym_string,
    STATE(116), 1,
      sym_line_comment,
  [3135] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
    STATE(117), 1,
      sym_line_comment,
  [3151] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(23), 1,
      anon_sym_COLON,
    STATE(118), 1,
      sym_line_comment,
  [3167] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(297), 1,
      sym_word,
    STATE(119), 1,
      sym_line_comment,
  [3183] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(299), 1,
      sym_word,
    STATE(120), 1,
      sym_line_comment,
  [3199] = 1,
    ACTIONS(301), 1,
      ts_builtin_sym_end,
  [3203] = 1,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 63,
  [SMALL_STATE(5)] = 126,
  [SMALL_STATE(6)] = 185,
  [SMALL_STATE(7)] = 225,
  [SMALL_STATE(8)] = 259,
  [SMALL_STATE(9)] = 293,
  [SMALL_STATE(10)] = 326,
  [SMALL_STATE(11)] = 363,
  [SMALL_STATE(12)] = 396,
  [SMALL_STATE(13)] = 432,
  [SMALL_STATE(14)] = 470,
  [SMALL_STATE(15)] = 512,
  [SMALL_STATE(16)] = 544,
  [SMALL_STATE(17)] = 590,
  [SMALL_STATE(18)] = 622,
  [SMALL_STATE(19)] = 656,
  [SMALL_STATE(20)] = 702,
  [SMALL_STATE(21)] = 746,
  [SMALL_STATE(22)] = 793,
  [SMALL_STATE(23)] = 839,
  [SMALL_STATE(24)] = 869,
  [SMALL_STATE(25)] = 899,
  [SMALL_STATE(26)] = 929,
  [SMALL_STATE(27)] = 973,
  [SMALL_STATE(28)] = 1019,
  [SMALL_STATE(29)] = 1049,
  [SMALL_STATE(30)] = 1088,
  [SMALL_STATE(31)] = 1127,
  [SMALL_STATE(32)] = 1166,
  [SMALL_STATE(33)] = 1205,
  [SMALL_STATE(34)] = 1244,
  [SMALL_STATE(35)] = 1283,
  [SMALL_STATE(36)] = 1322,
  [SMALL_STATE(37)] = 1361,
  [SMALL_STATE(38)] = 1400,
  [SMALL_STATE(39)] = 1443,
  [SMALL_STATE(40)] = 1482,
  [SMALL_STATE(41)] = 1521,
  [SMALL_STATE(42)] = 1548,
  [SMALL_STATE(43)] = 1577,
  [SMALL_STATE(44)] = 1608,
  [SMALL_STATE(45)] = 1635,
  [SMALL_STATE(46)] = 1672,
  [SMALL_STATE(47)] = 1705,
  [SMALL_STATE(48)] = 1740,
  [SMALL_STATE(49)] = 1772,
  [SMALL_STATE(50)] = 1804,
  [SMALL_STATE(51)] = 1831,
  [SMALL_STATE(52)] = 1861,
  [SMALL_STATE(53)] = 1885,
  [SMALL_STATE(54)] = 1915,
  [SMALL_STATE(55)] = 1941,
  [SMALL_STATE(56)] = 1967,
  [SMALL_STATE(57)] = 1990,
  [SMALL_STATE(58)] = 2013,
  [SMALL_STATE(59)] = 2036,
  [SMALL_STATE(60)] = 2057,
  [SMALL_STATE(61)] = 2078,
  [SMALL_STATE(62)] = 2099,
  [SMALL_STATE(63)] = 2122,
  [SMALL_STATE(64)] = 2145,
  [SMALL_STATE(65)] = 2168,
  [SMALL_STATE(66)] = 2191,
  [SMALL_STATE(67)] = 2214,
  [SMALL_STATE(68)] = 2237,
  [SMALL_STATE(69)] = 2260,
  [SMALL_STATE(70)] = 2281,
  [SMALL_STATE(71)] = 2302,
  [SMALL_STATE(72)] = 2325,
  [SMALL_STATE(73)] = 2346,
  [SMALL_STATE(74)] = 2371,
  [SMALL_STATE(75)] = 2394,
  [SMALL_STATE(76)] = 2417,
  [SMALL_STATE(77)] = 2442,
  [SMALL_STATE(78)] = 2465,
  [SMALL_STATE(79)] = 2486,
  [SMALL_STATE(80)] = 2504,
  [SMALL_STATE(81)] = 2524,
  [SMALL_STATE(82)] = 2542,
  [SMALL_STATE(83)] = 2560,
  [SMALL_STATE(84)] = 2578,
  [SMALL_STATE(85)] = 2596,
  [SMALL_STATE(86)] = 2614,
  [SMALL_STATE(87)] = 2632,
  [SMALL_STATE(88)] = 2650,
  [SMALL_STATE(89)] = 2668,
  [SMALL_STATE(90)] = 2686,
  [SMALL_STATE(91)] = 2703,
  [SMALL_STATE(92)] = 2720,
  [SMALL_STATE(93)] = 2737,
  [SMALL_STATE(94)] = 2754,
  [SMALL_STATE(95)] = 2773,
  [SMALL_STATE(96)] = 2790,
  [SMALL_STATE(97)] = 2807,
  [SMALL_STATE(98)] = 2824,
  [SMALL_STATE(99)] = 2843,
  [SMALL_STATE(100)] = 2860,
  [SMALL_STATE(101)] = 2879,
  [SMALL_STATE(102)] = 2895,
  [SMALL_STATE(103)] = 2911,
  [SMALL_STATE(104)] = 2927,
  [SMALL_STATE(105)] = 2943,
  [SMALL_STATE(106)] = 2959,
  [SMALL_STATE(107)] = 2975,
  [SMALL_STATE(108)] = 2991,
  [SMALL_STATE(109)] = 3007,
  [SMALL_STATE(110)] = 3023,
  [SMALL_STATE(111)] = 3039,
  [SMALL_STATE(112)] = 3055,
  [SMALL_STATE(113)] = 3071,
  [SMALL_STATE(114)] = 3087,
  [SMALL_STATE(115)] = 3103,
  [SMALL_STATE(116)] = 3119,
  [SMALL_STATE(117)] = 3135,
  [SMALL_STATE(118)] = 3151,
  [SMALL_STATE(119)] = 3167,
  [SMALL_STATE(120)] = 3183,
  [SMALL_STATE(121)] = 3199,
  [SMALL_STATE(122)] = 3203,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, 0, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 1),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expr, 1, 0, 0), REDUCE(sym__tc_expr, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tc_expr, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tc_expr, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 2, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 2, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reg, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tc_infix, 3, 0, 5),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tc_infix, 3, 0, 5),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat2, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(111),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(7),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(15),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(11),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(9),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 1, 0, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 3, 0, 4),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 3, 0, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2, 0, 0),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 5, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat3, 2, 0, 0),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat3, 2, 0, 0), SHIFT_REPEAT(116),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2, 0, 0),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2, 0, 0), SHIFT_REPEAT(52),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 2, 0, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 3, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat2, 2, 0, 0),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat2, 2, 0, 0), SHIFT_REPEAT(114),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 7, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 6, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 4, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 1, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5, 0, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3, 0, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [295] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 1, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_asm(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
