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
#define SYMBOL_COUNT 103
#define ALIAS_COUNT 0
#define TOKEN_COUNT 75
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
  anon_sym_LESS = 30,
  anon_sym_THAN = 31,
  anon_sym_EQUAL = 32,
  anon_sym_TO = 33,
  anon_sym_MORE = 34,
  anon_sym_on = 35,
  anon_sym_ANYDATE = 36,
  anon_sym_ADATE = 37,
  anon_sym_THEDATE = 38,
  anon_sym_January = 39,
  anon_sym_February = 40,
  anon_sym_March = 41,
  anon_sym_April = 42,
  anon_sym_May = 43,
  anon_sym_June = 44,
  anon_sym_July = 45,
  anon_sym_August = 46,
  anon_sym_September = 47,
  anon_sym_October = 48,
  anon_sym_November = 49,
  anon_sym_December = 50,
  anon_sym_POUNDS = 51,
  anon_sym_DOLLARS = 52,
  anon_sym_EUROS = 53,
  anon_sym_FRANCS = 54,
  anon_sym_AMOUNT = 55,
  anon_sym_SOMECURRENCY = 56,
  anon_sym_REPORT = 57,
  anon_sym_NAMEDOBJECT = 58,
  anon_sym_OTHEROBJECT = 59,
  sym_string = 60,
  sym_num = 61,
  anon_sym_Must = 62,
  anon_sym_HaveTo = 63,
  anon_sym_NeedTo = 64,
  anon_sym_Should = 65,
  anon_sym_OughtTo = 66,
  anon_sym_Can = 67,
  anon_sym_May2 = 68,
  anon_sym_Could = 69,
  anon_sym_Might = 70,
  anon_sym_MustNot = 71,
  anon_sym_Cannot = 72,
  anon_sym_MayNot = 73,
  anon_sym_ShouldNot = 74,
  sym_contract = 75,
  sym_component = 76,
  sym_definition = 77,
  sym_simple_definition = 78,
  sym_numerical_expression = 79,
  sym_operator = 80,
  sym_conditional_definition = 81,
  sym_statement = 82,
  sym_conditional_statement = 83,
  sym_simple_statement = 84,
  sym_condition = 85,
  sym_simple_condition = 86,
  sym_boolean_expression = 87,
  sym_identity = 88,
  sym_holds = 89,
  sym_subject = 90,
  sym_verb = 91,
  sym_verb_status = 92,
  sym_comparison = 93,
  sym_modal_verb = 94,
  sym_date = 95,
  sym_month = 96,
  sym_object = 97,
  sym_numerical_object = 98,
  sym_nonnumerical_object = 99,
  sym_OBLIGATION = 100,
  sym_PERMISSION = 101,
  sym_PROHIBITION = 102,
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
  [anon_sym_SEND] = anon_sym_SEND,
  [anon_sym_DELIVERED] = anon_sym_DELIVERED,
  [anon_sym_PAID] = anon_sym_PAID,
  [anon_sym_CHARGED] = anon_sym_CHARGED,
  [anon_sym_SENT] = anon_sym_SENT,
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
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 59,
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
  [104] = 84,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 80,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 5,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 6,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 79,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 123,
  [133] = 111,
  [134] = 113,
  [135] = 109,
  [136] = 136,
  [137] = 126,
  [138] = 136,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(278);
      ADVANCE_MAP(
        ' ', 2,
        '(', 292,
        ')', 293,
        'A', 36,
        'C', 8,
        'D', 49,
        'E', 127,
        'F', 142,
        'I', 75,
        'J', 181,
        'L', 50,
        'M', 82,
        'N', 13,
        'O', 131,
        'P', 14,
        'R', 51,
        'S', 58,
        'T', 78,
        '[', 290,
        ']', 291,
        'c', 180,
        'i', 249,
        'n', 233,
        'o', 224,
        't', 211,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        ' ', 2,
        '(', 292,
        ')', 293,
        'A', 36,
        'C', 8,
        'D', 49,
        'E', 127,
        'F', 142,
        'I', 75,
        'J', 181,
        'L', 50,
        'M', 82,
        'N', 13,
        'O', 131,
        'P', 14,
        'R', 51,
        'S', 58,
        'T', 78,
        '[', 290,
        ']', 291,
        'c', 180,
        'i', 249,
        'n', 233,
        'o', 224,
        't', 211,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        ' ', 2,
        '(', 292,
        ')', 293,
        'A', 36,
        'C', 9,
        'D', 49,
        'E', 127,
        'F', 142,
        'H', 185,
        'I', 75,
        'J', 181,
        'L', 50,
        'M', 81,
        'N', 12,
        'O', 132,
        'P', 14,
        'R', 51,
        'S', 59,
        'T', 78,
        '[', 290,
        ']', 291,
        'c', 180,
        'i', 249,
        'n', 233,
        'o', 224,
        't', 211,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        ' ', 4,
        'A', 111,
        'C', 10,
        'D', 74,
        'E', 128,
        'I', 75,
        'M', 84,
        'O', 130,
        'P', 19,
        'S', 67,
        'T', 80,
        'o', 224,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(3);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        ' ', 4,
        'A', 111,
        'C', 11,
        'D', 74,
        'E', 128,
        'H', 185,
        'I', 75,
        'M', 83,
        'N', 196,
        'O', 133,
        'P', 19,
        'S', 68,
        'T', 80,
        'o', 224,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(3);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(162);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(163);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(164);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == 'H') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == 'H') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(226);
      if (lookahead == 'o') ADVANCE(265);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == 'H') ADVANCE(27);
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == 'H') ADVANCE(27);
      if (lookahead == 'a') ADVANCE(226);
      if (lookahead == 'o') ADVANCE(265);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(100);
      if (lookahead == 'e') ADVANCE(197);
      if (lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(87);
      if (lookahead == 'L') ADVANCE(168);
      if (lookahead == 'O') ADVANCE(173);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(165);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        'A', 99,
        'D', 118,
        'E', 129,
        'F', 142,
        'J', 181,
        'L', 50,
        'M', 119,
        'N', 13,
        'O', 156,
        'P', 120,
        'R', 51,
        'S', 123,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(134);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(108);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(86);
      if (lookahead == 'L') ADVANCE(168);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(93);
      END_STATE();
    case 21:
      if (lookahead == 'A') ADVANCE(104);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(96);
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(139);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(105);
      if (lookahead == 'E') ADVANCE(48);
      END_STATE();
    case 25:
      if (lookahead == 'A') ADVANCE(94);
      END_STATE();
    case 26:
      if (lookahead == 'A') ADVANCE(166);
      END_STATE();
    case 27:
      if (lookahead == 'A') ADVANCE(141);
      END_STATE();
    case 28:
      if (lookahead == 'A') ADVANCE(167);
      END_STATE();
    case 29:
      if (lookahead == 'B') ADVANCE(90);
      END_STATE();
    case 30:
      if (lookahead == 'B') ADVANCE(91);
      END_STATE();
    case 31:
      if (lookahead == 'C') ADVANCE(179);
      END_STATE();
    case 32:
      if (lookahead == 'C') ADVANCE(172);
      END_STATE();
    case 33:
      if (lookahead == 'C') ADVANCE(152);
      END_STATE();
    case 34:
      if (lookahead == 'C') ADVANCE(160);
      END_STATE();
    case 35:
      if (lookahead == 'C') ADVANCE(161);
      END_STATE();
    case 36:
      if (lookahead == 'D') ADVANCE(15);
      if (lookahead == 'M') ADVANCE(124);
      if (lookahead == 'N') ADVANCE(38);
      if (lookahead == 'p') ADVANCE(240);
      if (lookahead == 'u') ADVANCE(209);
      END_STATE();
    case 37:
      if (lookahead == 'D') ADVANCE(280);
      END_STATE();
    case 38:
      if (lookahead == 'D') ADVANCE(280);
      if (lookahead == 'Y') ADVANCE(47);
      END_STATE();
    case 39:
      if (lookahead == 'D') ADVANCE(306);
      END_STATE();
    case 40:
      if (lookahead == 'D') ADVANCE(304);
      if (lookahead == 'T') ADVANCE(308);
      END_STATE();
    case 41:
      if (lookahead == 'D') ADVANCE(279);
      END_STATE();
    case 42:
      if (lookahead == 'D') ADVANCE(307);
      END_STATE();
    case 43:
      if (lookahead == 'D') ADVANCE(305);
      END_STATE();
    case 44:
      if (lookahead == 'D') ADVANCE(117);
      END_STATE();
    case 45:
      if (lookahead == 'D') ADVANCE(153);
      END_STATE();
    case 46:
      if (lookahead == 'D') ADVANCE(55);
      END_STATE();
    case 47:
      if (lookahead == 'D') ADVANCE(26);
      END_STATE();
    case 48:
      if (lookahead == 'D') ADVANCE(28);
      if (lookahead == 'N') ADVANCE(288);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(92);
      if (lookahead == 'I') ADVANCE(176);
      if (lookahead == 'O') ADVANCE(95);
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(155);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(126);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(314);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(318);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(303);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(286);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(317);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(319);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(103);
      if (lookahead == 'O') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(103);
      if (lookahead == 'O') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead == 'h') ADVANCE(238);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(32);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(34);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(44);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(135);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(150);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(109);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(42);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(112);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(112);
      if (lookahead == 'h') ADVANCE(238);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(43);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(106);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(145);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(35);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(144);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(98);
      if (lookahead == 'I') ADVANCE(176);
      END_STATE();
    case 75:
      if (lookahead == 'F') ADVANCE(287);
      if (lookahead == 'S') ADVANCE(281);
      END_STATE();
    case 76:
      if (lookahead == 'G') ADVANCE(54);
      END_STATE();
    case 77:
      if (lookahead == 'G') ADVANCE(66);
      END_STATE();
    case 78:
      if (lookahead == 'H') ADVANCE(24);
      if (lookahead == 'I') ADVANCE(102);
      if (lookahead == 'O') ADVANCE(313);
      END_STATE();
    case 79:
      if (lookahead == 'H') ADVANCE(71);
      END_STATE();
    case 80:
      if (lookahead == 'H') ADVANCE(70);
      if (lookahead == 'I') ADVANCE(102);
      END_STATE();
    case 81:
      if (lookahead == 'I') ADVANCE(113);
      if (lookahead == 'O') ADVANCE(137);
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == 'i') ADVANCE(208);
      if (lookahead == 'u') ADVANCE(250);
      END_STATE();
    case 82:
      if (lookahead == 'I') ADVANCE(113);
      if (lookahead == 'O') ADVANCE(137);
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == 'u') ADVANCE(250);
      END_STATE();
    case 83:
      if (lookahead == 'I') ADVANCE(113);
      if (lookahead == 'a') ADVANCE(275);
      if (lookahead == 'i') ADVANCE(208);
      if (lookahead == 'u') ADVANCE(250);
      END_STATE();
    case 84:
      if (lookahead == 'I') ADVANCE(113);
      if (lookahead == 'u') ADVANCE(250);
      END_STATE();
    case 85:
      if (lookahead == 'I') ADVANCE(177);
      END_STATE();
    case 86:
      if (lookahead == 'I') ADVANCE(39);
      END_STATE();
    case 87:
      if (lookahead == 'I') ADVANCE(39);
      if (lookahead == 'Y') ADVANCE(302);
      END_STATE();
    case 88:
      if (lookahead == 'I') ADVANCE(46);
      END_STATE();
    case 89:
      if (lookahead == 'I') ADVANCE(178);
      END_STATE();
    case 90:
      if (lookahead == 'J') ADVANCE(61);
      END_STATE();
    case 91:
      if (lookahead == 'J') ADVANCE(72);
      END_STATE();
    case 92:
      if (lookahead == 'L') ADVANCE(85);
      END_STATE();
    case 93:
      if (lookahead == 'L') ADVANCE(312);
      END_STATE();
    case 94:
      if (lookahead == 'L') ADVANCE(311);
      END_STATE();
    case 95:
      if (lookahead == 'L') ADVANCE(97);
      END_STATE();
    case 96:
      if (lookahead == 'L') ADVANCE(151);
      END_STATE();
    case 97:
      if (lookahead == 'L') ADVANCE(23);
      END_STATE();
    case 98:
      if (lookahead == 'L') ADVANCE(89);
      END_STATE();
    case 99:
      if (lookahead == 'M') ADVANCE(124);
      if (lookahead == 'p') ADVANCE(240);
      if (lookahead == 'u') ADVANCE(209);
      END_STATE();
    case 100:
      if (lookahead == 'M') ADVANCE(62);
      END_STATE();
    case 101:
      if (lookahead == 'M') ADVANCE(60);
      END_STATE();
    case 102:
      if (lookahead == 'M') ADVANCE(64);
      END_STATE();
    case 103:
      if (lookahead == 'N') ADVANCE(40);
      END_STATE();
    case 104:
      if (lookahead == 'N') ADVANCE(33);
      END_STATE();
    case 105:
      if (lookahead == 'N') ADVANCE(310);
      END_STATE();
    case 106:
      if (lookahead == 'N') ADVANCE(288);
      END_STATE();
    case 107:
      if (lookahead == 'N') ADVANCE(158);
      END_STATE();
    case 108:
      if (lookahead == 'N') ADVANCE(41);
      END_STATE();
    case 109:
      if (lookahead == 'N') ADVANCE(31);
      END_STATE();
    case 110:
      if (lookahead == 'N') ADVANCE(45);
      END_STATE();
    case 111:
      if (lookahead == 'N') ADVANCE(37);
      END_STATE();
    case 112:
      if (lookahead == 'N') ADVANCE(157);
      END_STATE();
    case 113:
      if (lookahead == 'N') ADVANCE(170);
      END_STATE();
    case 114:
      if (lookahead == 'N') ADVANCE(235);
      END_STATE();
    case 115:
      if (lookahead == 'N') ADVANCE(236);
      END_STATE();
    case 116:
      if (lookahead == 'N') ADVANCE(237);
      END_STATE();
    case 117:
      if (lookahead == 'O') ADVANCE(29);
      END_STATE();
    case 118:
      if (lookahead == 'O') ADVANCE(95);
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 119:
      if (lookahead == 'O') ADVANCE(137);
      if (lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 120:
      if (lookahead == 'O') ADVANCE(173);
      END_STATE();
    case 121:
      if (lookahead == 'O') ADVANCE(138);
      END_STATE();
    case 122:
      if (lookahead == 'O') ADVANCE(148);
      END_STATE();
    case 123:
      if (lookahead == 'O') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 124:
      if (lookahead == 'O') ADVANCE(171);
      END_STATE();
    case 125:
      if (lookahead == 'O') ADVANCE(30);
      END_STATE();
    case 126:
      if (lookahead == 'P') ADVANCE(121);
      END_STATE();
    case 127:
      if (lookahead == 'Q') ADVANCE(169);
      if (lookahead == 'U') ADVANCE(136);
      END_STATE();
    case 128:
      if (lookahead == 'Q') ADVANCE(174);
      END_STATE();
    case 129:
      if (lookahead == 'Q') ADVANCE(175);
      if (lookahead == 'U') ADVANCE(136);
      END_STATE();
    case 130:
      if (lookahead == 'R') ADVANCE(289);
      END_STATE();
    case 131:
      if (lookahead == 'R') ADVANCE(289);
      if (lookahead == 'T') ADVANCE(79);
      if (lookahead == 'c') ADVANCE(262);
      END_STATE();
    case 132:
      if (lookahead == 'R') ADVANCE(289);
      if (lookahead == 'T') ADVANCE(79);
      if (lookahead == 'c') ADVANCE(262);
      if (lookahead == 'u') ADVANCE(210);
      END_STATE();
    case 133:
      if (lookahead == 'R') ADVANCE(289);
      if (lookahead == 'u') ADVANCE(210);
      END_STATE();
    case 134:
      if (lookahead == 'R') ADVANCE(76);
      END_STATE();
    case 135:
      if (lookahead == 'R') ADVANCE(301);
      END_STATE();
    case 136:
      if (lookahead == 'R') ADVANCE(122);
      END_STATE();
    case 137:
      if (lookahead == 'R') ADVANCE(52);
      END_STATE();
    case 138:
      if (lookahead == 'R') ADVANCE(159);
      END_STATE();
    case 139:
      if (lookahead == 'R') ADVANCE(154);
      END_STATE();
    case 140:
      if (lookahead == 'R') ADVANCE(65);
      END_STATE();
    case 141:
      if (lookahead == 'R') ADVANCE(77);
      END_STATE();
    case 142:
      if (lookahead == 'R') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 143:
      if (lookahead == 'R') ADVANCE(140);
      END_STATE();
    case 144:
      if (lookahead == 'R') ADVANCE(69);
      END_STATE();
    case 145:
      if (lookahead == 'R') ADVANCE(125);
      END_STATE();
    case 146:
      if (lookahead == 'S') ADVANCE(309);
      END_STATE();
    case 147:
      if (lookahead == 'S') ADVANCE(283);
      END_STATE();
    case 148:
      if (lookahead == 'S') ADVANCE(334);
      END_STATE();
    case 149:
      if (lookahead == 'S') ADVANCE(284);
      END_STATE();
    case 150:
      if (lookahead == 'S') ADVANCE(285);
      END_STATE();
    case 151:
      if (lookahead == 'S') ADVANCE(282);
      END_STATE();
    case 152:
      if (lookahead == 'S') ADVANCE(335);
      END_STATE();
    case 153:
      if (lookahead == 'S') ADVANCE(332);
      END_STATE();
    case 154:
      if (lookahead == 'S') ADVANCE(333);
      END_STATE();
    case 155:
      if (lookahead == 'S') ADVANCE(146);
      END_STATE();
    case 156:
      if (lookahead == 'T') ADVANCE(79);
      if (lookahead == 'c') ADVANCE(262);
      END_STATE();
    case 157:
      if (lookahead == 'T') ADVANCE(308);
      END_STATE();
    case 158:
      if (lookahead == 'T') ADVANCE(336);
      END_STATE();
    case 159:
      if (lookahead == 'T') ADVANCE(338);
      END_STATE();
    case 160:
      if (lookahead == 'T') ADVANCE(339);
      END_STATE();
    case 161:
      if (lookahead == 'T') ADVANCE(340);
      END_STATE();
    case 162:
      if (lookahead == 'T') ADVANCE(228);
      END_STATE();
    case 163:
      if (lookahead == 'T') ADVANCE(229);
      END_STATE();
    case 164:
      if (lookahead == 'T') ADVANCE(230);
      END_STATE();
    case 165:
      if (lookahead == 'T') ADVANCE(53);
      END_STATE();
    case 166:
      if (lookahead == 'T') ADVANCE(56);
      END_STATE();
    case 167:
      if (lookahead == 'T') ADVANCE(57);
      END_STATE();
    case 168:
      if (lookahead == 'U') ADVANCE(147);
      END_STATE();
    case 169:
      if (lookahead == 'U') ADVANCE(20);
      END_STATE();
    case 170:
      if (lookahead == 'U') ADVANCE(149);
      END_STATE();
    case 171:
      if (lookahead == 'U') ADVANCE(107);
      END_STATE();
    case 172:
      if (lookahead == 'U') ADVANCE(143);
      END_STATE();
    case 173:
      if (lookahead == 'U') ADVANCE(110);
      END_STATE();
    case 174:
      if (lookahead == 'U') ADVANCE(22);
      END_STATE();
    case 175:
      if (lookahead == 'U') ADVANCE(25);
      END_STATE();
    case 176:
      if (lookahead == 'V') ADVANCE(88);
      END_STATE();
    case 177:
      if (lookahead == 'V') ADVANCE(63);
      END_STATE();
    case 178:
      if (lookahead == 'V') ADVANCE(73);
      END_STATE();
    case 179:
      if (lookahead == 'Y') ADVANCE(337);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead == 'u') ADVANCE(217);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(247);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(255);
      if (lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(270);
      END_STATE();
    case 186:
      if (lookahead == 'b') ADVANCE(248);
      END_STATE();
    case 187:
      if (lookahead == 'b') ADVANCE(202);
      END_STATE();
    case 188:
      if (lookahead == 'b') ADVANCE(203);
      END_STATE();
    case 189:
      if (lookahead == 'b') ADVANCE(204);
      END_STATE();
    case 190:
      if (lookahead == 'b') ADVANCE(205);
      END_STATE();
    case 191:
      if (lookahead == 'c') ADVANCE(198);
      END_STATE();
    case 192:
      if (lookahead == 'c') ADVANCE(212);
      END_STATE();
    case 193:
      if (lookahead == 'd') ADVANCE(353);
      END_STATE();
    case 194:
      if (lookahead == 'd') ADVANCE(348);
      END_STATE();
    case 195:
      if (lookahead == 'd') ADVANCE(6);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 208:
      if (lookahead == 'g') ADVANCE(213);
      END_STATE();
    case 209:
      if (lookahead == 'g') ADVANCE(267);
      END_STATE();
    case 210:
      if (lookahead == 'g') ADVANCE(214);
      END_STATE();
    case 211:
      if (lookahead == 'h') ADVANCE(184);
      END_STATE();
    case 212:
      if (lookahead == 'h') ADVANCE(322);
      END_STATE();
    case 213:
      if (lookahead == 'h') ADVANCE(256);
      END_STATE();
    case 214:
      if (lookahead == 'h') ADVANCE(263);
      END_STATE();
    case 215:
      if (lookahead == 'i') ADVANCE(342);
      if (lookahead == 'o') ADVANCE(341);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 216:
      if (lookahead == 'i') ADVANCE(218);
      END_STATE();
    case 217:
      if (lookahead == 'l') ADVANCE(272);
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 218:
      if (lookahead == 'l') ADVANCE(323);
      END_STATE();
    case 219:
      if (lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 220:
      if (lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 221:
      if (lookahead == 'm') ADVANCE(188);
      END_STATE();
    case 222:
      if (lookahead == 'm') ADVANCE(189);
      END_STATE();
    case 223:
      if (lookahead == 'm') ADVANCE(190);
      END_STATE();
    case 224:
      if (lookahead == 'n') ADVANCE(315);
      END_STATE();
    case 225:
      if (lookahead == 'n') ADVANCE(350);
      END_STATE();
    case 226:
      if (lookahead == 'n') ADVANCE(351);
      END_STATE();
    case 227:
      if (lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 228:
      if (lookahead == 'o') ADVANCE(346);
      END_STATE();
    case 229:
      if (lookahead == 'o') ADVANCE(347);
      END_STATE();
    case 230:
      if (lookahead == 'o') ADVANCE(349);
      END_STATE();
    case 231:
      if (lookahead == 'o') ADVANCE(341);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 232:
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 233:
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 234:
      if (lookahead == 'o') ADVANCE(258);
      END_STATE();
    case 235:
      if (lookahead == 'o') ADVANCE(259);
      END_STATE();
    case 236:
      if (lookahead == 'o') ADVANCE(260);
      END_STATE();
    case 237:
      if (lookahead == 'o') ADVANCE(261);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(268);
      END_STATE();
    case 239:
      if (lookahead == 'p') ADVANCE(264);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(329);
      END_STATE();
    case 242:
      if (lookahead == 'r') ADVANCE(331);
      END_STATE();
    case 243:
      if (lookahead == 'r') ADVANCE(330);
      END_STATE();
    case 244:
      if (lookahead == 'r') ADVANCE(328);
      END_STATE();
    case 245:
      if (lookahead == 'r') ADVANCE(192);
      if (lookahead == 'y') ADVANCE(324);
      END_STATE();
    case 246:
      if (lookahead == 'r') ADVANCE(273);
      END_STATE();
    case 247:
      if (lookahead == 'r') ADVANCE(274);
      END_STATE();
    case 248:
      if (lookahead == 'r') ADVANCE(269);
      END_STATE();
    case 249:
      if (lookahead == 's') ADVANCE(296);
      if (lookahead == 't') ADVANCE(294);
      END_STATE();
    case 250:
      if (lookahead == 's') ADVANCE(254);
      END_STATE();
    case 251:
      if (lookahead == 's') ADVANCE(200);
      END_STATE();
    case 252:
      if (lookahead == 's') ADVANCE(257);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(345);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(354);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(327);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(356);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(355);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(358);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(357);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 265:
      if (lookahead == 'u') ADVANCE(219);
      END_STATE();
    case 266:
      if (lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 267:
      if (lookahead == 'u') ADVANCE(252);
      END_STATE();
    case 268:
      if (lookahead == 'u') ADVANCE(220);
      END_STATE();
    case 269:
      if (lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 270:
      if (lookahead == 'v') ADVANCE(201);
      END_STATE();
    case 271:
      if (lookahead == 'v') ADVANCE(206);
      END_STATE();
    case 272:
      if (lookahead == 'y') ADVANCE(326);
      END_STATE();
    case 273:
      if (lookahead == 'y') ADVANCE(320);
      END_STATE();
    case 274:
      if (lookahead == 'y') ADVANCE(321);
      END_STATE();
    case 275:
      if (lookahead == 'y') ADVANCE(352);
      END_STATE();
    case 276:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(276);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 277:
      if (eof) ADVANCE(278);
      ADVANCE_MAP(
        ' ', 4,
        'A', 111,
        'C', 10,
        'D', 74,
        'E', 128,
        'I', 75,
        'M', 84,
        'O', 130,
        'P', 19,
        'S', 67,
        'T', 80,
        'o', 224,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_C_DASHAND);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_IS);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_EQUALS);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_MINUS);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_TIMES);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_DIVIDE);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_THEN);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_it);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_it);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_the);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_that);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_DELIVER);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_PAY);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_CHARGE);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_SEND);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_DELIVERED);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_PAID);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_CHARGED);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_SENT);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_LESS);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_THAN);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_EQUAL);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_EQUAL);
      if (lookahead == 'S') ADVANCE(282);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_TO);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_MORE);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_on);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_ANYDATE);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_ADATE);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_THEDATE);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_January);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_February);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_March);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_April);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_May);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_June);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_July);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_August);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_September);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_October);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_November);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_December);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_POUNDS);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_DOLLARS);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_EUROS);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_FRANCS);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_AMOUNT);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_SOMECURRENCY);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_REPORT);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_NAMEDOBJECT);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_OTHEROBJECT);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(316);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_string);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_Must);
      if (lookahead == ' ') ADVANCE(114);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_HaveTo);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_NeedTo);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_Should);
      if (lookahead == ' ') ADVANCE(115);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_OughtTo);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_Can);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_Can);
      if (lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_May2);
      if (lookahead == ' ') ADVANCE(116);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_Could);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_Might);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_MustNot);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_Cannot);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_MayNot);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_ShouldNot);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 277},
  [3] = {.lex_state = 277},
  [4] = {.lex_state = 277},
  [5] = {.lex_state = 277},
  [6] = {.lex_state = 277},
  [7] = {.lex_state = 277},
  [8] = {.lex_state = 277},
  [9] = {.lex_state = 277},
  [10] = {.lex_state = 277},
  [11] = {.lex_state = 277},
  [12] = {.lex_state = 277},
  [13] = {.lex_state = 277},
  [14] = {.lex_state = 16},
  [15] = {.lex_state = 16},
  [16] = {.lex_state = 16},
  [17] = {.lex_state = 16},
  [18] = {.lex_state = 16},
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
  [35] = {.lex_state = 215},
  [36] = {.lex_state = 215},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 215},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 277},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 277},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 231},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 231},
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
  [79] = {.lex_state = 215},
  [80] = {.lex_state = 215},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 276},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 276},
  [88] = {.lex_state = 277},
  [89] = {.lex_state = 276},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 276},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 276},
  [98] = {.lex_state = 231},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 276},
  [101] = {.lex_state = 276},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 231},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 276},
  [108] = {.lex_state = 276},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 276},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 276},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 276},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 276},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 276},
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
    [anon_sym_SEND] = ACTIONS(1),
    [anon_sym_PAID] = ACTIONS(1),
    [anon_sym_SENT] = ACTIONS(1),
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
    [sym_contract] = STATE(129),
    [sym_component] = STATE(105),
    [sym_definition] = STATE(78),
    [sym_simple_definition] = STATE(65),
    [sym_conditional_definition] = STATE(91),
    [sym_statement] = STATE(82),
    [sym_conditional_statement] = STATE(91),
    [sym_simple_statement] = STATE(41),
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
  [35] = 11,
    ACTIONS(13), 1,
      anon_sym_on,
    STATE(14), 1,
      sym_verb_status,
    STATE(45), 1,
      sym_modal_verb,
    STATE(46), 1,
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
    ACTIONS(17), 3,
      anon_sym_HaveTo,
      anon_sym_NeedTo,
      anon_sym_OughtTo,
    STATE(71), 3,
      sym_OBLIGATION,
      sym_PERMISSION,
      sym_PROHIBITION,
    ACTIONS(11), 4,
      anon_sym_DELIVERED,
      anon_sym_PAID,
      anon_sym_CHARGED,
      anon_sym_SENT,
    ACTIONS(23), 4,
      anon_sym_MustNot,
      anon_sym_Cannot,
      anon_sym_MayNot,
      anon_sym_ShouldNot,
  [82] = 11,
    ACTIONS(13), 1,
      anon_sym_on,
    STATE(15), 1,
      sym_verb_status,
    STATE(48), 1,
      sym_modal_verb,
    STATE(49), 1,
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
    ACTIONS(17), 3,
      anon_sym_HaveTo,
      anon_sym_NeedTo,
      anon_sym_OughtTo,
    STATE(71), 3,
      sym_OBLIGATION,
      sym_PERMISSION,
      sym_PROHIBITION,
    ACTIONS(11), 4,
      anon_sym_DELIVERED,
      anon_sym_PAID,
      anon_sym_CHARGED,
      anon_sym_SENT,
    ACTIONS(23), 4,
      anon_sym_MustNot,
      anon_sym_Cannot,
      anon_sym_MayNot,
      anon_sym_ShouldNot,
  [129] = 2,
    ACTIONS(27), 4,
      anon_sym_Must,
      anon_sym_Should,
      anon_sym_Can,
      anon_sym_May2,
    ACTIONS(25), 19,
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
  [157] = 2,
    ACTIONS(31), 4,
      anon_sym_Must,
      anon_sym_Should,
      anon_sym_Can,
      anon_sym_May2,
    ACTIONS(29), 19,
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
  [185] = 9,
    STATE(19), 1,
      sym_verb_status,
    STATE(40), 1,
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
    STATE(71), 3,
      sym_OBLIGATION,
      sym_PERMISSION,
      sym_PROHIBITION,
    ACTIONS(11), 4,
      anon_sym_DELIVERED,
      anon_sym_PAID,
      anon_sym_CHARGED,
      anon_sym_SENT,
    ACTIONS(23), 4,
      anon_sym_MustNot,
      anon_sym_Cannot,
      anon_sym_MayNot,
      anon_sym_ShouldNot,
  [226] = 9,
    STATE(22), 1,
      sym_verb_status,
    STATE(51), 1,
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
    STATE(71), 3,
      sym_OBLIGATION,
      sym_PERMISSION,
      sym_PROHIBITION,
    ACTIONS(11), 4,
      anon_sym_DELIVERED,
      anon_sym_PAID,
      anon_sym_CHARGED,
      anon_sym_SENT,
    ACTIONS(23), 4,
      anon_sym_MustNot,
      anon_sym_Cannot,
      anon_sym_MayNot,
      anon_sym_ShouldNot,
  [267] = 11,
    ACTIONS(13), 1,
      anon_sym_on,
    ACTIONS(33), 1,
      anon_sym_IS,
    ACTIONS(35), 1,
      anon_sym_EQUALS,
    STATE(12), 1,
      sym_date,
    STATE(42), 1,
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
    STATE(71), 3,
      sym_OBLIGATION,
      sym_PERMISSION,
      sym_PROHIBITION,
    ACTIONS(23), 4,
      anon_sym_MustNot,
      anon_sym_Cannot,
      anon_sym_MayNot,
      anon_sym_ShouldNot,
  [311] = 9,
    ACTIONS(13), 1,
      anon_sym_on,
    STATE(13), 1,
      sym_date,
    STATE(47), 1,
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
    STATE(71), 3,
      sym_OBLIGATION,
      sym_PERMISSION,
      sym_PROHIBITION,
    ACTIONS(23), 4,
      anon_sym_MustNot,
      anon_sym_Cannot,
      anon_sym_MayNot,
      anon_sym_ShouldNot,
  [349] = 9,
    ACTIONS(13), 1,
      anon_sym_on,
    STATE(12), 1,
      sym_date,
    STATE(42), 1,
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
    STATE(71), 3,
      sym_OBLIGATION,
      sym_PERMISSION,
      sym_PROHIBITION,
    ACTIONS(23), 4,
      anon_sym_MustNot,
      anon_sym_Cannot,
      anon_sym_MayNot,
      anon_sym_ShouldNot,
  [387] = 7,
    STATE(40), 1,
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
    STATE(71), 3,
      sym_OBLIGATION,
      sym_PERMISSION,
      sym_PROHIBITION,
    ACTIONS(23), 4,
      anon_sym_MustNot,
      anon_sym_Cannot,
      anon_sym_MayNot,
      anon_sym_ShouldNot,
  [419] = 7,
    STATE(51), 1,
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
    STATE(71), 3,
      sym_OBLIGATION,
      sym_PERMISSION,
      sym_PROHIBITION,
    ACTIONS(23), 4,
      anon_sym_MustNot,
      anon_sym_Cannot,
      anon_sym_MayNot,
      anon_sym_ShouldNot,
  [451] = 8,
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
    STATE(34), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(41), 4,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_FRANCS,
    ACTIONS(45), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [484] = 8,
    ACTIONS(39), 1,
      anon_sym_EQUAL,
    ACTIONS(43), 1,
      anon_sym_AMOUNT,
    STATE(85), 1,
      sym_comparison,
    STATE(95), 1,
      sym_object,
    ACTIONS(37), 2,
      anon_sym_LESS,
      anon_sym_MORE,
    STATE(34), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(41), 4,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_FRANCS,
    ACTIONS(45), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [517] = 2,
    STATE(111), 1,
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
  [535] = 2,
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
  [553] = 1,
    ACTIONS(49), 12,
      anon_sym_LESS,
      anon_sym_EQUAL,
      anon_sym_MORE,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_FRANCS,
      anon_sym_AMOUNT,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [568] = 5,
    ACTIONS(43), 1,
      anon_sym_AMOUNT,
    STATE(93), 1,
      sym_object,
    STATE(34), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(41), 4,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_FRANCS,
    ACTIONS(45), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [591] = 5,
    ACTIONS(43), 1,
      anon_sym_AMOUNT,
    STATE(95), 1,
      sym_object,
    STATE(34), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(41), 4,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_FRANCS,
    ACTIONS(45), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [614] = 5,
    ACTIONS(43), 1,
      anon_sym_AMOUNT,
    STATE(54), 1,
      sym_object,
    STATE(34), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(41), 4,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_FRANCS,
    ACTIONS(45), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [637] = 5,
    ACTIONS(43), 1,
      anon_sym_AMOUNT,
    STATE(99), 1,
      sym_object,
    STATE(34), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(41), 4,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_FRANCS,
    ACTIONS(45), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [660] = 5,
    ACTIONS(43), 1,
      anon_sym_AMOUNT,
    STATE(102), 1,
      sym_object,
    STATE(34), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(41), 4,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_FRANCS,
    ACTIONS(45), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [683] = 5,
    ACTIONS(43), 1,
      anon_sym_AMOUNT,
    STATE(55), 1,
      sym_object,
    STATE(34), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(41), 4,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_FRANCS,
    ACTIONS(45), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [706] = 5,
    ACTIONS(43), 1,
      anon_sym_AMOUNT,
    STATE(57), 1,
      sym_object,
    STATE(34), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(41), 4,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_FRANCS,
    ACTIONS(45), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [729] = 5,
    ACTIONS(43), 1,
      anon_sym_AMOUNT,
    STATE(56), 1,
      sym_object,
    STATE(34), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(41), 4,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_FRANCS,
    ACTIONS(45), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [752] = 10,
    ACTIONS(3), 1,
      anon_sym_IF,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      sym_identity,
    STATE(41), 1,
      sym_simple_statement,
    STATE(65), 1,
      sym_simple_definition,
    STATE(78), 1,
      sym_definition,
    STATE(82), 1,
      sym_statement,
    STATE(105), 1,
      sym_component,
    STATE(127), 1,
      sym_contract,
    STATE(91), 2,
      sym_conditional_definition,
      sym_conditional_statement,
  [784] = 1,
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
  [798] = 3,
    STATE(32), 1,
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
  [814] = 1,
    ACTIONS(57), 9,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_FRANCS,
      anon_sym_AMOUNT,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [826] = 5,
    ACTIONS(43), 1,
      anon_sym_AMOUNT,
    ACTIONS(59), 1,
      sym_num,
    STATE(29), 1,
      sym_numerical_object,
    STATE(74), 1,
      sym_numerical_expression,
    ACTIONS(41), 4,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_FRANCS,
  [845] = 5,
    ACTIONS(43), 1,
      anon_sym_AMOUNT,
    ACTIONS(59), 1,
      sym_num,
    STATE(29), 1,
      sym_numerical_object,
    STATE(73), 1,
      sym_numerical_expression,
    ACTIONS(41), 4,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_FRANCS,
  [864] = 1,
    ACTIONS(61), 7,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_OR,
      anon_sym_on,
  [874] = 1,
    ACTIONS(63), 7,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_OR,
      anon_sym_on,
  [884] = 7,
    ACTIONS(65), 1,
      anon_sym_it,
    ACTIONS(67), 1,
      anon_sym_on,
    ACTIONS(69), 1,
      sym_string,
    STATE(3), 1,
      sym_subject,
    STATE(50), 1,
      sym_boolean_expression,
    STATE(52), 1,
      sym_holds,
    STATE(92), 1,
      sym_date,
  [906] = 6,
    ACTIONS(65), 1,
      anon_sym_it,
    ACTIONS(67), 1,
      anon_sym_on,
    ACTIONS(69), 1,
      sym_string,
    STATE(9), 1,
      sym_subject,
    STATE(62), 1,
      sym_holds,
    STATE(87), 1,
      sym_date,
  [925] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      sym_identity,
    STATE(41), 1,
      sym_simple_statement,
    STATE(65), 1,
      sym_simple_definition,
    STATE(90), 1,
      sym_definition,
    STATE(94), 1,
      sym_statement,
  [944] = 6,
    ACTIONS(65), 1,
      anon_sym_it,
    ACTIONS(67), 1,
      anon_sym_on,
    ACTIONS(69), 1,
      sym_string,
    STATE(11), 1,
      sym_subject,
    STATE(62), 1,
      sym_holds,
    STATE(87), 1,
      sym_date,
  [963] = 1,
    ACTIONS(71), 6,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_FRANCS,
      anon_sym_AMOUNT,
      sym_num,
  [972] = 2,
    STATE(24), 1,
      sym_verb,
    ACTIONS(73), 4,
      anon_sym_DELIVER,
      anon_sym_PAY,
      anon_sym_CHARGE,
      anon_sym_SEND,
  [982] = 2,
    ACTIONS(77), 2,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(75), 3,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
  [992] = 2,
    STATE(19), 1,
      sym_verb,
    ACTIONS(73), 4,
      anon_sym_DELIVER,
      anon_sym_PAY,
      anon_sym_CHARGE,
      anon_sym_SEND,
  [1002] = 2,
    ACTIONS(81), 2,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(79), 3,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_THEN,
  [1012] = 1,
    ACTIONS(83), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_OR,
  [1020] = 2,
    STATE(20), 1,
      sym_verb,
    ACTIONS(73), 4,
      anon_sym_DELIVER,
      anon_sym_PAY,
      anon_sym_CHARGE,
      anon_sym_SEND,
  [1030] = 2,
    STATE(21), 1,
      sym_verb_status,
    ACTIONS(11), 4,
      anon_sym_DELIVERED,
      anon_sym_PAID,
      anon_sym_CHARGED,
      anon_sym_SENT,
  [1040] = 2,
    STATE(22), 1,
      sym_verb,
    ACTIONS(73), 4,
      anon_sym_DELIVER,
      anon_sym_PAY,
      anon_sym_CHARGE,
      anon_sym_SEND,
  [1050] = 2,
    STATE(23), 1,
      sym_verb,
    ACTIONS(73), 4,
      anon_sym_DELIVER,
      anon_sym_PAY,
      anon_sym_CHARGE,
      anon_sym_SEND,
  [1060] = 2,
    STATE(26), 1,
      sym_verb_status,
    ACTIONS(11), 4,
      anon_sym_DELIVERED,
      anon_sym_PAID,
      anon_sym_CHARGED,
      anon_sym_SENT,
  [1070] = 1,
    ACTIONS(85), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_OR,
  [1078] = 2,
    STATE(25), 1,
      sym_verb,
    ACTIONS(73), 4,
      anon_sym_DELIVER,
      anon_sym_PAY,
      anon_sym_CHARGE,
      anon_sym_SEND,
  [1088] = 5,
    ACTIONS(67), 1,
      anon_sym_on,
    ACTIONS(69), 1,
      sym_string,
    STATE(4), 1,
      sym_subject,
    STATE(44), 1,
      sym_boolean_expression,
    STATE(101), 1,
      sym_date,
  [1104] = 1,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_OR,
  [1112] = 1,
    ACTIONS(89), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_OR,
  [1120] = 1,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_OR,
  [1128] = 1,
    ACTIONS(93), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_OR,
  [1136] = 1,
    ACTIONS(95), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_OR,
  [1144] = 1,
    ACTIONS(97), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_OR,
  [1152] = 2,
    ACTIONS(99), 1,
      anon_sym_the,
    ACTIONS(101), 3,
      anon_sym_ANYDATE,
      anon_sym_ADATE,
      anon_sym_THEDATE,
  [1161] = 1,
    ACTIONS(53), 4,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
  [1168] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(35), 1,
      sym_identity,
    STATE(43), 1,
      sym_simple_condition,
    STATE(76), 1,
      sym_condition,
  [1181] = 4,
    ACTIONS(67), 1,
      anon_sym_on,
    ACTIONS(69), 1,
      sym_string,
    STATE(10), 1,
      sym_subject,
    STATE(89), 1,
      sym_date,
  [1194] = 1,
    ACTIONS(103), 4,
      anon_sym_DELIVER,
      anon_sym_PAY,
      anon_sym_CHARGE,
      anon_sym_SEND,
  [1201] = 1,
    ACTIONS(105), 4,
      anon_sym_DELIVER,
      anon_sym_PAY,
      anon_sym_CHARGE,
      anon_sym_SEND,
  [1208] = 2,
    ACTIONS(109), 1,
      anon_sym_AND,
    ACTIONS(107), 3,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
  [1217] = 1,
    ACTIONS(111), 4,
      anon_sym_DELIVER,
      anon_sym_PAY,
      anon_sym_CHARGE,
      anon_sym_SEND,
  [1224] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(35), 1,
      sym_identity,
    STATE(43), 1,
      sym_simple_condition,
    STATE(131), 1,
      sym_condition,
  [1237] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(35), 1,
      sym_identity,
    STATE(43), 1,
      sym_simple_condition,
    STATE(83), 1,
      sym_condition,
  [1250] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(35), 1,
      sym_identity,
    STATE(43), 1,
      sym_simple_condition,
    STATE(96), 1,
      sym_condition,
  [1263] = 4,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    STATE(65), 1,
      sym_simple_definition,
    STATE(81), 1,
      sym_definition,
    STATE(107), 1,
      sym_identity,
  [1276] = 1,
    ACTIONS(115), 4,
      anon_sym_DELIVER,
      anon_sym_PAY,
      anon_sym_CHARGE,
      anon_sym_SEND,
  [1283] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_identity,
    STATE(41), 1,
      sym_simple_statement,
    STATE(77), 1,
      sym_statement,
  [1296] = 1,
    ACTIONS(117), 4,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
  [1303] = 1,
    ACTIONS(119), 4,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
  [1310] = 2,
    ACTIONS(121), 1,
      anon_sym_the,
    ACTIONS(123), 3,
      anon_sym_ANYDATE,
      anon_sym_ADATE,
      anon_sym_THEDATE,
  [1319] = 1,
    ACTIONS(125), 3,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_THEN,
  [1325] = 1,
    ACTIONS(127), 3,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
  [1331] = 2,
    ACTIONS(131), 1,
      anon_sym_IF,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [1339] = 1,
    ACTIONS(133), 3,
      anon_sym_it,
      anon_sym_on,
      sym_string,
  [1345] = 1,
    ACTIONS(135), 3,
      anon_sym_it,
      anon_sym_on,
      sym_string,
  [1351] = 1,
    ACTIONS(137), 3,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
  [1357] = 2,
    ACTIONS(139), 1,
      anon_sym_IF,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [1365] = 1,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [1370] = 2,
    ACTIONS(143), 1,
      anon_sym_RBRACK,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
  [1377] = 2,
    ACTIONS(147), 1,
      sym_string,
    STATE(53), 1,
      sym_subject,
  [1384] = 2,
    ACTIONS(13), 1,
      anon_sym_on,
    STATE(54), 1,
      sym_date,
  [1391] = 2,
    ACTIONS(147), 1,
      sym_string,
    STATE(7), 1,
      sym_subject,
  [1398] = 2,
    ACTIONS(33), 1,
      anon_sym_IS,
    ACTIONS(35), 1,
      anon_sym_EQUALS,
  [1405] = 2,
    ACTIONS(147), 1,
      sym_string,
    STATE(8), 1,
      sym_subject,
  [1412] = 1,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [1417] = 1,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [1422] = 2,
    ACTIONS(147), 1,
      sym_string,
    STATE(46), 1,
      sym_subject,
  [1429] = 2,
    ACTIONS(13), 1,
      anon_sym_on,
    STATE(55), 1,
      sym_date,
  [1436] = 1,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [1441] = 2,
    ACTIONS(13), 1,
      anon_sym_on,
    STATE(56), 1,
      sym_date,
  [1448] = 1,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [1453] = 2,
    ACTIONS(147), 1,
      sym_string,
    STATE(74), 1,
      sym_subject,
  [1460] = 1,
    ACTIONS(155), 2,
      anon_sym_on,
      sym_string,
  [1465] = 2,
    ACTIONS(13), 1,
      anon_sym_on,
    STATE(57), 1,
      sym_date,
  [1472] = 2,
    ACTIONS(147), 1,
      sym_string,
    STATE(28), 1,
      sym_subject,
  [1479] = 2,
    ACTIONS(147), 1,
      sym_string,
    STATE(49), 1,
      sym_subject,
  [1486] = 2,
    ACTIONS(13), 1,
      anon_sym_on,
    STATE(58), 1,
      sym_date,
  [1493] = 1,
    ACTIONS(157), 2,
      anon_sym_on,
      sym_string,
  [1498] = 2,
    ACTIONS(159), 1,
      anon_sym_RBRACK,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
  [1505] = 2,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    ACTIONS(165), 1,
      anon_sym_C_DASHAND,
  [1512] = 2,
    ACTIONS(167), 1,
      anon_sym_the,
    ACTIONS(169), 1,
      anon_sym_not,
  [1519] = 2,
    ACTIONS(147), 1,
      sym_string,
    STATE(88), 1,
      sym_subject,
  [1526] = 1,
    ACTIONS(171), 1,
      sym_string,
  [1530] = 1,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
  [1534] = 1,
    ACTIONS(175), 1,
      sym_num,
  [1538] = 1,
    ACTIONS(177), 1,
      sym_num,
  [1542] = 1,
    ACTIONS(25), 1,
      sym_string,
  [1546] = 1,
    ACTIONS(179), 1,
      sym_num,
  [1550] = 1,
    ACTIONS(181), 1,
      anon_sym_case,
  [1554] = 1,
    ACTIONS(183), 1,
      anon_sym_that,
  [1558] = 1,
    ACTIONS(29), 1,
      sym_string,
  [1562] = 1,
    ACTIONS(185), 1,
      anon_sym_the,
  [1566] = 1,
    ACTIONS(187), 1,
      sym_num,
  [1570] = 1,
    ACTIONS(189), 1,
      sym_string,
  [1574] = 1,
    ACTIONS(191), 1,
      anon_sym_THAN,
  [1578] = 1,
    ACTIONS(193), 1,
      anon_sym_is,
  [1582] = 1,
    ACTIONS(191), 1,
      anon_sym_TO,
  [1586] = 1,
    ACTIONS(195), 1,
      anon_sym_RBRACK,
  [1590] = 1,
    ACTIONS(197), 1,
      anon_sym_that,
  [1594] = 1,
    ACTIONS(199), 1,
      anon_sym_case,
  [1598] = 1,
    ACTIONS(201), 1,
      sym_num,
  [1602] = 1,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
  [1606] = 1,
    ACTIONS(205), 1,
      sym_string,
  [1610] = 1,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
  [1614] = 1,
    ACTIONS(209), 1,
      sym_string,
  [1618] = 1,
    ACTIONS(211), 1,
      anon_sym_THEN,
  [1622] = 1,
    ACTIONS(213), 1,
      anon_sym_RBRACK,
  [1626] = 1,
    ACTIONS(215), 1,
      sym_num,
  [1630] = 1,
    ACTIONS(217), 1,
      sym_num,
  [1634] = 1,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
  [1638] = 1,
    ACTIONS(221), 1,
      sym_num,
  [1642] = 1,
    ACTIONS(223), 1,
      sym_num,
  [1646] = 1,
    ACTIONS(225), 1,
      sym_num,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 129,
  [SMALL_STATE(6)] = 157,
  [SMALL_STATE(7)] = 185,
  [SMALL_STATE(8)] = 226,
  [SMALL_STATE(9)] = 267,
  [SMALL_STATE(10)] = 311,
  [SMALL_STATE(11)] = 349,
  [SMALL_STATE(12)] = 387,
  [SMALL_STATE(13)] = 419,
  [SMALL_STATE(14)] = 451,
  [SMALL_STATE(15)] = 484,
  [SMALL_STATE(16)] = 517,
  [SMALL_STATE(17)] = 535,
  [SMALL_STATE(18)] = 553,
  [SMALL_STATE(19)] = 568,
  [SMALL_STATE(20)] = 591,
  [SMALL_STATE(21)] = 614,
  [SMALL_STATE(22)] = 637,
  [SMALL_STATE(23)] = 660,
  [SMALL_STATE(24)] = 683,
  [SMALL_STATE(25)] = 706,
  [SMALL_STATE(26)] = 729,
  [SMALL_STATE(27)] = 752,
  [SMALL_STATE(28)] = 784,
  [SMALL_STATE(29)] = 798,
  [SMALL_STATE(30)] = 814,
  [SMALL_STATE(31)] = 826,
  [SMALL_STATE(32)] = 845,
  [SMALL_STATE(33)] = 864,
  [SMALL_STATE(34)] = 874,
  [SMALL_STATE(35)] = 884,
  [SMALL_STATE(36)] = 906,
  [SMALL_STATE(37)] = 925,
  [SMALL_STATE(38)] = 944,
  [SMALL_STATE(39)] = 963,
  [SMALL_STATE(40)] = 972,
  [SMALL_STATE(41)] = 982,
  [SMALL_STATE(42)] = 992,
  [SMALL_STATE(43)] = 1002,
  [SMALL_STATE(44)] = 1012,
  [SMALL_STATE(45)] = 1020,
  [SMALL_STATE(46)] = 1030,
  [SMALL_STATE(47)] = 1040,
  [SMALL_STATE(48)] = 1050,
  [SMALL_STATE(49)] = 1060,
  [SMALL_STATE(50)] = 1070,
  [SMALL_STATE(51)] = 1078,
  [SMALL_STATE(52)] = 1088,
  [SMALL_STATE(53)] = 1104,
  [SMALL_STATE(54)] = 1112,
  [SMALL_STATE(55)] = 1120,
  [SMALL_STATE(56)] = 1128,
  [SMALL_STATE(57)] = 1136,
  [SMALL_STATE(58)] = 1144,
  [SMALL_STATE(59)] = 1152,
  [SMALL_STATE(60)] = 1161,
  [SMALL_STATE(61)] = 1168,
  [SMALL_STATE(62)] = 1181,
  [SMALL_STATE(63)] = 1194,
  [SMALL_STATE(64)] = 1201,
  [SMALL_STATE(65)] = 1208,
  [SMALL_STATE(66)] = 1217,
  [SMALL_STATE(67)] = 1224,
  [SMALL_STATE(68)] = 1237,
  [SMALL_STATE(69)] = 1250,
  [SMALL_STATE(70)] = 1263,
  [SMALL_STATE(71)] = 1276,
  [SMALL_STATE(72)] = 1283,
  [SMALL_STATE(73)] = 1296,
  [SMALL_STATE(74)] = 1303,
  [SMALL_STATE(75)] = 1310,
  [SMALL_STATE(76)] = 1319,
  [SMALL_STATE(77)] = 1325,
  [SMALL_STATE(78)] = 1331,
  [SMALL_STATE(79)] = 1339,
  [SMALL_STATE(80)] = 1345,
  [SMALL_STATE(81)] = 1351,
  [SMALL_STATE(82)] = 1357,
  [SMALL_STATE(83)] = 1365,
  [SMALL_STATE(84)] = 1370,
  [SMALL_STATE(85)] = 1377,
  [SMALL_STATE(86)] = 1384,
  [SMALL_STATE(87)] = 1391,
  [SMALL_STATE(88)] = 1398,
  [SMALL_STATE(89)] = 1405,
  [SMALL_STATE(90)] = 1412,
  [SMALL_STATE(91)] = 1417,
  [SMALL_STATE(92)] = 1422,
  [SMALL_STATE(93)] = 1429,
  [SMALL_STATE(94)] = 1436,
  [SMALL_STATE(95)] = 1441,
  [SMALL_STATE(96)] = 1448,
  [SMALL_STATE(97)] = 1453,
  [SMALL_STATE(98)] = 1460,
  [SMALL_STATE(99)] = 1465,
  [SMALL_STATE(100)] = 1472,
  [SMALL_STATE(101)] = 1479,
  [SMALL_STATE(102)] = 1486,
  [SMALL_STATE(103)] = 1493,
  [SMALL_STATE(104)] = 1498,
  [SMALL_STATE(105)] = 1505,
  [SMALL_STATE(106)] = 1512,
  [SMALL_STATE(107)] = 1519,
  [SMALL_STATE(108)] = 1526,
  [SMALL_STATE(109)] = 1530,
  [SMALL_STATE(110)] = 1534,
  [SMALL_STATE(111)] = 1538,
  [SMALL_STATE(112)] = 1542,
  [SMALL_STATE(113)] = 1546,
  [SMALL_STATE(114)] = 1550,
  [SMALL_STATE(115)] = 1554,
  [SMALL_STATE(116)] = 1558,
  [SMALL_STATE(117)] = 1562,
  [SMALL_STATE(118)] = 1566,
  [SMALL_STATE(119)] = 1570,
  [SMALL_STATE(120)] = 1574,
  [SMALL_STATE(121)] = 1578,
  [SMALL_STATE(122)] = 1582,
  [SMALL_STATE(123)] = 1586,
  [SMALL_STATE(124)] = 1590,
  [SMALL_STATE(125)] = 1594,
  [SMALL_STATE(126)] = 1598,
  [SMALL_STATE(127)] = 1602,
  [SMALL_STATE(128)] = 1606,
  [SMALL_STATE(129)] = 1610,
  [SMALL_STATE(130)] = 1614,
  [SMALL_STATE(131)] = 1618,
  [SMALL_STATE(132)] = 1622,
  [SMALL_STATE(133)] = 1626,
  [SMALL_STATE(134)] = 1630,
  [SMALL_STATE(135)] = 1634,
  [SMALL_STATE(136)] = 1638,
  [SMALL_STATE(137)] = 1642,
  [SMALL_STATE(138)] = 1646,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subject, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 2, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 2, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 5, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 5, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verb_status, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numerical_object, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numerical_expression, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verb, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnumerical_object, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 4, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition, 5, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 6, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition, 6, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 7, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition, 7, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PERMISSION, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_OBLIGATION, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PROHIBITION, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modal_verb, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numerical_expression, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_definition, 4, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identity, 6, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identity, 3, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_statement, 3, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_definition, 4, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_statement, 4, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_definition, 3, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_holds, 5, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_holds, 6, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract, 1, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_month, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract, 3, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity, 6, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
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
