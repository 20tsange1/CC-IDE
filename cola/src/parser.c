#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 95
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_contract = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_parties = 4,
  anon_sym_COLON = 5,
  anon_sym_COMMA = 6,
  anon_sym_obligations = 7,
  anon_sym_delivers = 8,
  anon_sym_by = 9,
  anon_sym_pays = 10,
  anon_sym_upon = 11,
  anon_sym_conditions = 12,
  anon_sym_if = 13,
  anon_sym_then = 14,
  anon_sym_termination = 15,
  anon_sym_expires = 16,
  anon_sym_on = 17,
  anon_sym_signatures = 18,
  anon_sym_required = 19,
  anon_sym_from = 20,
  anon_sym_DOLLAR = 21,
  anon_sym_DASH = 22,
  sym_identifier = 23,
  sym_string = 24,
  sym_num = 25,
  sym_contract = 26,
  sym_parties = 27,
  sym_party = 28,
  sym_obligations = 29,
  sym_obligation = 30,
  sym_obligate = 31,
  sym_conditions = 32,
  sym_condition_check = 33,
  sym_condition = 34,
  sym_statement = 35,
  sym_termination = 36,
  sym_termination_clause = 37,
  sym_signatures = 38,
  sym_amount = 39,
  sym_date = 40,
  aux_sym_contract_repeat1 = 41,
  aux_sym_parties_repeat1 = 42,
  aux_sym_obligations_repeat1 = 43,
  aux_sym_conditions_repeat1 = 44,
  aux_sym_termination_repeat1 = 45,
  aux_sym_signatures_repeat1 = 46,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_contract] = "contract",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_parties] = "parties",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [anon_sym_obligations] = "obligations",
  [anon_sym_delivers] = "delivers",
  [anon_sym_by] = "by",
  [anon_sym_pays] = "pays",
  [anon_sym_upon] = "upon",
  [anon_sym_conditions] = "conditions",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_termination] = "termination",
  [anon_sym_expires] = "expires",
  [anon_sym_on] = "on",
  [anon_sym_signatures] = "signatures",
  [anon_sym_required] = "required",
  [anon_sym_from] = "from",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DASH] = "-",
  [sym_identifier] = "identifier",
  [sym_string] = "string",
  [sym_num] = "num",
  [sym_contract] = "contract",
  [sym_parties] = "parties",
  [sym_party] = "party",
  [sym_obligations] = "obligations",
  [sym_obligation] = "clause",
  [sym_obligate] = "statement",
  [sym_conditions] = "conditions",
  [sym_condition_check] = "clause",
  [sym_condition] = "condition",
  [sym_statement] = "statement",
  [sym_termination] = "termination",
  [sym_termination_clause] = "clause",
  [sym_signatures] = "signatures",
  [sym_amount] = "amount",
  [sym_date] = "date",
  [aux_sym_contract_repeat1] = "contract_repeat1",
  [aux_sym_parties_repeat1] = "parties_repeat1",
  [aux_sym_obligations_repeat1] = "obligations_repeat1",
  [aux_sym_conditions_repeat1] = "conditions_repeat1",
  [aux_sym_termination_repeat1] = "termination_repeat1",
  [aux_sym_signatures_repeat1] = "signatures_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_contract] = anon_sym_contract,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_parties] = anon_sym_parties,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_obligations] = anon_sym_obligations,
  [anon_sym_delivers] = anon_sym_delivers,
  [anon_sym_by] = anon_sym_by,
  [anon_sym_pays] = anon_sym_pays,
  [anon_sym_upon] = anon_sym_upon,
  [anon_sym_conditions] = anon_sym_conditions,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_termination] = anon_sym_termination,
  [anon_sym_expires] = anon_sym_expires,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_signatures] = anon_sym_signatures,
  [anon_sym_required] = anon_sym_required,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_identifier] = sym_identifier,
  [sym_string] = sym_string,
  [sym_num] = sym_num,
  [sym_contract] = sym_contract,
  [sym_parties] = sym_parties,
  [sym_party] = sym_party,
  [sym_obligations] = sym_obligations,
  [sym_obligation] = sym_obligation,
  [sym_obligate] = sym_statement,
  [sym_conditions] = sym_conditions,
  [sym_condition_check] = sym_obligation,
  [sym_condition] = sym_condition,
  [sym_statement] = sym_statement,
  [sym_termination] = sym_termination,
  [sym_termination_clause] = sym_obligation,
  [sym_signatures] = sym_signatures,
  [sym_amount] = sym_amount,
  [sym_date] = sym_date,
  [aux_sym_contract_repeat1] = aux_sym_contract_repeat1,
  [aux_sym_parties_repeat1] = aux_sym_parties_repeat1,
  [aux_sym_obligations_repeat1] = aux_sym_obligations_repeat1,
  [aux_sym_conditions_repeat1] = aux_sym_conditions_repeat1,
  [aux_sym_termination_repeat1] = aux_sym_termination_repeat1,
  [aux_sym_signatures_repeat1] = aux_sym_signatures_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_contract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_parties] = {
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
  [anon_sym_obligations] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delivers] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_by] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pays] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_upon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_conditions] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_termination] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_expires] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_signatures] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_required] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
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
  [sym_parties] = {
    .visible = true,
    .named = true,
  },
  [sym_party] = {
    .visible = true,
    .named = true,
  },
  [sym_obligations] = {
    .visible = true,
    .named = true,
  },
  [sym_obligation] = {
    .visible = true,
    .named = true,
  },
  [sym_obligate] = {
    .visible = true,
    .named = true,
  },
  [sym_conditions] = {
    .visible = true,
    .named = true,
  },
  [sym_condition_check] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_termination] = {
    .visible = true,
    .named = true,
  },
  [sym_termination_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_signatures] = {
    .visible = true,
    .named = true,
  },
  [sym_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_contract_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parties_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_obligations_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conditions_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_termination_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_signatures_repeat1] = {
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
  [18] = 3,
  [19] = 19,
  [20] = 3,
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
  [39] = 3,
  [40] = 34,
  [41] = 36,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
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
  [93] = 90,
  [94] = 94,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(85);
      ADVANCE_MAP(
        '$', 109,
        ',', 91,
        '-', 110,
        ':', 90,
        'b', 83,
        'c', 47,
        'd', 12,
        'e', 82,
        'f', 57,
        'i', 21,
        'o', 8,
        'p', 2,
        'r', 13,
        's', 24,
        't', 15,
        'u', 54,
        '{', 87,
        '}', 88,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 1:
      if (lookahead == '$') ADVANCE(109);
      if (lookahead == ',') ADVANCE(91);
      if (lookahead == '{') ADVANCE(87);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 7:
      if (lookahead == 'b') ADVANCE(118);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 8:
      if (lookahead == 'b') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(107);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == 'h') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(100);
      END_STATE();
    case 22:
      if (lookahead == 'g') ADVANCE(43);
      END_STATE();
    case 23:
      if (lookahead == 'g') ADVANCE(5);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(108);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(4);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 53:
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 54:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 55:
      if (lookahead == 'q') ADVANCE(80);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(74);
      if (lookahead == 'y') ADVANCE(64);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(3);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 69:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(113);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 78:
      if (lookahead == 'u') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 79:
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 80:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 81:
      if (lookahead == 'v') ADVANCE(19);
      END_STATE();
    case 82:
      if (lookahead == 'x') ADVANCE(53);
      END_STATE();
    case 83:
      if (lookahead == 'y') ADVANCE(94);
      END_STATE();
    case 84:
      if (lookahead == '}') ADVANCE(88);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_contract);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_parties);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_obligations);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_delivers);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_by);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_pays);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_upon);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_upon);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_conditions);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_then);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_termination);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_expires);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_signatures);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'h') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'o') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'p') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'y') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_string);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 84},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 84},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 72},
  [11] = {.lex_state = 84},
  [12] = {.lex_state = 84},
  [13] = {.lex_state = 84},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 72},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 78},
  [21] = {.lex_state = 84},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 78},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 78},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 84},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 84},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 84},
  [57] = {.lex_state = 84},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 84},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 84},
  [77] = {.lex_state = 84},
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
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_contract] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_parties] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_obligations] = ACTIONS(1),
    [anon_sym_delivers] = ACTIONS(1),
    [anon_sym_by] = ACTIONS(1),
    [anon_sym_pays] = ACTIONS(1),
    [anon_sym_upon] = ACTIONS(1),
    [anon_sym_conditions] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_termination] = ACTIONS(1),
    [anon_sym_expires] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_signatures] = ACTIONS(1),
    [anon_sym_required] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_num] = ACTIONS(1),
  },
  [1] = {
    [sym_contract] = STATE(92),
    [anon_sym_contract] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(5), 1,
      anon_sym_RBRACE,
    ACTIONS(7), 1,
      anon_sym_conditions,
    ACTIONS(9), 1,
      anon_sym_termination,
    ACTIONS(11), 1,
      anon_sym_signatures,
    STATE(5), 1,
      sym_conditions,
    STATE(30), 1,
      sym_termination,
    STATE(66), 1,
      sym_signatures,
  [22] = 3,
    ACTIONS(15), 1,
      sym_string,
    STATE(3), 1,
      aux_sym_contract_repeat1,
    ACTIONS(13), 3,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
  [34] = 4,
    ACTIONS(18), 1,
      anon_sym_RBRACE,
    ACTIONS(20), 1,
      sym_identifier,
    STATE(56), 1,
      sym_obligate,
    STATE(6), 2,
      sym_obligation,
      aux_sym_obligations_repeat1,
  [48] = 5,
    ACTIONS(9), 1,
      anon_sym_termination,
    ACTIONS(11), 1,
      anon_sym_signatures,
    ACTIONS(22), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      sym_termination,
    STATE(60), 1,
      sym_signatures,
  [64] = 4,
    ACTIONS(24), 1,
      anon_sym_RBRACE,
    ACTIONS(26), 1,
      sym_identifier,
    STATE(56), 1,
      sym_obligate,
    STATE(6), 2,
      sym_obligation,
      aux_sym_obligations_repeat1,
  [78] = 4,
    ACTIONS(29), 1,
      anon_sym_contract,
    ACTIONS(32), 1,
      anon_sym_RBRACE,
    ACTIONS(34), 1,
      anon_sym_if,
    STATE(7), 2,
      sym_termination_clause,
      aux_sym_termination_repeat1,
  [92] = 4,
    ACTIONS(37), 1,
      anon_sym_contract,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 1,
      anon_sym_if,
    STATE(7), 2,
      sym_termination_clause,
      aux_sym_termination_repeat1,
  [106] = 5,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    ACTIONS(45), 1,
      anon_sym_DOLLAR,
    ACTIONS(47), 1,
      sym_string,
    STATE(3), 1,
      aux_sym_contract_repeat1,
    STATE(82), 1,
      sym_amount,
  [122] = 5,
    ACTIONS(49), 1,
      anon_sym_then,
    ACTIONS(51), 1,
      sym_string,
    ACTIONS(53), 1,
      sym_num,
    STATE(18), 1,
      aux_sym_contract_repeat1,
    STATE(64), 1,
      sym_date,
  [138] = 3,
    ACTIONS(20), 1,
      sym_identifier,
    STATE(56), 1,
      sym_obligate,
    STATE(4), 2,
      sym_obligation,
      aux_sym_obligations_repeat1,
  [149] = 3,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    ACTIONS(57), 1,
      sym_identifier,
    STATE(12), 2,
      sym_party,
      aux_sym_parties_repeat1,
  [160] = 3,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    ACTIONS(62), 1,
      sym_identifier,
    STATE(12), 2,
      sym_party,
      aux_sym_parties_repeat1,
  [171] = 3,
    ACTIONS(37), 1,
      anon_sym_contract,
    ACTIONS(41), 1,
      anon_sym_if,
    STATE(8), 2,
      sym_termination_clause,
      aux_sym_termination_repeat1,
  [182] = 3,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    ACTIONS(66), 1,
      anon_sym_if,
    STATE(15), 2,
      sym_condition_check,
      aux_sym_conditions_repeat1,
  [193] = 1,
    ACTIONS(69), 4,
      anon_sym_RBRACE,
      anon_sym_conditions,
      anon_sym_termination,
      anon_sym_signatures,
  [200] = 3,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    ACTIONS(73), 1,
      anon_sym_if,
    STATE(15), 2,
      sym_condition_check,
      aux_sym_conditions_repeat1,
  [211] = 4,
    ACTIONS(13), 1,
      sym_num,
    ACTIONS(75), 1,
      anon_sym_then,
    ACTIONS(77), 1,
      sym_string,
    STATE(18), 1,
      aux_sym_contract_repeat1,
  [224] = 3,
    ACTIONS(47), 1,
      sym_string,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    STATE(3), 1,
      aux_sym_contract_repeat1,
  [234] = 3,
    ACTIONS(75), 1,
      anon_sym_upon,
    ACTIONS(82), 1,
      sym_string,
    STATE(20), 1,
      aux_sym_contract_repeat1,
  [244] = 2,
    ACTIONS(62), 1,
      sym_identifier,
    STATE(13), 2,
      sym_party,
      aux_sym_parties_repeat1,
  [252] = 2,
    ACTIONS(73), 1,
      anon_sym_if,
    STATE(17), 2,
      sym_condition_check,
      aux_sym_conditions_repeat1,
  [260] = 3,
    ACTIONS(11), 1,
      anon_sym_signatures,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      sym_signatures,
  [270] = 3,
    ACTIONS(47), 1,
      sym_string,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      aux_sym_contract_repeat1,
  [280] = 3,
    ACTIONS(89), 1,
      sym_string,
    STATE(10), 1,
      aux_sym_contract_repeat1,
    STATE(68), 1,
      sym_condition,
  [290] = 3,
    ACTIONS(89), 1,
      sym_string,
    STATE(10), 1,
      aux_sym_contract_repeat1,
    STATE(79), 1,
      sym_condition,
  [300] = 3,
    ACTIONS(91), 1,
      anon_sym_by,
    ACTIONS(93), 1,
      sym_string,
    STATE(39), 1,
      aux_sym_contract_repeat1,
  [310] = 1,
    ACTIONS(95), 3,
      anon_sym_RBRACE,
      anon_sym_termination,
      anon_sym_signatures,
  [316] = 3,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym_signatures_repeat1,
  [326] = 3,
    ACTIONS(11), 1,
      anon_sym_signatures,
    ACTIONS(22), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      sym_signatures,
  [336] = 3,
    ACTIONS(101), 1,
      sym_string,
    STATE(9), 1,
      aux_sym_contract_repeat1,
    STATE(72), 1,
      sym_statement,
  [346] = 3,
    ACTIONS(101), 1,
      sym_string,
    STATE(9), 1,
      aux_sym_contract_repeat1,
    STATE(75), 1,
      sym_statement,
  [356] = 3,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      aux_sym_signatures_repeat1,
  [366] = 3,
    ACTIONS(105), 1,
      anon_sym_upon,
    ACTIONS(107), 1,
      sym_string,
    STATE(36), 1,
      aux_sym_contract_repeat1,
  [376] = 3,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    ACTIONS(111), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      aux_sym_signatures_repeat1,
  [386] = 3,
    ACTIONS(114), 1,
      anon_sym_upon,
    ACTIONS(116), 1,
      sym_string,
    STATE(20), 1,
      aux_sym_contract_repeat1,
  [396] = 3,
    ACTIONS(47), 1,
      sym_string,
    ACTIONS(118), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      aux_sym_contract_repeat1,
  [406] = 1,
    ACTIONS(120), 3,
      anon_sym_contract,
      anon_sym_RBRACE,
      anon_sym_if,
  [412] = 3,
    ACTIONS(75), 1,
      anon_sym_by,
    ACTIONS(122), 1,
      sym_string,
    STATE(39), 1,
      aux_sym_contract_repeat1,
  [422] = 3,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(127), 1,
      sym_string,
    STATE(41), 1,
      aux_sym_contract_repeat1,
  [432] = 3,
    ACTIONS(47), 1,
      sym_string,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      aux_sym_contract_repeat1,
  [442] = 2,
    ACTIONS(53), 1,
      sym_num,
    STATE(69), 1,
      sym_date,
  [449] = 2,
    ACTIONS(131), 1,
      sym_string,
    STATE(24), 1,
      aux_sym_contract_repeat1,
  [456] = 1,
    ACTIONS(133), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [461] = 2,
    ACTIONS(135), 1,
      anon_sym_DOLLAR,
    STATE(61), 1,
      sym_amount,
  [468] = 1,
    ACTIONS(137), 2,
      anon_sym_RBRACE,
      anon_sym_signatures,
  [473] = 2,
    ACTIONS(139), 1,
      anon_sym_obligations,
    STATE(2), 1,
      sym_obligations,
  [480] = 2,
    ACTIONS(53), 1,
      sym_num,
    STATE(75), 1,
      sym_date,
  [487] = 2,
    ACTIONS(141), 1,
      anon_sym_delivers,
    ACTIONS(143), 1,
      anon_sym_pays,
  [494] = 2,
    ACTIONS(145), 1,
      sym_string,
    STATE(27), 1,
      aux_sym_contract_repeat1,
  [501] = 2,
    ACTIONS(147), 1,
      sym_string,
    STATE(37), 1,
      aux_sym_contract_repeat1,
  [508] = 1,
    ACTIONS(109), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [513] = 1,
    ACTIONS(149), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [518] = 2,
    ACTIONS(151), 1,
      sym_string,
    STATE(19), 1,
      aux_sym_contract_repeat1,
  [525] = 1,
    ACTIONS(153), 2,
      anon_sym_RBRACE,
      anon_sym_if,
  [530] = 1,
    ACTIONS(155), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [535] = 1,
    ACTIONS(157), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [540] = 1,
    ACTIONS(159), 2,
      anon_sym_COMMA,
      anon_sym_then,
  [545] = 2,
    ACTIONS(161), 1,
      anon_sym_parties,
    STATE(47), 1,
      sym_parties,
  [552] = 1,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
  [556] = 1,
    ACTIONS(163), 1,
      anon_sym_upon,
  [560] = 1,
    ACTIONS(165), 1,
      anon_sym_obligations,
  [564] = 1,
    ACTIONS(167), 1,
      anon_sym_DASH,
  [568] = 1,
    ACTIONS(169), 1,
      anon_sym_then,
  [572] = 1,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
  [576] = 1,
    ACTIONS(22), 1,
      anon_sym_RBRACE,
  [580] = 1,
    ACTIONS(173), 1,
      sym_identifier,
  [584] = 1,
    ACTIONS(175), 1,
      anon_sym_then,
  [588] = 1,
    ACTIONS(177), 1,
      anon_sym_COMMA,
  [592] = 1,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
  [596] = 1,
    ACTIONS(181), 1,
      anon_sym_LBRACE,
  [600] = 1,
    ACTIONS(183), 1,
      anon_sym_COMMA,
  [604] = 1,
    ACTIONS(185), 1,
      anon_sym_required,
  [608] = 1,
    ACTIONS(187), 1,
      sym_num,
  [612] = 1,
    ACTIONS(189), 1,
      anon_sym_COMMA,
  [616] = 1,
    ACTIONS(191), 1,
      sym_identifier,
  [620] = 1,
    ACTIONS(193), 1,
      sym_identifier,
  [624] = 1,
    ACTIONS(195), 1,
      anon_sym_on,
  [628] = 1,
    ACTIONS(197), 1,
      anon_sym_then,
  [632] = 1,
    ACTIONS(199), 1,
      anon_sym_COLON,
  [636] = 1,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
  [640] = 1,
    ACTIONS(203), 1,
      anon_sym_COMMA,
  [644] = 1,
    ACTIONS(205), 1,
      anon_sym_DASH,
  [648] = 1,
    ACTIONS(207), 1,
      anon_sym_LBRACE,
  [652] = 1,
    ACTIONS(209), 1,
      anon_sym_from,
  [656] = 1,
    ACTIONS(211), 1,
      sym_num,
  [660] = 1,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
  [664] = 1,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
  [668] = 1,
    ACTIONS(217), 1,
      anon_sym_expires,
  [672] = 1,
    ACTIONS(219), 1,
      sym_num,
  [676] = 1,
    ACTIONS(221), 1,
      anon_sym_LBRACE,
  [680] = 1,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
  [684] = 1,
    ACTIONS(225), 1,
      sym_num,
  [688] = 1,
    ACTIONS(227), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 34,
  [SMALL_STATE(5)] = 48,
  [SMALL_STATE(6)] = 64,
  [SMALL_STATE(7)] = 78,
  [SMALL_STATE(8)] = 92,
  [SMALL_STATE(9)] = 106,
  [SMALL_STATE(10)] = 122,
  [SMALL_STATE(11)] = 138,
  [SMALL_STATE(12)] = 149,
  [SMALL_STATE(13)] = 160,
  [SMALL_STATE(14)] = 171,
  [SMALL_STATE(15)] = 182,
  [SMALL_STATE(16)] = 193,
  [SMALL_STATE(17)] = 200,
  [SMALL_STATE(18)] = 211,
  [SMALL_STATE(19)] = 224,
  [SMALL_STATE(20)] = 234,
  [SMALL_STATE(21)] = 244,
  [SMALL_STATE(22)] = 252,
  [SMALL_STATE(23)] = 260,
  [SMALL_STATE(24)] = 270,
  [SMALL_STATE(25)] = 280,
  [SMALL_STATE(26)] = 290,
  [SMALL_STATE(27)] = 300,
  [SMALL_STATE(28)] = 310,
  [SMALL_STATE(29)] = 316,
  [SMALL_STATE(30)] = 326,
  [SMALL_STATE(31)] = 336,
  [SMALL_STATE(32)] = 346,
  [SMALL_STATE(33)] = 356,
  [SMALL_STATE(34)] = 366,
  [SMALL_STATE(35)] = 376,
  [SMALL_STATE(36)] = 386,
  [SMALL_STATE(37)] = 396,
  [SMALL_STATE(38)] = 406,
  [SMALL_STATE(39)] = 412,
  [SMALL_STATE(40)] = 422,
  [SMALL_STATE(41)] = 432,
  [SMALL_STATE(42)] = 442,
  [SMALL_STATE(43)] = 449,
  [SMALL_STATE(44)] = 456,
  [SMALL_STATE(45)] = 461,
  [SMALL_STATE(46)] = 468,
  [SMALL_STATE(47)] = 473,
  [SMALL_STATE(48)] = 480,
  [SMALL_STATE(49)] = 487,
  [SMALL_STATE(50)] = 494,
  [SMALL_STATE(51)] = 501,
  [SMALL_STATE(52)] = 508,
  [SMALL_STATE(53)] = 513,
  [SMALL_STATE(54)] = 518,
  [SMALL_STATE(55)] = 525,
  [SMALL_STATE(56)] = 530,
  [SMALL_STATE(57)] = 535,
  [SMALL_STATE(58)] = 540,
  [SMALL_STATE(59)] = 545,
  [SMALL_STATE(60)] = 552,
  [SMALL_STATE(61)] = 556,
  [SMALL_STATE(62)] = 560,
  [SMALL_STATE(63)] = 564,
  [SMALL_STATE(64)] = 568,
  [SMALL_STATE(65)] = 572,
  [SMALL_STATE(66)] = 576,
  [SMALL_STATE(67)] = 580,
  [SMALL_STATE(68)] = 584,
  [SMALL_STATE(69)] = 588,
  [SMALL_STATE(70)] = 592,
  [SMALL_STATE(71)] = 596,
  [SMALL_STATE(72)] = 600,
  [SMALL_STATE(73)] = 604,
  [SMALL_STATE(74)] = 608,
  [SMALL_STATE(75)] = 612,
  [SMALL_STATE(76)] = 616,
  [SMALL_STATE(77)] = 620,
  [SMALL_STATE(78)] = 624,
  [SMALL_STATE(79)] = 628,
  [SMALL_STATE(80)] = 632,
  [SMALL_STATE(81)] = 636,
  [SMALL_STATE(82)] = 640,
  [SMALL_STATE(83)] = 644,
  [SMALL_STATE(84)] = 648,
  [SMALL_STATE(85)] = 652,
  [SMALL_STATE(86)] = 656,
  [SMALL_STATE(87)] = 660,
  [SMALL_STATE(88)] = 664,
  [SMALL_STATE(89)] = 668,
  [SMALL_STATE(90)] = 672,
  [SMALL_STATE(91)] = 676,
  [SMALL_STATE(92)] = 680,
  [SMALL_STATE(93)] = 684,
  [SMALL_STATE(94)] = 688,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contract_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contract_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_obligations_repeat1, 2, 0, 0),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_obligations_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_termination_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_termination_repeat1, 2, 0, 0),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_termination_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parties_repeat1, 2, 0, 0),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parties_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2, 0, 0),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obligations, 4, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_contract_repeat1, 2, 0, 0),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_contract_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_contract_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 4, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signatures, 4, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signatures, 5, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_signatures_repeat1, 2, 0, 0),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_signatures_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 3, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_termination_clause, 5, 0, 0),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_contract_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_party, 4, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_termination, 4, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obligate, 6, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_check, 5, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obligation, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obligate, 7, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 5, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parties, 4, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 2, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract, 6, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract, 8, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract, 9, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract, 7, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [223] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
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
