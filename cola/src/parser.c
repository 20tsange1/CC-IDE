#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 126
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 96
#define ALIAS_COUNT 0
#define TOKEN_COUNT 70
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_C_DASHAND = 1,
  anon_sym_AND = 2,
  anon_sym_IS = 3,
  anon_sym_EQUALS = 4,
  anon_sym_PLUS = 5,
  anon_sym_MINUS = 6,
  anon_sym_TIMES = 7,
  anon_sym_DIVIDE = 8,
  anon_sym_IF = 9,
  anon_sym_THEN = 10,
  anon_sym_OR = 11,
  anon_sym_LBRACK = 12,
  anon_sym_RBRACK = 13,
  anon_sym_LPAREN = 14,
  anon_sym_RPAREN = 15,
  anon_sym_it = 16,
  anon_sym_is = 17,
  anon_sym_the = 18,
  anon_sym_case = 19,
  anon_sym_that = 20,
  anon_sym_not = 21,
  anon_sym_DELIVER = 22,
  anon_sym_PAY = 23,
  anon_sym_CHARGE = 24,
  anon_sym_SEND = 25,
  anon_sym_DELIVERED = 26,
  anon_sym_PAID = 27,
  anon_sym_CHARGED = 28,
  anon_sym_SENT = 29,
  anon_sym_on = 30,
  anon_sym_ANYDATE = 31,
  anon_sym_ADATE = 32,
  anon_sym_THEDATE = 33,
  anon_sym_January = 34,
  anon_sym_February = 35,
  anon_sym_March = 36,
  anon_sym_April = 37,
  anon_sym_May = 38,
  anon_sym_June = 39,
  anon_sym_July = 40,
  anon_sym_August = 41,
  anon_sym_September = 42,
  anon_sym_October = 43,
  anon_sym_November = 44,
  anon_sym_December = 45,
  anon_sym_POUNDS = 46,
  anon_sym_DOLLARS = 47,
  anon_sym_EUROS = 48,
  anon_sym_FRANCS = 49,
  anon_sym_AMOUNT = 50,
  anon_sym_SOMECURRENCY = 51,
  anon_sym_REPORT = 52,
  anon_sym_NAMEDOBJECT = 53,
  anon_sym_OTHEROBJECT = 54,
  sym_string = 55,
  sym_num = 56,
  anon_sym_Must = 57,
  anon_sym_HaveTo = 58,
  anon_sym_NeedTo = 59,
  anon_sym_Should = 60,
  anon_sym_OughtTo = 61,
  anon_sym_Can = 62,
  anon_sym_May2 = 63,
  anon_sym_Could = 64,
  anon_sym_Might = 65,
  anon_sym_MustNot = 66,
  anon_sym_Cannot = 67,
  anon_sym_MayNot = 68,
  anon_sym_ShouldNot = 69,
  sym_contract = 70,
  sym_component = 71,
  sym_definition = 72,
  sym_simple_definition = 73,
  sym_numerical_expression = 74,
  sym_operator = 75,
  sym_conditional_definition = 76,
  sym_statement = 77,
  sym_conditional_statement = 78,
  sym_simple_statement = 79,
  sym_condition = 80,
  sym_simple_condition = 81,
  sym_identity = 82,
  sym_holds = 83,
  sym_subject = 84,
  sym_verb = 85,
  sym_verb_status = 86,
  sym_modal_verb = 87,
  sym_date = 88,
  sym_month = 89,
  sym_object = 90,
  sym_numerical_object = 91,
  sym_nonnumerical_object = 92,
  sym_OBLIGATION = 93,
  sym_PERMISSION = 94,
  sym_PROHIBITION = 95,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_C_DASHAND] = "C-AND",
  [anon_sym_AND] = "AND",
  [anon_sym_IS] = "IS",
  [anon_sym_EQUALS] = "EQUALS",
  [anon_sym_PLUS] = "PLUS",
  [anon_sym_MINUS] = "MINUS",
  [anon_sym_TIMES] = "TIMES",
  [anon_sym_DIVIDE] = "DIVIDE",
  [anon_sym_IF] = "IF",
  [anon_sym_THEN] = "THEN",
  [anon_sym_OR] = "OR",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_it] = "it",
  [anon_sym_is] = "is",
  [anon_sym_the] = "the",
  [anon_sym_case] = "case",
  [anon_sym_that] = "that",
  [anon_sym_not] = "not",
  [anon_sym_DELIVER] = "DELIVER",
  [anon_sym_PAY] = "PAY",
  [anon_sym_CHARGE] = "CHARGE",
  [anon_sym_SEND] = "SEND",
  [anon_sym_DELIVERED] = "DELIVERED",
  [anon_sym_PAID] = "PAID",
  [anon_sym_CHARGED] = "CHARGED",
  [anon_sym_SENT] = "SENT",
  [anon_sym_on] = "on",
  [anon_sym_ANYDATE] = "ANYDATE",
  [anon_sym_ADATE] = "ADATE",
  [anon_sym_THEDATE] = "THEDATE",
  [anon_sym_January] = "January",
  [anon_sym_February] = "February",
  [anon_sym_March] = "March",
  [anon_sym_April] = "April",
  [anon_sym_May] = "May",
  [anon_sym_June] = "June",
  [anon_sym_July] = "July",
  [anon_sym_August] = "August",
  [anon_sym_September] = "September",
  [anon_sym_October] = "October",
  [anon_sym_November] = "November",
  [anon_sym_December] = "December",
  [anon_sym_POUNDS] = "POUNDS",
  [anon_sym_DOLLARS] = "DOLLARS",
  [anon_sym_EUROS] = "EUROS",
  [anon_sym_FRANCS] = "FRANCS",
  [anon_sym_AMOUNT] = "AMOUNT",
  [anon_sym_SOMECURRENCY] = "SOMECURRENCY",
  [anon_sym_REPORT] = "REPORT",
  [anon_sym_NAMEDOBJECT] = "NAMEDOBJECT",
  [anon_sym_OTHEROBJECT] = "OTHEROBJECT",
  [sym_string] = "string",
  [sym_num] = "num",
  [anon_sym_Must] = "Must",
  [anon_sym_HaveTo] = " Have To",
  [anon_sym_NeedTo] = " Need To",
  [anon_sym_Should] = " Should",
  [anon_sym_OughtTo] = " Ought To",
  [anon_sym_Can] = "Can",
  [anon_sym_May2] = " May",
  [anon_sym_Could] = " Could",
  [anon_sym_Might] = " Might",
  [anon_sym_MustNot] = "Must Not",
  [anon_sym_Cannot] = " Cannot",
  [anon_sym_MayNot] = " May Not",
  [anon_sym_ShouldNot] = " Should Not",
  [sym_contract] = "contract",
  [sym_component] = "component",
  [sym_definition] = "definition",
  [sym_simple_definition] = "simple_definition",
  [sym_numerical_expression] = "numerical_expression",
  [sym_operator] = "operator",
  [sym_conditional_definition] = "conditional_definition",
  [sym_statement] = "statement",
  [sym_conditional_statement] = "conditional_statement",
  [sym_simple_statement] = "simple_statement",
  [sym_condition] = "condition",
  [sym_simple_condition] = "simple_condition",
  [sym_identity] = "identity",
  [sym_holds] = "holds",
  [sym_subject] = "subject",
  [sym_verb] = "verb",
  [sym_verb_status] = "verb_status",
  [sym_modal_verb] = "modal_verb",
  [sym_date] = "date",
  [sym_month] = "month",
  [sym_object] = "object",
  [sym_numerical_object] = "numerical_object",
  [sym_nonnumerical_object] = "nonnumerical_object",
  [sym_OBLIGATION] = "OBLIGATION",
  [sym_PERMISSION] = "PERMISSION",
  [sym_PROHIBITION] = "PROHIBITION",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_C_DASHAND] = anon_sym_C_DASHAND,
  [anon_sym_AND] = anon_sym_AND,
  [anon_sym_IS] = anon_sym_IS,
  [anon_sym_EQUALS] = anon_sym_EQUALS,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_MINUS] = anon_sym_MINUS,
  [anon_sym_TIMES] = anon_sym_TIMES,
  [anon_sym_DIVIDE] = anon_sym_DIVIDE,
  [anon_sym_IF] = anon_sym_IF,
  [anon_sym_THEN] = anon_sym_THEN,
  [anon_sym_OR] = anon_sym_OR,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_it] = anon_sym_it,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_the] = anon_sym_the,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_that] = anon_sym_that,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_DELIVER] = anon_sym_DELIVER,
  [anon_sym_PAY] = anon_sym_PAY,
  [anon_sym_CHARGE] = anon_sym_CHARGE,
  [anon_sym_SEND] = anon_sym_SEND,
  [anon_sym_DELIVERED] = anon_sym_DELIVERED,
  [anon_sym_PAID] = anon_sym_PAID,
  [anon_sym_CHARGED] = anon_sym_CHARGED,
  [anon_sym_SENT] = anon_sym_SENT,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_ANYDATE] = anon_sym_ANYDATE,
  [anon_sym_ADATE] = anon_sym_ADATE,
  [anon_sym_THEDATE] = anon_sym_THEDATE,
  [anon_sym_January] = anon_sym_January,
  [anon_sym_February] = anon_sym_February,
  [anon_sym_March] = anon_sym_March,
  [anon_sym_April] = anon_sym_April,
  [anon_sym_May] = anon_sym_May,
  [anon_sym_June] = anon_sym_June,
  [anon_sym_July] = anon_sym_July,
  [anon_sym_August] = anon_sym_August,
  [anon_sym_September] = anon_sym_September,
  [anon_sym_October] = anon_sym_October,
  [anon_sym_November] = anon_sym_November,
  [anon_sym_December] = anon_sym_December,
  [anon_sym_POUNDS] = anon_sym_POUNDS,
  [anon_sym_DOLLARS] = anon_sym_DOLLARS,
  [anon_sym_EUROS] = anon_sym_EUROS,
  [anon_sym_FRANCS] = anon_sym_FRANCS,
  [anon_sym_AMOUNT] = anon_sym_AMOUNT,
  [anon_sym_SOMECURRENCY] = anon_sym_SOMECURRENCY,
  [anon_sym_REPORT] = anon_sym_REPORT,
  [anon_sym_NAMEDOBJECT] = anon_sym_NAMEDOBJECT,
  [anon_sym_OTHEROBJECT] = anon_sym_OTHEROBJECT,
  [sym_string] = sym_string,
  [sym_num] = sym_num,
  [anon_sym_Must] = anon_sym_Must,
  [anon_sym_HaveTo] = anon_sym_HaveTo,
  [anon_sym_NeedTo] = anon_sym_NeedTo,
  [anon_sym_Should] = anon_sym_Should,
  [anon_sym_OughtTo] = anon_sym_OughtTo,
  [anon_sym_Can] = anon_sym_Can,
  [anon_sym_May2] = anon_sym_May2,
  [anon_sym_Could] = anon_sym_Could,
  [anon_sym_Might] = anon_sym_Might,
  [anon_sym_MustNot] = anon_sym_MustNot,
  [anon_sym_Cannot] = anon_sym_Cannot,
  [anon_sym_MayNot] = anon_sym_MayNot,
  [anon_sym_ShouldNot] = anon_sym_ShouldNot,
  [sym_contract] = sym_contract,
  [sym_component] = sym_component,
  [sym_definition] = sym_definition,
  [sym_simple_definition] = sym_simple_definition,
  [sym_numerical_expression] = sym_numerical_expression,
  [sym_operator] = sym_operator,
  [sym_conditional_definition] = sym_conditional_definition,
  [sym_statement] = sym_statement,
  [sym_conditional_statement] = sym_conditional_statement,
  [sym_simple_statement] = sym_simple_statement,
  [sym_condition] = sym_condition,
  [sym_simple_condition] = sym_simple_condition,
  [sym_identity] = sym_identity,
  [sym_holds] = sym_holds,
  [sym_subject] = sym_subject,
  [sym_verb] = sym_verb,
  [sym_verb_status] = sym_verb_status,
  [sym_modal_verb] = sym_modal_verb,
  [sym_date] = sym_date,
  [sym_month] = sym_month,
  [sym_object] = sym_object,
  [sym_numerical_object] = sym_numerical_object,
  [sym_nonnumerical_object] = sym_nonnumerical_object,
  [sym_OBLIGATION] = sym_OBLIGATION,
  [sym_PERMISSION] = sym_PERMISSION,
  [sym_PROHIBITION] = sym_PROHIBITION,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_C_DASHAND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQUALS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MINUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TIMES] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DIVIDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_THEN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
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
  [anon_sym_it] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_the] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_that] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DELIVER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PAY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CHARGE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DELIVERED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PAID] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CHARGED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ANYDATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ADATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_THEDATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_January] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_February] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_March] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_April] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_May] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_June] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_July] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_August] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_September] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_October] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_November] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_December] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EUROS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FRANCS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMOUNT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SOMECURRENCY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REPORT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NAMEDOBJECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OTHEROBJECT] = {
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
  [anon_sym_Must] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HaveTo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NeedTo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Should] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OughtTo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Can] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_May2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Could] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Might] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MustNot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Cannot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MayNot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ShouldNot] = {
    .visible = true,
    .named = false,
  },
  [sym_contract] = {
    .visible = true,
    .named = true,
  },
  [sym_component] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_numerical_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_identity] = {
    .visible = true,
    .named = true,
  },
  [sym_holds] = {
    .visible = true,
    .named = true,
  },
  [sym_subject] = {
    .visible = true,
    .named = true,
  },
  [sym_verb] = {
    .visible = true,
    .named = true,
  },
  [sym_verb_status] = {
    .visible = true,
    .named = true,
  },
  [sym_modal_verb] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_month] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_numerical_object] = {
    .visible = true,
    .named = true,
  },
  [sym_nonnumerical_object] = {
    .visible = true,
    .named = true,
  },
  [sym_OBLIGATION] = {
    .visible = true,
    .named = true,
  },
  [sym_PERMISSION] = {
    .visible = true,
    .named = true,
  },
  [sym_PROHIBITION] = {
    .visible = true,
    .named = true,
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
  [13] = 12,
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
  [66] = 58,
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
  [96] = 80,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 3,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 4,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 71,
  [114] = 114,
  [115] = 72,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 118,
  [120] = 106,
  [121] = 100,
  [122] = 122,
  [123] = 122,
  [124] = 111,
  [125] = 98,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(266);
      ADVANCE_MAP(
        ' ', 2,
        '(', 280,
        ')', 281,
        'A', 33,
        'C', 8,
        'D', 46,
        'E', 116,
        'F', 129,
        'I', 71,
        'J', 163,
        'M', 78,
        'N', 13,
        'O', 118,
        'P', 14,
        'R', 47,
        'S', 54,
        'T', 74,
        '[', 278,
        ']', 279,
        'c', 162,
        'i', 237,
        'n', 220,
        'o', 210,
        't', 197,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        ' ', 2,
        '(', 280,
        ')', 281,
        'A', 33,
        'C', 8,
        'D', 46,
        'E', 116,
        'F', 129,
        'I', 71,
        'J', 163,
        'M', 78,
        'N', 13,
        'O', 118,
        'P', 14,
        'R', 47,
        'S', 54,
        'T', 74,
        '[', 278,
        ']', 279,
        'c', 162,
        'i', 237,
        'n', 220,
        'o', 210,
        't', 197,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        ' ', 2,
        '(', 280,
        ')', 281,
        'A', 33,
        'C', 9,
        'D', 46,
        'E', 116,
        'F', 129,
        'H', 167,
        'I', 71,
        'J', 163,
        'M', 77,
        'N', 12,
        'O', 119,
        'P', 14,
        'R', 47,
        'S', 55,
        'T', 74,
        '[', 278,
        ']', 279,
        'c', 162,
        'i', 237,
        'n', 220,
        'o', 210,
        't', 197,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        ' ', 4,
        'A', 104,
        'C', 10,
        'D', 70,
        'E', 115,
        'I', 71,
        'M', 80,
        'O', 117,
        'P', 19,
        'S', 62,
        'T', 76,
        'o', 210,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(3);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        ' ', 4,
        'A', 104,
        'C', 11,
        'D', 70,
        'E', 115,
        'H', 167,
        'I', 71,
        'M', 79,
        'N', 182,
        'O', 120,
        'P', 19,
        'S', 63,
        'T', 76,
        'o', 210,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(3);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(145);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(146);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(147);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == 'H') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == 'H') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(212);
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == 'H') ADVANCE(24);
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == 'H') ADVANCE(24);
      if (lookahead == 'a') ADVANCE(212);
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == 'o') ADVANCE(259);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(259);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(83);
      if (lookahead == 'L') ADVANCE(151);
      if (lookahead == 'O') ADVANCE(156);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(148);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        'A', 226,
        'D', 179,
        'F', 180,
        'J', 163,
        'M', 161,
        'N', 214,
        'O', 173,
        'S', 181,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(121);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(100);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(82);
      if (lookahead == 'L') ADVANCE(151);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(91);
      END_STATE();
    case 21:
      if (lookahead == 'A') ADVANCE(126);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(97);
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(149);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(128);
      END_STATE();
    case 25:
      if (lookahead == 'A') ADVANCE(150);
      END_STATE();
    case 26:
      if (lookahead == 'B') ADVANCE(86);
      END_STATE();
    case 27:
      if (lookahead == 'B') ADVANCE(87);
      END_STATE();
    case 28:
      if (lookahead == 'C') ADVANCE(160);
      END_STATE();
    case 29:
      if (lookahead == 'C') ADVANCE(155);
      END_STATE();
    case 30:
      if (lookahead == 'C') ADVANCE(137);
      END_STATE();
    case 31:
      if (lookahead == 'C') ADVANCE(143);
      END_STATE();
    case 32:
      if (lookahead == 'C') ADVANCE(144);
      END_STATE();
    case 33:
      if (lookahead == 'D') ADVANCE(15);
      if (lookahead == 'M') ADVANCE(112);
      if (lookahead == 'N') ADVANCE(35);
      if (lookahead == 'p') ADVANCE(228);
      if (lookahead == 'u') ADVANCE(195);
      END_STATE();
    case 34:
      if (lookahead == 'D') ADVANCE(268);
      END_STATE();
    case 35:
      if (lookahead == 'D') ADVANCE(268);
      if (lookahead == 'Y') ADVANCE(44);
      END_STATE();
    case 36:
      if (lookahead == 'D') ADVANCE(294);
      END_STATE();
    case 37:
      if (lookahead == 'D') ADVANCE(292);
      if (lookahead == 'T') ADVANCE(296);
      END_STATE();
    case 38:
      if (lookahead == 'D') ADVANCE(267);
      END_STATE();
    case 39:
      if (lookahead == 'D') ADVANCE(295);
      END_STATE();
    case 40:
      if (lookahead == 'D') ADVANCE(293);
      END_STATE();
    case 41:
      if (lookahead == 'D') ADVANCE(109);
      END_STATE();
    case 42:
      if (lookahead == 'D') ADVANCE(138);
      END_STATE();
    case 43:
      if (lookahead == 'D') ADVANCE(51);
      END_STATE();
    case 44:
      if (lookahead == 'D') ADVANCE(23);
      END_STATE();
    case 45:
      if (lookahead == 'D') ADVANCE(25);
      if (lookahead == 'N') ADVANCE(276);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(88);
      if (lookahead == 'I') ADVANCE(157);
      if (lookahead == 'O') ADVANCE(89);
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(114);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(45);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(300);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(291);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(274);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(299);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(301);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(96);
      if (lookahead == 'O') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(96);
      if (lookahead == 'O') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead == 'h') ADVANCE(225);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(29);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(31);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(135);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(122);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(41);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(102);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(105);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(105);
      if (lookahead == 'h') ADVANCE(225);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(39);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(130);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(98);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(40);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(131);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(32);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(92);
      if (lookahead == 'I') ADVANCE(157);
      END_STATE();
    case 71:
      if (lookahead == 'F') ADVANCE(275);
      if (lookahead == 'S') ADVANCE(269);
      END_STATE();
    case 72:
      if (lookahead == 'G') ADVANCE(50);
      END_STATE();
    case 73:
      if (lookahead == 'G') ADVANCE(64);
      END_STATE();
    case 74:
      if (lookahead == 'H') ADVANCE(48);
      if (lookahead == 'I') ADVANCE(95);
      END_STATE();
    case 75:
      if (lookahead == 'H') ADVANCE(68);
      END_STATE();
    case 76:
      if (lookahead == 'H') ADVANCE(66);
      if (lookahead == 'I') ADVANCE(95);
      END_STATE();
    case 77:
      if (lookahead == 'I') ADVANCE(101);
      if (lookahead == 'a') ADVANCE(233);
      if (lookahead == 'i') ADVANCE(194);
      if (lookahead == 'u') ADVANCE(238);
      END_STATE();
    case 78:
      if (lookahead == 'I') ADVANCE(101);
      if (lookahead == 'a') ADVANCE(233);
      if (lookahead == 'u') ADVANCE(238);
      END_STATE();
    case 79:
      if (lookahead == 'I') ADVANCE(101);
      if (lookahead == 'a') ADVANCE(263);
      if (lookahead == 'i') ADVANCE(194);
      if (lookahead == 'u') ADVANCE(238);
      END_STATE();
    case 80:
      if (lookahead == 'I') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(238);
      END_STATE();
    case 81:
      if (lookahead == 'I') ADVANCE(158);
      END_STATE();
    case 82:
      if (lookahead == 'I') ADVANCE(36);
      END_STATE();
    case 83:
      if (lookahead == 'I') ADVANCE(36);
      if (lookahead == 'Y') ADVANCE(290);
      END_STATE();
    case 84:
      if (lookahead == 'I') ADVANCE(43);
      END_STATE();
    case 85:
      if (lookahead == 'I') ADVANCE(159);
      END_STATE();
    case 86:
      if (lookahead == 'J') ADVANCE(57);
      END_STATE();
    case 87:
      if (lookahead == 'J') ADVANCE(69);
      END_STATE();
    case 88:
      if (lookahead == 'L') ADVANCE(81);
      END_STATE();
    case 89:
      if (lookahead == 'L') ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == 'L') ADVANCE(21);
      END_STATE();
    case 91:
      if (lookahead == 'L') ADVANCE(136);
      END_STATE();
    case 92:
      if (lookahead == 'L') ADVANCE(85);
      END_STATE();
    case 93:
      if (lookahead == 'M') ADVANCE(60);
      END_STATE();
    case 94:
      if (lookahead == 'M') ADVANCE(56);
      END_STATE();
    case 95:
      if (lookahead == 'M') ADVANCE(58);
      END_STATE();
    case 96:
      if (lookahead == 'N') ADVANCE(37);
      END_STATE();
    case 97:
      if (lookahead == 'N') ADVANCE(30);
      END_STATE();
    case 98:
      if (lookahead == 'N') ADVANCE(276);
      END_STATE();
    case 99:
      if (lookahead == 'N') ADVANCE(141);
      END_STATE();
    case 100:
      if (lookahead == 'N') ADVANCE(38);
      END_STATE();
    case 101:
      if (lookahead == 'N') ADVANCE(152);
      END_STATE();
    case 102:
      if (lookahead == 'N') ADVANCE(28);
      END_STATE();
    case 103:
      if (lookahead == 'N') ADVANCE(42);
      END_STATE();
    case 104:
      if (lookahead == 'N') ADVANCE(34);
      END_STATE();
    case 105:
      if (lookahead == 'N') ADVANCE(140);
      END_STATE();
    case 106:
      if (lookahead == 'N') ADVANCE(222);
      END_STATE();
    case 107:
      if (lookahead == 'N') ADVANCE(223);
      END_STATE();
    case 108:
      if (lookahead == 'N') ADVANCE(224);
      END_STATE();
    case 109:
      if (lookahead == 'O') ADVANCE(26);
      END_STATE();
    case 110:
      if (lookahead == 'O') ADVANCE(133);
      END_STATE();
    case 111:
      if (lookahead == 'O') ADVANCE(124);
      END_STATE();
    case 112:
      if (lookahead == 'O') ADVANCE(154);
      END_STATE();
    case 113:
      if (lookahead == 'O') ADVANCE(27);
      END_STATE();
    case 114:
      if (lookahead == 'P') ADVANCE(111);
      END_STATE();
    case 115:
      if (lookahead == 'Q') ADVANCE(153);
      END_STATE();
    case 116:
      if (lookahead == 'Q') ADVANCE(153);
      if (lookahead == 'U') ADVANCE(123);
      END_STATE();
    case 117:
      if (lookahead == 'R') ADVANCE(277);
      END_STATE();
    case 118:
      if (lookahead == 'R') ADVANCE(277);
      if (lookahead == 'T') ADVANCE(75);
      if (lookahead == 'c') ADVANCE(250);
      END_STATE();
    case 119:
      if (lookahead == 'R') ADVANCE(277);
      if (lookahead == 'T') ADVANCE(75);
      if (lookahead == 'c') ADVANCE(250);
      if (lookahead == 'u') ADVANCE(196);
      END_STATE();
    case 120:
      if (lookahead == 'R') ADVANCE(277);
      if (lookahead == 'u') ADVANCE(196);
      END_STATE();
    case 121:
      if (lookahead == 'R') ADVANCE(72);
      END_STATE();
    case 122:
      if (lookahead == 'R') ADVANCE(289);
      END_STATE();
    case 123:
      if (lookahead == 'R') ADVANCE(110);
      END_STATE();
    case 124:
      if (lookahead == 'R') ADVANCE(142);
      END_STATE();
    case 125:
      if (lookahead == 'R') ADVANCE(127);
      END_STATE();
    case 126:
      if (lookahead == 'R') ADVANCE(139);
      END_STATE();
    case 127:
      if (lookahead == 'R') ADVANCE(61);
      END_STATE();
    case 128:
      if (lookahead == 'R') ADVANCE(73);
      END_STATE();
    case 129:
      if (lookahead == 'R') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 130:
      if (lookahead == 'R') ADVANCE(67);
      END_STATE();
    case 131:
      if (lookahead == 'R') ADVANCE(113);
      END_STATE();
    case 132:
      if (lookahead == 'S') ADVANCE(271);
      END_STATE();
    case 133:
      if (lookahead == 'S') ADVANCE(316);
      END_STATE();
    case 134:
      if (lookahead == 'S') ADVANCE(272);
      END_STATE();
    case 135:
      if (lookahead == 'S') ADVANCE(273);
      END_STATE();
    case 136:
      if (lookahead == 'S') ADVANCE(270);
      END_STATE();
    case 137:
      if (lookahead == 'S') ADVANCE(317);
      END_STATE();
    case 138:
      if (lookahead == 'S') ADVANCE(314);
      END_STATE();
    case 139:
      if (lookahead == 'S') ADVANCE(315);
      END_STATE();
    case 140:
      if (lookahead == 'T') ADVANCE(296);
      END_STATE();
    case 141:
      if (lookahead == 'T') ADVANCE(318);
      END_STATE();
    case 142:
      if (lookahead == 'T') ADVANCE(320);
      END_STATE();
    case 143:
      if (lookahead == 'T') ADVANCE(321);
      END_STATE();
    case 144:
      if (lookahead == 'T') ADVANCE(322);
      END_STATE();
    case 145:
      if (lookahead == 'T') ADVANCE(215);
      END_STATE();
    case 146:
      if (lookahead == 'T') ADVANCE(216);
      END_STATE();
    case 147:
      if (lookahead == 'T') ADVANCE(217);
      END_STATE();
    case 148:
      if (lookahead == 'T') ADVANCE(49);
      END_STATE();
    case 149:
      if (lookahead == 'T') ADVANCE(52);
      END_STATE();
    case 150:
      if (lookahead == 'T') ADVANCE(53);
      END_STATE();
    case 151:
      if (lookahead == 'U') ADVANCE(132);
      END_STATE();
    case 152:
      if (lookahead == 'U') ADVANCE(134);
      END_STATE();
    case 153:
      if (lookahead == 'U') ADVANCE(20);
      END_STATE();
    case 154:
      if (lookahead == 'U') ADVANCE(99);
      END_STATE();
    case 155:
      if (lookahead == 'U') ADVANCE(125);
      END_STATE();
    case 156:
      if (lookahead == 'U') ADVANCE(103);
      END_STATE();
    case 157:
      if (lookahead == 'V') ADVANCE(84);
      END_STATE();
    case 158:
      if (lookahead == 'V') ADVANCE(59);
      END_STATE();
    case 159:
      if (lookahead == 'V') ADVANCE(65);
      END_STATE();
    case 160:
      if (lookahead == 'Y') ADVANCE(319);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(233);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'u') ADVANCE(203);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(234);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(235);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(243);
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(258);
      END_STATE();
    case 168:
      if (lookahead == 'b') ADVANCE(236);
      END_STATE();
    case 169:
      if (lookahead == 'b') ADVANCE(188);
      END_STATE();
    case 170:
      if (lookahead == 'b') ADVANCE(189);
      END_STATE();
    case 171:
      if (lookahead == 'b') ADVANCE(190);
      END_STATE();
    case 172:
      if (lookahead == 'b') ADVANCE(191);
      END_STATE();
    case 173:
      if (lookahead == 'c') ADVANCE(250);
      END_STATE();
    case 174:
      if (lookahead == 'c') ADVANCE(184);
      END_STATE();
    case 175:
      if (lookahead == 'c') ADVANCE(198);
      END_STATE();
    case 176:
      if (lookahead == 'd') ADVANCE(335);
      END_STATE();
    case 177:
      if (lookahead == 'd') ADVANCE(330);
      END_STATE();
    case 178:
      if (lookahead == 'd') ADVANCE(6);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 194:
      if (lookahead == 'g') ADVANCE(199);
      END_STATE();
    case 195:
      if (lookahead == 'g') ADVANCE(255);
      END_STATE();
    case 196:
      if (lookahead == 'g') ADVANCE(200);
      END_STATE();
    case 197:
      if (lookahead == 'h') ADVANCE(166);
      END_STATE();
    case 198:
      if (lookahead == 'h') ADVANCE(304);
      END_STATE();
    case 199:
      if (lookahead == 'h') ADVANCE(244);
      END_STATE();
    case 200:
      if (lookahead == 'h') ADVANCE(251);
      END_STATE();
    case 201:
      if (lookahead == 'i') ADVANCE(324);
      if (lookahead == 'o') ADVANCE(323);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 202:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 203:
      if (lookahead == 'l') ADVANCE(260);
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 204:
      if (lookahead == 'l') ADVANCE(305);
      END_STATE();
    case 205:
      if (lookahead == 'l') ADVANCE(176);
      END_STATE();
    case 206:
      if (lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 207:
      if (lookahead == 'm') ADVANCE(170);
      END_STATE();
    case 208:
      if (lookahead == 'm') ADVANCE(171);
      END_STATE();
    case 209:
      if (lookahead == 'm') ADVANCE(172);
      END_STATE();
    case 210:
      if (lookahead == 'n') ADVANCE(297);
      END_STATE();
    case 211:
      if (lookahead == 'n') ADVANCE(332);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(333);
      END_STATE();
    case 213:
      if (lookahead == 'n') ADVANCE(254);
      END_STATE();
    case 214:
      if (lookahead == 'o') ADVANCE(259);
      END_STATE();
    case 215:
      if (lookahead == 'o') ADVANCE(328);
      END_STATE();
    case 216:
      if (lookahead == 'o') ADVANCE(329);
      END_STATE();
    case 217:
      if (lookahead == 'o') ADVANCE(331);
      END_STATE();
    case 218:
      if (lookahead == 'o') ADVANCE(323);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 219:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 220:
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 221:
      if (lookahead == 'o') ADVANCE(246);
      END_STATE();
    case 222:
      if (lookahead == 'o') ADVANCE(247);
      END_STATE();
    case 223:
      if (lookahead == 'o') ADVANCE(248);
      END_STATE();
    case 224:
      if (lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 225:
      if (lookahead == 'o') ADVANCE(256);
      END_STATE();
    case 226:
      if (lookahead == 'p') ADVANCE(228);
      if (lookahead == 'u') ADVANCE(195);
      END_STATE();
    case 227:
      if (lookahead == 'p') ADVANCE(252);
      END_STATE();
    case 228:
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 229:
      if (lookahead == 'r') ADVANCE(311);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(313);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(312);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(310);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(175);
      if (lookahead == 'y') ADVANCE(306);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(261);
      END_STATE();
    case 235:
      if (lookahead == 'r') ADVANCE(262);
      END_STATE();
    case 236:
      if (lookahead == 'r') ADVANCE(257);
      END_STATE();
    case 237:
      if (lookahead == 's') ADVANCE(284);
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 238:
      if (lookahead == 's') ADVANCE(242);
      END_STATE();
    case 239:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 240:
      if (lookahead == 's') ADVANCE(245);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(327);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(287);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(309);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(338);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(337);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(340);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(339);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 253:
      if (lookahead == 'u') ADVANCE(205);
      END_STATE();
    case 254:
      if (lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 255:
      if (lookahead == 'u') ADVANCE(240);
      END_STATE();
    case 256:
      if (lookahead == 'u') ADVANCE(206);
      END_STATE();
    case 257:
      if (lookahead == 'u') ADVANCE(165);
      END_STATE();
    case 258:
      if (lookahead == 'v') ADVANCE(187);
      END_STATE();
    case 259:
      if (lookahead == 'v') ADVANCE(192);
      END_STATE();
    case 260:
      if (lookahead == 'y') ADVANCE(308);
      END_STATE();
    case 261:
      if (lookahead == 'y') ADVANCE(302);
      END_STATE();
    case 262:
      if (lookahead == 'y') ADVANCE(303);
      END_STATE();
    case 263:
      if (lookahead == 'y') ADVANCE(334);
      END_STATE();
    case 264:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 265:
      if (eof) ADVANCE(266);
      ADVANCE_MAP(
        ' ', 4,
        'A', 104,
        'C', 10,
        'D', 70,
        'E', 115,
        'I', 71,
        'M', 80,
        'O', 117,
        'P', 19,
        'S', 62,
        'T', 76,
        'o', 210,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_C_DASHAND);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_IS);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_EQUALS);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_MINUS);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_TIMES);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_DIVIDE);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_THEN);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_it);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_it);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_the);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_that);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_DELIVER);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_PAY);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_CHARGE);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_SEND);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_DELIVERED);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_PAID);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_CHARGED);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_SENT);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_on);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_ANYDATE);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_ADATE);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_THEDATE);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_January);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_February);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_March);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_April);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_May);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_June);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_July);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_August);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_September);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_October);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_November);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_December);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_POUNDS);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_DOLLARS);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_EUROS);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_FRANCS);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_AMOUNT);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_SOMECURRENCY);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_REPORT);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_NAMEDOBJECT);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_OTHEROBJECT);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(283);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_string);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_Must);
      if (lookahead == ' ') ADVANCE(106);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_HaveTo);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_NeedTo);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_Should);
      if (lookahead == ' ') ADVANCE(107);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_OughtTo);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_Can);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_Can);
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_May2);
      if (lookahead == ' ') ADVANCE(108);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_Could);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_Might);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_MustNot);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_Cannot);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_MayNot);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_ShouldNot);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 265},
  [3] = {.lex_state = 265},
  [4] = {.lex_state = 265},
  [5] = {.lex_state = 265},
  [6] = {.lex_state = 265},
  [7] = {.lex_state = 265},
  [8] = {.lex_state = 265},
  [9] = {.lex_state = 265},
  [10] = {.lex_state = 265},
  [11] = {.lex_state = 265},
  [12] = {.lex_state = 16},
  [13] = {.lex_state = 16},
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
  [29] = {.lex_state = 265},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 265},
  [33] = {.lex_state = 201},
  [34] = {.lex_state = 201},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 201},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 265},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 265},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 218},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 218},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 201},
  [72] = {.lex_state = 201},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 264},
  [78] = {.lex_state = 264},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 264},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 218},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 264},
  [93] = {.lex_state = 264},
  [94] = {.lex_state = 218},
  [95] = {.lex_state = 264},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 264},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 264},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 264},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 264},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 264},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 264},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_C_DASHAND] = ACTIONS(1),
    [anon_sym_AND] = ACTIONS(1),
    [anon_sym_IS] = ACTIONS(1),
    [anon_sym_EQUALS] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_MINUS] = ACTIONS(1),
    [anon_sym_TIMES] = ACTIONS(1),
    [anon_sym_DIVIDE] = ACTIONS(1),
    [anon_sym_IF] = ACTIONS(1),
    [anon_sym_THEN] = ACTIONS(1),
    [anon_sym_OR] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_it] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_the] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_that] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_DELIVER] = ACTIONS(1),
    [anon_sym_PAY] = ACTIONS(1),
    [anon_sym_CHARGE] = ACTIONS(1),
    [anon_sym_SEND] = ACTIONS(1),
    [anon_sym_PAID] = ACTIONS(1),
    [anon_sym_SENT] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_ANYDATE] = ACTIONS(1),
    [anon_sym_ADATE] = ACTIONS(1),
    [anon_sym_THEDATE] = ACTIONS(1),
    [anon_sym_January] = ACTIONS(1),
    [anon_sym_February] = ACTIONS(1),
    [anon_sym_March] = ACTIONS(1),
    [anon_sym_April] = ACTIONS(1),
    [anon_sym_May] = ACTIONS(1),
    [anon_sym_June] = ACTIONS(1),
    [anon_sym_July] = ACTIONS(1),
    [anon_sym_August] = ACTIONS(1),
    [anon_sym_September] = ACTIONS(1),
    [anon_sym_October] = ACTIONS(1),
    [anon_sym_November] = ACTIONS(1),
    [anon_sym_December] = ACTIONS(1),
    [anon_sym_POUNDS] = ACTIONS(1),
    [anon_sym_DOLLARS] = ACTIONS(1),
    [anon_sym_EUROS] = ACTIONS(1),
    [anon_sym_FRANCS] = ACTIONS(1),
    [anon_sym_AMOUNT] = ACTIONS(1),
    [anon_sym_SOMECURRENCY] = ACTIONS(1),
    [anon_sym_REPORT] = ACTIONS(1),
    [anon_sym_NAMEDOBJECT] = ACTIONS(1),
    [anon_sym_OTHEROBJECT] = ACTIONS(1),
    [sym_num] = ACTIONS(1),
    [anon_sym_Must] = ACTIONS(1),
    [anon_sym_HaveTo] = ACTIONS(1),
    [anon_sym_NeedTo] = ACTIONS(1),
    [anon_sym_Should] = ACTIONS(1),
    [anon_sym_OughtTo] = ACTIONS(1),
    [anon_sym_Can] = ACTIONS(1),
    [anon_sym_May2] = ACTIONS(1),
    [anon_sym_Could] = ACTIONS(1),
    [anon_sym_Might] = ACTIONS(1),
    [anon_sym_MustNot] = ACTIONS(1),
    [anon_sym_Cannot] = ACTIONS(1),
    [anon_sym_ShouldNot] = ACTIONS(1),
  },
  [1] = {
    [sym_contract] = STATE(110),
    [sym_component] = STATE(90),
    [sym_definition] = STATE(73),
    [sym_simple_definition] = STATE(50),
    [sym_conditional_definition] = STATE(83),
    [sym_statement] = STATE(69),
    [sym_conditional_statement] = STATE(83),
    [sym_simple_statement] = STATE(44),
    [sym_identity] = STATE(34),
    [anon_sym_IF] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(9), 4,
      anon_sym_Must,
      anon_sym_Should,
      anon_sym_Can,
      anon_sym_May2,
    ACTIONS(7), 26,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IS,
      anon_sym_EQUALS,
      anon_sym_PLUS,
      anon_sym_MINUS,
      anon_sym_TIMES,
      anon_sym_DIVIDE,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_OR,
      anon_sym_DELIVERED,
      anon_sym_PAID,
      anon_sym_CHARGED,
      anon_sym_SENT,
      anon_sym_on,
      anon_sym_HaveTo,
      anon_sym_NeedTo,
      anon_sym_OughtTo,
      anon_sym_Could,
      anon_sym_Might,
      anon_sym_MustNot,
      anon_sym_Cannot,
      anon_sym_MayNot,
      anon_sym_ShouldNot,
  [35] = 2,
    ACTIONS(13), 4,
      anon_sym_Must,
      anon_sym_Should,
      anon_sym_Can,
      anon_sym_May2,
    ACTIONS(11), 19,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_OR,
      anon_sym_DELIVERED,
      anon_sym_PAID,
      anon_sym_CHARGED,
      anon_sym_SENT,
      anon_sym_HaveTo,
      anon_sym_NeedTo,
      anon_sym_OughtTo,
      anon_sym_Could,
      anon_sym_Might,
      anon_sym_MustNot,
      anon_sym_Cannot,
      anon_sym_MayNot,
      anon_sym_ShouldNot,
  [63] = 2,
    ACTIONS(17), 4,
      anon_sym_Must,
      anon_sym_Should,
      anon_sym_Can,
      anon_sym_May2,
    ACTIONS(15), 19,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_OR,
      anon_sym_DELIVERED,
      anon_sym_PAID,
      anon_sym_CHARGED,
      anon_sym_SENT,
      anon_sym_HaveTo,
      anon_sym_NeedTo,
      anon_sym_OughtTo,
      anon_sym_Could,
      anon_sym_Might,
      anon_sym_MustNot,
      anon_sym_Cannot,
      anon_sym_MayNot,
      anon_sym_ShouldNot,
  [91] = 9,
    STATE(16), 1,
      sym_verb_status,
    STATE(40), 1,
      sym_modal_verb,
    ACTIONS(21), 2,
      anon_sym_Must,
      anon_sym_Should,
    ACTIONS(25), 2,
      anon_sym_Can,
      anon_sym_May2,
    ACTIONS(27), 2,
      anon_sym_Could,
      anon_sym_Might,
    ACTIONS(23), 3,
      anon_sym_HaveTo,
      anon_sym_NeedTo,
      anon_sym_OughtTo,
    STATE(52), 3,
      sym_OBLIGATION,
      sym_PERMISSION,
      sym_PROHIBITION,
    ACTIONS(19), 4,
      anon_sym_DELIVERED,
      anon_sym_PAID,
      anon_sym_CHARGED,
      anon_sym_SENT,
    ACTIONS(29), 4,
      anon_sym_MustNot,
      anon_sym_Cannot,
      anon_sym_MayNot,
      anon_sym_ShouldNot,
  [132] = 9,
    STATE(18), 1,
      sym_verb_status,
    STATE(43), 1,
      sym_modal_verb,
    ACTIONS(21), 2,
      anon_sym_Must,
      anon_sym_Should,
    ACTIONS(25), 2,
      anon_sym_Can,
      anon_sym_May2,
    ACTIONS(27), 2,
      anon_sym_Could,
      anon_sym_Might,
    ACTIONS(23), 3,
      anon_sym_HaveTo,
      anon_sym_NeedTo,
      anon_sym_OughtTo,
    STATE(52), 3,
      sym_OBLIGATION,
      sym_PERMISSION,
      sym_PROHIBITION,
    ACTIONS(19), 4,
      anon_sym_DELIVERED,
      anon_sym_PAID,
      anon_sym_CHARGED,
      anon_sym_SENT,
    ACTIONS(29), 4,
      anon_sym_MustNot,
      anon_sym_Cannot,
      anon_sym_MayNot,
      anon_sym_ShouldNot,
  [173] = 11,
    ACTIONS(31), 1,
      anon_sym_IS,
    ACTIONS(33), 1,
      anon_sym_EQUALS,
    ACTIONS(35), 1,
      anon_sym_on,
    STATE(11), 1,
      sym_date,
    STATE(41), 1,
      sym_modal_verb,
    ACTIONS(21), 2,
      anon_sym_Must,
      anon_sym_Should,
    ACTIONS(25), 2,
      anon_sym_Can,
      anon_sym_May2,
    ACTIONS(27), 2,
      anon_sym_Could,
      anon_sym_Might,
    ACTIONS(23), 3,
      anon_sym_HaveTo,
      anon_sym_NeedTo,
      anon_sym_OughtTo,
    STATE(52), 3,
      sym_OBLIGATION,
      sym_PERMISSION,
      sym_PROHIBITION,
    ACTIONS(29), 4,
      anon_sym_MustNot,
      anon_sym_Cannot,
      anon_sym_MayNot,
      anon_sym_ShouldNot,
  [217] = 9,
    ACTIONS(35), 1,
      anon_sym_on,
    STATE(11), 1,
      sym_date,
    STATE(41), 1,
      sym_modal_verb,
    ACTIONS(21), 2,
      anon_sym_Must,
      anon_sym_Should,
    ACTIONS(25), 2,
      anon_sym_Can,
      anon_sym_May2,
    ACTIONS(27), 2,
      anon_sym_Could,
      anon_sym_Might,
    ACTIONS(23), 3,
      anon_sym_HaveTo,
      anon_sym_NeedTo,
      anon_sym_OughtTo,
    STATE(52), 3,
      sym_OBLIGATION,
      sym_PERMISSION,
      sym_PROHIBITION,
    ACTIONS(29), 4,
      anon_sym_MustNot,
      anon_sym_Cannot,
      anon_sym_MayNot,
      anon_sym_ShouldNot,
  [255] = 9,
    ACTIONS(35), 1,
      anon_sym_on,
    STATE(10), 1,
      sym_date,
    STATE(45), 1,
      sym_modal_verb,
    ACTIONS(21), 2,
      anon_sym_Must,
      anon_sym_Should,
    ACTIONS(25), 2,
      anon_sym_Can,
      anon_sym_May2,
    ACTIONS(27), 2,
      anon_sym_Could,
      anon_sym_Might,
    ACTIONS(23), 3,
      anon_sym_HaveTo,
      anon_sym_NeedTo,
      anon_sym_OughtTo,
    STATE(52), 3,
      sym_OBLIGATION,
      sym_PERMISSION,
      sym_PROHIBITION,
    ACTIONS(29), 4,
      anon_sym_MustNot,
      anon_sym_Cannot,
      anon_sym_MayNot,
      anon_sym_ShouldNot,
  [293] = 7,
    STATE(43), 1,
      sym_modal_verb,
    ACTIONS(21), 2,
      anon_sym_Must,
      anon_sym_Should,
    ACTIONS(25), 2,
      anon_sym_Can,
      anon_sym_May2,
    ACTIONS(27), 2,
      anon_sym_Could,
      anon_sym_Might,
    ACTIONS(23), 3,
      anon_sym_HaveTo,
      anon_sym_NeedTo,
      anon_sym_OughtTo,
    STATE(52), 3,
      sym_OBLIGATION,
      sym_PERMISSION,
      sym_PROHIBITION,
    ACTIONS(29), 4,
      anon_sym_MustNot,
      anon_sym_Cannot,
      anon_sym_MayNot,
      anon_sym_ShouldNot,
  [325] = 7,
    STATE(40), 1,
      sym_modal_verb,
    ACTIONS(21), 2,
      anon_sym_Must,
      anon_sym_Should,
    ACTIONS(25), 2,
      anon_sym_Can,
      anon_sym_May2,
    ACTIONS(27), 2,
      anon_sym_Could,
      anon_sym_Might,
    ACTIONS(23), 3,
      anon_sym_HaveTo,
      anon_sym_NeedTo,
      anon_sym_OughtTo,
    STATE(52), 3,
      sym_OBLIGATION,
      sym_PERMISSION,
      sym_PROHIBITION,
    ACTIONS(29), 4,
      anon_sym_MustNot,
      anon_sym_Cannot,
      anon_sym_MayNot,
      anon_sym_ShouldNot,
  [357] = 2,
    STATE(120), 1,
      sym_month,
    ACTIONS(37), 12,
      anon_sym_January,
      anon_sym_February,
      anon_sym_March,
      anon_sym_April,
      anon_sym_May,
      anon_sym_June,
      anon_sym_July,
      anon_sym_August,
      anon_sym_September,
      anon_sym_October,
      anon_sym_November,
      anon_sym_December,
  [375] = 2,
    STATE(106), 1,
      sym_month,
    ACTIONS(37), 12,
      anon_sym_January,
      anon_sym_February,
      anon_sym_March,
      anon_sym_April,
      anon_sym_May,
      anon_sym_June,
      anon_sym_July,
      anon_sym_August,
      anon_sym_September,
      anon_sym_October,
      anon_sym_November,
      anon_sym_December,
  [393] = 5,
    ACTIONS(41), 1,
      anon_sym_AMOUNT,
    STATE(49), 1,
      sym_object,
    STATE(30), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(39), 4,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_FRANCS,
    ACTIONS(43), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [416] = 5,
    ACTIONS(41), 1,
      anon_sym_AMOUNT,
    STATE(79), 1,
      sym_object,
    STATE(30), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(39), 4,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_FRANCS,
    ACTIONS(43), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [439] = 5,
    ACTIONS(41), 1,
      anon_sym_AMOUNT,
    STATE(84), 1,
      sym_object,
    STATE(30), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(39), 4,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_FRANCS,
    ACTIONS(43), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [462] = 5,
    ACTIONS(41), 1,
      anon_sym_AMOUNT,
    STATE(85), 1,
      sym_object,
    STATE(30), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(39), 4,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_FRANCS,
    ACTIONS(43), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [485] = 5,
    ACTIONS(41), 1,
      anon_sym_AMOUNT,
    STATE(89), 1,
      sym_object,
    STATE(30), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(39), 4,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_FRANCS,
    ACTIONS(43), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [508] = 5,
    ACTIONS(41), 1,
      anon_sym_AMOUNT,
    STATE(47), 1,
      sym_object,
    STATE(30), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(39), 4,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_FRANCS,
    ACTIONS(43), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [531] = 5,
    ACTIONS(41), 1,
      anon_sym_AMOUNT,
    STATE(48), 1,
      sym_object,
    STATE(30), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(39), 4,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_FRANCS,
    ACTIONS(43), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [554] = 5,
    ACTIONS(41), 1,
      anon_sym_AMOUNT,
    STATE(46), 1,
      sym_object,
    STATE(30), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(39), 4,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_FRANCS,
    ACTIONS(43), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [577] = 10,
    ACTIONS(3), 1,
      anon_sym_IF,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(34), 1,
      sym_identity,
    STATE(44), 1,
      sym_simple_statement,
    STATE(50), 1,
      sym_simple_definition,
    STATE(69), 1,
      sym_statement,
    STATE(73), 1,
      sym_definition,
    STATE(90), 1,
      sym_component,
    STATE(112), 1,
      sym_contract,
    STATE(83), 2,
      sym_conditional_definition,
      sym_conditional_statement,
  [609] = 1,
    ACTIONS(45), 11,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_PLUS,
      anon_sym_MINUS,
      anon_sym_TIMES,
      anon_sym_DIVIDE,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_OR,
      anon_sym_on,
  [623] = 1,
    ACTIONS(47), 9,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_FRANCS,
      anon_sym_AMOUNT,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [635] = 1,
    ACTIONS(49), 9,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_FRANCS,
      anon_sym_AMOUNT,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [647] = 3,
    STATE(28), 1,
      sym_operator,
    ACTIONS(51), 4,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
    ACTIONS(53), 4,
      anon_sym_PLUS,
      anon_sym_MINUS,
      anon_sym_TIMES,
      anon_sym_DIVIDE,
  [663] = 5,
    ACTIONS(41), 1,
      anon_sym_AMOUNT,
    ACTIONS(55), 1,
      sym_num,
    STATE(26), 1,
      sym_numerical_object,
    STATE(59), 1,
      sym_numerical_expression,
    ACTIONS(39), 4,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_FRANCS,
  [682] = 5,
    ACTIONS(41), 1,
      anon_sym_AMOUNT,
    ACTIONS(55), 1,
      sym_num,
    STATE(26), 1,
      sym_numerical_object,
    STATE(64), 1,
      sym_numerical_expression,
    ACTIONS(39), 4,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_FRANCS,
  [701] = 4,
    ACTIONS(35), 1,
      anon_sym_on,
    STATE(17), 1,
      sym_verb_status,
    STATE(39), 1,
      sym_date,
    ACTIONS(19), 4,
      anon_sym_DELIVERED,
      anon_sym_PAID,
      anon_sym_CHARGED,
      anon_sym_SENT,
  [717] = 1,
    ACTIONS(57), 7,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_OR,
      anon_sym_on,
  [727] = 1,
    ACTIONS(59), 7,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_OR,
      anon_sym_on,
  [737] = 4,
    ACTIONS(35), 1,
      anon_sym_on,
    STATE(15), 1,
      sym_verb_status,
    STATE(42), 1,
      sym_date,
    ACTIONS(19), 4,
      anon_sym_DELIVERED,
      anon_sym_PAID,
      anon_sym_CHARGED,
      anon_sym_SENT,
  [753] = 6,
    ACTIONS(61), 1,
      anon_sym_it,
    ACTIONS(63), 1,
      anon_sym_on,
    ACTIONS(65), 1,
      sym_string,
    STATE(8), 1,
      sym_subject,
    STATE(54), 1,
      sym_holds,
    STATE(95), 1,
      sym_date,
  [772] = 6,
    ACTIONS(61), 1,
      anon_sym_it,
    ACTIONS(63), 1,
      anon_sym_on,
    ACTIONS(65), 1,
      sym_string,
    STATE(7), 1,
      sym_subject,
    STATE(54), 1,
      sym_holds,
    STATE(95), 1,
      sym_date,
  [791] = 1,
    ACTIONS(67), 6,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_FRANCS,
      anon_sym_AMOUNT,
      sym_num,
  [800] = 6,
    ACTIONS(61), 1,
      anon_sym_it,
    ACTIONS(63), 1,
      anon_sym_on,
    ACTIONS(65), 1,
      sym_string,
    STATE(32), 1,
      sym_subject,
    STATE(62), 1,
      sym_holds,
    STATE(78), 1,
      sym_date,
  [819] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(34), 1,
      sym_identity,
    STATE(44), 1,
      sym_simple_statement,
    STATE(50), 1,
      sym_simple_definition,
    STATE(87), 1,
      sym_definition,
    STATE(91), 1,
      sym_statement,
  [838] = 2,
    ACTIONS(71), 2,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(69), 3,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_THEN,
  [848] = 2,
    STATE(19), 1,
      sym_verb_status,
    ACTIONS(19), 4,
      anon_sym_DELIVERED,
      anon_sym_PAID,
      anon_sym_CHARGED,
      anon_sym_SENT,
  [858] = 2,
    STATE(20), 1,
      sym_verb,
    ACTIONS(73), 4,
      anon_sym_DELIVER,
      anon_sym_PAY,
      anon_sym_CHARGE,
      anon_sym_SEND,
  [868] = 2,
    STATE(16), 1,
      sym_verb,
    ACTIONS(73), 4,
      anon_sym_DELIVER,
      anon_sym_PAY,
      anon_sym_CHARGE,
      anon_sym_SEND,
  [878] = 2,
    STATE(14), 1,
      sym_verb_status,
    ACTIONS(19), 4,
      anon_sym_DELIVERED,
      anon_sym_PAID,
      anon_sym_CHARGED,
      anon_sym_SENT,
  [888] = 2,
    STATE(21), 1,
      sym_verb,
    ACTIONS(73), 4,
      anon_sym_DELIVER,
      anon_sym_PAY,
      anon_sym_CHARGE,
      anon_sym_SEND,
  [898] = 2,
    ACTIONS(77), 2,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(75), 3,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
  [908] = 2,
    STATE(18), 1,
      sym_verb,
    ACTIONS(73), 4,
      anon_sym_DELIVER,
      anon_sym_PAY,
      anon_sym_CHARGE,
      anon_sym_SEND,
  [918] = 1,
    ACTIONS(79), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_OR,
  [926] = 1,
    ACTIONS(81), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_OR,
  [934] = 1,
    ACTIONS(83), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_OR,
  [942] = 1,
    ACTIONS(85), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_OR,
  [950] = 2,
    ACTIONS(89), 1,
      anon_sym_AND,
    ACTIONS(87), 3,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
  [959] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      sym_identity,
    STATE(38), 1,
      sym_simple_condition,
    STATE(117), 1,
      sym_condition,
  [972] = 1,
    ACTIONS(91), 4,
      anon_sym_DELIVER,
      anon_sym_PAY,
      anon_sym_CHARGE,
      anon_sym_SEND,
  [979] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      sym_identity,
    STATE(38), 1,
      sym_simple_condition,
    STATE(75), 1,
      sym_condition,
  [992] = 4,
    ACTIONS(63), 1,
      anon_sym_on,
    ACTIONS(65), 1,
      sym_string,
    STATE(9), 1,
      sym_subject,
    STATE(92), 1,
      sym_date,
  [1005] = 4,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    STATE(50), 1,
      sym_simple_definition,
    STATE(70), 1,
      sym_definition,
    STATE(81), 1,
      sym_identity,
  [1018] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      sym_identity,
    STATE(38), 1,
      sym_simple_condition,
    STATE(82), 1,
      sym_condition,
  [1031] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      sym_identity,
    STATE(44), 1,
      sym_simple_statement,
    STATE(74), 1,
      sym_statement,
  [1044] = 2,
    ACTIONS(95), 1,
      anon_sym_the,
    ACTIONS(97), 3,
      anon_sym_ANYDATE,
      anon_sym_ADATE,
      anon_sym_THEDATE,
  [1053] = 1,
    ACTIONS(99), 4,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
  [1060] = 1,
    ACTIONS(51), 4,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
  [1067] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      sym_identity,
    STATE(38), 1,
      sym_simple_condition,
    STATE(68), 1,
      sym_condition,
  [1080] = 4,
    ACTIONS(63), 1,
      anon_sym_on,
    ACTIONS(65), 1,
      sym_string,
    STATE(29), 1,
      sym_subject,
    STATE(77), 1,
      sym_date,
  [1093] = 1,
    ACTIONS(101), 4,
      anon_sym_DELIVER,
      anon_sym_PAY,
      anon_sym_CHARGE,
      anon_sym_SEND,
  [1100] = 1,
    ACTIONS(103), 4,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
  [1107] = 1,
    ACTIONS(105), 4,
      anon_sym_DELIVER,
      anon_sym_PAY,
      anon_sym_CHARGE,
      anon_sym_SEND,
  [1114] = 2,
    ACTIONS(107), 1,
      anon_sym_the,
    ACTIONS(109), 3,
      anon_sym_ANYDATE,
      anon_sym_ADATE,
      anon_sym_THEDATE,
  [1123] = 1,
    ACTIONS(111), 4,
      anon_sym_DELIVER,
      anon_sym_PAY,
      anon_sym_CHARGE,
      anon_sym_SEND,
  [1130] = 1,
    ACTIONS(113), 3,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_THEN,
  [1136] = 2,
    ACTIONS(117), 1,
      anon_sym_IF,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [1144] = 1,
    ACTIONS(119), 3,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
  [1150] = 1,
    ACTIONS(121), 3,
      anon_sym_it,
      anon_sym_on,
      sym_string,
  [1156] = 1,
    ACTIONS(123), 3,
      anon_sym_it,
      anon_sym_on,
      sym_string,
  [1162] = 2,
    ACTIONS(125), 1,
      anon_sym_IF,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [1170] = 1,
    ACTIONS(127), 3,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
  [1176] = 1,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [1181] = 2,
    ACTIONS(31), 1,
      anon_sym_IS,
    ACTIONS(33), 1,
      anon_sym_EQUALS,
  [1188] = 2,
    ACTIONS(131), 1,
      sym_string,
    STATE(39), 1,
      sym_subject,
  [1195] = 2,
    ACTIONS(131), 1,
      sym_string,
    STATE(42), 1,
      sym_subject,
  [1202] = 2,
    ACTIONS(35), 1,
      anon_sym_on,
    STATE(49), 1,
      sym_date,
  [1209] = 2,
    ACTIONS(133), 1,
      anon_sym_RBRACK,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
  [1216] = 2,
    ACTIONS(131), 1,
      sym_string,
    STATE(76), 1,
      sym_subject,
  [1223] = 1,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [1228] = 1,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [1233] = 2,
    ACTIONS(35), 1,
      anon_sym_on,
    STATE(48), 1,
      sym_date,
  [1240] = 2,
    ACTIONS(35), 1,
      anon_sym_on,
    STATE(47), 1,
      sym_date,
  [1247] = 2,
    ACTIONS(139), 1,
      anon_sym_the,
    ACTIONS(141), 1,
      anon_sym_not,
  [1254] = 1,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [1259] = 1,
    ACTIONS(145), 2,
      anon_sym_on,
      sym_string,
  [1264] = 2,
    ACTIONS(35), 1,
      anon_sym_on,
    STATE(46), 1,
      sym_date,
  [1271] = 2,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    ACTIONS(149), 1,
      anon_sym_C_DASHAND,
  [1278] = 1,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [1283] = 2,
    ACTIONS(131), 1,
      sym_string,
    STATE(6), 1,
      sym_subject,
  [1290] = 2,
    ACTIONS(131), 1,
      sym_string,
    STATE(59), 1,
      sym_subject,
  [1297] = 1,
    ACTIONS(153), 2,
      anon_sym_on,
      sym_string,
  [1302] = 2,
    ACTIONS(131), 1,
      sym_string,
    STATE(5), 1,
      sym_subject,
  [1309] = 2,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
  [1316] = 2,
    ACTIONS(131), 1,
      sym_string,
    STATE(23), 1,
      sym_subject,
  [1323] = 1,
    ACTIONS(159), 1,
      sym_num,
  [1327] = 1,
    ACTIONS(161), 1,
      anon_sym_that,
  [1331] = 1,
    ACTIONS(163), 1,
      sym_num,
  [1335] = 1,
    ACTIONS(11), 1,
      sym_string,
  [1339] = 1,
    ACTIONS(165), 1,
      anon_sym_case,
  [1343] = 1,
    ACTIONS(167), 1,
      sym_num,
  [1347] = 1,
    ACTIONS(169), 1,
      anon_sym_that,
  [1351] = 1,
    ACTIONS(15), 1,
      sym_string,
  [1355] = 1,
    ACTIONS(171), 1,
      sym_num,
  [1359] = 1,
    ACTIONS(173), 1,
      anon_sym_case,
  [1363] = 1,
    ACTIONS(175), 1,
      anon_sym_the,
  [1367] = 1,
    ACTIONS(177), 1,
      sym_string,
  [1371] = 1,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
  [1375] = 1,
    ACTIONS(181), 1,
      sym_num,
  [1379] = 1,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
  [1383] = 1,
    ACTIONS(185), 1,
      sym_string,
  [1387] = 1,
    ACTIONS(187), 1,
      anon_sym_is,
  [1391] = 1,
    ACTIONS(189), 1,
      sym_string,
  [1395] = 1,
    ACTIONS(191), 1,
      sym_num,
  [1399] = 1,
    ACTIONS(193), 1,
      anon_sym_THEN,
  [1403] = 1,
    ACTIONS(195), 1,
      anon_sym_RBRACK,
  [1407] = 1,
    ACTIONS(197), 1,
      anon_sym_RBRACK,
  [1411] = 1,
    ACTIONS(199), 1,
      sym_num,
  [1415] = 1,
    ACTIONS(201), 1,
      sym_num,
  [1419] = 1,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
  [1423] = 1,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
  [1427] = 1,
    ACTIONS(207), 1,
      sym_num,
  [1431] = 1,
    ACTIONS(209), 1,
      sym_num,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 63,
  [SMALL_STATE(5)] = 91,
  [SMALL_STATE(6)] = 132,
  [SMALL_STATE(7)] = 173,
  [SMALL_STATE(8)] = 217,
  [SMALL_STATE(9)] = 255,
  [SMALL_STATE(10)] = 293,
  [SMALL_STATE(11)] = 325,
  [SMALL_STATE(12)] = 357,
  [SMALL_STATE(13)] = 375,
  [SMALL_STATE(14)] = 393,
  [SMALL_STATE(15)] = 416,
  [SMALL_STATE(16)] = 439,
  [SMALL_STATE(17)] = 462,
  [SMALL_STATE(18)] = 485,
  [SMALL_STATE(19)] = 508,
  [SMALL_STATE(20)] = 531,
  [SMALL_STATE(21)] = 554,
  [SMALL_STATE(22)] = 577,
  [SMALL_STATE(23)] = 609,
  [SMALL_STATE(24)] = 623,
  [SMALL_STATE(25)] = 635,
  [SMALL_STATE(26)] = 647,
  [SMALL_STATE(27)] = 663,
  [SMALL_STATE(28)] = 682,
  [SMALL_STATE(29)] = 701,
  [SMALL_STATE(30)] = 717,
  [SMALL_STATE(31)] = 727,
  [SMALL_STATE(32)] = 737,
  [SMALL_STATE(33)] = 753,
  [SMALL_STATE(34)] = 772,
  [SMALL_STATE(35)] = 791,
  [SMALL_STATE(36)] = 800,
  [SMALL_STATE(37)] = 819,
  [SMALL_STATE(38)] = 838,
  [SMALL_STATE(39)] = 848,
  [SMALL_STATE(40)] = 858,
  [SMALL_STATE(41)] = 868,
  [SMALL_STATE(42)] = 878,
  [SMALL_STATE(43)] = 888,
  [SMALL_STATE(44)] = 898,
  [SMALL_STATE(45)] = 908,
  [SMALL_STATE(46)] = 918,
  [SMALL_STATE(47)] = 926,
  [SMALL_STATE(48)] = 934,
  [SMALL_STATE(49)] = 942,
  [SMALL_STATE(50)] = 950,
  [SMALL_STATE(51)] = 959,
  [SMALL_STATE(52)] = 972,
  [SMALL_STATE(53)] = 979,
  [SMALL_STATE(54)] = 992,
  [SMALL_STATE(55)] = 1005,
  [SMALL_STATE(56)] = 1018,
  [SMALL_STATE(57)] = 1031,
  [SMALL_STATE(58)] = 1044,
  [SMALL_STATE(59)] = 1053,
  [SMALL_STATE(60)] = 1060,
  [SMALL_STATE(61)] = 1067,
  [SMALL_STATE(62)] = 1080,
  [SMALL_STATE(63)] = 1093,
  [SMALL_STATE(64)] = 1100,
  [SMALL_STATE(65)] = 1107,
  [SMALL_STATE(66)] = 1114,
  [SMALL_STATE(67)] = 1123,
  [SMALL_STATE(68)] = 1130,
  [SMALL_STATE(69)] = 1136,
  [SMALL_STATE(70)] = 1144,
  [SMALL_STATE(71)] = 1150,
  [SMALL_STATE(72)] = 1156,
  [SMALL_STATE(73)] = 1162,
  [SMALL_STATE(74)] = 1170,
  [SMALL_STATE(75)] = 1176,
  [SMALL_STATE(76)] = 1181,
  [SMALL_STATE(77)] = 1188,
  [SMALL_STATE(78)] = 1195,
  [SMALL_STATE(79)] = 1202,
  [SMALL_STATE(80)] = 1209,
  [SMALL_STATE(81)] = 1216,
  [SMALL_STATE(82)] = 1223,
  [SMALL_STATE(83)] = 1228,
  [SMALL_STATE(84)] = 1233,
  [SMALL_STATE(85)] = 1240,
  [SMALL_STATE(86)] = 1247,
  [SMALL_STATE(87)] = 1254,
  [SMALL_STATE(88)] = 1259,
  [SMALL_STATE(89)] = 1264,
  [SMALL_STATE(90)] = 1271,
  [SMALL_STATE(91)] = 1278,
  [SMALL_STATE(92)] = 1283,
  [SMALL_STATE(93)] = 1290,
  [SMALL_STATE(94)] = 1297,
  [SMALL_STATE(95)] = 1302,
  [SMALL_STATE(96)] = 1309,
  [SMALL_STATE(97)] = 1316,
  [SMALL_STATE(98)] = 1323,
  [SMALL_STATE(99)] = 1327,
  [SMALL_STATE(100)] = 1331,
  [SMALL_STATE(101)] = 1335,
  [SMALL_STATE(102)] = 1339,
  [SMALL_STATE(103)] = 1343,
  [SMALL_STATE(104)] = 1347,
  [SMALL_STATE(105)] = 1351,
  [SMALL_STATE(106)] = 1355,
  [SMALL_STATE(107)] = 1359,
  [SMALL_STATE(108)] = 1363,
  [SMALL_STATE(109)] = 1367,
  [SMALL_STATE(110)] = 1371,
  [SMALL_STATE(111)] = 1375,
  [SMALL_STATE(112)] = 1379,
  [SMALL_STATE(113)] = 1383,
  [SMALL_STATE(114)] = 1387,
  [SMALL_STATE(115)] = 1391,
  [SMALL_STATE(116)] = 1395,
  [SMALL_STATE(117)] = 1399,
  [SMALL_STATE(118)] = 1403,
  [SMALL_STATE(119)] = 1407,
  [SMALL_STATE(120)] = 1411,
  [SMALL_STATE(121)] = 1415,
  [SMALL_STATE(122)] = 1419,
  [SMALL_STATE(123)] = 1423,
  [SMALL_STATE(124)] = 1427,
  [SMALL_STATE(125)] = 1431,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subject, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 2, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 2, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 5, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 5, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numerical_object, 2, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verb, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verb_status, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numerical_expression, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnumerical_object, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 7, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition, 6, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 6, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition, 5, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modal_verb, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_definition, 4, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_OBLIGATION, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numerical_expression, 3, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PERMISSION, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PROHIBITION, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identity, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identity, 6, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_definition, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_statement, 3, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_definition, 4, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_holds, 5, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_statement, 4, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_holds, 6, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_month, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [179] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity, 3, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity, 6, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
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
