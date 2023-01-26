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
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == ']') ADVANCE(26);
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
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 12},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 7},
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
    [sym_program] = STATE(40),
    [sym__item] = STATE(6),
    [sym_meta] = STATE(6),
    [sym_label] = STATE(6),
    [sym_instruction] = STATE(6),
    [sym_reg] = STATE(14),
    [sym_ident] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_word] = ACTIONS(7),
    [sym__reg] = ACTIONS(9),
    [sym_meta_ident] = ACTIONS(11),
    [sym__ident] = ACTIONS(13),
    [sym_line_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__expr] = STATE(16),
    [sym_ptr] = STATE(16),
    [sym_reg] = STATE(14),
    [sym_ident] = STATE(16),
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
    [sym__expr] = STATE(25),
    [sym_ptr] = STATE(25),
    [sym_reg] = STATE(14),
    [sym_ident] = STATE(25),
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
    [sym__expr] = STATE(25),
    [sym_ptr] = STATE(25),
    [sym_reg] = STATE(14),
    [sym_ident] = STATE(25),
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
    STATE(25), 3,
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
    STATE(9), 1,
      aux_sym_program_repeat1,
    STATE(14), 1,
      sym_reg,
    STATE(41), 1,
      sym_ident,
    STATE(8), 5,
      sym__item,
      sym_meta,
      sym_label,
      sym_instruction,
      aux_sym_program_repeat2,
  [76] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      anon_sym_LF,
    ACTIONS(44), 1,
      sym_word,
    ACTIONS(47), 1,
      sym__reg,
    ACTIONS(50), 1,
      sym_meta_ident,
    ACTIONS(53), 1,
      sym__ident,
    STATE(11), 1,
      aux_sym_program_repeat1,
    STATE(14), 1,
      sym_reg,
    STATE(41), 1,
      sym_ident,
    STATE(7), 5,
      sym__item,
      sym_meta,
      sym_label,
      sym_instruction,
      aux_sym_program_repeat2,
  [114] = 11,
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
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    ACTIONS(58), 1,
      anon_sym_LF,
    STATE(10), 1,
      aux_sym_program_repeat1,
    STATE(14), 1,
      sym_reg,
    STATE(41), 1,
      sym_ident,
    STATE(7), 5,
      sym__item,
      sym_meta,
      sym_label,
      sym_instruction,
      aux_sym_program_repeat2,
  [152] = 11,
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
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 1,
      anon_sym_LF,
    STATE(14), 1,
      sym_reg,
    STATE(24), 1,
      aux_sym_program_repeat1,
    STATE(41), 1,
      sym_ident,
    STATE(29), 4,
      sym__item,
      sym_meta,
      sym_label,
      sym_instruction,
  [189] = 11,
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
    ACTIONS(60), 1,
      anon_sym_LF,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      sym_reg,
    STATE(24), 1,
      aux_sym_program_repeat1,
    STATE(41), 1,
      sym_ident,
    STATE(29), 4,
      sym__item,
      sym_meta,
      sym_label,
      sym_instruction,
  [226] = 10,
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
    ACTIONS(60), 1,
      anon_sym_LF,
    STATE(14), 1,
      sym_reg,
    STATE(24), 1,
      aux_sym_program_repeat1,
    STATE(41), 1,
      sym_ident,
    STATE(29), 4,
      sym__item,
      sym_meta,
      sym_label,
      sym_instruction,
  [260] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(64), 4,
      sym_word,
      sym__reg,
      sym_meta_ident,
      sym__ident,
    ACTIONS(17), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [280] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(68), 1,
      anon_sym_COLON,
    ACTIONS(70), 1,
      sym_int,
    STATE(14), 1,
      sym_reg,
    STATE(27), 1,
      sym_ident,
    ACTIONS(9), 2,
      sym_word,
      sym__reg,
    ACTIONS(13), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [308] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(72), 4,
      sym_word,
      sym__reg,
      sym_meta_ident,
      sym__ident,
    ACTIONS(68), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [325] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(79), 4,
      sym_word,
      sym__reg,
      sym_meta_ident,
      sym__ident,
  [345] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(83), 1,
      anon_sym_COMMA,
    STATE(17), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(85), 4,
      sym_word,
      sym__reg,
      sym_meta_ident,
      sym__ident,
  [365] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(89), 4,
      sym_word,
      sym__reg,
      sym_meta_ident,
      sym__ident,
  [385] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
    ACTIONS(95), 4,
      sym_word,
      sym__reg,
      sym_meta_ident,
      sym__ident,
  [403] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(97), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
    ACTIONS(99), 4,
      sym_word,
      sym__reg,
      sym_meta_ident,
      sym__ident,
  [418] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(101), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
    ACTIONS(103), 4,
      sym_word,
      sym__reg,
      sym_meta_ident,
      sym__ident,
  [433] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(105), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
    ACTIONS(107), 4,
      sym_word,
      sym__reg,
      sym_meta_ident,
      sym__ident,
  [448] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(109), 1,
      sym_int,
    STATE(14), 1,
      sym_reg,
    STATE(43), 1,
      sym_ident,
    ACTIONS(9), 2,
      sym_word,
      sym__reg,
    ACTIONS(13), 2,
      sym_meta_ident,
      sym__ident,
  [469] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(111), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
    ACTIONS(113), 4,
      sym_word,
      sym__reg,
      sym_meta_ident,
      sym__ident,
  [484] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 1,
      anon_sym_LF,
    STATE(24), 1,
      aux_sym_program_repeat1,
    ACTIONS(120), 4,
      sym_word,
      sym__reg,
      sym_meta_ident,
      sym__ident,
  [503] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
    ACTIONS(79), 4,
      sym_word,
      sym__reg,
      sym_meta_ident,
      sym__ident,
  [518] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(122), 1,
      sym_int,
    STATE(14), 1,
      sym_reg,
    STATE(39), 1,
      sym_ident,
    ACTIONS(9), 2,
      sym_word,
      sym__reg,
    ACTIONS(13), 2,
      sym_meta_ident,
      sym__ident,
  [539] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(124), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(126), 4,
      sym_word,
      sym__reg,
      sym_meta_ident,
      sym__ident,
  [553] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(130), 4,
      sym_word,
      sym__reg,
      sym_meta_ident,
      sym__ident,
  [567] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(132), 4,
      sym_word,
      sym__reg,
      sym_meta_ident,
      sym__ident,
  [581] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym__reg,
    ACTIONS(134), 1,
      sym_word,
    STATE(35), 1,
      sym_reg,
  [594] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym__reg,
    ACTIONS(134), 1,
      sym_word,
    STATE(42), 1,
      sym_reg,
  [607] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym__reg,
    ACTIONS(134), 1,
      sym_word,
    STATE(33), 1,
      sym_reg,
  [620] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_RBRACK,
    ACTIONS(136), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [631] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym__reg,
    ACTIONS(134), 1,
      sym_word,
    STATE(36), 1,
      sym_reg,
  [644] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(142), 1,
      anon_sym_RBRACK,
    ACTIONS(140), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [655] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
  [662] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(146), 1,
      anon_sym_LBRACK,
  [669] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(148), 1,
      anon_sym_ptr,
  [676] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_RBRACK,
  [683] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
  [690] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(152), 1,
      anon_sym_COLON,
  [697] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
  [704] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(154), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 38,
  [SMALL_STATE(7)] = 76,
  [SMALL_STATE(8)] = 114,
  [SMALL_STATE(9)] = 152,
  [SMALL_STATE(10)] = 189,
  [SMALL_STATE(11)] = 226,
  [SMALL_STATE(12)] = 260,
  [SMALL_STATE(13)] = 280,
  [SMALL_STATE(14)] = 308,
  [SMALL_STATE(15)] = 325,
  [SMALL_STATE(16)] = 345,
  [SMALL_STATE(17)] = 365,
  [SMALL_STATE(18)] = 385,
  [SMALL_STATE(19)] = 403,
  [SMALL_STATE(20)] = 418,
  [SMALL_STATE(21)] = 433,
  [SMALL_STATE(22)] = 448,
  [SMALL_STATE(23)] = 469,
  [SMALL_STATE(24)] = 484,
  [SMALL_STATE(25)] = 503,
  [SMALL_STATE(26)] = 518,
  [SMALL_STATE(27)] = 539,
  [SMALL_STATE(28)] = 553,
  [SMALL_STATE(29)] = 567,
  [SMALL_STATE(30)] = 581,
  [SMALL_STATE(31)] = 594,
  [SMALL_STATE(32)] = 607,
  [SMALL_STATE(33)] = 620,
  [SMALL_STATE(34)] = 631,
  [SMALL_STATE(35)] = 644,
  [SMALL_STATE(36)] = 655,
  [SMALL_STATE(37)] = 662,
  [SMALL_STATE(38)] = 669,
  [SMALL_STATE(39)] = 676,
  [SMALL_STATE(40)] = 683,
  [SMALL_STATE(41)] = 690,
  [SMALL_STATE(42)] = 697,
  [SMALL_STATE(43)] = 704,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg, 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, .production_id = 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(11),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(12),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(13),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(14),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reg, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 1, .production_id = 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(5),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, .production_id = 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3, .production_id = 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ptr, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 7),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ptr, 7),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 5),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ptr, 5),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 4),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ptr, 4),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(24),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 2, .production_id = 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 2, .production_id = 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat2, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [150] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
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
