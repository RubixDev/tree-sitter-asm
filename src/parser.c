#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 44
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_LF = 1,
  anon_sym_COLON = 2,
  anon_sym_COMMA = 3,
  anon_sym_byte = 4,
  anon_sym_word = 5,
  anon_sym_dword = 6,
  anon_sym_qword = 7,
  anon_sym_ptr = 8,
  anon_sym_LBRACK = 9,
  anon_sym_PLUS = 10,
  anon_sym_DASH = 11,
  anon_sym_RBRACK = 12,
  anon_sym_LPAREN = 13,
  anon_sym_RPAREN = 14,
  sym_int = 15,
  sym_string = 16,
  sym_word = 17,
  sym__reg = 18,
  sym_meta_ident = 19,
  sym__ident = 20,
  sym_line_comment = 21,
  sym_program = 22,
  sym__item = 23,
  sym_meta = 24,
  sym_label = 25,
  sym_instruction = 26,
  sym__expr = 27,
  sym_ptr = 28,
  sym_reg = 29,
  sym_ident = 30,
  aux_sym_program_repeat1 = 31,
  aux_sym_program_repeat2 = 32,
  aux_sym_instruction_repeat1 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [anon_sym_byte] = "byte",
  [anon_sym_word] = "word",
  [anon_sym_dword] = "dword",
  [anon_sym_qword] = "qword",
  [anon_sym_ptr] = "ptr",
  [anon_sym_LBRACK] = "[",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_int] = "int",
  [sym_string] = "string",
  [sym_word] = "word",
  [sym__reg] = "_reg",
  [sym_meta_ident] = "meta_ident",
  [sym__ident] = "_ident",
  [sym_line_comment] = "line_comment",
  [sym_program] = "program",
  [sym__item] = "_item",
  [sym_meta] = "meta",
  [sym_label] = "label",
  [sym_instruction] = "instruction",
  [sym__expr] = "_expr",
  [sym_ptr] = "ptr",
  [sym_reg] = "reg",
  [sym_ident] = "ident",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_program_repeat2] = "program_repeat2",
  [aux_sym_instruction_repeat1] = "instruction_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_word] = anon_sym_word,
  [anon_sym_dword] = anon_sym_dword,
  [anon_sym_qword] = anon_sym_qword,
  [anon_sym_ptr] = anon_sym_ptr,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_int] = sym_int,
  [sym_string] = sym_string,
  [sym_word] = sym_word,
  [sym__reg] = sym__reg,
  [sym_meta_ident] = sym_meta_ident,
  [sym__ident] = sym__ident,
  [sym_line_comment] = sym_line_comment,
  [sym_program] = sym_program,
  [sym__item] = sym__item,
  [sym_meta] = sym_meta,
  [sym_label] = sym_label,
  [sym_instruction] = sym_instruction,
  [sym__expr] = sym__expr,
  [sym_ptr] = sym_ptr,
  [sym_reg] = sym_reg,
  [sym_ident] = sym_ident,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_program_repeat2] = aux_sym_program_repeat2,
  [aux_sym_instruction_repeat1] = aux_sym_instruction_repeat1,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_int] = {
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
  [sym_meta_ident] = {
    .visible = true,
    .named = true,
  },
  [sym__ident] = {
    .visible = false,
    .named = true,
  },
  [sym_line_comment] = {
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
  [sym_reg] = {
    .visible = true,
    .named = true,
  },
  [sym_ident] = {
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
  [aux_sym_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_kind = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_kind] = "kind",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_kind, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
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
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(64);
      if (lookahead == '%') ADVANCE(9);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '[') ADVANCE(23);
      if (lookahead == ']') ADVANCE(26);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 'b') ADVANCE(54);
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead == 'p') ADVANCE(50);
      if (lookahead == 'q') ADVANCE(53);
      if (lookahead == 'w') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(38);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(64);
      END_STATE();
    case 3:
      if (lookahead == '0') ADVANCE(33);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 4:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 5:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(64);
      if (lookahead == '%') ADVANCE(9);
      if (lookahead == '/') ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 7:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(64);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == 'p') ADVANCE(5);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 10:
      if (eof) ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(64);
      if (lookahead == '%') ADVANCE(9);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '_') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 11:
      if (eof) ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(64);
      if (lookahead == '%') ADVANCE(9);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(29);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '[') ADVANCE(23);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 'b') ADVANCE(54);
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead == 'q') ADVANCE(53);
      if (lookahead == 'w') ADVANCE(43);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(64);
      if (lookahead == '%') ADVANCE(9);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(29);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '_') ADVANCE(63);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_word);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_dword);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_qword);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_ptr);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_ptr);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '_') ADVANCE(35);
      if (lookahead == 'x') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '_') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '_') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '_') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == 'x') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(35);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(18);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(20);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(17);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(47);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(48);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(49);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(22);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(41);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(42);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'w') ADVANCE(44);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'w') ADVANCE(45);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'y') ADVANCE(51);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_word);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__reg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_meta_ident);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_word] = ACTIONS(1),
    [anon_sym_dword] = ACTIONS(1),
    [anon_sym_qword] = ACTIONS(1),
    [anon_sym_ptr] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [sym__reg] = ACTIONS(1),
    [sym_meta_ident] = ACTIONS(1),
    [sym__ident] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(41),
    [sym__item] = STATE(18),
    [sym_meta] = STATE(18),
    [sym_label] = STATE(18),
    [sym_instruction] = STATE(18),
    [sym_reg] = STATE(14),
    [sym_ident] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_word] = ACTIONS(7),
    [sym__reg] = ACTIONS(9),
    [sym_meta_ident] = ACTIONS(11),
    [sym__ident] = ACTIONS(13),
    [sym_line_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__expr] = STATE(20),
    [sym_ptr] = STATE(20),
    [sym_reg] = STATE(14),
    [sym_ident] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LF] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_byte] = ACTIONS(19),
    [anon_sym_word] = ACTIONS(19),
    [anon_sym_dword] = ACTIONS(19),
    [anon_sym_qword] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_int] = ACTIONS(25),
    [sym_string] = ACTIONS(27),
    [sym_word] = ACTIONS(9),
    [sym__reg] = ACTIONS(9),
    [sym_meta_ident] = ACTIONS(13),
    [sym__ident] = ACTIONS(13),
    [sym_line_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__expr] = STATE(32),
    [sym_ptr] = STATE(32),
    [sym_reg] = STATE(14),
    [sym_ident] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_LF] = ACTIONS(29),
    [anon_sym_byte] = ACTIONS(19),
    [anon_sym_word] = ACTIONS(19),
    [anon_sym_dword] = ACTIONS(19),
    [anon_sym_qword] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_int] = ACTIONS(25),
    [sym_string] = ACTIONS(31),
    [sym_word] = ACTIONS(9),
    [sym__reg] = ACTIONS(9),
    [sym_meta_ident] = ACTIONS(13),
    [sym__ident] = ACTIONS(13),
    [sym_line_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__expr] = STATE(32),
    [sym_ptr] = STATE(32),
    [sym_reg] = STATE(14),
    [sym_ident] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_LF] = ACTIONS(33),
    [anon_sym_byte] = ACTIONS(19),
    [anon_sym_word] = ACTIONS(19),
    [anon_sym_dword] = ACTIONS(19),
    [anon_sym_qword] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_int] = ACTIONS(25),
    [sym_string] = ACTIONS(31),
    [sym_word] = ACTIONS(9),
    [sym__reg] = ACTIONS(9),
    [sym_meta_ident] = ACTIONS(13),
    [sym__ident] = ACTIONS(13),
    [sym_line_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym_int,
    ACTIONS(31), 1,
      sym_string,
    STATE(14), 1,
      sym_reg,
    ACTIONS(9), 2,
      sym_word,
      sym__reg,
    ACTIONS(13), 2,
      sym_meta_ident,
      sym__ident,
    STATE(32), 3,
      sym__expr,
      sym_ptr,
      sym_ident,
    ACTIONS(19), 4,
      anon_sym_byte,
      anon_sym_word,
      anon_sym_dword,
      anon_sym_qword,
  [38] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_word,
    ACTIONS(9), 1,
      sym__reg,
    ACTIONS(11), 1,
      sym_meta_ident,
    ACTIONS(13), 1,
      sym__ident,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      anon_sym_LF,
    STATE(13), 1,
      aux_sym_program_repeat1,
    STATE(14), 1,
      sym_reg,
    STATE(39), 1,
      sym_ident,
    STATE(33), 4,
      sym__item,
      sym_meta,
      sym_label,
      sym_instruction,
  [75] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_word,
    ACTIONS(9), 1,
      sym__reg,
    ACTIONS(11), 1,
      sym_meta_ident,
    ACTIONS(13), 1,
      sym__ident,
    ACTIONS(37), 1,
      anon_sym_LF,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      aux_sym_program_repeat1,
    STATE(14), 1,
      sym_reg,
    STATE(39), 1,
      sym_ident,
    STATE(33), 4,
      sym__item,
      sym_meta,
      sym_label,
      sym_instruction,
  [112] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_word,
    ACTIONS(9), 1,
      sym__reg,
    ACTIONS(11), 1,
      sym_meta_ident,
    ACTIONS(13), 1,
      sym__ident,
    ACTIONS(37), 1,
      anon_sym_LF,
    STATE(13), 1,
      aux_sym_program_repeat1,
    STATE(14), 1,
      sym_reg,
    STATE(39), 1,
      sym_ident,
    STATE(33), 4,
      sym__item,
      sym_meta,
      sym_label,
      sym_instruction,
  [146] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_COLON,
    ACTIONS(45), 1,
      sym_int,
    STATE(14), 1,
      sym_reg,
    STATE(34), 1,
      sym_ident,
    ACTIONS(9), 2,
      sym_word,
      sym__reg,
    ACTIONS(13), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [174] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(17), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [188] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      sym_int,
    STATE(14), 1,
      sym_reg,
    STATE(42), 1,
      sym_ident,
    ACTIONS(9), 2,
      sym_word,
      sym__reg,
    ACTIONS(13), 2,
      sym_meta_ident,
      sym__ident,
  [209] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(49), 1,
      sym_int,
    STATE(14), 1,
      sym_reg,
    STATE(38), 1,
      sym_ident,
    ACTIONS(9), 2,
      sym_word,
      sym__reg,
    ACTIONS(13), 2,
      sym_meta_ident,
      sym__ident,
  [230] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      anon_sym_LF,
    STATE(13), 1,
      aux_sym_program_repeat1,
    ACTIONS(56), 4,
      sym_word,
      sym__reg,
      sym_meta_ident,
      sym__ident,
  [249] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [260] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(60), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [274] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      anon_sym_LF,
    STATE(8), 1,
      aux_sym_program_repeat1,
    STATE(16), 1,
      aux_sym_program_repeat2,
  [290] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 1,
      anon_sym_LF,
    STATE(7), 1,
      aux_sym_program_repeat1,
    STATE(16), 1,
      aux_sym_program_repeat2,
  [306] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 1,
      anon_sym_LF,
    STATE(6), 1,
      aux_sym_program_repeat1,
    STATE(17), 1,
      aux_sym_program_repeat2,
  [322] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [334] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(80), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [348] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(82), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [362] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [371] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym__reg,
    ACTIONS(86), 1,
      sym_word,
    STATE(43), 1,
      sym_reg,
  [384] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(88), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [393] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym__reg,
    ACTIONS(86), 1,
      sym_word,
    STATE(36), 1,
      sym_reg,
  [406] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym__reg,
    ACTIONS(86), 1,
      sym_word,
    STATE(31), 1,
      sym_reg,
  [419] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(90), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [428] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym__reg,
    ACTIONS(86), 1,
      sym_word,
    STATE(30), 1,
      sym_reg,
  [441] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(92), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [450] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(96), 1,
      anon_sym_RBRACK,
    ACTIONS(94), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [461] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(100), 1,
      anon_sym_RBRACK,
    ACTIONS(98), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [472] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(58), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [481] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [489] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [497] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [505] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(106), 1,
      anon_sym_RPAREN,
  [512] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(108), 1,
      anon_sym_ptr,
  [519] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(96), 1,
      anon_sym_RBRACK,
  [526] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(110), 1,
      anon_sym_COLON,
  [533] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(112), 1,
      anon_sym_LBRACK,
  [540] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
  [547] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_RBRACK,
  [554] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(100), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 38,
  [SMALL_STATE(7)] = 75,
  [SMALL_STATE(8)] = 112,
  [SMALL_STATE(9)] = 146,
  [SMALL_STATE(10)] = 174,
  [SMALL_STATE(11)] = 188,
  [SMALL_STATE(12)] = 209,
  [SMALL_STATE(13)] = 230,
  [SMALL_STATE(14)] = 249,
  [SMALL_STATE(15)] = 260,
  [SMALL_STATE(16)] = 274,
  [SMALL_STATE(17)] = 290,
  [SMALL_STATE(18)] = 306,
  [SMALL_STATE(19)] = 322,
  [SMALL_STATE(20)] = 334,
  [SMALL_STATE(21)] = 348,
  [SMALL_STATE(22)] = 362,
  [SMALL_STATE(23)] = 371,
  [SMALL_STATE(24)] = 384,
  [SMALL_STATE(25)] = 393,
  [SMALL_STATE(26)] = 406,
  [SMALL_STATE(27)] = 419,
  [SMALL_STATE(28)] = 428,
  [SMALL_STATE(29)] = 441,
  [SMALL_STATE(30)] = 450,
  [SMALL_STATE(31)] = 461,
  [SMALL_STATE(32)] = 472,
  [SMALL_STATE(33)] = 481,
  [SMALL_STATE(34)] = 489,
  [SMALL_STATE(35)] = 497,
  [SMALL_STATE(36)] = 505,
  [SMALL_STATE(37)] = 512,
  [SMALL_STATE(38)] = 519,
  [SMALL_STATE(39)] = 526,
  [SMALL_STATE(40)] = 533,
  [SMALL_STATE(41)] = 540,
  [SMALL_STATE(42)] = 547,
  [SMALL_STATE(43)] = 554,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg, 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, .production_id = 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 1, .production_id = 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(5),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(8),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 7),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 5),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 2, .production_id = 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [114] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_asm(void) {
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
