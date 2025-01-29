#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_has = 1,
  anon_sym_if = 2,
  anon_sym_DOT = 3,
  anon_sym_it = 4,
  anon_sym_is = 5,
  anon_sym_not = 6,
  anon_sym_true = 7,
  anon_sym_that = 8,
  anon_sym_PERCENT = 9,
  anon_sym_discount = 10,
  anon_sym_off = 11,
  anon_sym_they = 12,
  anon_sym_are = 13,
  anon_sym_a = 14,
  anon_sym_member = 15,
  anon_sym_male = 16,
  anon_sym_female = 17,
  sym_string = 18,
  sym_num = 19,
  sym_contract = 20,
  sym_start = 21,
  sym_user = 22,
  sym_negated = 23,
  sym_discount = 24,
  sym_conditional = 25,
  sym_condition1 = 26,
  sym_condition2 = 27,
  sym_condition3 = 28,
  aux_sym_contract_repeat1 = 29,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_has] = "has",
  [anon_sym_if] = "if",
  [anon_sym_DOT] = ".",
  [anon_sym_it] = "it",
  [anon_sym_is] = "is",
  [anon_sym_not] = "not",
  [anon_sym_true] = "true",
  [anon_sym_that] = "that",
  [anon_sym_PERCENT] = "%",
  [anon_sym_discount] = "discount",
  [anon_sym_off] = "off",
  [anon_sym_they] = "they",
  [anon_sym_are] = "are",
  [anon_sym_a] = "a",
  [anon_sym_member] = "member",
  [anon_sym_male] = "male",
  [anon_sym_female] = "female",
  [sym_string] = "string",
  [sym_num] = "num",
  [sym_contract] = "contract",
  [sym_start] = "clause",
  [sym_user] = "user",
  [sym_negated] = "negated",
  [sym_discount] = "statement",
  [sym_conditional] = "condition",
  [sym_condition1] = "condition1",
  [sym_condition2] = "condition2",
  [sym_condition3] = "condition3",
  [aux_sym_contract_repeat1] = "contract_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_has] = anon_sym_has,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_it] = anon_sym_it,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_that] = anon_sym_that,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_discount] = anon_sym_discount,
  [anon_sym_off] = anon_sym_off,
  [anon_sym_they] = anon_sym_they,
  [anon_sym_are] = anon_sym_are,
  [anon_sym_a] = anon_sym_a,
  [anon_sym_member] = anon_sym_member,
  [anon_sym_male] = anon_sym_male,
  [anon_sym_female] = anon_sym_female,
  [sym_string] = sym_string,
  [sym_num] = sym_num,
  [sym_contract] = sym_contract,
  [sym_start] = sym_start,
  [sym_user] = sym_user,
  [sym_negated] = sym_negated,
  [sym_discount] = sym_discount,
  [sym_conditional] = sym_conditional,
  [sym_condition1] = sym_condition1,
  [sym_condition2] = sym_condition2,
  [sym_condition3] = sym_condition3,
  [aux_sym_contract_repeat1] = aux_sym_contract_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_has] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_it] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_that] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_discount] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_off] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_they] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_are] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_a] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_member] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_male] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_female] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_num] = {
    .visible = true,
    .named = true,
  },
  [sym_contract] = {
    .visible = true,
    .named = true,
  },
  [sym_start] = {
    .visible = true,
    .named = true,
  },
  [sym_user] = {
    .visible = true,
    .named = true,
  },
  [sym_negated] = {
    .visible = true,
    .named = true,
  },
  [sym_discount] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional] = {
    .visible = true,
    .named = true,
  },
  [sym_condition1] = {
    .visible = true,
    .named = true,
  },
  [sym_condition2] = {
    .visible = true,
    .named = true,
  },
  [sym_condition3] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_contract_repeat1] = {
    .visible = false,
    .named = false,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(39);
      ADVANCE_MAP(
        '%', 48,
        '.', 42,
        'a', 54,
        'd', 20,
        'f', 10,
        'h', 4,
        'i', 16,
        'm', 2,
        'n', 26,
        'o', 18,
        't', 19,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'm') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 8:
      if (lookahead == 'b') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 16:
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 's') ADVANCE(44);
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 17:
      if (lookahead == 'f') ADVANCE(50);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == 'h') ADVANCE(5);
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(8);
      END_STATE();
    case 24:
      if (lookahead == 'm') ADVANCE(7);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 37:
      if (lookahead == 'y') ADVANCE(51);
      END_STATE();
    case 38:
      if (eof) ADVANCE(39);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_has);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_it);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_that);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_discount);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_they);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_are);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_member);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_male);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_female);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_string);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 38},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 38},
  [4] = {.lex_state = 38},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 38},
  [10] = {.lex_state = 38},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 6},
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_has] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_it] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_that] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_discount] = ACTIONS(1),
    [anon_sym_off] = ACTIONS(1),
    [anon_sym_they] = ACTIONS(1),
    [anon_sym_are] = ACTIONS(1),
    [anon_sym_a] = ACTIONS(1),
    [anon_sym_member] = ACTIONS(1),
    [anon_sym_male] = ACTIONS(1),
    [anon_sym_female] = ACTIONS(1),
    [sym_num] = ACTIONS(1),
  },
  [1] = {
    [sym_contract] = STATE(12),
    [sym_start] = STATE(3),
    [sym_user] = STATE(15),
    [aux_sym_contract_repeat1] = STATE(3),
    [sym_string] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 1,
      anon_sym_it,
    ACTIONS(7), 1,
      anon_sym_they,
    STATE(5), 1,
      sym_negated,
    STATE(21), 1,
      sym_conditional,
    STATE(20), 3,
      sym_condition1,
      sym_condition2,
      sym_condition3,
  [18] = 4,
    ACTIONS(3), 1,
      sym_string,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      sym_user,
    STATE(4), 2,
      sym_start,
      aux_sym_contract_repeat1,
  [32] = 4,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      sym_string,
    STATE(15), 1,
      sym_user,
    STATE(4), 2,
      sym_start,
      aux_sym_contract_repeat1,
  [46] = 3,
    ACTIONS(7), 1,
      anon_sym_they,
    STATE(26), 1,
      sym_conditional,
    STATE(20), 3,
      sym_condition1,
      sym_condition2,
      sym_condition3,
  [58] = 2,
    ACTIONS(16), 1,
      anon_sym_if,
    ACTIONS(18), 2,
      anon_sym_discount,
      anon_sym_off,
  [66] = 3,
    ACTIONS(20), 1,
      anon_sym_a,
    ACTIONS(22), 1,
      anon_sym_male,
    ACTIONS(24), 1,
      anon_sym_female,
  [76] = 2,
    ACTIONS(26), 1,
      sym_num,
    STATE(13), 1,
      sym_discount,
  [83] = 1,
    ACTIONS(28), 2,
      ts_builtin_sym_end,
      sym_string,
  [88] = 1,
    ACTIONS(30), 2,
      ts_builtin_sym_end,
      sym_string,
  [93] = 1,
    ACTIONS(32), 1,
      anon_sym_has,
  [97] = 1,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
  [101] = 1,
    ACTIONS(36), 1,
      anon_sym_if,
  [105] = 1,
    ACTIONS(38), 1,
      anon_sym_PERCENT,
  [109] = 1,
    ACTIONS(40), 1,
      anon_sym_has,
  [113] = 1,
    ACTIONS(42), 1,
      anon_sym_if,
  [117] = 1,
    ACTIONS(44), 1,
      anon_sym_is,
  [121] = 1,
    ACTIONS(46), 1,
      anon_sym_are,
  [125] = 1,
    ACTIONS(48), 1,
      anon_sym_not,
  [129] = 1,
    ACTIONS(50), 1,
      anon_sym_DOT,
  [133] = 1,
    ACTIONS(52), 1,
      anon_sym_DOT,
  [137] = 1,
    ACTIONS(54), 1,
      anon_sym_true,
  [141] = 1,
    ACTIONS(56), 1,
      anon_sym_member,
  [145] = 1,
    ACTIONS(58), 1,
      anon_sym_DOT,
  [149] = 1,
    ACTIONS(60), 1,
      anon_sym_DOT,
  [153] = 1,
    ACTIONS(62), 1,
      anon_sym_DOT,
  [157] = 1,
    ACTIONS(64), 1,
      anon_sym_that,
  [161] = 1,
    ACTIONS(66), 1,
      anon_sym_DOT,
  [165] = 1,
    ACTIONS(68), 1,
      anon_sym_they,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 32,
  [SMALL_STATE(5)] = 46,
  [SMALL_STATE(6)] = 58,
  [SMALL_STATE(7)] = 66,
  [SMALL_STATE(8)] = 76,
  [SMALL_STATE(9)] = 83,
  [SMALL_STATE(10)] = 88,
  [SMALL_STATE(11)] = 93,
  [SMALL_STATE(12)] = 97,
  [SMALL_STATE(13)] = 101,
  [SMALL_STATE(14)] = 105,
  [SMALL_STATE(15)] = 109,
  [SMALL_STATE(16)] = 113,
  [SMALL_STATE(17)] = 117,
  [SMALL_STATE(18)] = 121,
  [SMALL_STATE(19)] = 125,
  [SMALL_STATE(20)] = 129,
  [SMALL_STATE(21)] = 133,
  [SMALL_STATE(22)] = 137,
  [SMALL_STATE(23)] = 141,
  [SMALL_STATE(24)] = 145,
  [SMALL_STATE(25)] = 149,
  [SMALL_STATE(26)] = 153,
  [SMALL_STATE(27)] = 157,
  [SMALL_STATE(28)] = 161,
  [SMALL_STATE(29)] = 165,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contract_repeat1, 2, 0, 0),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contract_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discount, 2, 0, 0),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 6, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 7, 0, 0),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user, 1, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discount, 3, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 1, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition2, 3, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition3, 3, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition1, 4, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negated, 5, 0, 0),
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

TS_PUBLIC const TSLanguage *tree_sitter_cola(void) {
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
