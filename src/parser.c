#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 188
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 9
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
  [7] = 5,
  [8] = 6,
  [9] = 4,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 12,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 13,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 11,
  [29] = 25,
  [30] = 15,
  [31] = 14,
  [32] = 10,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 37,
  [40] = 40,
  [41] = 38,
  [42] = 42,
  [43] = 43,
  [44] = 40,
  [45] = 42,
  [46] = 43,
  [47] = 17,
  [48] = 20,
  [49] = 21,
  [50] = 23,
  [51] = 16,
  [52] = 22,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 54,
  [57] = 55,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 62,
  [65] = 63,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 68,
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
  [86] = 71,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 76,
  [92] = 92,
  [93] = 84,
  [94] = 74,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 66,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 77,
  [107] = 107,
  [108] = 108,
  [109] = 75,
  [110] = 72,
  [111] = 111,
  [112] = 79,
  [113] = 73,
  [114] = 10,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 11,
  [119] = 83,
  [120] = 120,
  [121] = 95,
  [122] = 111,
  [123] = 115,
  [124] = 124,
  [125] = 117,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 96,
  [135] = 131,
  [136] = 120,
  [137] = 126,
  [138] = 129,
  [139] = 128,
  [140] = 140,
  [141] = 141,
  [142] = 124,
  [143] = 143,
  [144] = 15,
  [145] = 97,
  [146] = 14,
  [147] = 101,
  [148] = 140,
  [149] = 104,
  [150] = 105,
  [151] = 107,
  [152] = 116,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 155,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 159,
  [164] = 164,
  [165] = 157,
  [166] = 166,
  [167] = 162,
  [168] = 168,
  [169] = 168,
  [170] = 170,
  [171] = 171,
  [172] = 160,
  [173] = 173,
  [174] = 170,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 171,
  [182] = 161,
  [183] = 180,
  [184] = 178,
  [185] = 160,
  [186] = 186,
  [187] = 187,
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
        '"', 2,
        '#', 62,
        '$', 20,
        '%', 57,
        '&', 61,
        '(', 33,
        ')', 34,
        '*', 52,
        '+', 48,
        ',', 31,
        '-', 50,
        '.', 151,
        '/', 56,
        '0', 71,
        ':', 32,
        ';', 158,
        '[', 47,
        ']', 51,
        '^', 60,
        'b', 137,
        'c', 113,
        'd', 132,
        'l', 98,
        'p', 128,
        'q', 133,
        'r', 106,
        'w', 115,
        '|', 59,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '!', 55,
        '#', 62,
        '$', 21,
        '(', 33,
        ',', 31,
        '-', 8,
        '/', 11,
        '0', 84,
        ';', 158,
        'p', 17,
        'r', 14,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(97);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '$') ADVANCE(20);
      if (lookahead == '%') ADVANCE(23);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(81);
      if (lookahead == ';') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(147);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '$') ADVANCE(24);
      if (lookahead == '%') ADVANCE(23);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ';') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '$') ADVANCE(24);
      if (lookahead == '%') ADVANCE(23);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ';') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(64);
      if (lookahead == ';') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ';') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7);
      END_STATE();
    case 8:
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '0') ADVANCE(84);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 9:
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '0') ADVANCE(79);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 10:
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '0') ADVANCE(64);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(158);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(85);
      END_STATE();
    case 19:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(65);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 25:
      if (eof) ADVANCE(29);
      ADVANCE_MAP(
        '\n', 30,
        '"', 2,
        '#', 62,
        '$', 20,
        '%', 23,
        '(', 33,
        '*', 52,
        '-', 9,
        '.', 151,
        '/', 11,
        '0', 76,
        ':', 32,
        ';', 158,
        '[', 47,
        'b', 136,
        'd', 134,
        'q', 135,
        'w', 114,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(143);
      END_STATE();
    case 26:
      if (eof) ADVANCE(29);
      ADVANCE_MAP(
        '\n', 30,
        '"', 2,
        '#', 62,
        '$', 20,
        '%', 23,
        '-', 9,
        '.', 151,
        '/', 11,
        '0', 76,
        ':', 32,
        ';', 158,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(143);
      END_STATE();
    case 27:
      if (eof) ADVANCE(29);
      ADVANCE_MAP(
        '\n', 30,
        '"', 2,
        '#', 62,
        '$', 20,
        '%', 58,
        '&', 61,
        '(', 33,
        '*', 52,
        '+', 48,
        ',', 31,
        '-', 50,
        '.', 151,
        '/', 56,
        '0', 68,
        ';', 158,
        '^', 60,
        '|', 59,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(143);
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
        '.', 151,
        '/', 56,
        ';', 158,
        ']', 51,
        '^', 60,
        'c', 113,
        'l', 98,
        '|', 59,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
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
      if (lookahead == '.') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == '.') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == '.') ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == '.') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_dword);
      if (lookahead == '.') ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_dword);
      if (lookahead == '.') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_qword);
      if (lookahead == '.') ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_qword);
      if (lookahead == '.') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_ptr);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_ptr);
      if (lookahead == '.') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
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
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '0') ADVANCE(84);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(88);
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
      if (lookahead == '.') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(158);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
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
          lookahead != '\n') ADVANCE(157);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == 'b') ADVANCE(19);
      if (lookahead == 'x') ADVANCE(22);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '_') ADVANCE(74);
      if (lookahead == 'b') ADVANCE(139);
      if (lookahead == 'x') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(143);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '_') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(143);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '_') ADVANCE(72);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(143);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'b') ADVANCE(138);
      if (lookahead == 'x') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(72);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(143);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(78);
      if (lookahead == 'b') ADVANCE(139);
      if (lookahead == 'x') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(143);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(143);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'b') ADVANCE(18);
      if (lookahead == 'x') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '_') ADVANCE(89);
      if (lookahead == 'b') ADVANCE(144);
      if (lookahead == 'x') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(147);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '_') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(147);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '_') ADVANCE(86);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(147);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == 'b') ADVANCE(18);
      if (lookahead == 'x') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(88);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(86);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(147);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(95);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'a') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'b') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'd') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'd') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'd') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'd') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'd') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'd') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'e') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'e') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'e') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'e') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'l') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'l') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'n') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'o') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'o') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'o') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'o') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'o') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'o') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'o') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'r') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'r') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'r') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'r') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'r') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'r') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'r') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 's') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 't') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 't') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 't') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 't') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'w') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'w') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'w') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'w') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'y') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'y') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(72);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(143);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(143);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(147);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_word);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(147);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_word);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__reg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_meta_ident);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '*') ADVANCE(153);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '*') ADVANCE(153);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == ';') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(157);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '*') ADVANCE(154);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_line_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 28},
  [2] = {.lex_state = 25},
  [3] = {.lex_state = 25},
  [4] = {.lex_state = 25},
  [5] = {.lex_state = 25},
  [6] = {.lex_state = 25},
  [7] = {.lex_state = 25},
  [8] = {.lex_state = 25},
  [9] = {.lex_state = 25},
  [10] = {.lex_state = 27},
  [11] = {.lex_state = 27},
  [12] = {.lex_state = 27},
  [13] = {.lex_state = 27},
  [14] = {.lex_state = 27},
  [15] = {.lex_state = 27},
  [16] = {.lex_state = 27},
  [17] = {.lex_state = 27},
  [18] = {.lex_state = 27},
  [19] = {.lex_state = 27},
  [20] = {.lex_state = 27},
  [21] = {.lex_state = 27},
  [22] = {.lex_state = 27},
  [23] = {.lex_state = 27},
  [24] = {.lex_state = 27},
  [25] = {.lex_state = 27},
  [26] = {.lex_state = 27},
  [27] = {.lex_state = 26},
  [28] = {.lex_state = 28},
  [29] = {.lex_state = 27},
  [30] = {.lex_state = 28},
  [31] = {.lex_state = 28},
  [32] = {.lex_state = 28},
  [33] = {.lex_state = 28},
  [34] = {.lex_state = 28},
  [35] = {.lex_state = 28},
  [36] = {.lex_state = 27},
  [37] = {.lex_state = 27},
  [38] = {.lex_state = 27},
  [39] = {.lex_state = 27},
  [40] = {.lex_state = 27},
  [41] = {.lex_state = 27},
  [42] = {.lex_state = 27},
  [43] = {.lex_state = 27},
  [44] = {.lex_state = 27},
  [45] = {.lex_state = 27},
  [46] = {.lex_state = 27},
  [47] = {.lex_state = 28},
  [48] = {.lex_state = 28},
  [49] = {.lex_state = 28},
  [50] = {.lex_state = 28},
  [51] = {.lex_state = 28},
  [52] = {.lex_state = 28},
  [53] = {.lex_state = 28},
  [54] = {.lex_state = 27},
  [55] = {.lex_state = 27},
  [56] = {.lex_state = 27},
  [57] = {.lex_state = 27},
  [58] = {.lex_state = 28},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 28},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 28},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 28},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 28},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 28},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 6},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 155},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 5},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 6},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 25},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 6},
  [186] = {(TSStateId)(-1)},
  [187] = {(TSStateId)(-1)},
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
    [sym_program] = STATE(179),
    [sym__item] = STATE(82),
    [sym_meta] = STATE(130),
    [sym_label] = STATE(130),
    [sym_const] = STATE(130),
    [sym_instruction] = STATE(130),
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
    [sym__expr] = STATE(83),
    [sym_ptr] = STATE(117),
    [sym__tc_expr] = STATE(19),
    [sym_tc_infix] = STATE(20),
    [sym_int] = STATE(12),
    [sym_reg] = STATE(15),
    [sym_ident] = STATE(13),
    [sym_line_comment] = STATE(2),
    [aux_sym_instruction_repeat2] = STATE(25),
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
  [0] = 21,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_STAR,
    ACTIONS(53), 1,
      aux_sym_int_token2,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      sym_string,
    STATE(3), 1,
      sym_line_comment,
    STATE(15), 1,
      sym_reg,
    STATE(18), 1,
      sym_int,
    STATE(19), 1,
      sym__tc_expr,
    STATE(20), 1,
      sym_tc_infix,
    STATE(24), 1,
      sym_ident,
    STATE(29), 1,
      aux_sym_instruction_repeat2,
    STATE(119), 1,
      sym__expr,
    STATE(125), 1,
      sym_ptr,
    ACTIONS(43), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(41), 3,
      sym_word,
      sym__reg,
      sym_address,
    ACTIONS(47), 4,
      anon_sym_byte,
      anon_sym_word,
      anon_sym_dword,
      anon_sym_qword,
  [70] = 18,
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
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      aux_sym_int_token2,
    ACTIONS(65), 1,
      sym_string,
    STATE(4), 1,
      sym_line_comment,
    STATE(30), 1,
      sym_reg,
    STATE(75), 1,
      sym_int,
    STATE(120), 1,
      sym__expr,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(69), 2,
      sym_meta_ident,
      sym__ident,
    STATE(117), 2,
      sym_ptr,
      sym_ident,
    ACTIONS(67), 3,
      sym_word,
      sym__reg,
      sym_address,
    ACTIONS(27), 4,
      anon_sym_byte,
      anon_sym_word,
      anon_sym_dword,
      anon_sym_qword,
  [133] = 18,
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
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      aux_sym_int_token2,
    ACTIONS(65), 1,
      sym_string,
    STATE(5), 1,
      sym_line_comment,
    STATE(30), 1,
      sym_reg,
    STATE(75), 1,
      sym_int,
    STATE(120), 1,
      sym__expr,
    ACTIONS(69), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(117), 2,
      sym_ptr,
      sym_ident,
    ACTIONS(67), 3,
      sym_word,
      sym__reg,
      sym_address,
    ACTIONS(27), 4,
      anon_sym_byte,
      anon_sym_word,
      anon_sym_dword,
      anon_sym_qword,
  [196] = 17,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_STAR,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(73), 1,
      anon_sym_POUND,
    ACTIONS(75), 1,
      aux_sym_int_token2,
    ACTIONS(77), 1,
      sym_string,
    STATE(6), 1,
      sym_line_comment,
    STATE(109), 1,
      sym_int,
    STATE(136), 1,
      sym__expr,
    STATE(144), 1,
      sym_reg,
    ACTIONS(81), 2,
      sym_meta_ident,
      sym__ident,
    STATE(125), 2,
      sym_ptr,
      sym_ident,
    ACTIONS(79), 3,
      sym_word,
      sym__reg,
      sym_address,
    ACTIONS(47), 4,
      anon_sym_byte,
      anon_sym_word,
      anon_sym_dword,
      anon_sym_qword,
  [255] = 17,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_STAR,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(71), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(83), 1,
      aux_sym_int_token2,
    STATE(7), 1,
      sym_line_comment,
    STATE(109), 1,
      sym_int,
    STATE(136), 1,
      sym__expr,
    STATE(144), 1,
      sym_reg,
    ACTIONS(81), 2,
      sym_meta_ident,
      sym__ident,
    STATE(125), 2,
      sym_ptr,
      sym_ident,
    ACTIONS(79), 3,
      sym_word,
      sym__reg,
      sym_address,
    ACTIONS(47), 4,
      anon_sym_byte,
      anon_sym_word,
      anon_sym_dword,
      anon_sym_qword,
  [314] = 17,
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
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      aux_sym_int_token2,
    ACTIONS(65), 1,
      sym_string,
    STATE(8), 1,
      sym_line_comment,
    STATE(30), 1,
      sym_reg,
    STATE(75), 1,
      sym_int,
    STATE(120), 1,
      sym__expr,
    ACTIONS(69), 2,
      sym_meta_ident,
      sym__ident,
    STATE(117), 2,
      sym_ptr,
      sym_ident,
    ACTIONS(67), 3,
      sym_word,
      sym__reg,
      sym_address,
    ACTIONS(27), 4,
      anon_sym_byte,
      anon_sym_word,
      anon_sym_dword,
      anon_sym_qword,
  [373] = 17,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_STAR,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(59), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(85), 1,
      aux_sym_int_token2,
    STATE(9), 1,
      sym_line_comment,
    STATE(109), 1,
      sym_int,
    STATE(136), 1,
      sym__expr,
    STATE(144), 1,
      sym_reg,
    ACTIONS(81), 2,
      sym_meta_ident,
      sym__ident,
    STATE(125), 2,
      sym_ptr,
      sym_ident,
    ACTIONS(79), 3,
      sym_word,
      sym__reg,
      sym_address,
    ACTIONS(47), 4,
      anon_sym_byte,
      anon_sym_word,
      anon_sym_dword,
      anon_sym_qword,
  [432] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(10), 1,
      sym_line_comment,
    ACTIONS(89), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
    ACTIONS(87), 11,
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
  [466] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(11), 1,
      sym_line_comment,
    ACTIONS(93), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
    ACTIONS(91), 11,
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
  [500] = 8,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_line_comment,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(102), 7,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
    ACTIONS(104), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [540] = 7,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      sym_line_comment,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(102), 7,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
    ACTIONS(104), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [577] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(14), 1,
      sym_line_comment,
    ACTIONS(108), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
    ACTIONS(106), 10,
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
  [610] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(15), 1,
      sym_line_comment,
    ACTIONS(112), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
    ACTIONS(110), 10,
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
  [643] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(118), 1,
      anon_sym_AMP,
    STATE(16), 1,
      sym_line_comment,
    ACTIONS(114), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_POUND,
      sym_string,
    ACTIONS(116), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [677] = 8,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(118), 1,
      anon_sym_AMP,
    ACTIONS(120), 1,
      anon_sym_PIPE,
    ACTIONS(122), 1,
      anon_sym_CARET,
    STATE(17), 1,
      sym_line_comment,
    ACTIONS(114), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_string,
    ACTIONS(116), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [715] = 9,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(95), 1,
      anon_sym_POUND,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      aux_sym_int_token2,
    STATE(18), 1,
      sym_line_comment,
    ACTIONS(102), 6,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      sym_string,
    ACTIONS(104), 8,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [755] = 12,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(118), 1,
      anon_sym_AMP,
    ACTIONS(120), 1,
      anon_sym_PIPE,
    ACTIONS(122), 1,
      anon_sym_CARET,
    ACTIONS(131), 1,
      anon_sym_PLUS,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_STAR,
    STATE(19), 1,
      sym_line_comment,
    ACTIONS(137), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(129), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_POUND,
      sym_string,
    ACTIONS(139), 6,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [801] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(20), 1,
      sym_line_comment,
    ACTIONS(102), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
    ACTIONS(104), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [833] = 10,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(118), 1,
      anon_sym_AMP,
    ACTIONS(120), 1,
      anon_sym_PIPE,
    ACTIONS(122), 1,
      anon_sym_CARET,
    ACTIONS(135), 1,
      anon_sym_STAR,
    STATE(21), 1,
      sym_line_comment,
    ACTIONS(137), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(114), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_POUND,
      sym_string,
    ACTIONS(116), 7,
      anon_sym_DASH,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [875] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(22), 1,
      sym_line_comment,
    ACTIONS(114), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
    ACTIONS(116), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [907] = 7,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(118), 1,
      anon_sym_AMP,
    ACTIONS(122), 1,
      anon_sym_CARET,
    STATE(23), 1,
      sym_line_comment,
    ACTIONS(114), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_POUND,
      sym_string,
    ACTIONS(116), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [943] = 8,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(95), 1,
      anon_sym_POUND,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(126), 1,
      aux_sym_int_token2,
    STATE(24), 1,
      sym_line_comment,
    ACTIONS(102), 6,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      sym_string,
    ACTIONS(104), 8,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [980] = 13,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      aux_sym_int_token2,
    ACTIONS(143), 1,
      sym_string,
    STATE(15), 1,
      sym_reg,
    STATE(19), 1,
      sym__tc_expr,
    STATE(25), 1,
      sym_line_comment,
    STATE(26), 1,
      aux_sym_instruction_repeat2,
    ACTIONS(43), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(41), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(20), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1026] = 12,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(147), 1,
      anon_sym_POUND,
    ACTIONS(150), 1,
      aux_sym_int_token2,
    ACTIONS(153), 1,
      sym_string,
    STATE(15), 1,
      sym_reg,
    STATE(19), 1,
      sym__tc_expr,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(159), 2,
      sym_meta_ident,
      sym__ident,
    STATE(26), 2,
      sym_line_comment,
      aux_sym_instruction_repeat2,
    ACTIONS(156), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(20), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1070] = 14,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      aux_sym_int_token2,
    ACTIONS(164), 1,
      anon_sym_COLON,
    ACTIONS(166), 1,
      sym_float,
    ACTIONS(168), 1,
      sym_string,
    STATE(27), 1,
      sym_line_comment,
    STATE(30), 1,
      sym_reg,
    STATE(80), 1,
      sym_int,
    STATE(141), 1,
      sym_ident,
    ACTIONS(69), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(67), 3,
      sym_word,
      sym__reg,
      sym_address,
  [1117] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(93), 1,
      anon_sym_SLASH,
    STATE(28), 1,
      sym_line_comment,
    ACTIONS(91), 12,
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
  [1147] = 12,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(141), 1,
      anon_sym_POUND,
    ACTIONS(143), 1,
      sym_string,
    ACTIONS(170), 1,
      aux_sym_int_token2,
    STATE(15), 1,
      sym_reg,
    STATE(19), 1,
      sym__tc_expr,
    STATE(26), 1,
      aux_sym_instruction_repeat2,
    STATE(29), 1,
      sym_line_comment,
    ACTIONS(43), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(41), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(20), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1189] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(112), 1,
      anon_sym_SLASH,
    STATE(30), 1,
      sym_line_comment,
    ACTIONS(110), 12,
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
  [1219] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(108), 1,
      anon_sym_SLASH,
    STATE(31), 1,
      sym_line_comment,
    ACTIONS(106), 12,
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
  [1249] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(89), 1,
      anon_sym_SLASH,
    STATE(32), 1,
      sym_line_comment,
    ACTIONS(87), 12,
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
  [1279] = 14,
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
    ACTIONS(172), 1,
      ts_builtin_sym_end,
    ACTIONS(174), 1,
      anon_sym_LF,
    STATE(33), 1,
      sym_line_comment,
    STATE(58), 1,
      aux_sym_program_repeat1,
    STATE(133), 1,
      sym__item,
    STATE(130), 4,
      sym_meta,
      sym_label,
      sym_const,
      sym_instruction,
  [1325] = 14,
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
    ACTIONS(174), 1,
      anon_sym_LF,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
    STATE(34), 1,
      sym_line_comment,
    STATE(58), 1,
      aux_sym_program_repeat1,
    STATE(133), 1,
      sym__item,
    STATE(130), 4,
      sym_meta,
      sym_label,
      sym_const,
      sym_instruction,
  [1371] = 13,
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
    ACTIONS(174), 1,
      anon_sym_LF,
    STATE(35), 1,
      sym_line_comment,
    STATE(58), 1,
      aux_sym_program_repeat1,
    STATE(133), 1,
      sym__item,
    STATE(130), 4,
      sym_meta,
      sym_label,
      sym_const,
      sym_instruction,
  [1414] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      aux_sym_int_token2,
    ACTIONS(178), 1,
      sym_string,
    STATE(30), 1,
      sym_reg,
    STATE(36), 1,
      sym_line_comment,
    STATE(53), 1,
      sym__tc_expr,
    ACTIONS(69), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(67), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(48), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1453] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      aux_sym_int_token2,
    ACTIONS(178), 1,
      sym_string,
    STATE(30), 1,
      sym_reg,
    STATE(37), 1,
      sym_line_comment,
    STATE(49), 1,
      sym__tc_expr,
    ACTIONS(69), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(67), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(48), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1492] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      aux_sym_int_token2,
    ACTIONS(178), 1,
      sym_string,
    STATE(30), 1,
      sym_reg,
    STATE(38), 1,
      sym_line_comment,
    STATE(50), 1,
      sym__tc_expr,
    ACTIONS(69), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(67), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(48), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1531] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      aux_sym_int_token2,
    ACTIONS(143), 1,
      sym_string,
    STATE(15), 1,
      sym_reg,
    STATE(21), 1,
      sym__tc_expr,
    STATE(39), 1,
      sym_line_comment,
    ACTIONS(43), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(41), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(20), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1570] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      aux_sym_int_token2,
    ACTIONS(143), 1,
      sym_string,
    STATE(15), 1,
      sym_reg,
    STATE(17), 1,
      sym__tc_expr,
    STATE(40), 1,
      sym_line_comment,
    ACTIONS(43), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(41), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(20), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1609] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      aux_sym_int_token2,
    ACTIONS(143), 1,
      sym_string,
    STATE(15), 1,
      sym_reg,
    STATE(23), 1,
      sym__tc_expr,
    STATE(41), 1,
      sym_line_comment,
    ACTIONS(43), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(41), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(20), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1648] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      aux_sym_int_token2,
    ACTIONS(143), 1,
      sym_string,
    STATE(15), 1,
      sym_reg,
    STATE(16), 1,
      sym__tc_expr,
    STATE(42), 1,
      sym_line_comment,
    ACTIONS(43), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(41), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(20), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1687] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      aux_sym_int_token2,
    ACTIONS(143), 1,
      sym_string,
    STATE(15), 1,
      sym_reg,
    STATE(22), 1,
      sym__tc_expr,
    STATE(43), 1,
      sym_line_comment,
    ACTIONS(43), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(41), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(20), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1726] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      aux_sym_int_token2,
    ACTIONS(178), 1,
      sym_string,
    STATE(30), 1,
      sym_reg,
    STATE(44), 1,
      sym_line_comment,
    STATE(47), 1,
      sym__tc_expr,
    ACTIONS(69), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(67), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(48), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1765] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      aux_sym_int_token2,
    ACTIONS(178), 1,
      sym_string,
    STATE(30), 1,
      sym_reg,
    STATE(45), 1,
      sym_line_comment,
    STATE(51), 1,
      sym__tc_expr,
    ACTIONS(69), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(67), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(48), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1804] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      aux_sym_int_token2,
    ACTIONS(178), 1,
      sym_string,
    STATE(30), 1,
      sym_reg,
    STATE(46), 1,
      sym_line_comment,
    STATE(52), 1,
      sym__tc_expr,
    ACTIONS(69), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(67), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(48), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1843] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(116), 1,
      anon_sym_SLASH,
    ACTIONS(180), 1,
      anon_sym_PIPE,
    ACTIONS(182), 1,
      anon_sym_CARET,
    ACTIONS(184), 1,
      anon_sym_AMP,
    STATE(47), 1,
      sym_line_comment,
    ACTIONS(114), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [1876] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(104), 1,
      anon_sym_SLASH,
    STATE(48), 1,
      sym_line_comment,
    ACTIONS(102), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
  [1903] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(180), 1,
      anon_sym_PIPE,
    ACTIONS(182), 1,
      anon_sym_CARET,
    ACTIONS(184), 1,
      anon_sym_AMP,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    STATE(49), 1,
      sym_line_comment,
    ACTIONS(186), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(114), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1938] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(116), 1,
      anon_sym_SLASH,
    ACTIONS(182), 1,
      anon_sym_CARET,
    ACTIONS(184), 1,
      anon_sym_AMP,
    STATE(50), 1,
      sym_line_comment,
    ACTIONS(114), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
  [1969] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(116), 1,
      anon_sym_SLASH,
    ACTIONS(184), 1,
      anon_sym_AMP,
    STATE(51), 1,
      sym_line_comment,
    ACTIONS(114), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
  [1998] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(116), 1,
      anon_sym_SLASH,
    STATE(52), 1,
      sym_line_comment,
    ACTIONS(114), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
  [2025] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(180), 1,
      anon_sym_PIPE,
    ACTIONS(182), 1,
      anon_sym_CARET,
    ACTIONS(184), 1,
      anon_sym_AMP,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    STATE(53), 1,
      sym_line_comment,
    ACTIONS(186), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(190), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(192), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2062] = 9,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      aux_sym_int_token2,
    STATE(30), 1,
      sym_reg,
    STATE(54), 1,
      sym_line_comment,
    ACTIONS(69), 2,
      sym_meta_ident,
      sym__ident,
    STATE(169), 2,
      sym_int,
      sym_ident,
    ACTIONS(67), 3,
      sym_word,
      sym__reg,
      sym_address,
  [2094] = 9,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      aux_sym_int_token2,
    STATE(30), 1,
      sym_reg,
    STATE(55), 1,
      sym_line_comment,
    ACTIONS(69), 2,
      sym_meta_ident,
      sym__ident,
    STATE(167), 2,
      sym_int,
      sym_ident,
    ACTIONS(67), 3,
      sym_word,
      sym__reg,
      sym_address,
  [2126] = 9,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      aux_sym_int_token2,
    STATE(30), 1,
      sym_reg,
    STATE(56), 1,
      sym_line_comment,
    ACTIONS(69), 2,
      sym_meta_ident,
      sym__ident,
    STATE(168), 2,
      sym_int,
      sym_ident,
    ACTIONS(67), 3,
      sym_word,
      sym__reg,
      sym_address,
  [2158] = 9,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      aux_sym_int_token2,
    STATE(30), 1,
      sym_reg,
    STATE(57), 1,
      sym_line_comment,
    ACTIONS(69), 2,
      sym_meta_ident,
      sym__ident,
    STATE(162), 2,
      sym_int,
      sym_ident,
    ACTIONS(67), 3,
      sym_word,
      sym__reg,
      sym_address,
  [2190] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
    ACTIONS(196), 1,
      anon_sym_LF,
    STATE(58), 2,
      sym_line_comment,
      aux_sym_program_repeat1,
    ACTIONS(199), 5,
      anon_sym_label,
      anon_sym_const,
      sym_word,
      sym_meta_ident,
      sym__ident,
  [2217] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(201), 1,
      sym_address,
    STATE(30), 1,
      sym_reg,
    STATE(59), 1,
      sym_line_comment,
    STATE(173), 1,
      sym_ident,
    ACTIONS(67), 2,
      sym_word,
      sym__reg,
    ACTIONS(69), 2,
      sym_meta_ident,
      sym__ident,
  [2247] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(201), 1,
      sym_address,
    STATE(30), 1,
      sym_reg,
    STATE(60), 1,
      sym_line_comment,
    STATE(156), 1,
      sym_ident,
    ACTIONS(67), 2,
      sym_word,
      sym__reg,
    ACTIONS(69), 2,
      sym_meta_ident,
      sym__ident,
  [2277] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(61), 1,
      sym_line_comment,
    ACTIONS(203), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(205), 5,
      anon_sym_label,
      anon_sym_const,
      sym_word,
      sym_meta_ident,
      sym__ident,
  [2301] = 8,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(73), 1,
      anon_sym_POUND,
    ACTIONS(75), 1,
      aux_sym_int_token2,
    STATE(62), 1,
      sym_line_comment,
    STATE(149), 1,
      sym_int,
    STATE(150), 1,
      sym_reg,
    ACTIONS(79), 3,
      sym_word,
      sym__reg,
      sym_address,
  [2328] = 8,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      aux_sym_int_token2,
    STATE(63), 1,
      sym_line_comment,
    STATE(140), 1,
      sym_reg,
    STATE(165), 1,
      sym_int,
    ACTIONS(67), 3,
      sym_word,
      sym__reg,
      sym_address,
  [2355] = 8,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      aux_sym_int_token2,
    STATE(64), 1,
      sym_line_comment,
    STATE(104), 1,
      sym_int,
    STATE(105), 1,
      sym_reg,
    ACTIONS(67), 3,
      sym_word,
      sym__reg,
      sym_address,
  [2382] = 8,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      aux_sym_int_token2,
    STATE(65), 1,
      sym_line_comment,
    STATE(148), 1,
      sym_reg,
    STATE(157), 1,
      sym_int,
    ACTIONS(67), 3,
      sym_word,
      sym__reg,
      sym_address,
  [2409] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(209), 1,
      anon_sym_BANG,
    STATE(66), 1,
      sym_line_comment,
    ACTIONS(207), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2430] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    STATE(67), 1,
      sym_line_comment,
    STATE(81), 1,
      aux_sym_meta_repeat3,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2453] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(67), 1,
      sym__reg,
    STATE(68), 1,
      sym_line_comment,
    STATE(161), 1,
      sym_reg,
    ACTIONS(201), 2,
      sym_word,
      sym_address,
  [2476] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    ACTIONS(217), 1,
      anon_sym_LF,
    STATE(35), 1,
      aux_sym_program_repeat1,
    STATE(69), 2,
      sym_line_comment,
      aux_sym_program_repeat2,
  [2499] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(67), 1,
      sym__reg,
    STATE(70), 1,
      sym_line_comment,
    STATE(182), 1,
      sym_reg,
    ACTIONS(201), 2,
      sym_word,
      sym_address,
  [2522] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(67), 1,
      sym__reg,
    STATE(71), 1,
      sym_line_comment,
    STATE(95), 1,
      sym_reg,
    ACTIONS(201), 2,
      sym_word,
      sym_address,
  [2545] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    ACTIONS(224), 1,
      anon_sym_BANG,
    STATE(72), 1,
      sym_line_comment,
    ACTIONS(220), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2568] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    STATE(73), 1,
      sym_line_comment,
    STATE(77), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2591] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(67), 1,
      sym__reg,
    STATE(74), 1,
      sym_line_comment,
    STATE(91), 1,
      sym_reg,
    ACTIONS(201), 2,
      sym_word,
      sym_address,
  [2614] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    STATE(75), 1,
      sym_line_comment,
    ACTIONS(98), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2635] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(228), 1,
      anon_sym_COMMA,
    ACTIONS(232), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      sym_line_comment,
    ACTIONS(230), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2658] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    ACTIONS(234), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(77), 2,
      sym_line_comment,
      aux_sym_instruction_repeat1,
  [2679] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(174), 1,
      anon_sym_LF,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
    STATE(33), 1,
      aux_sym_program_repeat1,
    STATE(69), 1,
      aux_sym_program_repeat2,
    STATE(78), 1,
      sym_line_comment,
  [2704] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(241), 1,
      anon_sym_BANG,
    STATE(79), 1,
      sym_line_comment,
    ACTIONS(239), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2725] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    STATE(80), 1,
      sym_line_comment,
    STATE(92), 1,
      aux_sym_meta_repeat1,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2748] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      sym_line_comment,
    STATE(87), 1,
      aux_sym_meta_repeat3,
    ACTIONS(245), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2771] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(174), 1,
      anon_sym_LF,
    ACTIONS(247), 1,
      ts_builtin_sym_end,
    STATE(34), 1,
      aux_sym_program_repeat1,
    STATE(78), 1,
      aux_sym_program_repeat2,
    STATE(82), 1,
      sym_line_comment,
  [2796] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    STATE(73), 1,
      aux_sym_instruction_repeat1,
    STATE(83), 1,
      sym_line_comment,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2819] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(67), 1,
      sym__reg,
    STATE(84), 1,
      sym_line_comment,
    STATE(159), 1,
      sym_reg,
    ACTIONS(201), 2,
      sym_word,
      sym_address,
  [2842] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(251), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(85), 2,
      sym_line_comment,
      aux_sym_meta_repeat2,
  [2863] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(67), 1,
      sym__reg,
    STATE(86), 1,
      sym_line_comment,
    STATE(121), 1,
      sym_reg,
    ACTIONS(201), 2,
      sym_word,
      sym_address,
  [2886] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    ACTIONS(256), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(87), 2,
      sym_line_comment,
      aux_sym_meta_repeat3,
  [2907] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym_meta_repeat2,
    STATE(88), 1,
      sym_line_comment,
    ACTIONS(245), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2930] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(263), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(89), 2,
      sym_line_comment,
      aux_sym_meta_repeat1,
  [2951] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    STATE(88), 1,
      aux_sym_meta_repeat2,
    STATE(90), 1,
      sym_line_comment,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2974] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(268), 1,
      anon_sym_COMMA,
    ACTIONS(272), 1,
      anon_sym_RBRACK,
    STATE(91), 1,
      sym_line_comment,
    ACTIONS(270), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2997] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      aux_sym_meta_repeat1,
    STATE(92), 1,
      sym_line_comment,
    ACTIONS(245), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [3020] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(67), 1,
      sym__reg,
    STATE(93), 1,
      sym_line_comment,
    STATE(163), 1,
      sym_reg,
    ACTIONS(201), 2,
      sym_word,
      sym_address,
  [3043] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(67), 1,
      sym__reg,
    STATE(76), 1,
      sym_reg,
    STATE(94), 1,
      sym_line_comment,
    ACTIONS(201), 2,
      sym_word,
      sym_address,
  [3066] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(276), 1,
      anon_sym_RBRACK,
    STATE(95), 1,
      sym_line_comment,
    ACTIONS(274), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3086] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(96), 1,
      sym_line_comment,
    ACTIONS(220), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [3104] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(97), 1,
      sym_line_comment,
    ACTIONS(278), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [3122] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(282), 1,
      anon_sym_LPAREN,
    STATE(98), 1,
      sym_line_comment,
    ACTIONS(280), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [3142] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(284), 1,
      anon_sym_BANG,
    STATE(99), 1,
      sym_line_comment,
    ACTIONS(207), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      aux_sym_int_token2,
  [3160] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(100), 1,
      sym_line_comment,
    ACTIONS(263), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [3178] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(101), 1,
      sym_line_comment,
    ACTIONS(207), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [3196] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    STATE(102), 1,
      sym_line_comment,
    ACTIONS(286), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [3216] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(103), 1,
      sym_line_comment,
    ACTIONS(256), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [3234] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(104), 1,
      sym_line_comment,
    ACTIONS(207), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [3252] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    STATE(105), 1,
      sym_line_comment,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [3272] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(292), 1,
      anon_sym_COMMA,
    ACTIONS(234), 2,
      anon_sym_POUND,
      aux_sym_int_token2,
    STATE(106), 2,
      sym_line_comment,
      aux_sym_instruction_repeat1,
  [3290] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(107), 1,
      sym_line_comment,
    ACTIONS(295), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [3308] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(108), 1,
      sym_line_comment,
    ACTIONS(251), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [3326] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    STATE(109), 1,
      sym_line_comment,
    ACTIONS(98), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      aux_sym_int_token2,
  [3344] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(297), 1,
      anon_sym_COMMA,
    ACTIONS(299), 1,
      anon_sym_BANG,
    STATE(110), 1,
      sym_line_comment,
    ACTIONS(220), 2,
      anon_sym_POUND,
      aux_sym_int_token2,
  [3364] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(111), 1,
      sym_line_comment,
    ACTIONS(301), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [3382] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(303), 1,
      anon_sym_BANG,
    STATE(112), 1,
      sym_line_comment,
    ACTIONS(239), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      aux_sym_int_token2,
  [3400] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    STATE(106), 1,
      aux_sym_instruction_repeat1,
    STATE(113), 1,
      sym_line_comment,
    ACTIONS(59), 2,
      anon_sym_POUND,
      aux_sym_int_token2,
  [3420] = 4,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(114), 1,
      sym_line_comment,
    ACTIONS(87), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_POUND,
      aux_sym_int_token2,
  [3436] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(115), 1,
      sym_line_comment,
    ACTIONS(239), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [3454] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(116), 1,
      sym_line_comment,
    ACTIONS(307), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [3472] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(117), 1,
      sym_line_comment,
    ACTIONS(98), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [3490] = 4,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(118), 1,
      sym_line_comment,
    ACTIONS(91), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_POUND,
      aux_sym_int_token2,
  [3506] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(309), 1,
      anon_sym_COMMA,
    STATE(113), 1,
      aux_sym_instruction_repeat1,
    STATE(119), 1,
      sym_line_comment,
    ACTIONS(141), 2,
      anon_sym_POUND,
      aux_sym_int_token2,
  [3526] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(120), 1,
      sym_line_comment,
    ACTIONS(234), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [3544] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(313), 1,
      anon_sym_RBRACK,
    STATE(121), 1,
      sym_line_comment,
    ACTIONS(311), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3564] = 4,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(122), 1,
      sym_line_comment,
    ACTIONS(301), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      aux_sym_int_token2,
  [3579] = 4,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(123), 1,
      sym_line_comment,
    ACTIONS(239), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      aux_sym_int_token2,
  [3594] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(315), 1,
      sym_word,
    STATE(124), 1,
      sym_line_comment,
    STATE(128), 1,
      sym_instruction,
  [3613] = 4,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(125), 1,
      sym_line_comment,
    ACTIONS(98), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      aux_sym_int_token2,
  [3628] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(315), 1,
      sym_word,
    STATE(126), 1,
      sym_line_comment,
    STATE(135), 1,
      sym_instruction,
  [3647] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(127), 1,
      sym_line_comment,
    ACTIONS(317), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [3664] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(319), 1,
      aux_sym_int_token2,
    STATE(128), 1,
      sym_line_comment,
    STATE(170), 1,
      sym_int,
  [3683] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(319), 1,
      aux_sym_int_token2,
    STATE(129), 1,
      sym_line_comment,
    STATE(167), 1,
      sym_int,
  [3702] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(130), 1,
      sym_line_comment,
    ACTIONS(321), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [3719] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(319), 1,
      aux_sym_int_token2,
    STATE(115), 1,
      sym_int,
    STATE(131), 1,
      sym_line_comment,
  [3738] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(319), 1,
      aux_sym_int_token2,
    STATE(100), 1,
      sym_int,
    STATE(132), 1,
      sym_line_comment,
  [3757] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(133), 1,
      sym_line_comment,
    ACTIONS(215), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [3774] = 4,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(134), 1,
      sym_line_comment,
    ACTIONS(220), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      aux_sym_int_token2,
  [3789] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(73), 1,
      anon_sym_POUND,
    ACTIONS(323), 1,
      aux_sym_int_token2,
    STATE(123), 1,
      sym_int,
    STATE(135), 1,
      sym_line_comment,
  [3808] = 4,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(136), 1,
      sym_line_comment,
    ACTIONS(234), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      aux_sym_int_token2,
  [3823] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(315), 1,
      sym_word,
    STATE(131), 1,
      sym_instruction,
    STATE(137), 1,
      sym_line_comment,
  [3842] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(319), 1,
      aux_sym_int_token2,
    STATE(138), 1,
      sym_line_comment,
    STATE(162), 1,
      sym_int,
  [3861] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(319), 1,
      aux_sym_int_token2,
    STATE(139), 1,
      sym_line_comment,
    STATE(174), 1,
      sym_int,
  [3880] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(325), 1,
      anon_sym_COMMA,
    ACTIONS(327), 1,
      anon_sym_RBRACK,
    STATE(140), 1,
      sym_line_comment,
  [3899] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(141), 1,
      sym_line_comment,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [3916] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(315), 1,
      sym_word,
    STATE(139), 1,
      sym_instruction,
    STATE(142), 1,
      sym_line_comment,
  [3935] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(143), 1,
      sym_line_comment,
    ACTIONS(329), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [3952] = 4,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(144), 1,
      sym_line_comment,
    ACTIONS(110), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      aux_sym_int_token2,
  [3967] = 4,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(145), 1,
      sym_line_comment,
    ACTIONS(278), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      aux_sym_int_token2,
  [3982] = 4,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(146), 1,
      sym_line_comment,
    ACTIONS(106), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      aux_sym_int_token2,
  [3997] = 4,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(147), 1,
      sym_line_comment,
    ACTIONS(207), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      aux_sym_int_token2,
  [4012] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(333), 1,
      anon_sym_RBRACK,
    STATE(148), 1,
      sym_line_comment,
  [4031] = 4,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(149), 1,
      sym_line_comment,
    ACTIONS(207), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      aux_sym_int_token2,
  [4046] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(335), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      sym_line_comment,
    ACTIONS(207), 2,
      anon_sym_POUND,
      aux_sym_int_token2,
  [4063] = 4,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(151), 1,
      sym_line_comment,
    ACTIONS(295), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      aux_sym_int_token2,
  [4078] = 4,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(152), 1,
      sym_line_comment,
    ACTIONS(307), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      aux_sym_int_token2,
  [4093] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(153), 1,
      sym_line_comment,
    ACTIONS(337), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [4110] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(339), 1,
      sym_word,
    STATE(154), 1,
      sym_line_comment,
  [4126] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(341), 1,
      anon_sym_rel,
    STATE(155), 1,
      sym_line_comment,
  [4142] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(343), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      sym_line_comment,
  [4158] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(333), 1,
      anon_sym_RBRACK,
    STATE(157), 1,
      sym_line_comment,
  [4174] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(345), 1,
      anon_sym_rel,
    STATE(158), 1,
      sym_line_comment,
  [4190] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
    STATE(159), 1,
      sym_line_comment,
  [4206] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(347), 1,
      aux_sym_int_token1,
    STATE(160), 1,
      sym_line_comment,
  [4222] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(349), 1,
      anon_sym_RPAREN,
    STATE(161), 1,
      sym_line_comment,
  [4238] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(276), 1,
      anon_sym_RBRACK,
    STATE(162), 1,
      sym_line_comment,
  [4254] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
    STATE(163), 1,
      sym_line_comment,
  [4270] = 5,
    ACTIONS(351), 1,
      anon_sym_POUND,
    ACTIONS(353), 1,
      aux_sym_line_comment_token1,
    ACTIONS(355), 1,
      aux_sym_line_comment_token2,
    ACTIONS(357), 1,
      sym_block_comment,
    STATE(164), 1,
      sym_line_comment,
  [4286] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(327), 1,
      anon_sym_RBRACK,
    STATE(165), 1,
      sym_line_comment,
  [4302] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(359), 1,
      sym_word,
    STATE(166), 1,
      sym_line_comment,
  [4318] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(313), 1,
      anon_sym_RBRACK,
    STATE(167), 1,
      sym_line_comment,
  [4334] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(361), 1,
      anon_sym_RBRACK,
    STATE(168), 1,
      sym_line_comment,
  [4350] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(363), 1,
      anon_sym_RBRACK,
    STATE(169), 1,
      sym_line_comment,
  [4366] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(365), 1,
      anon_sym_RBRACK,
    STATE(170), 1,
      sym_line_comment,
  [4382] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(367), 1,
      anon_sym_ptr,
    STATE(171), 1,
      sym_line_comment,
  [4398] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(369), 1,
      aux_sym_int_token1,
    STATE(172), 1,
      sym_line_comment,
  [4414] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    STATE(173), 1,
      sym_line_comment,
  [4430] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(373), 1,
      anon_sym_RBRACK,
    STATE(174), 1,
      sym_line_comment,
  [4446] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(23), 1,
      anon_sym_COLON,
    STATE(175), 1,
      sym_line_comment,
  [4462] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(375), 1,
      sym_string,
    STATE(176), 1,
      sym_line_comment,
  [4478] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(377), 1,
      sym_float,
    STATE(177), 1,
      sym_line_comment,
  [4494] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(379), 1,
      anon_sym_LBRACK,
    STATE(178), 1,
      sym_line_comment,
  [4510] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(381), 1,
      ts_builtin_sym_end,
    STATE(179), 1,
      sym_line_comment,
  [4526] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(383), 1,
      anon_sym_LBRACK,
    STATE(180), 1,
      sym_line_comment,
  [4542] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(385), 1,
      anon_sym_ptr,
    STATE(181), 1,
      sym_line_comment,
  [4558] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
    STATE(182), 1,
      sym_line_comment,
  [4574] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(389), 1,
      anon_sym_LBRACK,
    STATE(183), 1,
      sym_line_comment,
  [4590] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(391), 1,
      anon_sym_LBRACK,
    STATE(184), 1,
      sym_line_comment,
  [4606] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(393), 1,
      aux_sym_int_token1,
    STATE(185), 1,
      sym_line_comment,
  [4622] = 1,
    ACTIONS(395), 1,
      ts_builtin_sym_end,
  [4626] = 1,
    ACTIONS(397), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 133,
  [SMALL_STATE(6)] = 196,
  [SMALL_STATE(7)] = 255,
  [SMALL_STATE(8)] = 314,
  [SMALL_STATE(9)] = 373,
  [SMALL_STATE(10)] = 432,
  [SMALL_STATE(11)] = 466,
  [SMALL_STATE(12)] = 500,
  [SMALL_STATE(13)] = 540,
  [SMALL_STATE(14)] = 577,
  [SMALL_STATE(15)] = 610,
  [SMALL_STATE(16)] = 643,
  [SMALL_STATE(17)] = 677,
  [SMALL_STATE(18)] = 715,
  [SMALL_STATE(19)] = 755,
  [SMALL_STATE(20)] = 801,
  [SMALL_STATE(21)] = 833,
  [SMALL_STATE(22)] = 875,
  [SMALL_STATE(23)] = 907,
  [SMALL_STATE(24)] = 943,
  [SMALL_STATE(25)] = 980,
  [SMALL_STATE(26)] = 1026,
  [SMALL_STATE(27)] = 1070,
  [SMALL_STATE(28)] = 1117,
  [SMALL_STATE(29)] = 1147,
  [SMALL_STATE(30)] = 1189,
  [SMALL_STATE(31)] = 1219,
  [SMALL_STATE(32)] = 1249,
  [SMALL_STATE(33)] = 1279,
  [SMALL_STATE(34)] = 1325,
  [SMALL_STATE(35)] = 1371,
  [SMALL_STATE(36)] = 1414,
  [SMALL_STATE(37)] = 1453,
  [SMALL_STATE(38)] = 1492,
  [SMALL_STATE(39)] = 1531,
  [SMALL_STATE(40)] = 1570,
  [SMALL_STATE(41)] = 1609,
  [SMALL_STATE(42)] = 1648,
  [SMALL_STATE(43)] = 1687,
  [SMALL_STATE(44)] = 1726,
  [SMALL_STATE(45)] = 1765,
  [SMALL_STATE(46)] = 1804,
  [SMALL_STATE(47)] = 1843,
  [SMALL_STATE(48)] = 1876,
  [SMALL_STATE(49)] = 1903,
  [SMALL_STATE(50)] = 1938,
  [SMALL_STATE(51)] = 1969,
  [SMALL_STATE(52)] = 1998,
  [SMALL_STATE(53)] = 2025,
  [SMALL_STATE(54)] = 2062,
  [SMALL_STATE(55)] = 2094,
  [SMALL_STATE(56)] = 2126,
  [SMALL_STATE(57)] = 2158,
  [SMALL_STATE(58)] = 2190,
  [SMALL_STATE(59)] = 2217,
  [SMALL_STATE(60)] = 2247,
  [SMALL_STATE(61)] = 2277,
  [SMALL_STATE(62)] = 2301,
  [SMALL_STATE(63)] = 2328,
  [SMALL_STATE(64)] = 2355,
  [SMALL_STATE(65)] = 2382,
  [SMALL_STATE(66)] = 2409,
  [SMALL_STATE(67)] = 2430,
  [SMALL_STATE(68)] = 2453,
  [SMALL_STATE(69)] = 2476,
  [SMALL_STATE(70)] = 2499,
  [SMALL_STATE(71)] = 2522,
  [SMALL_STATE(72)] = 2545,
  [SMALL_STATE(73)] = 2568,
  [SMALL_STATE(74)] = 2591,
  [SMALL_STATE(75)] = 2614,
  [SMALL_STATE(76)] = 2635,
  [SMALL_STATE(77)] = 2658,
  [SMALL_STATE(78)] = 2679,
  [SMALL_STATE(79)] = 2704,
  [SMALL_STATE(80)] = 2725,
  [SMALL_STATE(81)] = 2748,
  [SMALL_STATE(82)] = 2771,
  [SMALL_STATE(83)] = 2796,
  [SMALL_STATE(84)] = 2819,
  [SMALL_STATE(85)] = 2842,
  [SMALL_STATE(86)] = 2863,
  [SMALL_STATE(87)] = 2886,
  [SMALL_STATE(88)] = 2907,
  [SMALL_STATE(89)] = 2930,
  [SMALL_STATE(90)] = 2951,
  [SMALL_STATE(91)] = 2974,
  [SMALL_STATE(92)] = 2997,
  [SMALL_STATE(93)] = 3020,
  [SMALL_STATE(94)] = 3043,
  [SMALL_STATE(95)] = 3066,
  [SMALL_STATE(96)] = 3086,
  [SMALL_STATE(97)] = 3104,
  [SMALL_STATE(98)] = 3122,
  [SMALL_STATE(99)] = 3142,
  [SMALL_STATE(100)] = 3160,
  [SMALL_STATE(101)] = 3178,
  [SMALL_STATE(102)] = 3196,
  [SMALL_STATE(103)] = 3216,
  [SMALL_STATE(104)] = 3234,
  [SMALL_STATE(105)] = 3252,
  [SMALL_STATE(106)] = 3272,
  [SMALL_STATE(107)] = 3290,
  [SMALL_STATE(108)] = 3308,
  [SMALL_STATE(109)] = 3326,
  [SMALL_STATE(110)] = 3344,
  [SMALL_STATE(111)] = 3364,
  [SMALL_STATE(112)] = 3382,
  [SMALL_STATE(113)] = 3400,
  [SMALL_STATE(114)] = 3420,
  [SMALL_STATE(115)] = 3436,
  [SMALL_STATE(116)] = 3454,
  [SMALL_STATE(117)] = 3472,
  [SMALL_STATE(118)] = 3490,
  [SMALL_STATE(119)] = 3506,
  [SMALL_STATE(120)] = 3526,
  [SMALL_STATE(121)] = 3544,
  [SMALL_STATE(122)] = 3564,
  [SMALL_STATE(123)] = 3579,
  [SMALL_STATE(124)] = 3594,
  [SMALL_STATE(125)] = 3613,
  [SMALL_STATE(126)] = 3628,
  [SMALL_STATE(127)] = 3647,
  [SMALL_STATE(128)] = 3664,
  [SMALL_STATE(129)] = 3683,
  [SMALL_STATE(130)] = 3702,
  [SMALL_STATE(131)] = 3719,
  [SMALL_STATE(132)] = 3738,
  [SMALL_STATE(133)] = 3757,
  [SMALL_STATE(134)] = 3774,
  [SMALL_STATE(135)] = 3789,
  [SMALL_STATE(136)] = 3808,
  [SMALL_STATE(137)] = 3823,
  [SMALL_STATE(138)] = 3842,
  [SMALL_STATE(139)] = 3861,
  [SMALL_STATE(140)] = 3880,
  [SMALL_STATE(141)] = 3899,
  [SMALL_STATE(142)] = 3916,
  [SMALL_STATE(143)] = 3935,
  [SMALL_STATE(144)] = 3952,
  [SMALL_STATE(145)] = 3967,
  [SMALL_STATE(146)] = 3982,
  [SMALL_STATE(147)] = 3997,
  [SMALL_STATE(148)] = 4012,
  [SMALL_STATE(149)] = 4031,
  [SMALL_STATE(150)] = 4046,
  [SMALL_STATE(151)] = 4063,
  [SMALL_STATE(152)] = 4078,
  [SMALL_STATE(153)] = 4093,
  [SMALL_STATE(154)] = 4110,
  [SMALL_STATE(155)] = 4126,
  [SMALL_STATE(156)] = 4142,
  [SMALL_STATE(157)] = 4158,
  [SMALL_STATE(158)] = 4174,
  [SMALL_STATE(159)] = 4190,
  [SMALL_STATE(160)] = 4206,
  [SMALL_STATE(161)] = 4222,
  [SMALL_STATE(162)] = 4238,
  [SMALL_STATE(163)] = 4254,
  [SMALL_STATE(164)] = 4270,
  [SMALL_STATE(165)] = 4286,
  [SMALL_STATE(166)] = 4302,
  [SMALL_STATE(167)] = 4318,
  [SMALL_STATE(168)] = 4334,
  [SMALL_STATE(169)] = 4350,
  [SMALL_STATE(170)] = 4366,
  [SMALL_STATE(171)] = 4382,
  [SMALL_STATE(172)] = 4398,
  [SMALL_STATE(173)] = 4414,
  [SMALL_STATE(174)] = 4430,
  [SMALL_STATE(175)] = 4446,
  [SMALL_STATE(176)] = 4462,
  [SMALL_STATE(177)] = 4478,
  [SMALL_STATE(178)] = 4494,
  [SMALL_STATE(179)] = 4510,
  [SMALL_STATE(180)] = 4526,
  [SMALL_STATE(181)] = 4542,
  [SMALL_STATE(182)] = 4558,
  [SMALL_STATE(183)] = 4574,
  [SMALL_STATE(184)] = 4590,
  [SMALL_STATE(185)] = 4606,
  [SMALL_STATE(186)] = 4622,
  [SMALL_STATE(187)] = 4626,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, 0, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 4, 0, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3, 0, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 2, 0, 0),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expr, 1, 0, 0), REDUCE(sym__tc_expr, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tc_expr, 1, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tc_expr, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reg, 1, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tc_infix, 3, 0, 5),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tc_infix, 3, 0, 5),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expr, 1, 0, 0), REDUCE(sym__tc_expr, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat2, 1, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(185),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(10),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(20),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(14),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(15),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 1, 0, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, 0, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 3, 0, 4),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 5, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 2, 0, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2, 0, 0),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2, 0, 0), SHIFT_REPEAT(61),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 3, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 8, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 3, 0, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat2, 2, 0, 0),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat2, 2, 0, 0), SHIFT_REPEAT(177),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat3, 2, 0, 0),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat3, 2, 0, 0), SHIFT_REPEAT(176),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2, 0, 0),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 4, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 6, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 7, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 9, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 1, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5, 0, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [381] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 1, 0, 0),
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
