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
#define STATE_COUNT 139
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 100
#define ALIAS_COUNT 0
#define TOKEN_COUNT 72
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
  anon_sym_DELIVERED = 25,
  anon_sym_PAID = 26,
  anon_sym_CHARGED = 27,
  anon_sym_LESS = 28,
  anon_sym_THAN = 29,
  anon_sym_EQUAL = 30,
  anon_sym_TO = 31,
  anon_sym_MORE = 32,
  anon_sym_on = 33,
  anon_sym_ANYDATE = 34,
  anon_sym_ADATE = 35,
  anon_sym_THEDATE = 36,
  anon_sym_January = 37,
  anon_sym_February = 38,
  anon_sym_March = 39,
  anon_sym_April = 40,
  anon_sym_May = 41,
  anon_sym_June = 42,
  anon_sym_July = 43,
  anon_sym_August = 44,
  anon_sym_September = 45,
  anon_sym_October = 46,
  anon_sym_November = 47,
  anon_sym_December = 48,
  anon_sym_POUNDS = 49,
  anon_sym_DOLLARS = 50,
  anon_sym_EUROS = 51,
  anon_sym_AMOUNT = 52,
  anon_sym_SOMECURRENCY = 53,
  anon_sym_REPORT = 54,
  anon_sym_NAMEDOBJECT = 55,
  anon_sym_OTHEROBJECT = 56,
  sym_string = 57,
  sym_num = 58,
  anon_sym_Must = 59,
  anon_sym_HaveTo = 60,
  anon_sym_NeedTo = 61,
  anon_sym_Should = 62,
  anon_sym_OughtTo = 63,
  anon_sym_Can = 64,
  anon_sym_May2 = 65,
  anon_sym_Could = 66,
  anon_sym_Might = 67,
  anon_sym_MustNot = 68,
  anon_sym_Cannot = 69,
  anon_sym_MayNot = 70,
  anon_sym_ShouldNot = 71,
  sym_contract = 72,
  sym_component = 73,
  sym_definition = 74,
  sym_simple_definition = 75,
  sym_numerical_expression = 76,
  sym_operator = 77,
  sym_conditional_definition = 78,
  sym_statement = 79,
  sym_conditional_statement = 80,
  sym_simple_statement = 81,
  sym_condition = 82,
  sym_simple_condition = 83,
  sym_boolean_expression = 84,
  sym_identity = 85,
  sym_holds = 86,
  sym_subject = 87,
  sym_verb = 88,
  sym_verb_status = 89,
  sym_comparison = 90,
  sym_modal_verb = 91,
  sym_date = 92,
  sym_month = 93,
  sym_object = 94,
  sym_numerical_object = 95,
  sym_nonnumerical_object = 96,
  sym_OBLIGATION = 97,
  sym_PERMISSION = 98,
  sym_PROHIBITION = 99,
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
  [anon_sym_DELIVERED] = "DELIVERED",
  [anon_sym_PAID] = "PAID",
  [anon_sym_CHARGED] = "CHARGED",
  [anon_sym_LESS] = "LESS",
  [anon_sym_THAN] = "THAN",
  [anon_sym_EQUAL] = "EQUAL",
  [anon_sym_TO] = "TO",
  [anon_sym_MORE] = "MORE",
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
  [sym_boolean_expression] = "boolean_expression",
  [sym_identity] = "identity",
  [sym_holds] = "holds",
  [sym_subject] = "subject",
  [sym_verb] = "verb",
  [sym_verb_status] = "verb_status",
  [sym_comparison] = "comparison",
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
  [anon_sym_DELIVERED] = anon_sym_DELIVERED,
  [anon_sym_PAID] = anon_sym_PAID,
  [anon_sym_CHARGED] = anon_sym_CHARGED,
  [anon_sym_LESS] = anon_sym_LESS,
  [anon_sym_THAN] = anon_sym_THAN,
  [anon_sym_EQUAL] = anon_sym_EQUAL,
  [anon_sym_TO] = anon_sym_TO,
  [anon_sym_MORE] = anon_sym_MORE,
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
  [sym_boolean_expression] = sym_boolean_expression,
  [sym_identity] = sym_identity,
  [sym_holds] = sym_holds,
  [sym_subject] = sym_subject,
  [sym_verb] = sym_verb,
  [sym_verb_status] = sym_verb_status,
  [sym_comparison] = sym_comparison,
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
  [anon_sym_LESS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_THAN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQUAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MORE] = {
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
  [sym_boolean_expression] = {
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
  [sym_comparison] = {
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
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 16,
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
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 59,
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
  [106] = 104,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 5,
  [117] = 117,
  [118] = 118,
  [119] = 6,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 75,
  [127] = 127,
  [128] = 78,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 108,
  [133] = 114,
  [134] = 124,
  [135] = 120,
  [136] = 136,
  [137] = 121,
  [138] = 118,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(268);
      ADVANCE_MAP(
        ' ', 2,
        '(', 282,
        ')', 283,
        'A', 34,
        'C', 8,
        'D', 46,
        'E', 118,
        'F', 184,
        'I', 68,
        'J', 169,
        'L', 47,
        'M', 75,
        'N', 13,
        'O', 122,
        'P', 14,
        'R', 48,
        'S', 114,
        'T', 71,
        '[', 280,
        ']', 281,
        'c', 168,
        'i', 239,
        'n', 223,
        'o', 214,
        't', 200,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        ' ', 2,
        '(', 282,
        ')', 283,
        'A', 34,
        'C', 8,
        'D', 46,
        'E', 118,
        'F', 184,
        'I', 68,
        'J', 169,
        'L', 47,
        'M', 75,
        'N', 13,
        'O', 122,
        'P', 14,
        'R', 48,
        'S', 114,
        'T', 71,
        '[', 280,
        ']', 281,
        'c', 168,
        'i', 239,
        'n', 223,
        'o', 214,
        't', 200,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        ' ', 2,
        '(', 282,
        ')', 283,
        'A', 34,
        'C', 9,
        'D', 46,
        'E', 118,
        'F', 184,
        'H', 173,
        'I', 68,
        'J', 169,
        'L', 47,
        'M', 74,
        'N', 12,
        'O', 123,
        'P', 14,
        'R', 48,
        'S', 115,
        'T', 71,
        '[', 280,
        ']', 281,
        'c', 168,
        'i', 239,
        'n', 223,
        'o', 214,
        't', 200,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        ' ', 4,
        'A', 102,
        'C', 10,
        'D', 67,
        'E', 119,
        'I', 68,
        'M', 77,
        'O', 121,
        'P', 20,
        'T', 73,
        'o', 214,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(3);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        ' ', 4,
        'A', 102,
        'C', 11,
        'D', 67,
        'E', 119,
        'H', 173,
        'I', 68,
        'M', 76,
        'N', 190,
        'O', 124,
        'P', 20,
        'S', 202,
        'T', 73,
        'o', 214,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(3);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(150);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(151);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(152);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == 'H') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == 'H') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == 'H') ADVANCE(26);
      if (lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == 'H') ADVANCE(26);
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == 'o') ADVANCE(261);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(261);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(80);
      if (lookahead == 'L') ADVANCE(156);
      if (lookahead == 'O') ADVANCE(161);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(153);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        'A', 92,
        'D', 108,
        'E', 120,
        'F', 184,
        'J', 169,
        'L', 47,
        'M', 109,
        'N', 13,
        'O', 145,
        'P', 110,
        'R', 48,
        'S', 114,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(99);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(125);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(96);
      if (lookahead == 'E') ADVANCE(45);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(79);
      if (lookahead == 'L') ADVANCE(156);
      END_STATE();
    case 21:
      if (lookahead == 'A') ADVANCE(86);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(89);
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(130);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(87);
      END_STATE();
    case 25:
      if (lookahead == 'A') ADVANCE(154);
      END_STATE();
    case 26:
      if (lookahead == 'A') ADVANCE(132);
      END_STATE();
    case 27:
      if (lookahead == 'A') ADVANCE(155);
      END_STATE();
    case 28:
      if (lookahead == 'B') ADVANCE(83);
      END_STATE();
    case 29:
      if (lookahead == 'B') ADVANCE(84);
      END_STATE();
    case 30:
      if (lookahead == 'C') ADVANCE(167);
      END_STATE();
    case 31:
      if (lookahead == 'C') ADVANCE(160);
      END_STATE();
    case 32:
      if (lookahead == 'C') ADVANCE(148);
      END_STATE();
    case 33:
      if (lookahead == 'C') ADVANCE(149);
      END_STATE();
    case 34:
      if (lookahead == 'D') ADVANCE(15);
      if (lookahead == 'M') ADVANCE(111);
      if (lookahead == 'N') ADVANCE(36);
      if (lookahead == 'p') ADVANCE(230);
      if (lookahead == 'u') ADVANCE(198);
      END_STATE();
    case 35:
      if (lookahead == 'D') ADVANCE(270);
      END_STATE();
    case 36:
      if (lookahead == 'D') ADVANCE(270);
      if (lookahead == 'Y') ADVANCE(44);
      END_STATE();
    case 37:
      if (lookahead == 'D') ADVANCE(295);
      END_STATE();
    case 38:
      if (lookahead == 'D') ADVANCE(269);
      END_STATE();
    case 39:
      if (lookahead == 'D') ADVANCE(296);
      END_STATE();
    case 40:
      if (lookahead == 'D') ADVANCE(294);
      END_STATE();
    case 41:
      if (lookahead == 'D') ADVANCE(107);
      END_STATE();
    case 42:
      if (lookahead == 'D') ADVANCE(142);
      END_STATE();
    case 43:
      if (lookahead == 'D') ADVANCE(53);
      END_STATE();
    case 44:
      if (lookahead == 'D') ADVANCE(25);
      END_STATE();
    case 45:
      if (lookahead == 'D') ADVANCE(27);
      if (lookahead == 'N') ADVANCE(278);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(85);
      if (lookahead == 'I') ADVANCE(164);
      if (lookahead == 'O') ADVANCE(88);
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(144);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(117);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(302);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(31);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(306);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(293);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(276);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(305);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(307);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(32);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(41);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(126);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(140);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(100);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(97);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(39);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(40);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(135);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(33);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(134);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(91);
      if (lookahead == 'I') ADVANCE(164);
      END_STATE();
    case 68:
      if (lookahead == 'F') ADVANCE(277);
      if (lookahead == 'S') ADVANCE(271);
      END_STATE();
    case 69:
      if (lookahead == 'G') ADVANCE(52);
      END_STATE();
    case 70:
      if (lookahead == 'G') ADVANCE(62);
      END_STATE();
    case 71:
      if (lookahead == 'H') ADVANCE(19);
      if (lookahead == 'I') ADVANCE(95);
      if (lookahead == 'O') ADVANCE(301);
      END_STATE();
    case 72:
      if (lookahead == 'H') ADVANCE(64);
      END_STATE();
    case 73:
      if (lookahead == 'H') ADVANCE(61);
      if (lookahead == 'I') ADVANCE(95);
      END_STATE();
    case 74:
      if (lookahead == 'I') ADVANCE(103);
      if (lookahead == 'O') ADVANCE(128);
      if (lookahead == 'a') ADVANCE(235);
      if (lookahead == 'i') ADVANCE(197);
      if (lookahead == 'u') ADVANCE(240);
      END_STATE();
    case 75:
      if (lookahead == 'I') ADVANCE(103);
      if (lookahead == 'O') ADVANCE(128);
      if (lookahead == 'a') ADVANCE(235);
      if (lookahead == 'u') ADVANCE(240);
      END_STATE();
    case 76:
      if (lookahead == 'I') ADVANCE(103);
      if (lookahead == 'a') ADVANCE(265);
      if (lookahead == 'i') ADVANCE(197);
      if (lookahead == 'u') ADVANCE(240);
      END_STATE();
    case 77:
      if (lookahead == 'I') ADVANCE(103);
      if (lookahead == 'u') ADVANCE(240);
      END_STATE();
    case 78:
      if (lookahead == 'I') ADVANCE(165);
      END_STATE();
    case 79:
      if (lookahead == 'I') ADVANCE(37);
      END_STATE();
    case 80:
      if (lookahead == 'I') ADVANCE(37);
      if (lookahead == 'Y') ADVANCE(292);
      END_STATE();
    case 81:
      if (lookahead == 'I') ADVANCE(43);
      END_STATE();
    case 82:
      if (lookahead == 'I') ADVANCE(166);
      END_STATE();
    case 83:
      if (lookahead == 'J') ADVANCE(56);
      END_STATE();
    case 84:
      if (lookahead == 'J') ADVANCE(65);
      END_STATE();
    case 85:
      if (lookahead == 'L') ADVANCE(78);
      END_STATE();
    case 86:
      if (lookahead == 'L') ADVANCE(300);
      END_STATE();
    case 87:
      if (lookahead == 'L') ADVANCE(299);
      END_STATE();
    case 88:
      if (lookahead == 'L') ADVANCE(90);
      END_STATE();
    case 89:
      if (lookahead == 'L') ADVANCE(141);
      END_STATE();
    case 90:
      if (lookahead == 'L') ADVANCE(23);
      END_STATE();
    case 91:
      if (lookahead == 'L') ADVANCE(82);
      END_STATE();
    case 92:
      if (lookahead == 'M') ADVANCE(111);
      if (lookahead == 'p') ADVANCE(230);
      if (lookahead == 'u') ADVANCE(198);
      END_STATE();
    case 93:
      if (lookahead == 'M') ADVANCE(57);
      END_STATE();
    case 94:
      if (lookahead == 'M') ADVANCE(50);
      END_STATE();
    case 95:
      if (lookahead == 'M') ADVANCE(59);
      END_STATE();
    case 96:
      if (lookahead == 'N') ADVANCE(298);
      END_STATE();
    case 97:
      if (lookahead == 'N') ADVANCE(278);
      END_STATE();
    case 98:
      if (lookahead == 'N') ADVANCE(146);
      END_STATE();
    case 99:
      if (lookahead == 'N') ADVANCE(38);
      END_STATE();
    case 100:
      if (lookahead == 'N') ADVANCE(30);
      END_STATE();
    case 101:
      if (lookahead == 'N') ADVANCE(42);
      END_STATE();
    case 102:
      if (lookahead == 'N') ADVANCE(35);
      END_STATE();
    case 103:
      if (lookahead == 'N') ADVANCE(159);
      END_STATE();
    case 104:
      if (lookahead == 'N') ADVANCE(225);
      END_STATE();
    case 105:
      if (lookahead == 'N') ADVANCE(226);
      END_STATE();
    case 106:
      if (lookahead == 'N') ADVANCE(227);
      END_STATE();
    case 107:
      if (lookahead == 'O') ADVANCE(28);
      END_STATE();
    case 108:
      if (lookahead == 'O') ADVANCE(88);
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 109:
      if (lookahead == 'O') ADVANCE(128);
      if (lookahead == 'a') ADVANCE(235);
      END_STATE();
    case 110:
      if (lookahead == 'O') ADVANCE(161);
      END_STATE();
    case 111:
      if (lookahead == 'O') ADVANCE(158);
      END_STATE();
    case 112:
      if (lookahead == 'O') ADVANCE(129);
      END_STATE();
    case 113:
      if (lookahead == 'O') ADVANCE(138);
      END_STATE();
    case 114:
      if (lookahead == 'O') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 115:
      if (lookahead == 'O') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(229);
      if (lookahead == 'h') ADVANCE(228);
      END_STATE();
    case 116:
      if (lookahead == 'O') ADVANCE(29);
      END_STATE();
    case 117:
      if (lookahead == 'P') ADVANCE(112);
      END_STATE();
    case 118:
      if (lookahead == 'Q') ADVANCE(157);
      if (lookahead == 'U') ADVANCE(127);
      END_STATE();
    case 119:
      if (lookahead == 'Q') ADVANCE(162);
      END_STATE();
    case 120:
      if (lookahead == 'Q') ADVANCE(163);
      if (lookahead == 'U') ADVANCE(127);
      END_STATE();
    case 121:
      if (lookahead == 'R') ADVANCE(279);
      END_STATE();
    case 122:
      if (lookahead == 'R') ADVANCE(279);
      if (lookahead == 'T') ADVANCE(72);
      if (lookahead == 'c') ADVANCE(252);
      END_STATE();
    case 123:
      if (lookahead == 'R') ADVANCE(279);
      if (lookahead == 'T') ADVANCE(72);
      if (lookahead == 'c') ADVANCE(252);
      if (lookahead == 'u') ADVANCE(199);
      END_STATE();
    case 124:
      if (lookahead == 'R') ADVANCE(279);
      if (lookahead == 'u') ADVANCE(199);
      END_STATE();
    case 125:
      if (lookahead == 'R') ADVANCE(69);
      END_STATE();
    case 126:
      if (lookahead == 'R') ADVANCE(291);
      END_STATE();
    case 127:
      if (lookahead == 'R') ADVANCE(113);
      END_STATE();
    case 128:
      if (lookahead == 'R') ADVANCE(49);
      END_STATE();
    case 129:
      if (lookahead == 'R') ADVANCE(147);
      END_STATE();
    case 130:
      if (lookahead == 'R') ADVANCE(143);
      END_STATE();
    case 131:
      if (lookahead == 'R') ADVANCE(60);
      END_STATE();
    case 132:
      if (lookahead == 'R') ADVANCE(70);
      END_STATE();
    case 133:
      if (lookahead == 'R') ADVANCE(131);
      END_STATE();
    case 134:
      if (lookahead == 'R') ADVANCE(63);
      END_STATE();
    case 135:
      if (lookahead == 'R') ADVANCE(116);
      END_STATE();
    case 136:
      if (lookahead == 'S') ADVANCE(297);
      END_STATE();
    case 137:
      if (lookahead == 'S') ADVANCE(273);
      END_STATE();
    case 138:
      if (lookahead == 'S') ADVANCE(322);
      END_STATE();
    case 139:
      if (lookahead == 'S') ADVANCE(274);
      END_STATE();
    case 140:
      if (lookahead == 'S') ADVANCE(275);
      END_STATE();
    case 141:
      if (lookahead == 'S') ADVANCE(272);
      END_STATE();
    case 142:
      if (lookahead == 'S') ADVANCE(320);
      END_STATE();
    case 143:
      if (lookahead == 'S') ADVANCE(321);
      END_STATE();
    case 144:
      if (lookahead == 'S') ADVANCE(136);
      END_STATE();
    case 145:
      if (lookahead == 'T') ADVANCE(72);
      if (lookahead == 'c') ADVANCE(252);
      END_STATE();
    case 146:
      if (lookahead == 'T') ADVANCE(323);
      END_STATE();
    case 147:
      if (lookahead == 'T') ADVANCE(325);
      END_STATE();
    case 148:
      if (lookahead == 'T') ADVANCE(326);
      END_STATE();
    case 149:
      if (lookahead == 'T') ADVANCE(327);
      END_STATE();
    case 150:
      if (lookahead == 'T') ADVANCE(218);
      END_STATE();
    case 151:
      if (lookahead == 'T') ADVANCE(219);
      END_STATE();
    case 152:
      if (lookahead == 'T') ADVANCE(220);
      END_STATE();
    case 153:
      if (lookahead == 'T') ADVANCE(51);
      END_STATE();
    case 154:
      if (lookahead == 'T') ADVANCE(54);
      END_STATE();
    case 155:
      if (lookahead == 'T') ADVANCE(55);
      END_STATE();
    case 156:
      if (lookahead == 'U') ADVANCE(137);
      END_STATE();
    case 157:
      if (lookahead == 'U') ADVANCE(21);
      END_STATE();
    case 158:
      if (lookahead == 'U') ADVANCE(98);
      END_STATE();
    case 159:
      if (lookahead == 'U') ADVANCE(139);
      END_STATE();
    case 160:
      if (lookahead == 'U') ADVANCE(133);
      END_STATE();
    case 161:
      if (lookahead == 'U') ADVANCE(101);
      END_STATE();
    case 162:
      if (lookahead == 'U') ADVANCE(22);
      END_STATE();
    case 163:
      if (lookahead == 'U') ADVANCE(24);
      END_STATE();
    case 164:
      if (lookahead == 'V') ADVANCE(81);
      END_STATE();
    case 165:
      if (lookahead == 'V') ADVANCE(58);
      END_STATE();
    case 166:
      if (lookahead == 'V') ADVANCE(66);
      END_STATE();
    case 167:
      if (lookahead == 'Y') ADVANCE(324);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(241);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead == 'u') ADVANCE(207);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(237);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 174:
      if (lookahead == 'b') ADVANCE(238);
      END_STATE();
    case 175:
      if (lookahead == 'b') ADVANCE(191);
      END_STATE();
    case 176:
      if (lookahead == 'b') ADVANCE(192);
      END_STATE();
    case 177:
      if (lookahead == 'b') ADVANCE(193);
      END_STATE();
    case 178:
      if (lookahead == 'b') ADVANCE(194);
      END_STATE();
    case 179:
      if (lookahead == 'c') ADVANCE(186);
      END_STATE();
    case 180:
      if (lookahead == 'c') ADVANCE(201);
      END_STATE();
    case 181:
      if (lookahead == 'd') ADVANCE(340);
      END_STATE();
    case 182:
      if (lookahead == 'd') ADVANCE(335);
      END_STATE();
    case 183:
      if (lookahead == 'd') ADVANCE(6);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 197:
      if (lookahead == 'g') ADVANCE(203);
      END_STATE();
    case 198:
      if (lookahead == 'g') ADVANCE(257);
      END_STATE();
    case 199:
      if (lookahead == 'g') ADVANCE(204);
      END_STATE();
    case 200:
      if (lookahead == 'h') ADVANCE(172);
      END_STATE();
    case 201:
      if (lookahead == 'h') ADVANCE(310);
      END_STATE();
    case 202:
      if (lookahead == 'h') ADVANCE(228);
      END_STATE();
    case 203:
      if (lookahead == 'h') ADVANCE(246);
      END_STATE();
    case 204:
      if (lookahead == 'h') ADVANCE(253);
      END_STATE();
    case 205:
      if (lookahead == 'i') ADVANCE(329);
      if (lookahead == 'o') ADVANCE(328);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 206:
      if (lookahead == 'i') ADVANCE(208);
      END_STATE();
    case 207:
      if (lookahead == 'l') ADVANCE(262);
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 208:
      if (lookahead == 'l') ADVANCE(311);
      END_STATE();
    case 209:
      if (lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 210:
      if (lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 211:
      if (lookahead == 'm') ADVANCE(176);
      END_STATE();
    case 212:
      if (lookahead == 'm') ADVANCE(177);
      END_STATE();
    case 213:
      if (lookahead == 'm') ADVANCE(178);
      END_STATE();
    case 214:
      if (lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 215:
      if (lookahead == 'n') ADVANCE(337);
      END_STATE();
    case 216:
      if (lookahead == 'n') ADVANCE(338);
      END_STATE();
    case 217:
      if (lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 218:
      if (lookahead == 'o') ADVANCE(333);
      END_STATE();
    case 219:
      if (lookahead == 'o') ADVANCE(334);
      END_STATE();
    case 220:
      if (lookahead == 'o') ADVANCE(336);
      END_STATE();
    case 221:
      if (lookahead == 'o') ADVANCE(328);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 222:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 223:
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 224:
      if (lookahead == 'o') ADVANCE(248);
      END_STATE();
    case 225:
      if (lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 226:
      if (lookahead == 'o') ADVANCE(250);
      END_STATE();
    case 227:
      if (lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 228:
      if (lookahead == 'o') ADVANCE(258);
      END_STATE();
    case 229:
      if (lookahead == 'p') ADVANCE(254);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(317);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(319);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(318);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(316);
      END_STATE();
    case 235:
      if (lookahead == 'r') ADVANCE(180);
      if (lookahead == 'y') ADVANCE(312);
      END_STATE();
    case 236:
      if (lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 237:
      if (lookahead == 'r') ADVANCE(264);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(259);
      END_STATE();
    case 239:
      if (lookahead == 's') ADVANCE(286);
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 240:
      if (lookahead == 's') ADVANCE(244);
      END_STATE();
    case 241:
      if (lookahead == 's') ADVANCE(188);
      END_STATE();
    case 242:
      if (lookahead == 's') ADVANCE(247);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(332);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(289);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(341);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(315);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(343);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(342);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(345);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(344);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 255:
      if (lookahead == 'u') ADVANCE(209);
      END_STATE();
    case 256:
      if (lookahead == 'u') ADVANCE(170);
      END_STATE();
    case 257:
      if (lookahead == 'u') ADVANCE(242);
      END_STATE();
    case 258:
      if (lookahead == 'u') ADVANCE(210);
      END_STATE();
    case 259:
      if (lookahead == 'u') ADVANCE(171);
      END_STATE();
    case 260:
      if (lookahead == 'v') ADVANCE(189);
      END_STATE();
    case 261:
      if (lookahead == 'v') ADVANCE(195);
      END_STATE();
    case 262:
      if (lookahead == 'y') ADVANCE(314);
      END_STATE();
    case 263:
      if (lookahead == 'y') ADVANCE(308);
      END_STATE();
    case 264:
      if (lookahead == 'y') ADVANCE(309);
      END_STATE();
    case 265:
      if (lookahead == 'y') ADVANCE(339);
      END_STATE();
    case 266:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 267:
      if (eof) ADVANCE(268);
      ADVANCE_MAP(
        ' ', 4,
        'A', 102,
        'C', 10,
        'D', 67,
        'E', 119,
        'I', 68,
        'M', 77,
        'O', 121,
        'P', 20,
        'T', 73,
        'o', 214,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_C_DASHAND);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_IS);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_EQUALS);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_MINUS);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_TIMES);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_DIVIDE);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_THEN);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_it);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_it);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_the);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_that);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_DELIVER);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_PAY);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_CHARGE);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_DELIVERED);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_PAID);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_CHARGED);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_LESS);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_THAN);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_EQUAL);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_EQUAL);
      if (lookahead == 'S') ADVANCE(272);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_TO);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_MORE);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_on);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_ANYDATE);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_ADATE);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_THEDATE);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_January);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_February);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_March);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_April);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_May);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_June);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_July);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_August);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_September);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_October);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_November);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_December);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_POUNDS);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_DOLLARS);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_EUROS);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_AMOUNT);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_SOMECURRENCY);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_REPORT);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_NAMEDOBJECT);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_OTHEROBJECT);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(304);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_string);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_Must);
      if (lookahead == ' ') ADVANCE(104);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_HaveTo);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_NeedTo);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_Should);
      if (lookahead == ' ') ADVANCE(105);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_OughtTo);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_Can);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_Can);
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_May2);
      if (lookahead == ' ') ADVANCE(106);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_Could);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_Might);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_MustNot);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_Cannot);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_MayNot);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_ShouldNot);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 267},
  [3] = {.lex_state = 267},
  [4] = {.lex_state = 267},
  [5] = {.lex_state = 267},
  [6] = {.lex_state = 267},
  [7] = {.lex_state = 267},
  [8] = {.lex_state = 267},
  [9] = {.lex_state = 267},
  [10] = {.lex_state = 267},
  [11] = {.lex_state = 267},
  [12] = {.lex_state = 267},
  [13] = {.lex_state = 267},
  [14] = {.lex_state = 16},
  [15] = {.lex_state = 16},
  [16] = {.lex_state = 16},
  [17] = {.lex_state = 16},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 16},
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
  [32] = {.lex_state = 205},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 205},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 205},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 221},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 221},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 267},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 267},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 205},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 205},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 266},
  [85] = {.lex_state = 266},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 266},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 266},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 266},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 267},
  [97] = {.lex_state = 221},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 266},
  [101] = {.lex_state = 266},
  [102] = {.lex_state = 221},
  [103] = {.lex_state = 266},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 266},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 266},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 266},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 266},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 266},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 266},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
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
    [anon_sym_PAID] = ACTIONS(1),
    [anon_sym_LESS] = ACTIONS(1),
    [anon_sym_THAN] = ACTIONS(1),
    [anon_sym_EQUAL] = ACTIONS(1),
    [anon_sym_TO] = ACTIONS(1),
    [anon_sym_MORE] = ACTIONS(1),
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
    [sym_contract] = STATE(111),
    [sym_component] = STATE(99),
    [sym_definition] = STATE(74),
    [sym_simple_definition] = STATE(53),
    [sym_conditional_definition] = STATE(88),
    [sym_statement] = STATE(76),
    [sym_conditional_statement] = STATE(88),
    [sym_simple_statement] = STATE(43),
    [sym_identity] = STATE(36),
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
    ACTIONS(7), 25,
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
  [34] = 11,
    ACTIONS(13), 1,
      anon_sym_on,
    STATE(14), 1,
      sym_verb_status,
    STATE(55), 1,
      sym_modal_verb,
    STATE(60), 1,
      sym_date,
    ACTIONS(15), 2,
      anon_sym_Must,
      anon_sym_Should,
    ACTIONS(19), 2,
      anon_sym_Can,
      anon_sym_May2,
    ACTIONS(21), 2,
      anon_sym_Could,
      anon_sym_Might,
    ACTIONS(11), 3,
      anon_sym_DELIVERED,
      anon_sym_PAID,
      anon_sym_CHARGED,
    ACTIONS(17), 3,
      anon_sym_HaveTo,
      anon_sym_NeedTo,
      anon_sym_OughtTo,
    STATE(73), 3,
      sym_OBLIGATION,
      sym_PERMISSION,
      sym_PROHIBITION,
    ACTIONS(23), 4,
      anon_sym_MustNot,
      anon_sym_Cannot,
      anon_sym_MayNot,
      anon_sym_ShouldNot,
  [80] = 11,
    ACTIONS(13), 1,
      anon_sym_on,
    STATE(15), 1,
      sym_verb_status,
    STATE(64), 1,
      sym_modal_verb,
    STATE(69), 1,
      sym_date,
    ACTIONS(15), 2,
      anon_sym_Must,
      anon_sym_Should,
    ACTIONS(19), 2,
      anon_sym_Can,
      anon_sym_May2,
    ACTIONS(21), 2,
      anon_sym_Could,
      anon_sym_Might,
    ACTIONS(11), 3,
      anon_sym_DELIVERED,
      anon_sym_PAID,
      anon_sym_CHARGED,
    ACTIONS(17), 3,
      anon_sym_HaveTo,
      anon_sym_NeedTo,
      anon_sym_OughtTo,
    STATE(73), 3,
      sym_OBLIGATION,
      sym_PERMISSION,
      sym_PROHIBITION,
    ACTIONS(23), 4,
      anon_sym_MustNot,
      anon_sym_Cannot,
      anon_sym_MayNot,
      anon_sym_ShouldNot,
  [126] = 2,
    ACTIONS(27), 4,
      anon_sym_Must,
      anon_sym_Should,
      anon_sym_Can,
      anon_sym_May2,
    ACTIONS(25), 18,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_OR,
      anon_sym_DELIVERED,
      anon_sym_PAID,
      anon_sym_CHARGED,
      anon_sym_HaveTo,
      anon_sym_NeedTo,
      anon_sym_OughtTo,
      anon_sym_Could,
      anon_sym_Might,
      anon_sym_MustNot,
      anon_sym_Cannot,
      anon_sym_MayNot,
      anon_sym_ShouldNot,
  [153] = 2,
    ACTIONS(31), 4,
      anon_sym_Must,
      anon_sym_Should,
      anon_sym_Can,
      anon_sym_May2,
    ACTIONS(29), 18,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_OR,
      anon_sym_DELIVERED,
      anon_sym_PAID,
      anon_sym_CHARGED,
      anon_sym_HaveTo,
      anon_sym_NeedTo,
      anon_sym_OughtTo,
      anon_sym_Could,
      anon_sym_Might,
      anon_sym_MustNot,
      anon_sym_Cannot,
      anon_sym_MayNot,
      anon_sym_ShouldNot,
  [180] = 9,
    STATE(24), 1,
      sym_verb_status,
    STATE(68), 1,
      sym_modal_verb,
    ACTIONS(15), 2,
      anon_sym_Must,
      anon_sym_Should,
    ACTIONS(19), 2,
      anon_sym_Can,
      anon_sym_May2,
    ACTIONS(21), 2,
      anon_sym_Could,
      anon_sym_Might,
    ACTIONS(11), 3,
      anon_sym_DELIVERED,
      anon_sym_PAID,
      anon_sym_CHARGED,
    ACTIONS(17), 3,
      anon_sym_HaveTo,
      anon_sym_NeedTo,
      anon_sym_OughtTo,
    STATE(73), 3,
      sym_OBLIGATION,
      sym_PERMISSION,
      sym_PROHIBITION,
    ACTIONS(23), 4,
      anon_sym_MustNot,
      anon_sym_Cannot,
      anon_sym_MayNot,
      anon_sym_ShouldNot,
  [220] = 9,
    STATE(20), 1,
      sym_verb_status,
    STATE(66), 1,
      sym_modal_verb,
    ACTIONS(15), 2,
      anon_sym_Must,
      anon_sym_Should,
    ACTIONS(19), 2,
      anon_sym_Can,
      anon_sym_May2,
    ACTIONS(21), 2,
      anon_sym_Could,
      anon_sym_Might,
    ACTIONS(11), 3,
      anon_sym_DELIVERED,
      anon_sym_PAID,
      anon_sym_CHARGED,
    ACTIONS(17), 3,
      anon_sym_HaveTo,
      anon_sym_NeedTo,
      anon_sym_OughtTo,
    STATE(73), 3,
      sym_OBLIGATION,
      sym_PERMISSION,
      sym_PROHIBITION,
    ACTIONS(23), 4,
      anon_sym_MustNot,
      anon_sym_Cannot,
      anon_sym_MayNot,
      anon_sym_ShouldNot,
  [260] = 11,
    ACTIONS(13), 1,
      anon_sym_on,
    ACTIONS(33), 1,
      anon_sym_IS,
    ACTIONS(35), 1,
      anon_sym_EQUALS,
    STATE(12), 1,
      sym_date,
    STATE(70), 1,
      sym_modal_verb,
    ACTIONS(15), 2,
      anon_sym_Must,
      anon_sym_Should,
    ACTIONS(19), 2,
      anon_sym_Can,
      anon_sym_May2,
    ACTIONS(21), 2,
      anon_sym_Could,
      anon_sym_Might,
    ACTIONS(17), 3,
      anon_sym_HaveTo,
      anon_sym_NeedTo,
      anon_sym_OughtTo,
    STATE(73), 3,
      sym_OBLIGATION,
      sym_PERMISSION,
      sym_PROHIBITION,
    ACTIONS(23), 4,
      anon_sym_MustNot,
      anon_sym_Cannot,
      anon_sym_MayNot,
      anon_sym_ShouldNot,
  [304] = 9,
    ACTIONS(13), 1,
      anon_sym_on,
    STATE(13), 1,
      sym_date,
    STATE(61), 1,
      sym_modal_verb,
    ACTIONS(15), 2,
      anon_sym_Must,
      anon_sym_Should,
    ACTIONS(19), 2,
      anon_sym_Can,
      anon_sym_May2,
    ACTIONS(21), 2,
      anon_sym_Could,
      anon_sym_Might,
    ACTIONS(17), 3,
      anon_sym_HaveTo,
      anon_sym_NeedTo,
      anon_sym_OughtTo,
    STATE(73), 3,
      sym_OBLIGATION,
      sym_PERMISSION,
      sym_PROHIBITION,
    ACTIONS(23), 4,
      anon_sym_MustNot,
      anon_sym_Cannot,
      anon_sym_MayNot,
      anon_sym_ShouldNot,
  [342] = 9,
    ACTIONS(13), 1,
      anon_sym_on,
    STATE(12), 1,
      sym_date,
    STATE(70), 1,
      sym_modal_verb,
    ACTIONS(15), 2,
      anon_sym_Must,
      anon_sym_Should,
    ACTIONS(19), 2,
      anon_sym_Can,
      anon_sym_May2,
    ACTIONS(21), 2,
      anon_sym_Could,
      anon_sym_Might,
    ACTIONS(17), 3,
      anon_sym_HaveTo,
      anon_sym_NeedTo,
      anon_sym_OughtTo,
    STATE(73), 3,
      sym_OBLIGATION,
      sym_PERMISSION,
      sym_PROHIBITION,
    ACTIONS(23), 4,
      anon_sym_MustNot,
      anon_sym_Cannot,
      anon_sym_MayNot,
      anon_sym_ShouldNot,
  [380] = 7,
    STATE(66), 1,
      sym_modal_verb,
    ACTIONS(15), 2,
      anon_sym_Must,
      anon_sym_Should,
    ACTIONS(19), 2,
      anon_sym_Can,
      anon_sym_May2,
    ACTIONS(21), 2,
      anon_sym_Could,
      anon_sym_Might,
    ACTIONS(17), 3,
      anon_sym_HaveTo,
      anon_sym_NeedTo,
      anon_sym_OughtTo,
    STATE(73), 3,
      sym_OBLIGATION,
      sym_PERMISSION,
      sym_PROHIBITION,
    ACTIONS(23), 4,
      anon_sym_MustNot,
      anon_sym_Cannot,
      anon_sym_MayNot,
      anon_sym_ShouldNot,
  [412] = 7,
    STATE(68), 1,
      sym_modal_verb,
    ACTIONS(15), 2,
      anon_sym_Must,
      anon_sym_Should,
    ACTIONS(19), 2,
      anon_sym_Can,
      anon_sym_May2,
    ACTIONS(21), 2,
      anon_sym_Could,
      anon_sym_Might,
    ACTIONS(17), 3,
      anon_sym_HaveTo,
      anon_sym_NeedTo,
      anon_sym_OughtTo,
    STATE(73), 3,
      sym_OBLIGATION,
      sym_PERMISSION,
      sym_PROHIBITION,
    ACTIONS(23), 4,
      anon_sym_MustNot,
      anon_sym_Cannot,
      anon_sym_MayNot,
      anon_sym_ShouldNot,
  [444] = 8,
    ACTIONS(39), 1,
      anon_sym_EQUAL,
    ACTIONS(43), 1,
      anon_sym_AMOUNT,
    STATE(85), 1,
      sym_comparison,
    STATE(86), 1,
      sym_object,
    ACTIONS(37), 2,
      anon_sym_LESS,
      anon_sym_MORE,
    STATE(33), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(41), 3,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
    ACTIONS(45), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [476] = 8,
    ACTIONS(39), 1,
      anon_sym_EQUAL,
    ACTIONS(43), 1,
      anon_sym_AMOUNT,
    STATE(85), 1,
      sym_comparison,
    STATE(91), 1,
      sym_object,
    ACTIONS(37), 2,
      anon_sym_LESS,
      anon_sym_MORE,
    STATE(33), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(41), 3,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
    ACTIONS(45), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [508] = 2,
    STATE(133), 1,
      sym_month,
    ACTIONS(47), 12,
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
  [526] = 2,
    STATE(114), 1,
      sym_month,
    ACTIONS(47), 12,
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
  [544] = 10,
    ACTIONS(3), 1,
      anon_sym_IF,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      sym_identity,
    STATE(43), 1,
      sym_simple_statement,
    STATE(53), 1,
      sym_simple_definition,
    STATE(74), 1,
      sym_definition,
    STATE(76), 1,
      sym_statement,
    STATE(99), 1,
      sym_component,
    STATE(122), 1,
      sym_contract,
    STATE(88), 2,
      sym_conditional_definition,
      sym_conditional_statement,
  [576] = 1,
    ACTIONS(49), 11,
      anon_sym_LESS,
      anon_sym_EQUAL,
      anon_sym_MORE,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_AMOUNT,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [590] = 5,
    ACTIONS(43), 1,
      anon_sym_AMOUNT,
    STATE(90), 1,
      sym_object,
    STATE(33), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(41), 3,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
    ACTIONS(45), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [612] = 5,
    ACTIONS(43), 1,
      anon_sym_AMOUNT,
    STATE(83), 1,
      sym_object,
    STATE(33), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(41), 3,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
    ACTIONS(45), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [634] = 5,
    ACTIONS(43), 1,
      anon_sym_AMOUNT,
    STATE(91), 1,
      sym_object,
    STATE(33), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(41), 3,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
    ACTIONS(45), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [656] = 5,
    ACTIONS(43), 1,
      anon_sym_AMOUNT,
    STATE(41), 1,
      sym_object,
    STATE(33), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(41), 3,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
    ACTIONS(45), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [678] = 5,
    ACTIONS(43), 1,
      anon_sym_AMOUNT,
    STATE(98), 1,
      sym_object,
    STATE(33), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(41), 3,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
    ACTIONS(45), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [700] = 1,
    ACTIONS(51), 11,
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
  [714] = 5,
    ACTIONS(43), 1,
      anon_sym_AMOUNT,
    STATE(44), 1,
      sym_object,
    STATE(33), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(41), 3,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
    ACTIONS(45), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [736] = 5,
    ACTIONS(43), 1,
      anon_sym_AMOUNT,
    STATE(46), 1,
      sym_object,
    STATE(33), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(41), 3,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
    ACTIONS(45), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [758] = 5,
    ACTIONS(43), 1,
      anon_sym_AMOUNT,
    STATE(45), 1,
      sym_object,
    STATE(33), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(41), 3,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
    ACTIONS(45), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [780] = 3,
    STATE(34), 1,
      sym_operator,
    ACTIONS(53), 4,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
    ACTIONS(55), 4,
      anon_sym_PLUS,
      anon_sym_MINUS,
      anon_sym_TIMES,
      anon_sym_DIVIDE,
  [796] = 1,
    ACTIONS(57), 8,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_AMOUNT,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [807] = 5,
    ACTIONS(43), 1,
      anon_sym_AMOUNT,
    ACTIONS(59), 1,
      sym_num,
    STATE(29), 1,
      sym_numerical_object,
    STATE(62), 1,
      sym_numerical_expression,
    ACTIONS(41), 3,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
  [825] = 7,
    ACTIONS(61), 1,
      anon_sym_it,
    ACTIONS(63), 1,
      anon_sym_on,
    ACTIONS(65), 1,
      sym_string,
    STATE(3), 1,
      sym_subject,
    STATE(49), 1,
      sym_boolean_expression,
    STATE(50), 1,
      sym_holds,
    STATE(87), 1,
      sym_date,
  [847] = 1,
    ACTIONS(67), 7,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_OR,
      anon_sym_on,
  [857] = 5,
    ACTIONS(43), 1,
      anon_sym_AMOUNT,
    ACTIONS(59), 1,
      sym_num,
    STATE(29), 1,
      sym_numerical_object,
    STATE(51), 1,
      sym_numerical_expression,
    ACTIONS(41), 3,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
  [875] = 1,
    ACTIONS(69), 7,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_OR,
      anon_sym_on,
  [885] = 6,
    ACTIONS(61), 1,
      anon_sym_it,
    ACTIONS(63), 1,
      anon_sym_on,
    ACTIONS(65), 1,
      sym_string,
    STATE(9), 1,
      sym_subject,
    STATE(52), 1,
      sym_holds,
    STATE(101), 1,
      sym_date,
  [904] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      sym_identity,
    STATE(43), 1,
      sym_simple_statement,
    STATE(53), 1,
      sym_simple_definition,
    STATE(105), 1,
      sym_statement,
    STATE(107), 1,
      sym_definition,
  [923] = 6,
    ACTIONS(61), 1,
      anon_sym_it,
    ACTIONS(63), 1,
      anon_sym_on,
    ACTIONS(65), 1,
      sym_string,
    STATE(11), 1,
      sym_subject,
    STATE(52), 1,
      sym_holds,
    STATE(101), 1,
      sym_date,
  [942] = 1,
    ACTIONS(71), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_OR,
  [950] = 1,
    ACTIONS(73), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_OR,
  [958] = 1,
    ACTIONS(75), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_OR,
  [966] = 1,
    ACTIONS(77), 5,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_AMOUNT,
      sym_num,
  [974] = 2,
    ACTIONS(81), 2,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(79), 3,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
  [984] = 1,
    ACTIONS(83), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_OR,
  [992] = 1,
    ACTIONS(85), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_OR,
  [1000] = 1,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_OR,
  [1008] = 1,
    ACTIONS(89), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_OR,
  [1016] = 2,
    ACTIONS(93), 2,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(91), 3,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_THEN,
  [1026] = 1,
    ACTIONS(95), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_OR,
  [1034] = 5,
    ACTIONS(63), 1,
      anon_sym_on,
    ACTIONS(65), 1,
      sym_string,
    STATE(4), 1,
      sym_subject,
    STATE(39), 1,
      sym_boolean_expression,
    STATE(84), 1,
      sym_date,
  [1050] = 1,
    ACTIONS(97), 4,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
  [1057] = 4,
    ACTIONS(63), 1,
      anon_sym_on,
    ACTIONS(65), 1,
      sym_string,
    STATE(10), 1,
      sym_subject,
    STATE(100), 1,
      sym_date,
  [1070] = 2,
    ACTIONS(101), 1,
      anon_sym_AND,
    ACTIONS(99), 3,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
  [1079] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(32), 1,
      sym_identity,
    STATE(48), 1,
      sym_simple_condition,
    STATE(89), 1,
      sym_condition,
  [1092] = 2,
    STATE(22), 1,
      sym_verb,
    ACTIONS(103), 3,
      anon_sym_DELIVER,
      anon_sym_PAY,
      anon_sym_CHARGE,
  [1101] = 4,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    STATE(53), 1,
      sym_simple_definition,
    STATE(79), 1,
      sym_definition,
    STATE(92), 1,
      sym_identity,
  [1114] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(32), 1,
      sym_identity,
    STATE(48), 1,
      sym_simple_condition,
    STATE(93), 1,
      sym_condition,
  [1127] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_identity,
    STATE(43), 1,
      sym_simple_statement,
    STATE(77), 1,
      sym_statement,
  [1140] = 2,
    ACTIONS(107), 1,
      anon_sym_the,
    ACTIONS(109), 3,
      anon_sym_ANYDATE,
      anon_sym_ADATE,
      anon_sym_THEDATE,
  [1149] = 2,
    STATE(23), 1,
      sym_verb_status,
    ACTIONS(11), 3,
      anon_sym_DELIVERED,
      anon_sym_PAID,
      anon_sym_CHARGED,
  [1158] = 2,
    STATE(24), 1,
      sym_verb,
    ACTIONS(103), 3,
      anon_sym_DELIVER,
      anon_sym_PAY,
      anon_sym_CHARGE,
  [1167] = 1,
    ACTIONS(111), 4,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
  [1174] = 1,
    ACTIONS(53), 4,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
  [1181] = 2,
    STATE(21), 1,
      sym_verb,
    ACTIONS(103), 3,
      anon_sym_DELIVER,
      anon_sym_PAY,
      anon_sym_CHARGE,
  [1190] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(32), 1,
      sym_identity,
    STATE(48), 1,
      sym_simple_condition,
    STATE(72), 1,
      sym_condition,
  [1203] = 2,
    STATE(26), 1,
      sym_verb,
    ACTIONS(103), 3,
      anon_sym_DELIVER,
      anon_sym_PAY,
      anon_sym_CHARGE,
  [1212] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(32), 1,
      sym_identity,
    STATE(48), 1,
      sym_simple_condition,
    STATE(127), 1,
      sym_condition,
  [1225] = 2,
    STATE(27), 1,
      sym_verb,
    ACTIONS(103), 3,
      anon_sym_DELIVER,
      anon_sym_PAY,
      anon_sym_CHARGE,
  [1234] = 2,
    STATE(28), 1,
      sym_verb_status,
    ACTIONS(11), 3,
      anon_sym_DELIVERED,
      anon_sym_PAID,
      anon_sym_CHARGED,
  [1243] = 2,
    STATE(20), 1,
      sym_verb,
    ACTIONS(103), 3,
      anon_sym_DELIVER,
      anon_sym_PAY,
      anon_sym_CHARGE,
  [1252] = 2,
    ACTIONS(113), 1,
      anon_sym_the,
    ACTIONS(115), 3,
      anon_sym_ANYDATE,
      anon_sym_ADATE,
      anon_sym_THEDATE,
  [1261] = 1,
    ACTIONS(117), 3,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_THEN,
  [1267] = 1,
    ACTIONS(119), 3,
      anon_sym_DELIVER,
      anon_sym_PAY,
      anon_sym_CHARGE,
  [1273] = 2,
    ACTIONS(123), 1,
      anon_sym_IF,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [1281] = 1,
    ACTIONS(125), 3,
      anon_sym_it,
      anon_sym_on,
      sym_string,
  [1287] = 2,
    ACTIONS(127), 1,
      anon_sym_IF,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [1295] = 1,
    ACTIONS(129), 3,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
  [1301] = 1,
    ACTIONS(131), 3,
      anon_sym_it,
      anon_sym_on,
      sym_string,
  [1307] = 1,
    ACTIONS(133), 3,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
  [1313] = 1,
    ACTIONS(135), 3,
      anon_sym_DELIVER,
      anon_sym_PAY,
      anon_sym_CHARGE,
  [1319] = 1,
    ACTIONS(137), 3,
      anon_sym_DELIVER,
      anon_sym_PAY,
      anon_sym_CHARGE,
  [1325] = 1,
    ACTIONS(139), 3,
      anon_sym_DELIVER,
      anon_sym_PAY,
      anon_sym_CHARGE,
  [1331] = 2,
    ACTIONS(13), 1,
      anon_sym_on,
    STATE(47), 1,
      sym_date,
  [1338] = 2,
    ACTIONS(141), 1,
      sym_string,
    STATE(69), 1,
      sym_subject,
  [1345] = 2,
    ACTIONS(141), 1,
      sym_string,
    STATE(40), 1,
      sym_subject,
  [1352] = 2,
    ACTIONS(13), 1,
      anon_sym_on,
    STATE(41), 1,
      sym_date,
  [1359] = 2,
    ACTIONS(141), 1,
      sym_string,
    STATE(60), 1,
      sym_subject,
  [1366] = 1,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [1371] = 1,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [1376] = 2,
    ACTIONS(13), 1,
      anon_sym_on,
    STATE(44), 1,
      sym_date,
  [1383] = 2,
    ACTIONS(13), 1,
      anon_sym_on,
    STATE(45), 1,
      sym_date,
  [1390] = 2,
    ACTIONS(141), 1,
      sym_string,
    STATE(96), 1,
      sym_subject,
  [1397] = 1,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [1402] = 2,
    ACTIONS(141), 1,
      sym_string,
    STATE(25), 1,
      sym_subject,
  [1409] = 2,
    ACTIONS(147), 1,
      anon_sym_the,
    ACTIONS(149), 1,
      anon_sym_not,
  [1416] = 2,
    ACTIONS(33), 1,
      anon_sym_IS,
    ACTIONS(35), 1,
      anon_sym_EQUALS,
  [1423] = 1,
    ACTIONS(151), 2,
      anon_sym_on,
      sym_string,
  [1428] = 2,
    ACTIONS(13), 1,
      anon_sym_on,
    STATE(46), 1,
      sym_date,
  [1435] = 2,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 1,
      anon_sym_C_DASHAND,
  [1442] = 2,
    ACTIONS(141), 1,
      sym_string,
    STATE(7), 1,
      sym_subject,
  [1449] = 2,
    ACTIONS(141), 1,
      sym_string,
    STATE(8), 1,
      sym_subject,
  [1456] = 1,
    ACTIONS(157), 2,
      anon_sym_on,
      sym_string,
  [1461] = 2,
    ACTIONS(141), 1,
      sym_string,
    STATE(62), 1,
      sym_subject,
  [1468] = 2,
    ACTIONS(159), 1,
      anon_sym_RBRACK,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
  [1475] = 1,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [1480] = 2,
    ACTIONS(165), 1,
      anon_sym_RBRACK,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
  [1487] = 1,
    ACTIONS(169), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [1492] = 1,
    ACTIONS(171), 1,
      anon_sym_RBRACK,
  [1496] = 1,
    ACTIONS(173), 1,
      sym_string,
  [1500] = 1,
    ACTIONS(175), 1,
      anon_sym_that,
  [1504] = 1,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
  [1508] = 1,
    ACTIONS(179), 1,
      anon_sym_case,
  [1512] = 1,
    ACTIONS(181), 1,
      sym_num,
  [1516] = 1,
    ACTIONS(183), 1,
      sym_num,
  [1520] = 1,
    ACTIONS(185), 1,
      anon_sym_that,
  [1524] = 1,
    ACTIONS(25), 1,
      sym_string,
  [1528] = 1,
    ACTIONS(187), 1,
      anon_sym_THAN,
  [1532] = 1,
    ACTIONS(189), 1,
      sym_num,
  [1536] = 1,
    ACTIONS(29), 1,
      sym_string,
  [1540] = 1,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
  [1544] = 1,
    ACTIONS(193), 1,
      sym_num,
  [1548] = 1,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
  [1552] = 1,
    ACTIONS(187), 1,
      anon_sym_TO,
  [1556] = 1,
    ACTIONS(197), 1,
      sym_num,
  [1560] = 1,
    ACTIONS(199), 1,
      sym_num,
  [1564] = 1,
    ACTIONS(201), 1,
      sym_string,
  [1568] = 1,
    ACTIONS(203), 1,
      anon_sym_THEN,
  [1572] = 1,
    ACTIONS(205), 1,
      sym_string,
  [1576] = 1,
    ACTIONS(207), 1,
      anon_sym_case,
  [1580] = 1,
    ACTIONS(209), 1,
      sym_string,
  [1584] = 1,
    ACTIONS(211), 1,
      anon_sym_the,
  [1588] = 1,
    ACTIONS(213), 1,
      anon_sym_RBRACK,
  [1592] = 1,
    ACTIONS(215), 1,
      sym_num,
  [1596] = 1,
    ACTIONS(217), 1,
      sym_num,
  [1600] = 1,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
  [1604] = 1,
    ACTIONS(221), 1,
      anon_sym_is,
  [1608] = 1,
    ACTIONS(223), 1,
      sym_num,
  [1612] = 1,
    ACTIONS(225), 1,
      sym_num,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 80,
  [SMALL_STATE(5)] = 126,
  [SMALL_STATE(6)] = 153,
  [SMALL_STATE(7)] = 180,
  [SMALL_STATE(8)] = 220,
  [SMALL_STATE(9)] = 260,
  [SMALL_STATE(10)] = 304,
  [SMALL_STATE(11)] = 342,
  [SMALL_STATE(12)] = 380,
  [SMALL_STATE(13)] = 412,
  [SMALL_STATE(14)] = 444,
  [SMALL_STATE(15)] = 476,
  [SMALL_STATE(16)] = 508,
  [SMALL_STATE(17)] = 526,
  [SMALL_STATE(18)] = 544,
  [SMALL_STATE(19)] = 576,
  [SMALL_STATE(20)] = 590,
  [SMALL_STATE(21)] = 612,
  [SMALL_STATE(22)] = 634,
  [SMALL_STATE(23)] = 656,
  [SMALL_STATE(24)] = 678,
  [SMALL_STATE(25)] = 700,
  [SMALL_STATE(26)] = 714,
  [SMALL_STATE(27)] = 736,
  [SMALL_STATE(28)] = 758,
  [SMALL_STATE(29)] = 780,
  [SMALL_STATE(30)] = 796,
  [SMALL_STATE(31)] = 807,
  [SMALL_STATE(32)] = 825,
  [SMALL_STATE(33)] = 847,
  [SMALL_STATE(34)] = 857,
  [SMALL_STATE(35)] = 875,
  [SMALL_STATE(36)] = 885,
  [SMALL_STATE(37)] = 904,
  [SMALL_STATE(38)] = 923,
  [SMALL_STATE(39)] = 942,
  [SMALL_STATE(40)] = 950,
  [SMALL_STATE(41)] = 958,
  [SMALL_STATE(42)] = 966,
  [SMALL_STATE(43)] = 974,
  [SMALL_STATE(44)] = 984,
  [SMALL_STATE(45)] = 992,
  [SMALL_STATE(46)] = 1000,
  [SMALL_STATE(47)] = 1008,
  [SMALL_STATE(48)] = 1016,
  [SMALL_STATE(49)] = 1026,
  [SMALL_STATE(50)] = 1034,
  [SMALL_STATE(51)] = 1050,
  [SMALL_STATE(52)] = 1057,
  [SMALL_STATE(53)] = 1070,
  [SMALL_STATE(54)] = 1079,
  [SMALL_STATE(55)] = 1092,
  [SMALL_STATE(56)] = 1101,
  [SMALL_STATE(57)] = 1114,
  [SMALL_STATE(58)] = 1127,
  [SMALL_STATE(59)] = 1140,
  [SMALL_STATE(60)] = 1149,
  [SMALL_STATE(61)] = 1158,
  [SMALL_STATE(62)] = 1167,
  [SMALL_STATE(63)] = 1174,
  [SMALL_STATE(64)] = 1181,
  [SMALL_STATE(65)] = 1190,
  [SMALL_STATE(66)] = 1203,
  [SMALL_STATE(67)] = 1212,
  [SMALL_STATE(68)] = 1225,
  [SMALL_STATE(69)] = 1234,
  [SMALL_STATE(70)] = 1243,
  [SMALL_STATE(71)] = 1252,
  [SMALL_STATE(72)] = 1261,
  [SMALL_STATE(73)] = 1267,
  [SMALL_STATE(74)] = 1273,
  [SMALL_STATE(75)] = 1281,
  [SMALL_STATE(76)] = 1287,
  [SMALL_STATE(77)] = 1295,
  [SMALL_STATE(78)] = 1301,
  [SMALL_STATE(79)] = 1307,
  [SMALL_STATE(80)] = 1313,
  [SMALL_STATE(81)] = 1319,
  [SMALL_STATE(82)] = 1325,
  [SMALL_STATE(83)] = 1331,
  [SMALL_STATE(84)] = 1338,
  [SMALL_STATE(85)] = 1345,
  [SMALL_STATE(86)] = 1352,
  [SMALL_STATE(87)] = 1359,
  [SMALL_STATE(88)] = 1366,
  [SMALL_STATE(89)] = 1371,
  [SMALL_STATE(90)] = 1376,
  [SMALL_STATE(91)] = 1383,
  [SMALL_STATE(92)] = 1390,
  [SMALL_STATE(93)] = 1397,
  [SMALL_STATE(94)] = 1402,
  [SMALL_STATE(95)] = 1409,
  [SMALL_STATE(96)] = 1416,
  [SMALL_STATE(97)] = 1423,
  [SMALL_STATE(98)] = 1428,
  [SMALL_STATE(99)] = 1435,
  [SMALL_STATE(100)] = 1442,
  [SMALL_STATE(101)] = 1449,
  [SMALL_STATE(102)] = 1456,
  [SMALL_STATE(103)] = 1461,
  [SMALL_STATE(104)] = 1468,
  [SMALL_STATE(105)] = 1475,
  [SMALL_STATE(106)] = 1480,
  [SMALL_STATE(107)] = 1487,
  [SMALL_STATE(108)] = 1492,
  [SMALL_STATE(109)] = 1496,
  [SMALL_STATE(110)] = 1500,
  [SMALL_STATE(111)] = 1504,
  [SMALL_STATE(112)] = 1508,
  [SMALL_STATE(113)] = 1512,
  [SMALL_STATE(114)] = 1516,
  [SMALL_STATE(115)] = 1520,
  [SMALL_STATE(116)] = 1524,
  [SMALL_STATE(117)] = 1528,
  [SMALL_STATE(118)] = 1532,
  [SMALL_STATE(119)] = 1536,
  [SMALL_STATE(120)] = 1540,
  [SMALL_STATE(121)] = 1544,
  [SMALL_STATE(122)] = 1548,
  [SMALL_STATE(123)] = 1552,
  [SMALL_STATE(124)] = 1556,
  [SMALL_STATE(125)] = 1560,
  [SMALL_STATE(126)] = 1564,
  [SMALL_STATE(127)] = 1568,
  [SMALL_STATE(128)] = 1572,
  [SMALL_STATE(129)] = 1576,
  [SMALL_STATE(130)] = 1580,
  [SMALL_STATE(131)] = 1584,
  [SMALL_STATE(132)] = 1588,
  [SMALL_STATE(133)] = 1592,
  [SMALL_STATE(134)] = 1596,
  [SMALL_STATE(135)] = 1600,
  [SMALL_STATE(136)] = 1604,
  [SMALL_STATE(137)] = 1608,
  [SMALL_STATE(138)] = 1612,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subject, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 5, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 5, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 2, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 2, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verb_status, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numerical_object, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numerical_expression, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verb, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnumerical_object, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition, 3, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 4, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition, 5, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 6, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition, 6, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 7, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition, 7, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numerical_expression, 3, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_definition, 4, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modal_verb, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identity, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identity, 6, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_OBLIGATION, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PERMISSION, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PROHIBITION, 1, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_definition, 3, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_statement, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_holds, 5, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract, 1, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_holds, 6, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_statement, 4, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_definition, 4, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 2, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [177] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_month, 1, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract, 3, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity, 3, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity, 6, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
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
