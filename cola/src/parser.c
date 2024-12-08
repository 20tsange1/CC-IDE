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
#define STATE_COUNT 207
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 116
#define ALIAS_COUNT 0
#define TOKEN_COUNT 81
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
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
  anon_sym_ELSE = 11,
  anon_sym_OR = 12,
  anon_sym_LBRACK = 13,
  anon_sym_RBRACK = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  anon_sym_it = 17,
  anon_sym_is = 18,
  anon_sym_the = 19,
  anon_sym_case = 20,
  anon_sym_that = 21,
  anon_sym_not = 22,
  anon_sym_deliver = 23,
  anon_sym_pay = 24,
  anon_sym_charge = 25,
  anon_sym_refund = 26,
  anon_sym_delivered = 27,
  anon_sym_paid = 28,
  anon_sym_charged = 29,
  anon_sym_refunded = 30,
  anon_sym_less = 31,
  anon_sym_than = 32,
  anon_sym_equals = 33,
  anon_sym_equal = 34,
  anon_sym_to = 35,
  anon_sym_more = 36,
  anon_sym_greater = 37,
  anon_sym_may = 38,
  anon_sym_forbidden = 39,
  anon_sym_shall = 40,
  anon_sym_must = 41,
  anon_sym_on = 42,
  anon_sym_ANYDATE = 43,
  anon_sym_SOMEDATE = 44,
  anon_sym_THEDATE = 45,
  anon_sym_before = 46,
  anon_sym_after = 47,
  anon_sym_day = 48,
  anon_sym_week = 49,
  anon_sym_year = 50,
  anon_sym_days = 51,
  anon_sym_weeks = 52,
  anon_sym_years = 53,
  anon_sym_January = 54,
  anon_sym_February = 55,
  anon_sym_March = 56,
  anon_sym_April = 57,
  anon_sym_May = 58,
  anon_sym_June = 59,
  anon_sym_July = 60,
  anon_sym_August = 61,
  anon_sym_September = 62,
  anon_sym_October = 63,
  anon_sym_November = 64,
  anon_sym_December = 65,
  anon_sym_AMOUNT = 66,
  anon_sym_SOMECURRENCY = 67,
  anon_sym_REPORT = 68,
  anon_sym_NAMEDOBJECT = 69,
  anon_sym_OTHEROBJECT = 70,
  anon_sym_GBP = 71,
  anon_sym_POUNDS = 72,
  anon_sym_quid = 73,
  anon_sym_USD = 74,
  anon_sym_DOLLARS = 75,
  anon_sym_buck = 76,
  anon_sym_EUR = 77,
  anon_sym_EUROS = 78,
  sym_string = 79,
  sym_num = 80,
  sym_contract = 81,
  sym_component = 82,
  sym_definition = 83,
  sym_simple_definition = 84,
  sym_numerical_expression = 85,
  sym_operator = 86,
  sym_conditional_definition = 87,
  sym_statement = 88,
  sym_conditional_statement = 89,
  sym_simple_statement = 90,
  sym_condition = 91,
  sym_simple_condition = 92,
  sym_boolean_expression = 93,
  sym_ID = 94,
  sym_holds = 95,
  sym_subject = 96,
  sym_verb = 97,
  sym_verb_status = 98,
  sym_comparison = 99,
  sym_equal = 100,
  sym_more_than = 101,
  sym_modal_verb = 102,
  sym_obligation = 103,
  sym_date = 104,
  sym_temporal_quantifier = 105,
  sym_specific_date = 106,
  sym_temporal_offset = 107,
  sym_month = 108,
  sym_object = 109,
  sym_numerical_object = 110,
  sym_nonnumerical_object = 111,
  sym_pounds = 112,
  sym_dollars = 113,
  sym_euros = 114,
  sym_receiver = 115,
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
  [anon_sym_ELSE] = "ELSE",
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
  [anon_sym_deliver] = "deliver",
  [anon_sym_pay] = "pay",
  [anon_sym_charge] = "charge",
  [anon_sym_refund] = "refund",
  [anon_sym_delivered] = "delivered",
  [anon_sym_paid] = "paid",
  [anon_sym_charged] = "charged",
  [anon_sym_refunded] = "refunded",
  [anon_sym_less] = "less",
  [anon_sym_than] = "than",
  [anon_sym_equals] = "equals",
  [anon_sym_equal] = "equal",
  [anon_sym_to] = "to",
  [anon_sym_more] = "more",
  [anon_sym_greater] = "greater",
  [anon_sym_may] = "may",
  [anon_sym_forbidden] = "forbidden",
  [anon_sym_shall] = "shall",
  [anon_sym_must] = "must",
  [anon_sym_on] = "on",
  [anon_sym_ANYDATE] = "ANYDATE",
  [anon_sym_SOMEDATE] = "SOMEDATE",
  [anon_sym_THEDATE] = "THEDATE",
  [anon_sym_before] = "before",
  [anon_sym_after] = "after",
  [anon_sym_day] = "day",
  [anon_sym_week] = "week",
  [anon_sym_year] = "year",
  [anon_sym_days] = "days",
  [anon_sym_weeks] = "weeks",
  [anon_sym_years] = "years",
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
  [anon_sym_AMOUNT] = "AMOUNT",
  [anon_sym_SOMECURRENCY] = "SOMECURRENCY",
  [anon_sym_REPORT] = "REPORT",
  [anon_sym_NAMEDOBJECT] = "NAMEDOBJECT",
  [anon_sym_OTHEROBJECT] = "OTHEROBJECT",
  [anon_sym_GBP] = "GBP",
  [anon_sym_POUNDS] = "POUNDS",
  [anon_sym_quid] = "quid",
  [anon_sym_USD] = "USD",
  [anon_sym_DOLLARS] = "DOLLARS",
  [anon_sym_buck] = "buck",
  [anon_sym_EUR] = "EUR",
  [anon_sym_EUROS] = "EUROS",
  [sym_string] = "string",
  [sym_num] = "num",
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
  [sym_ID] = "ID",
  [sym_holds] = "holds",
  [sym_subject] = "subject",
  [sym_verb] = "verb",
  [sym_verb_status] = "verb_status",
  [sym_comparison] = "comparison",
  [sym_equal] = "equal",
  [sym_more_than] = "more_than",
  [sym_modal_verb] = "modal_verb",
  [sym_obligation] = "obligation",
  [sym_date] = "date",
  [sym_temporal_quantifier] = "temporal_quantifier",
  [sym_specific_date] = "specific_date",
  [sym_temporal_offset] = "temporal_offset",
  [sym_month] = "month",
  [sym_object] = "object",
  [sym_numerical_object] = "numerical_object",
  [sym_nonnumerical_object] = "nonnumerical_object",
  [sym_pounds] = "pounds",
  [sym_dollars] = "dollars",
  [sym_euros] = "euros",
  [sym_receiver] = "receiver",
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
  [anon_sym_ELSE] = anon_sym_ELSE,
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
  [anon_sym_deliver] = anon_sym_deliver,
  [anon_sym_pay] = anon_sym_pay,
  [anon_sym_charge] = anon_sym_charge,
  [anon_sym_refund] = anon_sym_refund,
  [anon_sym_delivered] = anon_sym_delivered,
  [anon_sym_paid] = anon_sym_paid,
  [anon_sym_charged] = anon_sym_charged,
  [anon_sym_refunded] = anon_sym_refunded,
  [anon_sym_less] = anon_sym_less,
  [anon_sym_than] = anon_sym_than,
  [anon_sym_equals] = anon_sym_equals,
  [anon_sym_equal] = anon_sym_equal,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_more] = anon_sym_more,
  [anon_sym_greater] = anon_sym_greater,
  [anon_sym_may] = anon_sym_may,
  [anon_sym_forbidden] = anon_sym_forbidden,
  [anon_sym_shall] = anon_sym_shall,
  [anon_sym_must] = anon_sym_must,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_ANYDATE] = anon_sym_ANYDATE,
  [anon_sym_SOMEDATE] = anon_sym_SOMEDATE,
  [anon_sym_THEDATE] = anon_sym_THEDATE,
  [anon_sym_before] = anon_sym_before,
  [anon_sym_after] = anon_sym_after,
  [anon_sym_day] = anon_sym_day,
  [anon_sym_week] = anon_sym_week,
  [anon_sym_year] = anon_sym_year,
  [anon_sym_days] = anon_sym_days,
  [anon_sym_weeks] = anon_sym_weeks,
  [anon_sym_years] = anon_sym_years,
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
  [anon_sym_AMOUNT] = anon_sym_AMOUNT,
  [anon_sym_SOMECURRENCY] = anon_sym_SOMECURRENCY,
  [anon_sym_REPORT] = anon_sym_REPORT,
  [anon_sym_NAMEDOBJECT] = anon_sym_NAMEDOBJECT,
  [anon_sym_OTHEROBJECT] = anon_sym_OTHEROBJECT,
  [anon_sym_GBP] = anon_sym_GBP,
  [anon_sym_POUNDS] = anon_sym_POUNDS,
  [anon_sym_quid] = anon_sym_quid,
  [anon_sym_USD] = anon_sym_USD,
  [anon_sym_DOLLARS] = anon_sym_DOLLARS,
  [anon_sym_buck] = anon_sym_buck,
  [anon_sym_EUR] = anon_sym_EUR,
  [anon_sym_EUROS] = anon_sym_EUROS,
  [sym_string] = sym_string,
  [sym_num] = sym_num,
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
  [sym_ID] = sym_ID,
  [sym_holds] = sym_holds,
  [sym_subject] = sym_subject,
  [sym_verb] = sym_verb,
  [sym_verb_status] = sym_verb_status,
  [sym_comparison] = sym_comparison,
  [sym_equal] = sym_equal,
  [sym_more_than] = sym_more_than,
  [sym_modal_verb] = sym_modal_verb,
  [sym_obligation] = sym_obligation,
  [sym_date] = sym_date,
  [sym_temporal_quantifier] = sym_temporal_quantifier,
  [sym_specific_date] = sym_specific_date,
  [sym_temporal_offset] = sym_temporal_offset,
  [sym_month] = sym_month,
  [sym_object] = sym_object,
  [sym_numerical_object] = sym_numerical_object,
  [sym_nonnumerical_object] = sym_nonnumerical_object,
  [sym_pounds] = sym_pounds,
  [sym_dollars] = sym_dollars,
  [sym_euros] = sym_euros,
  [sym_receiver] = sym_receiver,
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
  [anon_sym_ELSE] = {
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
  [anon_sym_deliver] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pay] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_charge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_refund] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delivered] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_paid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_charged] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_refunded] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_less] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_than] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_equals] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_equal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_more] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_greater] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_may] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_forbidden] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_must] = {
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
  [anon_sym_SOMEDATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_THEDATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_before] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_after] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_day] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_week] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_year] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_days] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_weeks] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_years] = {
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
  [anon_sym_GBP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_USD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_buck] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EUR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EUROS] = {
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
  [sym_ID] = {
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
  [sym_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_more_than] = {
    .visible = true,
    .named = true,
  },
  [sym_modal_verb] = {
    .visible = true,
    .named = true,
  },
  [sym_obligation] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_temporal_quantifier] = {
    .visible = true,
    .named = true,
  },
  [sym_specific_date] = {
    .visible = true,
    .named = true,
  },
  [sym_temporal_offset] = {
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
  [sym_pounds] = {
    .visible = true,
    .named = true,
  },
  [sym_dollars] = {
    .visible = true,
    .named = true,
  },
  [sym_euros] = {
    .visible = true,
    .named = true,
  },
  [sym_receiver] = {
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
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 10,
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
  [34] = 32,
  [35] = 31,
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
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 73,
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
  [101] = 86,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 105,
  [111] = 111,
  [112] = 112,
  [113] = 106,
  [114] = 114,
  [115] = 115,
  [116] = 116,
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
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 127,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 133,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 144,
  [147] = 129,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 143,
  [153] = 137,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 28,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 29,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 4,
  [176] = 176,
  [177] = 55,
  [178] = 24,
  [179] = 27,
  [180] = 180,
  [181] = 30,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 62,
  [186] = 26,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 188,
  [193] = 180,
  [194] = 22,
  [195] = 154,
  [196] = 166,
  [197] = 158,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 168,
  [203] = 203,
  [204] = 159,
  [205] = 205,
  [206] = 205,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(288);
      ADVANCE_MAP(
        '(', 303,
        ')', 304,
        'A', 58,
        'C', 1,
        'D', 45,
        'E', 52,
        'F', 148,
        'G', 9,
        'I', 40,
        'J', 114,
        'M', 47,
        'N', 2,
        'O', 77,
        'P', 55,
        'R', 34,
        'S', 72,
        'T', 41,
        'U', 84,
        '[', 301,
        ']', 302,
        'a', 183,
        'b', 157,
        'c', 108,
        'd', 109,
        'e', 231,
        'f', 226,
        'g', 247,
        'i', 255,
        'l', 158,
        'm', 115,
        'n', 228,
        'o', 218,
        'p', 110,
        'q', 268,
        'r', 160,
        's', 194,
        't', 193,
        'w', 164,
        'y', 175,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(386);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == 'A') ADVANCE(59);
      if (lookahead == 'o') ADVANCE(279);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(65);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(97);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(57);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(81);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(98);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(99);
      END_STATE();
    case 9:
      if (lookahead == 'B') ADVANCE(74);
      END_STATE();
    case 10:
      if (lookahead == 'B') ADVANCE(49);
      END_STATE();
    case 11:
      if (lookahead == 'B') ADVANCE(50);
      END_STATE();
    case 12:
      if (lookahead == 'C') ADVANCE(107);
      END_STATE();
    case 13:
      if (lookahead == 'C') ADVANCE(95);
      END_STATE();
    case 14:
      if (lookahead == 'C') ADVANCE(104);
      if (lookahead == 'D') ADVANCE(8);
      END_STATE();
    case 15:
      if (lookahead == 'C') ADVANCE(96);
      END_STATE();
    case 16:
      if (lookahead == 'D') ADVANCE(290);
      END_STATE();
    case 17:
      if (lookahead == 'D') ADVANCE(290);
      if (lookahead == 'Y') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 'D') ADVANCE(369);
      END_STATE();
    case 19:
      if (lookahead == 'D') ADVANCE(289);
      END_STATE();
    case 20:
      if (lookahead == 'D') ADVANCE(69);
      END_STATE();
    case 21:
      if (lookahead == 'D') ADVANCE(4);
      END_STATE();
    case 22:
      if (lookahead == 'D') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 'D') ADVANCE(90);
      END_STATE();
    case 24:
      if (lookahead == 'D') ADVANCE(7);
      if (lookahead == 'N') ADVANCE(298);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(299);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(14);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(296);
      END_STATE();
    case 29:
      if (lookahead == 'E') ADVANCE(336);
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(338);
      END_STATE();
    case 31:
      if (lookahead == 'E') ADVANCE(337);
      END_STATE();
    case 32:
      if (lookahead == 'E') ADVANCE(13);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(83);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(75);
      END_STATE();
    case 35:
      if (lookahead == 'E') ADVANCE(64);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(62);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(20);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(88);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(15);
      END_STATE();
    case 40:
      if (lookahead == 'F') ADVANCE(297);
      if (lookahead == 'S') ADVANCE(291);
      END_STATE();
    case 41:
      if (lookahead == 'H') ADVANCE(25);
      if (lookahead == 'I') ADVANCE(61);
      END_STATE();
    case 42:
      if (lookahead == 'H') ADVANCE(33);
      END_STATE();
    case 43:
      if (lookahead == 'H') ADVANCE(36);
      if (lookahead == 'I') ADVANCE(61);
      END_STATE();
    case 44:
      if (lookahead == 'I') ADVANCE(106);
      END_STATE();
    case 45:
      if (lookahead == 'I') ADVANCE(106);
      if (lookahead == 'O') ADVANCE(53);
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 46:
      if (lookahead == 'I') ADVANCE(68);
      END_STATE();
    case 47:
      if (lookahead == 'I') ADVANCE(68);
      if (lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 48:
      if (lookahead == 'I') ADVANCE(22);
      END_STATE();
    case 49:
      if (lookahead == 'J') ADVANCE(32);
      END_STATE();
    case 50:
      if (lookahead == 'J') ADVANCE(39);
      END_STATE();
    case 51:
      if (lookahead == 'L') ADVANCE(92);
      if (lookahead == 'Q') ADVANCE(100);
      END_STATE();
    case 52:
      if (lookahead == 'L') ADVANCE(92);
      if (lookahead == 'Q') ADVANCE(100);
      if (lookahead == 'U') ADVANCE(78);
      END_STATE();
    case 53:
      if (lookahead == 'L') ADVANCE(56);
      END_STATE();
    case 54:
      if (lookahead == 'L') ADVANCE(101);
      END_STATE();
    case 55:
      if (lookahead == 'L') ADVANCE(101);
      if (lookahead == 'O') ADVANCE(105);
      END_STATE();
    case 56:
      if (lookahead == 'L') ADVANCE(6);
      END_STATE();
    case 57:
      if (lookahead == 'L') ADVANCE(89);
      END_STATE();
    case 58:
      if (lookahead == 'M') ADVANCE(71);
      if (lookahead == 'N') ADVANCE(17);
      if (lookahead == 'p') ADVANCE(243);
      if (lookahead == 'u') ADVANCE(188);
      END_STATE();
    case 59:
      if (lookahead == 'M') ADVANCE(37);
      END_STATE();
    case 60:
      if (lookahead == 'M') ADVANCE(27);
      END_STATE();
    case 61:
      if (lookahead == 'M') ADVANCE(38);
      END_STATE();
    case 62:
      if (lookahead == 'N') ADVANCE(298);
      END_STATE();
    case 63:
      if (lookahead == 'N') ADVANCE(93);
      END_STATE();
    case 64:
      if (lookahead == 'N') ADVANCE(12);
      END_STATE();
    case 65:
      if (lookahead == 'N') ADVANCE(19);
      END_STATE();
    case 66:
      if (lookahead == 'N') ADVANCE(23);
      END_STATE();
    case 67:
      if (lookahead == 'N') ADVANCE(16);
      END_STATE();
    case 68:
      if (lookahead == 'N') ADVANCE(103);
      END_STATE();
    case 69:
      if (lookahead == 'O') ADVANCE(10);
      END_STATE();
    case 70:
      if (lookahead == 'O') ADVANCE(79);
      END_STATE();
    case 71:
      if (lookahead == 'O') ADVANCE(102);
      END_STATE();
    case 72:
      if (lookahead == 'O') ADVANCE(60);
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 73:
      if (lookahead == 'O') ADVANCE(11);
      END_STATE();
    case 74:
      if (lookahead == 'P') ADVANCE(366);
      END_STATE();
    case 75:
      if (lookahead == 'P') ADVANCE(70);
      END_STATE();
    case 76:
      if (lookahead == 'R') ADVANCE(300);
      END_STATE();
    case 77:
      if (lookahead == 'R') ADVANCE(300);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == 'c') ADVANCE(264);
      END_STATE();
    case 78:
      if (lookahead == 'R') ADVANCE(372);
      END_STATE();
    case 79:
      if (lookahead == 'R') ADVANCE(94);
      END_STATE();
    case 80:
      if (lookahead == 'R') ADVANCE(82);
      END_STATE();
    case 81:
      if (lookahead == 'R') ADVANCE(91);
      END_STATE();
    case 82:
      if (lookahead == 'R') ADVANCE(35);
      END_STATE();
    case 83:
      if (lookahead == 'R') ADVANCE(73);
      END_STATE();
    case 84:
      if (lookahead == 'S') ADVANCE(18);
      END_STATE();
    case 85:
      if (lookahead == 'S') ADVANCE(293);
      END_STATE();
    case 86:
      if (lookahead == 'S') ADVANCE(373);
      END_STATE();
    case 87:
      if (lookahead == 'S') ADVANCE(294);
      END_STATE();
    case 88:
      if (lookahead == 'S') ADVANCE(295);
      END_STATE();
    case 89:
      if (lookahead == 'S') ADVANCE(292);
      END_STATE();
    case 90:
      if (lookahead == 'S') ADVANCE(367);
      END_STATE();
    case 91:
      if (lookahead == 'S') ADVANCE(370);
      END_STATE();
    case 92:
      if (lookahead == 'S') ADVANCE(26);
      END_STATE();
    case 93:
      if (lookahead == 'T') ADVANCE(361);
      END_STATE();
    case 94:
      if (lookahead == 'T') ADVANCE(363);
      END_STATE();
    case 95:
      if (lookahead == 'T') ADVANCE(364);
      END_STATE();
    case 96:
      if (lookahead == 'T') ADVANCE(365);
      END_STATE();
    case 97:
      if (lookahead == 'T') ADVANCE(29);
      END_STATE();
    case 98:
      if (lookahead == 'T') ADVANCE(30);
      END_STATE();
    case 99:
      if (lookahead == 'T') ADVANCE(31);
      END_STATE();
    case 100:
      if (lookahead == 'U') ADVANCE(5);
      END_STATE();
    case 101:
      if (lookahead == 'U') ADVANCE(85);
      END_STATE();
    case 102:
      if (lookahead == 'U') ADVANCE(63);
      END_STATE();
    case 103:
      if (lookahead == 'U') ADVANCE(87);
      END_STATE();
    case 104:
      if (lookahead == 'U') ADVANCE(80);
      END_STATE();
    case 105:
      if (lookahead == 'U') ADVANCE(66);
      END_STATE();
    case 106:
      if (lookahead == 'V') ADVANCE(48);
      END_STATE();
    case 107:
      if (lookahead == 'Y') ADVANCE(362);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(260);
      if (lookahead == 'h') ADVANCE(119);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(280);
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(378);
      if (lookahead == 'b') ADVANCE(376);
      if (lookahead == 'i') ADVANCE(383);
      if (lookahead == 'o') ADVANCE(379);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(386);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(378);
      if (lookahead == 'b') ADVANCE(376);
      if (lookahead == 'o') ADVANCE(379);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(386);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(221);
      if (lookahead == 'u') ADVANCE(210);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(281);
      if (lookahead == 'o') ADVANCE(248);
      if (lookahead == 'u') ADVANCE(257);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(281);
      if (lookahead == 'u') ADVANCE(257);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(241);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(232);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(282);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(252);
      END_STATE();
    case 128:
      if (lookahead == 'b') ADVANCE(253);
      END_STATE();
    case 129:
      if (lookahead == 'b') ADVANCE(168);
      END_STATE();
    case 130:
      if (lookahead == 'b') ADVANCE(171);
      END_STATE();
    case 131:
      if (lookahead == 'b') ADVANCE(172);
      END_STATE();
    case 132:
      if (lookahead == 'b') ADVANCE(173);
      END_STATE();
    case 133:
      if (lookahead == 'b') ADVANCE(201);
      END_STATE();
    case 134:
      if (lookahead == 'c') ADVANCE(205);
      END_STATE();
    case 135:
      if (lookahead == 'c') ADVANCE(192);
      END_STATE();
    case 136:
      if (lookahead == 'c') ADVANCE(149);
      END_STATE();
    case 137:
      if (lookahead == 'c') ADVANCE(196);
      if (lookahead == 'd') ADVANCE(182);
      if (lookahead == 'p') ADVANCE(121);
      if (lookahead == 'r') ADVANCE(180);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(137);
      END_STATE();
    case 138:
      if (lookahead == 'd') ADVANCE(320);
      END_STATE();
    case 139:
      if (lookahead == 'd') ADVANCE(368);
      END_STATE();
    case 140:
      if (lookahead == 'd') ADVANCE(318);
      END_STATE();
    case 141:
      if (lookahead == 'd') ADVANCE(321);
      END_STATE();
    case 142:
      if (lookahead == 'd') ADVANCE(322);
      END_STATE();
    case 143:
      if (lookahead == 'd') ADVANCE(319);
      END_STATE();
    case 144:
      if (lookahead == 'd') ADVANCE(317);
      END_STATE();
    case 145:
      if (lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 146:
      if (lookahead == 'd') ADVANCE(161);
      END_STATE();
    case 147:
      if (lookahead == 'd') ADVANCE(163);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 183:
      if (lookahead == 'f') ADVANCE(265);
      END_STATE();
    case 184:
      if (lookahead == 'f') ADVANCE(269);
      END_STATE();
    case 185:
      if (lookahead == 'f') ADVANCE(229);
      END_STATE();
    case 186:
      if (lookahead == 'f') ADVANCE(271);
      END_STATE();
    case 187:
      if (lookahead == 'f') ADVANCE(274);
      END_STATE();
    case 188:
      if (lookahead == 'g') ADVANCE(272);
      END_STATE();
    case 189:
      if (lookahead == 'g') ADVANCE(154);
      END_STATE();
    case 190:
      if (lookahead == 'g') ADVANCE(167);
      END_STATE();
    case 191:
      if (lookahead == 'g') ADVANCE(155);
      END_STATE();
    case 192:
      if (lookahead == 'h') ADVANCE(351);
      END_STATE();
    case 193:
      if (lookahead == 'h') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(327);
      END_STATE();
    case 194:
      if (lookahead == 'h') ADVANCE(117);
      END_STATE();
    case 195:
      if (lookahead == 'h') ADVANCE(124);
      END_STATE();
    case 196:
      if (lookahead == 'h') ADVANCE(127);
      END_STATE();
    case 197:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 198:
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 'y') ADVANCE(314);
      END_STATE();
    case 199:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 200:
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 201:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 202:
      if (lookahead == 'i') ADVANCE(276);
      END_STATE();
    case 203:
      if (lookahead == 'i') ADVANCE(277);
      END_STATE();
    case 204:
      if (lookahead == 'i') ADVANCE(278);
      END_STATE();
    case 205:
      if (lookahead == 'k') ADVANCE(371);
      END_STATE();
    case 206:
      if (lookahead == 'k') ADVANCE(344);
      END_STATE();
    case 207:
      if (lookahead == 'l') ADVANCE(352);
      END_STATE();
    case 208:
      if (lookahead == 'l') ADVANCE(326);
      END_STATE();
    case 209:
      if (lookahead == 'l') ADVANCE(332);
      END_STATE();
    case 210:
      if (lookahead == 'l') ADVANCE(283);
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 211:
      if (lookahead == 'l') ADVANCE(202);
      END_STATE();
    case 212:
      if (lookahead == 'l') ADVANCE(209);
      END_STATE();
    case 213:
      if (lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 214:
      if (lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 215:
      if (lookahead == 'm') ADVANCE(130);
      END_STATE();
    case 216:
      if (lookahead == 'm') ADVANCE(131);
      END_STATE();
    case 217:
      if (lookahead == 'm') ADVANCE(132);
      END_STATE();
    case 218:
      if (lookahead == 'n') ADVANCE(334);
      END_STATE();
    case 219:
      if (lookahead == 'n') ADVANCE(324);
      if (lookahead == 't') ADVANCE(310);
      END_STATE();
    case 220:
      if (lookahead == 'n') ADVANCE(331);
      END_STATE();
    case 221:
      if (lookahead == 'n') ADVANCE(273);
      END_STATE();
    case 222:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 223:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 224:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 225:
      if (lookahead == 'o') ADVANCE(327);
      END_STATE();
    case 226:
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 227:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 228:
      if (lookahead == 'o') ADVANCE(261);
      END_STATE();
    case 229:
      if (lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 230:
      if (lookahead == 'p') ADVANCE(267);
      END_STATE();
    case 231:
      if (lookahead == 'q') ADVANCE(270);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(345);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(341);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(358);
      END_STATE();
    case 235:
      if (lookahead == 'r') ADVANCE(313);
      END_STATE();
    case 236:
      if (lookahead == 'r') ADVANCE(329);
      END_STATE();
    case 237:
      if (lookahead == 'r') ADVANCE(360);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(359);
      END_STATE();
    case 239:
      if (lookahead == 'r') ADVANCE(357);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(312);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 242:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 243:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 244:
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead == 'y') ADVANCE(353);
      END_STATE();
    case 245:
      if (lookahead == 'r') ADVANCE(284);
      END_STATE();
    case 246:
      if (lookahead == 'r') ADVANCE(285);
      END_STATE();
    case 247:
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 248:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 249:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 250:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 253:
      if (lookahead == 'r') ADVANCE(275);
      END_STATE();
    case 254:
      if (lookahead == 's') ADVANCE(307);
      END_STATE();
    case 255:
      if (lookahead == 's') ADVANCE(307);
      if (lookahead == 't') ADVANCE(305);
      END_STATE();
    case 256:
      if (lookahead == 's') ADVANCE(323);
      END_STATE();
    case 257:
      if (lookahead == 's') ADVANCE(262);
      END_STATE();
    case 258:
      if (lookahead == 's') ADVANCE(256);
      END_STATE();
    case 259:
      if (lookahead == 's') ADVANCE(263);
      END_STATE();
    case 260:
      if (lookahead == 's') ADVANCE(151);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(311);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(333);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(356);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 268:
      if (lookahead == 'u') ADVANCE(199);
      END_STATE();
    case 269:
      if (lookahead == 'u') ADVANCE(222);
      END_STATE();
    case 270:
      if (lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 271:
      if (lookahead == 'u') ADVANCE(224);
      END_STATE();
    case 272:
      if (lookahead == 'u') ADVANCE(259);
      END_STATE();
    case 273:
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 274:
      if (lookahead == 'u') ADVANCE(223);
      END_STATE();
    case 275:
      if (lookahead == 'u') ADVANCE(123);
      END_STATE();
    case 276:
      if (lookahead == 'v') ADVANCE(169);
      END_STATE();
    case 277:
      if (lookahead == 'v') ADVANCE(176);
      END_STATE();
    case 278:
      if (lookahead == 'v') ADVANCE(174);
      END_STATE();
    case 279:
      if (lookahead == 'v') ADVANCE(177);
      END_STATE();
    case 280:
      if (lookahead == 'y') ADVANCE(343);
      END_STATE();
    case 281:
      if (lookahead == 'y') ADVANCE(330);
      END_STATE();
    case 282:
      if (lookahead == 'y') ADVANCE(314);
      END_STATE();
    case 283:
      if (lookahead == 'y') ADVANCE(355);
      END_STATE();
    case 284:
      if (lookahead == 'y') ADVANCE(349);
      END_STATE();
    case 285:
      if (lookahead == 'y') ADVANCE(350);
      END_STATE();
    case 286:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 287:
      if (eof) ADVANCE(288);
      ADVANCE_MAP(
        'A', 67,
        'C', 1,
        'D', 44,
        'E', 51,
        'I', 40,
        'M', 46,
        'O', 76,
        'P', 54,
        'T', 43,
        'a', 183,
        'b', 156,
        'c', 195,
        'd', 181,
        'i', 254,
        'm', 116,
        'o', 218,
        'p', 125,
        'r', 178,
        's', 194,
        't', 225,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(287);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(386);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_C_DASHAND);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_IS);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_EQUALS);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_MINUS);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_TIMES);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_DIVIDE);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_THEN);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_ELSE);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_it);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_it);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_the);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_that);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_deliver);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_deliver);
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_pay);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_charge);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_charge);
      if (lookahead == 'd') ADVANCE(321);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_refund);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_refund);
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_delivered);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_paid);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_charged);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_refunded);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_less);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_than);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_equals);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_equal);
      if (lookahead == 's') ADVANCE(325);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_more);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_greater);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_may);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_forbidden);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_shall);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_must);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_on);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_ANYDATE);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_SOMEDATE);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_THEDATE);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_before);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_before);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_after);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_after);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_day);
      if (lookahead == 's') ADVANCE(346);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_week);
      if (lookahead == 's') ADVANCE(347);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead == 's') ADVANCE(348);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_days);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_weeks);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_years);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_January);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_February);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_March);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_April);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_May);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_June);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_July);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_August);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_September);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_October);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_November);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_December);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_AMOUNT);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_SOMECURRENCY);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_REPORT);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_NAMEDOBJECT);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_OTHEROBJECT);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_GBP);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_POUNDS);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_quid);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_USD);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_DOLLARS);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_buck);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_EUR);
      if (lookahead == 'O') ADVANCE(86);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_EUROS);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(381);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(340);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(377);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'f') ADVANCE(380);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'f') ADVANCE(384);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(335);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'o') ADVANCE(382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(342);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(374);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_string);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(386);
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
  [4] = {.lex_state = 287},
  [5] = {.lex_state = 287},
  [6] = {.lex_state = 287},
  [7] = {.lex_state = 287},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 287},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 287},
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
  [22] = {.lex_state = 287},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 287},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 287},
  [27] = {.lex_state = 287},
  [28] = {.lex_state = 287},
  [29] = {.lex_state = 287},
  [30] = {.lex_state = 287},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 112},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 112},
  [38] = {.lex_state = 112},
  [39] = {.lex_state = 113},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 113},
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
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 112},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 112},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 287},
  [72] = {.lex_state = 137},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 137},
  [75] = {.lex_state = 137},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 113},
  [78] = {.lex_state = 137},
  [79] = {.lex_state = 137},
  [80] = {.lex_state = 113},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 287},
  [83] = {.lex_state = 137},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 137},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 137},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 137},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 286},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 286},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 286},
  [127] = {.lex_state = 286},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 286},
  [133] = {.lex_state = 286},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 286},
  [136] = {.lex_state = 286},
  [137] = {.lex_state = 286},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 286},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 286},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 286},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 286},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 286},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 286},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 286},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 286},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 286},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 286},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 286},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 286},
  [178] = {.lex_state = 286},
  [179] = {.lex_state = 286},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 286},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 286},
  [186] = {.lex_state = 286},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 286},
  [190] = {.lex_state = 286},
  [191] = {.lex_state = 286},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 286},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 286},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
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
    [anon_sym_ELSE] = ACTIONS(1),
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
    [anon_sym_deliver] = ACTIONS(1),
    [anon_sym_pay] = ACTIONS(1),
    [anon_sym_charge] = ACTIONS(1),
    [anon_sym_refund] = ACTIONS(1),
    [anon_sym_delivered] = ACTIONS(1),
    [anon_sym_paid] = ACTIONS(1),
    [anon_sym_charged] = ACTIONS(1),
    [anon_sym_refunded] = ACTIONS(1),
    [anon_sym_less] = ACTIONS(1),
    [anon_sym_than] = ACTIONS(1),
    [anon_sym_equals] = ACTIONS(1),
    [anon_sym_equal] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_more] = ACTIONS(1),
    [anon_sym_greater] = ACTIONS(1),
    [anon_sym_may] = ACTIONS(1),
    [anon_sym_forbidden] = ACTIONS(1),
    [anon_sym_shall] = ACTIONS(1),
    [anon_sym_must] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_ANYDATE] = ACTIONS(1),
    [anon_sym_SOMEDATE] = ACTIONS(1),
    [anon_sym_THEDATE] = ACTIONS(1),
    [anon_sym_before] = ACTIONS(1),
    [anon_sym_after] = ACTIONS(1),
    [anon_sym_day] = ACTIONS(1),
    [anon_sym_week] = ACTIONS(1),
    [anon_sym_year] = ACTIONS(1),
    [anon_sym_days] = ACTIONS(1),
    [anon_sym_weeks] = ACTIONS(1),
    [anon_sym_years] = ACTIONS(1),
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
    [anon_sym_AMOUNT] = ACTIONS(1),
    [anon_sym_SOMECURRENCY] = ACTIONS(1),
    [anon_sym_REPORT] = ACTIONS(1),
    [anon_sym_NAMEDOBJECT] = ACTIONS(1),
    [anon_sym_OTHEROBJECT] = ACTIONS(1),
    [anon_sym_GBP] = ACTIONS(1),
    [anon_sym_POUNDS] = ACTIONS(1),
    [anon_sym_quid] = ACTIONS(1),
    [anon_sym_USD] = ACTIONS(1),
    [anon_sym_DOLLARS] = ACTIONS(1),
    [anon_sym_buck] = ACTIONS(1),
    [anon_sym_EUR] = ACTIONS(1),
    [anon_sym_EUROS] = ACTIONS(1),
    [sym_num] = ACTIONS(1),
  },
  [1] = {
    [sym_contract] = STATE(157),
    [sym_component] = STATE(141),
    [sym_definition] = STATE(109),
    [sym_simple_definition] = STATE(81),
    [sym_conditional_definition] = STATE(116),
    [sym_statement] = STATE(104),
    [sym_conditional_statement] = STATE(116),
    [sym_simple_statement] = STATE(70),
    [sym_ID] = STATE(37),
    [anon_sym_IF] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(7), 1,
      anon_sym_less,
    ACTIONS(9), 1,
      anon_sym_equals,
    ACTIONS(11), 1,
      anon_sym_equal,
    ACTIONS(15), 1,
      anon_sym_AMOUNT,
    ACTIONS(23), 1,
      anon_sym_EUR,
    ACTIONS(25), 1,
      anon_sym_EUROS,
    STATE(148), 1,
      sym_comparison,
    STATE(150), 1,
      sym_object,
    ACTIONS(13), 2,
      anon_sym_more,
      anon_sym_greater,
    STATE(156), 2,
      sym_equal,
      sym_more_than,
    STATE(174), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(19), 3,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
    ACTIONS(21), 3,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
    STATE(170), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(17), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [58] = 15,
    ACTIONS(7), 1,
      anon_sym_less,
    ACTIONS(9), 1,
      anon_sym_equals,
    ACTIONS(11), 1,
      anon_sym_equal,
    ACTIONS(15), 1,
      anon_sym_AMOUNT,
    ACTIONS(23), 1,
      anon_sym_EUR,
    ACTIONS(25), 1,
      anon_sym_EUROS,
    STATE(139), 1,
      sym_object,
    STATE(148), 1,
      sym_comparison,
    ACTIONS(13), 2,
      anon_sym_more,
      anon_sym_greater,
    STATE(156), 2,
      sym_equal,
      sym_more_than,
    STATE(174), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(19), 3,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
    ACTIONS(21), 3,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
    STATE(170), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(17), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [116] = 1,
    ACTIONS(27), 26,
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
      anon_sym_ELSE,
      anon_sym_OR,
      anon_sym_is,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
      anon_sym_to,
      anon_sym_may,
      anon_sym_shall,
      anon_sym_must,
      anon_sym_on,
      anon_sym_before,
      anon_sym_after,
      sym_num,
  [145] = 16,
    ACTIONS(29), 1,
      anon_sym_IS,
    ACTIONS(31), 1,
      anon_sym_EQUALS,
    ACTIONS(33), 1,
      anon_sym_is,
    ACTIONS(37), 1,
      anon_sym_may,
    ACTIONS(41), 1,
      anon_sym_on,
    ACTIONS(45), 1,
      sym_num,
    STATE(8), 1,
      sym_verb_status,
    STATE(22), 1,
      sym_specific_date,
    STATE(58), 1,
      sym_date,
    STATE(75), 1,
      sym_modal_verb,
    STATE(94), 1,
      sym_obligation,
    STATE(101), 1,
      sym_temporal_quantifier,
    STATE(110), 1,
      sym_temporal_offset,
    ACTIONS(39), 2,
      anon_sym_shall,
      anon_sym_must,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(35), 4,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
  [199] = 14,
    ACTIONS(33), 1,
      anon_sym_is,
    ACTIONS(37), 1,
      anon_sym_may,
    ACTIONS(41), 1,
      anon_sym_on,
    ACTIONS(45), 1,
      sym_num,
    STATE(2), 1,
      sym_verb_status,
    STATE(22), 1,
      sym_specific_date,
    STATE(79), 1,
      sym_modal_verb,
    STATE(82), 1,
      sym_date,
    STATE(94), 1,
      sym_obligation,
    STATE(101), 1,
      sym_temporal_quantifier,
    STATE(110), 1,
      sym_temporal_offset,
    ACTIONS(39), 2,
      anon_sym_shall,
      anon_sym_must,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(35), 4,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
  [247] = 14,
    ACTIONS(33), 1,
      anon_sym_is,
    ACTIONS(37), 1,
      anon_sym_may,
    ACTIONS(41), 1,
      anon_sym_on,
    ACTIONS(45), 1,
      sym_num,
    STATE(12), 1,
      sym_verb_status,
    STATE(22), 1,
      sym_specific_date,
    STATE(56), 1,
      sym_date,
    STATE(72), 1,
      sym_modal_verb,
    STATE(94), 1,
      sym_obligation,
    STATE(101), 1,
      sym_temporal_quantifier,
    STATE(110), 1,
      sym_temporal_offset,
    ACTIONS(39), 2,
      anon_sym_shall,
      anon_sym_must,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(35), 4,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
  [295] = 9,
    ACTIONS(15), 1,
      anon_sym_AMOUNT,
    ACTIONS(23), 1,
      anon_sym_EUR,
    ACTIONS(25), 1,
      anon_sym_EUROS,
    STATE(125), 1,
      sym_object,
    STATE(174), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(19), 3,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
    ACTIONS(21), 3,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
    STATE(170), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(17), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [333] = 14,
    ACTIONS(33), 1,
      anon_sym_is,
    ACTIONS(37), 1,
      anon_sym_may,
    ACTIONS(41), 1,
      anon_sym_on,
    ACTIONS(45), 1,
      sym_num,
    STATE(3), 1,
      sym_verb_status,
    STATE(22), 1,
      sym_specific_date,
    STATE(71), 1,
      sym_date,
    STATE(83), 1,
      sym_modal_verb,
    STATE(94), 1,
      sym_obligation,
    STATE(101), 1,
      sym_temporal_quantifier,
    STATE(110), 1,
      sym_temporal_offset,
    ACTIONS(39), 2,
      anon_sym_shall,
      anon_sym_must,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(35), 4,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
  [381] = 4,
    STATE(180), 1,
      sym_month,
    ACTIONS(47), 3,
      anon_sym_day,
      anon_sym_week,
      anon_sym_year,
    ACTIONS(49), 3,
      anon_sym_days,
      anon_sym_weeks,
      anon_sym_years,
    ACTIONS(51), 12,
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
  [409] = 14,
    ACTIONS(33), 1,
      anon_sym_is,
    ACTIONS(37), 1,
      anon_sym_may,
    ACTIONS(41), 1,
      anon_sym_on,
    ACTIONS(45), 1,
      sym_num,
    STATE(8), 1,
      sym_verb_status,
    STATE(22), 1,
      sym_specific_date,
    STATE(58), 1,
      sym_date,
    STATE(75), 1,
      sym_modal_verb,
    STATE(94), 1,
      sym_obligation,
    STATE(101), 1,
      sym_temporal_quantifier,
    STATE(110), 1,
      sym_temporal_offset,
    ACTIONS(39), 2,
      anon_sym_shall,
      anon_sym_must,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(35), 4,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
  [457] = 9,
    ACTIONS(15), 1,
      anon_sym_AMOUNT,
    ACTIONS(23), 1,
      anon_sym_EUR,
    ACTIONS(25), 1,
      anon_sym_EUROS,
    STATE(119), 1,
      sym_object,
    STATE(174), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(19), 3,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
    ACTIONS(21), 3,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
    STATE(170), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(17), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [495] = 9,
    ACTIONS(15), 1,
      anon_sym_AMOUNT,
    ACTIONS(23), 1,
      anon_sym_EUR,
    ACTIONS(25), 1,
      anon_sym_EUROS,
    STATE(149), 1,
      sym_object,
    STATE(174), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(19), 3,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
    ACTIONS(21), 3,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
    STATE(170), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(17), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [533] = 9,
    ACTIONS(15), 1,
      anon_sym_AMOUNT,
    ACTIONS(23), 1,
      anon_sym_EUR,
    ACTIONS(25), 1,
      anon_sym_EUROS,
    STATE(139), 1,
      sym_object,
    STATE(174), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(19), 3,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
    ACTIONS(21), 3,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
    STATE(170), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(17), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [571] = 9,
    ACTIONS(15), 1,
      anon_sym_AMOUNT,
    ACTIONS(23), 1,
      anon_sym_EUR,
    ACTIONS(25), 1,
      anon_sym_EUROS,
    STATE(115), 1,
      sym_object,
    STATE(174), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(19), 3,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
    ACTIONS(21), 3,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
    STATE(170), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(17), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [609] = 9,
    ACTIONS(15), 1,
      anon_sym_AMOUNT,
    ACTIONS(23), 1,
      anon_sym_EUR,
    ACTIONS(25), 1,
      anon_sym_EUROS,
    STATE(120), 1,
      sym_object,
    STATE(174), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(19), 3,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
    ACTIONS(21), 3,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
    STATE(170), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(17), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [647] = 9,
    ACTIONS(15), 1,
      anon_sym_AMOUNT,
    ACTIONS(23), 1,
      anon_sym_EUR,
    ACTIONS(25), 1,
      anon_sym_EUROS,
    STATE(122), 1,
      sym_object,
    STATE(174), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(19), 3,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
    ACTIONS(21), 3,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
    STATE(170), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(17), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [685] = 9,
    ACTIONS(15), 1,
      anon_sym_AMOUNT,
    ACTIONS(23), 1,
      anon_sym_EUR,
    ACTIONS(25), 1,
      anon_sym_EUROS,
    STATE(123), 1,
      sym_object,
    STATE(174), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(19), 3,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
    ACTIONS(21), 3,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
    STATE(170), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(17), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [723] = 9,
    ACTIONS(15), 1,
      anon_sym_AMOUNT,
    ACTIONS(23), 1,
      anon_sym_EUR,
    ACTIONS(25), 1,
      anon_sym_EUROS,
    STATE(128), 1,
      sym_object,
    STATE(174), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(19), 3,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
    ACTIONS(21), 3,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
    STATE(170), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(17), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [761] = 4,
    STATE(193), 1,
      sym_month,
    ACTIONS(47), 3,
      anon_sym_day,
      anon_sym_week,
      anon_sym_year,
    ACTIONS(49), 3,
      anon_sym_days,
      anon_sym_weeks,
      anon_sym_years,
    ACTIONS(51), 12,
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
  [789] = 2,
    ACTIONS(55), 2,
      anon_sym_equal,
      anon_sym_EUR,
    ACTIONS(53), 16,
      anon_sym_less,
      anon_sym_equals,
      anon_sym_more,
      anon_sym_greater,
      anon_sym_AMOUNT,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
      anon_sym_EUROS,
  [812] = 1,
    ACTIONS(57), 15,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
      anon_sym_is,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
      anon_sym_may,
      anon_sym_shall,
      anon_sym_must,
  [830] = 9,
    ACTIONS(15), 1,
      anon_sym_AMOUNT,
    ACTIONS(23), 1,
      anon_sym_EUR,
    ACTIONS(25), 1,
      anon_sym_EUROS,
    ACTIONS(59), 1,
      sym_num,
    STATE(46), 1,
      sym_numerical_expression,
    STATE(47), 1,
      sym_numerical_object,
    ACTIONS(19), 3,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
    ACTIONS(21), 3,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
    STATE(170), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
  [864] = 1,
    ACTIONS(61), 15,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
      anon_sym_is,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
      anon_sym_may,
      anon_sym_shall,
      anon_sym_must,
  [882] = 9,
    ACTIONS(15), 1,
      anon_sym_AMOUNT,
    ACTIONS(23), 1,
      anon_sym_EUR,
    ACTIONS(25), 1,
      anon_sym_EUROS,
    ACTIONS(59), 1,
      sym_num,
    STATE(44), 1,
      sym_numerical_expression,
    STATE(47), 1,
      sym_numerical_object,
    ACTIONS(19), 3,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
    ACTIONS(21), 3,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
    STATE(170), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
  [916] = 1,
    ACTIONS(63), 15,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
      anon_sym_is,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
      anon_sym_may,
      anon_sym_shall,
      anon_sym_must,
  [934] = 1,
    ACTIONS(65), 15,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
      anon_sym_is,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
      anon_sym_may,
      anon_sym_shall,
      anon_sym_must,
  [952] = 1,
    ACTIONS(67), 15,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
      anon_sym_is,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
      anon_sym_may,
      anon_sym_shall,
      anon_sym_must,
  [970] = 1,
    ACTIONS(69), 15,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
      anon_sym_is,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
      anon_sym_may,
      anon_sym_shall,
      anon_sym_must,
  [988] = 1,
    ACTIONS(71), 15,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
      anon_sym_is,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
      anon_sym_may,
      anon_sym_shall,
      anon_sym_must,
  [1006] = 2,
    STATE(188), 1,
      sym_month,
    ACTIONS(51), 12,
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
  [1024] = 2,
    STATE(166), 1,
      sym_month,
    ACTIONS(51), 12,
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
  [1042] = 12,
    ACTIONS(45), 1,
      sym_num,
    ACTIONS(73), 1,
      anon_sym_it,
    ACTIONS(75), 1,
      anon_sym_on,
    ACTIONS(79), 1,
      sym_string,
    STATE(6), 1,
      sym_subject,
    STATE(39), 1,
      sym_holds,
    STATE(63), 1,
      sym_boolean_expression,
    STATE(86), 1,
      sym_temporal_quantifier,
    STATE(105), 1,
      sym_temporal_offset,
    STATE(136), 1,
      sym_date,
    STATE(194), 1,
      sym_specific_date,
    ACTIONS(77), 2,
      anon_sym_before,
      anon_sym_after,
  [1080] = 2,
    STATE(196), 1,
      sym_month,
    ACTIONS(51), 12,
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
  [1098] = 2,
    STATE(192), 1,
      sym_month,
    ACTIONS(51), 12,
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
  [1116] = 2,
    ACTIONS(83), 1,
      anon_sym_EUR,
    ACTIONS(81), 12,
      anon_sym_AMOUNT,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
      anon_sym_EUROS,
  [1134] = 11,
    ACTIONS(45), 1,
      sym_num,
    ACTIONS(73), 1,
      anon_sym_it,
    ACTIONS(75), 1,
      anon_sym_on,
    ACTIONS(79), 1,
      sym_string,
    STATE(5), 1,
      sym_subject,
    STATE(43), 1,
      sym_holds,
    STATE(86), 1,
      sym_temporal_quantifier,
    STATE(105), 1,
      sym_temporal_offset,
    STATE(121), 1,
      sym_date,
    STATE(194), 1,
      sym_specific_date,
    ACTIONS(77), 2,
      anon_sym_before,
      anon_sym_after,
  [1169] = 11,
    ACTIONS(45), 1,
      sym_num,
    ACTIONS(73), 1,
      anon_sym_it,
    ACTIONS(75), 1,
      anon_sym_on,
    ACTIONS(79), 1,
      sym_string,
    STATE(11), 1,
      sym_subject,
    STATE(43), 1,
      sym_holds,
    STATE(86), 1,
      sym_temporal_quantifier,
    STATE(105), 1,
      sym_temporal_offset,
    STATE(121), 1,
      sym_date,
    STATE(194), 1,
      sym_specific_date,
    ACTIONS(77), 2,
      anon_sym_before,
      anon_sym_after,
  [1204] = 10,
    ACTIONS(45), 1,
      sym_num,
    ACTIONS(75), 1,
      anon_sym_on,
    ACTIONS(79), 1,
      sym_string,
    STATE(9), 1,
      sym_subject,
    STATE(65), 1,
      sym_boolean_expression,
    STATE(86), 1,
      sym_temporal_quantifier,
    STATE(105), 1,
      sym_temporal_offset,
    STATE(132), 1,
      sym_date,
    STATE(194), 1,
      sym_specific_date,
    ACTIONS(77), 2,
      anon_sym_before,
      anon_sym_after,
  [1236] = 10,
    ACTIONS(3), 1,
      anon_sym_IF,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      sym_ID,
    STATE(70), 1,
      sym_simple_statement,
    STATE(81), 1,
      sym_simple_definition,
    STATE(104), 1,
      sym_statement,
    STATE(109), 1,
      sym_definition,
    STATE(141), 1,
      sym_component,
    STATE(169), 1,
      sym_contract,
    STATE(116), 2,
      sym_conditional_definition,
      sym_conditional_statement,
  [1268] = 1,
    ACTIONS(85), 11,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
      anon_sym_on,
      anon_sym_before,
      anon_sym_after,
      sym_num,
  [1282] = 2,
    ACTIONS(89), 1,
      anon_sym_EUR,
    ACTIONS(87), 9,
      anon_sym_AMOUNT,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
      anon_sym_EUROS,
      sym_num,
  [1297] = 9,
    ACTIONS(45), 1,
      sym_num,
    ACTIONS(75), 1,
      anon_sym_on,
    ACTIONS(79), 1,
      sym_string,
    STATE(7), 1,
      sym_subject,
    STATE(86), 1,
      sym_temporal_quantifier,
    STATE(105), 1,
      sym_temporal_offset,
    STATE(145), 1,
      sym_date,
    STATE(194), 1,
      sym_specific_date,
    ACTIONS(77), 2,
      anon_sym_before,
      anon_sym_after,
  [1326] = 3,
    STATE(23), 1,
      sym_operator,
    ACTIONS(93), 4,
      anon_sym_PLUS,
      anon_sym_MINUS,
      anon_sym_TIMES,
      anon_sym_DIVIDE,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_ELSE,
  [1343] = 1,
    ACTIONS(95), 10,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_PLUS,
      anon_sym_MINUS,
      anon_sym_TIMES,
      anon_sym_DIVIDE,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_to,
  [1356] = 2,
    STATE(23), 1,
      sym_operator,
    ACTIONS(97), 9,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_PLUS,
      anon_sym_MINUS,
      anon_sym_TIMES,
      anon_sym_DIVIDE,
      anon_sym_IF,
      anon_sym_ELSE,
  [1371] = 1,
    ACTIONS(99), 9,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_PLUS,
      anon_sym_MINUS,
      anon_sym_TIMES,
      anon_sym_DIVIDE,
      anon_sym_IF,
      anon_sym_ELSE,
  [1383] = 7,
    ACTIONS(41), 1,
      anon_sym_on,
    ACTIONS(45), 1,
      sym_num,
    STATE(22), 1,
      sym_specific_date,
    STATE(67), 1,
      sym_date,
    STATE(101), 1,
      sym_temporal_quantifier,
    STATE(110), 1,
      sym_temporal_offset,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
  [1406] = 7,
    ACTIONS(41), 1,
      anon_sym_on,
    ACTIONS(45), 1,
      sym_num,
    STATE(22), 1,
      sym_specific_date,
    STATE(66), 1,
      sym_date,
    STATE(101), 1,
      sym_temporal_quantifier,
    STATE(110), 1,
      sym_temporal_offset,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
  [1429] = 7,
    ACTIONS(41), 1,
      anon_sym_on,
    ACTIONS(45), 1,
      sym_num,
    STATE(22), 1,
      sym_specific_date,
    STATE(64), 1,
      sym_date,
    STATE(101), 1,
      sym_temporal_quantifier,
    STATE(110), 1,
      sym_temporal_offset,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
  [1452] = 7,
    ACTIONS(41), 1,
      anon_sym_on,
    ACTIONS(45), 1,
      sym_num,
    STATE(22), 1,
      sym_specific_date,
    STATE(68), 1,
      sym_date,
    STATE(101), 1,
      sym_temporal_quantifier,
    STATE(110), 1,
      sym_temporal_offset,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
  [1475] = 7,
    ACTIONS(41), 1,
      anon_sym_on,
    ACTIONS(45), 1,
      sym_num,
    STATE(22), 1,
      sym_specific_date,
    STATE(54), 1,
      sym_date,
    STATE(101), 1,
      sym_temporal_quantifier,
    STATE(110), 1,
      sym_temporal_offset,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
  [1498] = 7,
    ACTIONS(41), 1,
      anon_sym_on,
    ACTIONS(45), 1,
      sym_num,
    STATE(22), 1,
      sym_specific_date,
    STATE(69), 1,
      sym_date,
    STATE(101), 1,
      sym_temporal_quantifier,
    STATE(110), 1,
      sym_temporal_offset,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
  [1521] = 1,
    ACTIONS(101), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_OR,
  [1530] = 2,
    ACTIONS(105), 1,
      sym_num,
    ACTIONS(103), 5,
      anon_sym_it,
      anon_sym_on,
      anon_sym_before,
      anon_sym_after,
      sym_string,
  [1541] = 5,
    ACTIONS(33), 1,
      anon_sym_is,
    ACTIONS(37), 1,
      anon_sym_may,
    STATE(74), 1,
      sym_modal_verb,
    STATE(94), 1,
      sym_obligation,
    ACTIONS(39), 2,
      anon_sym_shall,
      anon_sym_must,
  [1558] = 2,
    ACTIONS(47), 3,
      anon_sym_day,
      anon_sym_week,
      anon_sym_year,
    ACTIONS(49), 3,
      anon_sym_days,
      anon_sym_weeks,
      anon_sym_years,
  [1569] = 5,
    ACTIONS(33), 1,
      anon_sym_is,
    ACTIONS(37), 1,
      anon_sym_may,
    STATE(78), 1,
      sym_modal_verb,
    STATE(94), 1,
      sym_obligation,
    ACTIONS(39), 2,
      anon_sym_shall,
      anon_sym_must,
  [1586] = 2,
    ACTIONS(109), 2,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(107), 4,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_THEN,
      anon_sym_ELSE,
  [1597] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      sym_ID,
    STATE(70), 1,
      sym_simple_statement,
    STATE(81), 1,
      sym_simple_definition,
    STATE(108), 1,
      sym_definition,
    STATE(112), 1,
      sym_statement,
  [1616] = 1,
    ACTIONS(111), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
  [1625] = 2,
    ACTIONS(115), 1,
      sym_num,
    ACTIONS(113), 5,
      anon_sym_it,
      anon_sym_on,
      anon_sym_before,
      anon_sym_after,
      sym_string,
  [1636] = 1,
    ACTIONS(117), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
  [1645] = 1,
    ACTIONS(119), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_OR,
  [1654] = 1,
    ACTIONS(121), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
  [1663] = 1,
    ACTIONS(123), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
  [1672] = 1,
    ACTIONS(125), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_OR,
  [1681] = 1,
    ACTIONS(127), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
  [1690] = 1,
    ACTIONS(129), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
  [1699] = 2,
    ACTIONS(133), 2,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(131), 4,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
      anon_sym_ELSE,
  [1710] = 2,
    STATE(18), 1,
      sym_verb_status,
    ACTIONS(35), 4,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
  [1720] = 2,
    STATE(15), 1,
      sym_verb,
    ACTIONS(135), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [1730] = 4,
    ACTIONS(137), 1,
      anon_sym_the,
    ACTIONS(139), 1,
      anon_sym_ANYDATE,
    ACTIONS(143), 1,
      sym_num,
    ACTIONS(141), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [1744] = 2,
    STATE(19), 1,
      sym_verb,
    ACTIONS(135), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [1754] = 2,
    STATE(12), 1,
      sym_verb,
    ACTIONS(135), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [1764] = 1,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_ELSE,
  [1772] = 2,
    ACTIONS(147), 1,
      sym_num,
    ACTIONS(145), 4,
      anon_sym_on,
      anon_sym_before,
      anon_sym_after,
      sym_string,
  [1782] = 2,
    STATE(16), 1,
      sym_verb,
    ACTIONS(135), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [1792] = 2,
    STATE(14), 1,
      sym_verb,
    ACTIONS(135), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [1802] = 2,
    ACTIONS(151), 1,
      sym_num,
    ACTIONS(149), 4,
      anon_sym_on,
      anon_sym_before,
      anon_sym_after,
      sym_string,
  [1812] = 2,
    ACTIONS(155), 1,
      anon_sym_AND,
    ACTIONS(153), 4,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
      anon_sym_ELSE,
  [1822] = 2,
    STATE(13), 1,
      sym_verb_status,
    ACTIONS(35), 4,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
  [1832] = 2,
    STATE(17), 1,
      sym_verb,
    ACTIONS(135), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [1842] = 4,
    ACTIONS(157), 1,
      anon_sym_the,
    ACTIONS(159), 1,
      anon_sym_ANYDATE,
    ACTIONS(163), 1,
      sym_num,
    ACTIONS(161), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [1856] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_ID,
    STATE(70), 1,
      sym_simple_statement,
    STATE(102), 1,
      sym_statement,
  [1869] = 3,
    ACTIONS(165), 1,
      sym_num,
    STATE(106), 1,
      sym_temporal_offset,
    ACTIONS(141), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [1880] = 1,
    ACTIONS(167), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [1887] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      sym_ID,
    STATE(59), 1,
      sym_simple_condition,
    STATE(155), 1,
      sym_condition,
  [1900] = 1,
    ACTIONS(169), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [1907] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      sym_ID,
    STATE(59), 1,
      sym_simple_condition,
    STATE(111), 1,
      sym_condition,
  [1920] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      sym_ID,
    STATE(59), 1,
      sym_simple_condition,
    STATE(93), 1,
      sym_condition,
  [1933] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_ID,
    STATE(70), 1,
      sym_simple_statement,
    STATE(118), 1,
      sym_statement,
  [1946] = 1,
    ACTIONS(171), 4,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_THEN,
      anon_sym_ELSE,
  [1953] = 1,
    ACTIONS(173), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [1960] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_ID,
    STATE(70), 1,
      sym_simple_statement,
    STATE(138), 1,
      sym_statement,
  [1973] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      sym_ID,
    STATE(59), 1,
      sym_simple_condition,
    STATE(103), 1,
      sym_condition,
  [1986] = 4,
    ACTIONS(175), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym_simple_definition,
    STATE(134), 1,
      sym_definition,
    STATE(142), 1,
      sym_ID,
  [1999] = 4,
    ACTIONS(175), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym_simple_definition,
    STATE(100), 1,
      sym_definition,
    STATE(142), 1,
      sym_ID,
  [2012] = 4,
    ACTIONS(175), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym_simple_definition,
    STATE(117), 1,
      sym_definition,
    STATE(142), 1,
      sym_ID,
  [2025] = 1,
    ACTIONS(177), 4,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
      anon_sym_ELSE,
  [2032] = 3,
    ACTIONS(179), 1,
      sym_num,
    STATE(113), 1,
      sym_temporal_offset,
    ACTIONS(161), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [2043] = 1,
    ACTIONS(181), 4,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
      anon_sym_ELSE,
  [2050] = 2,
    ACTIONS(185), 1,
      anon_sym_ELSE,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2058] = 2,
    ACTIONS(189), 1,
      anon_sym_IF,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2066] = 2,
    STATE(144), 1,
      sym_temporal_quantifier,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
  [2074] = 2,
    STATE(129), 1,
      sym_temporal_quantifier,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
  [2082] = 1,
    ACTIONS(191), 3,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
      sym_num,
  [2088] = 2,
    ACTIONS(195), 1,
      anon_sym_ELSE,
    ACTIONS(193), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2096] = 2,
    ACTIONS(197), 1,
      anon_sym_IF,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2104] = 2,
    STATE(146), 1,
      sym_temporal_quantifier,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
  [2112] = 2,
    ACTIONS(201), 1,
      anon_sym_ELSE,
    ACTIONS(199), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2120] = 2,
    ACTIONS(205), 1,
      anon_sym_ELSE,
    ACTIONS(203), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2128] = 2,
    STATE(147), 1,
      sym_temporal_quantifier,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
  [2136] = 2,
    ACTIONS(207), 1,
      sym_string,
    STATE(41), 1,
      sym_subject,
  [2143] = 2,
    ACTIONS(209), 1,
      anon_sym_to,
    STATE(52), 1,
      sym_receiver,
  [2150] = 1,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2155] = 1,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2160] = 1,
    ACTIONS(213), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2165] = 2,
    ACTIONS(209), 1,
      anon_sym_to,
    STATE(48), 1,
      sym_receiver,
  [2172] = 2,
    ACTIONS(209), 1,
      anon_sym_to,
    STATE(67), 1,
      sym_receiver,
  [2179] = 2,
    ACTIONS(207), 1,
      sym_string,
    STATE(58), 1,
      sym_subject,
  [2186] = 2,
    ACTIONS(209), 1,
      anon_sym_to,
    STATE(53), 1,
      sym_receiver,
  [2193] = 2,
    ACTIONS(209), 1,
      anon_sym_to,
    STATE(68), 1,
      sym_receiver,
  [2200] = 2,
    ACTIONS(29), 1,
      anon_sym_IS,
    ACTIONS(31), 1,
      anon_sym_EQUALS,
  [2207] = 2,
    ACTIONS(209), 1,
      anon_sym_to,
    STATE(50), 1,
      sym_receiver,
  [2214] = 2,
    ACTIONS(207), 1,
      sym_string,
    STATE(76), 1,
      sym_subject,
  [2221] = 2,
    ACTIONS(215), 1,
      sym_string,
    STATE(186), 1,
      sym_subject,
  [2228] = 2,
    ACTIONS(209), 1,
      anon_sym_to,
    STATE(54), 1,
      sym_receiver,
  [2235] = 1,
    ACTIONS(217), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [2240] = 2,
    ACTIONS(219), 1,
      anon_sym_the,
    ACTIONS(221), 1,
      anon_sym_not,
  [2247] = 1,
    ACTIONS(223), 2,
      anon_sym_before,
      anon_sym_after,
  [2252] = 2,
    ACTIONS(207), 1,
      sym_string,
    STATE(71), 1,
      sym_subject,
  [2259] = 2,
    ACTIONS(215), 1,
      sym_string,
    STATE(162), 1,
      sym_subject,
  [2266] = 1,
    ACTIONS(225), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2271] = 2,
    ACTIONS(207), 1,
      sym_string,
    STATE(26), 1,
      sym_subject,
  [2278] = 2,
    ACTIONS(207), 1,
      sym_string,
    STATE(82), 1,
      sym_subject,
  [2285] = 2,
    ACTIONS(207), 1,
      sym_string,
    STATE(30), 1,
      sym_subject,
  [2292] = 1,
    ACTIONS(227), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2297] = 2,
    ACTIONS(209), 1,
      anon_sym_to,
    STATE(51), 1,
      sym_receiver,
  [2304] = 2,
    ACTIONS(207), 1,
      sym_string,
    STATE(28), 1,
      sym_subject,
  [2311] = 2,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
    ACTIONS(231), 1,
      anon_sym_C_DASHAND,
  [2318] = 2,
    ACTIONS(207), 1,
      sym_string,
    STATE(124), 1,
      sym_subject,
  [2325] = 2,
    ACTIONS(233), 1,
      anon_sym_RBRACK,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
  [2332] = 1,
    ACTIONS(237), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [2337] = 2,
    ACTIONS(207), 1,
      sym_string,
    STATE(56), 1,
      sym_subject,
  [2344] = 1,
    ACTIONS(239), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [2349] = 1,
    ACTIONS(241), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [2354] = 2,
    ACTIONS(207), 1,
      sym_string,
    STATE(61), 1,
      sym_subject,
  [2361] = 2,
    ACTIONS(209), 1,
      anon_sym_to,
    STATE(66), 1,
      sym_receiver,
  [2368] = 2,
    ACTIONS(209), 1,
      anon_sym_to,
    STATE(49), 1,
      sym_receiver,
  [2375] = 2,
    ACTIONS(207), 1,
      sym_string,
    STATE(45), 1,
      sym_subject,
  [2382] = 2,
    ACTIONS(243), 1,
      anon_sym_RBRACK,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
  [2389] = 2,
    ACTIONS(215), 1,
      sym_string,
    STATE(181), 1,
      sym_subject,
  [2396] = 1,
    ACTIONS(247), 1,
      anon_sym_RBRACK,
  [2400] = 1,
    ACTIONS(249), 1,
      anon_sym_THEN,
  [2404] = 1,
    ACTIONS(251), 1,
      sym_string,
  [2408] = 1,
    ACTIONS(253), 1,
      ts_builtin_sym_end,
  [2412] = 1,
    ACTIONS(255), 1,
      sym_num,
  [2416] = 1,
    ACTIONS(257), 1,
      sym_num,
  [2420] = 1,
    ACTIONS(259), 1,
      sym_num,
  [2424] = 1,
    ACTIONS(261), 1,
      sym_num,
  [2428] = 1,
    ACTIONS(67), 1,
      sym_string,
  [2432] = 1,
    ACTIONS(263), 1,
      sym_num,
  [2436] = 1,
    ACTIONS(265), 1,
      anon_sym_that,
  [2440] = 1,
    ACTIONS(267), 1,
      anon_sym_case,
  [2444] = 1,
    ACTIONS(269), 1,
      sym_num,
  [2448] = 1,
    ACTIONS(69), 1,
      sym_string,
  [2452] = 1,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
  [2456] = 1,
    ACTIONS(273), 1,
      ts_builtin_sym_end,
  [2460] = 1,
    ACTIONS(275), 1,
      sym_num,
  [2464] = 1,
    ACTIONS(277), 1,
      anon_sym_to,
  [2468] = 1,
    ACTIONS(279), 1,
      sym_string,
  [2472] = 1,
    ACTIONS(281), 1,
      anon_sym_forbidden,
  [2476] = 1,
    ACTIONS(283), 1,
      anon_sym_to,
  [2480] = 1,
    ACTIONS(27), 1,
      sym_string,
  [2484] = 1,
    ACTIONS(285), 1,
      anon_sym_to,
  [2488] = 1,
    ACTIONS(105), 1,
      sym_string,
  [2492] = 1,
    ACTIONS(61), 1,
      sym_string,
  [2496] = 1,
    ACTIONS(65), 1,
      sym_string,
  [2500] = 1,
    ACTIONS(287), 1,
      sym_num,
  [2504] = 1,
    ACTIONS(71), 1,
      sym_string,
  [2508] = 1,
    ACTIONS(289), 1,
      anon_sym_case,
  [2512] = 1,
    ACTIONS(291), 1,
      anon_sym_the,
  [2516] = 1,
    ACTIONS(293), 1,
      anon_sym_is,
  [2520] = 1,
    ACTIONS(115), 1,
      sym_string,
  [2524] = 1,
    ACTIONS(63), 1,
      sym_string,
  [2528] = 1,
    ACTIONS(295), 1,
      sym_num,
  [2532] = 1,
    ACTIONS(297), 1,
      sym_num,
  [2536] = 1,
    ACTIONS(299), 1,
      sym_string,
  [2540] = 1,
    ACTIONS(301), 1,
      sym_string,
  [2544] = 1,
    ACTIONS(303), 1,
      sym_string,
  [2548] = 1,
    ACTIONS(305), 1,
      sym_num,
  [2552] = 1,
    ACTIONS(307), 1,
      sym_num,
  [2556] = 1,
    ACTIONS(57), 1,
      sym_string,
  [2560] = 1,
    ACTIONS(309), 1,
      anon_sym_RBRACK,
  [2564] = 1,
    ACTIONS(311), 1,
      sym_num,
  [2568] = 1,
    ACTIONS(313), 1,
      sym_num,
  [2572] = 1,
    ACTIONS(315), 1,
      anon_sym_than,
  [2576] = 1,
    ACTIONS(317), 1,
      sym_string,
  [2580] = 1,
    ACTIONS(319), 1,
      anon_sym_to,
  [2584] = 1,
    ACTIONS(321), 1,
      anon_sym_than,
  [2588] = 1,
    ACTIONS(323), 1,
      anon_sym_RPAREN,
  [2592] = 1,
    ACTIONS(325), 1,
      anon_sym_that,
  [2596] = 1,
    ACTIONS(327), 1,
      sym_num,
  [2600] = 1,
    ACTIONS(329), 1,
      sym_num,
  [2604] = 1,
    ACTIONS(331), 1,
      sym_num,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 58,
  [SMALL_STATE(4)] = 116,
  [SMALL_STATE(5)] = 145,
  [SMALL_STATE(6)] = 199,
  [SMALL_STATE(7)] = 247,
  [SMALL_STATE(8)] = 295,
  [SMALL_STATE(9)] = 333,
  [SMALL_STATE(10)] = 381,
  [SMALL_STATE(11)] = 409,
  [SMALL_STATE(12)] = 457,
  [SMALL_STATE(13)] = 495,
  [SMALL_STATE(14)] = 533,
  [SMALL_STATE(15)] = 571,
  [SMALL_STATE(16)] = 609,
  [SMALL_STATE(17)] = 647,
  [SMALL_STATE(18)] = 685,
  [SMALL_STATE(19)] = 723,
  [SMALL_STATE(20)] = 761,
  [SMALL_STATE(21)] = 789,
  [SMALL_STATE(22)] = 812,
  [SMALL_STATE(23)] = 830,
  [SMALL_STATE(24)] = 864,
  [SMALL_STATE(25)] = 882,
  [SMALL_STATE(26)] = 916,
  [SMALL_STATE(27)] = 934,
  [SMALL_STATE(28)] = 952,
  [SMALL_STATE(29)] = 970,
  [SMALL_STATE(30)] = 988,
  [SMALL_STATE(31)] = 1006,
  [SMALL_STATE(32)] = 1024,
  [SMALL_STATE(33)] = 1042,
  [SMALL_STATE(34)] = 1080,
  [SMALL_STATE(35)] = 1098,
  [SMALL_STATE(36)] = 1116,
  [SMALL_STATE(37)] = 1134,
  [SMALL_STATE(38)] = 1169,
  [SMALL_STATE(39)] = 1204,
  [SMALL_STATE(40)] = 1236,
  [SMALL_STATE(41)] = 1268,
  [SMALL_STATE(42)] = 1282,
  [SMALL_STATE(43)] = 1297,
  [SMALL_STATE(44)] = 1326,
  [SMALL_STATE(45)] = 1343,
  [SMALL_STATE(46)] = 1356,
  [SMALL_STATE(47)] = 1371,
  [SMALL_STATE(48)] = 1383,
  [SMALL_STATE(49)] = 1406,
  [SMALL_STATE(50)] = 1429,
  [SMALL_STATE(51)] = 1452,
  [SMALL_STATE(52)] = 1475,
  [SMALL_STATE(53)] = 1498,
  [SMALL_STATE(54)] = 1521,
  [SMALL_STATE(55)] = 1530,
  [SMALL_STATE(56)] = 1541,
  [SMALL_STATE(57)] = 1558,
  [SMALL_STATE(58)] = 1569,
  [SMALL_STATE(59)] = 1586,
  [SMALL_STATE(60)] = 1597,
  [SMALL_STATE(61)] = 1616,
  [SMALL_STATE(62)] = 1625,
  [SMALL_STATE(63)] = 1636,
  [SMALL_STATE(64)] = 1645,
  [SMALL_STATE(65)] = 1654,
  [SMALL_STATE(66)] = 1663,
  [SMALL_STATE(67)] = 1672,
  [SMALL_STATE(68)] = 1681,
  [SMALL_STATE(69)] = 1690,
  [SMALL_STATE(70)] = 1699,
  [SMALL_STATE(71)] = 1710,
  [SMALL_STATE(72)] = 1720,
  [SMALL_STATE(73)] = 1730,
  [SMALL_STATE(74)] = 1744,
  [SMALL_STATE(75)] = 1754,
  [SMALL_STATE(76)] = 1764,
  [SMALL_STATE(77)] = 1772,
  [SMALL_STATE(78)] = 1782,
  [SMALL_STATE(79)] = 1792,
  [SMALL_STATE(80)] = 1802,
  [SMALL_STATE(81)] = 1812,
  [SMALL_STATE(82)] = 1822,
  [SMALL_STATE(83)] = 1832,
  [SMALL_STATE(84)] = 1842,
  [SMALL_STATE(85)] = 1856,
  [SMALL_STATE(86)] = 1869,
  [SMALL_STATE(87)] = 1880,
  [SMALL_STATE(88)] = 1887,
  [SMALL_STATE(89)] = 1900,
  [SMALL_STATE(90)] = 1907,
  [SMALL_STATE(91)] = 1920,
  [SMALL_STATE(92)] = 1933,
  [SMALL_STATE(93)] = 1946,
  [SMALL_STATE(94)] = 1953,
  [SMALL_STATE(95)] = 1960,
  [SMALL_STATE(96)] = 1973,
  [SMALL_STATE(97)] = 1986,
  [SMALL_STATE(98)] = 1999,
  [SMALL_STATE(99)] = 2012,
  [SMALL_STATE(100)] = 2025,
  [SMALL_STATE(101)] = 2032,
  [SMALL_STATE(102)] = 2043,
  [SMALL_STATE(103)] = 2050,
  [SMALL_STATE(104)] = 2058,
  [SMALL_STATE(105)] = 2066,
  [SMALL_STATE(106)] = 2074,
  [SMALL_STATE(107)] = 2082,
  [SMALL_STATE(108)] = 2088,
  [SMALL_STATE(109)] = 2096,
  [SMALL_STATE(110)] = 2104,
  [SMALL_STATE(111)] = 2112,
  [SMALL_STATE(112)] = 2120,
  [SMALL_STATE(113)] = 2128,
  [SMALL_STATE(114)] = 2136,
  [SMALL_STATE(115)] = 2143,
  [SMALL_STATE(116)] = 2150,
  [SMALL_STATE(117)] = 2155,
  [SMALL_STATE(118)] = 2160,
  [SMALL_STATE(119)] = 2165,
  [SMALL_STATE(120)] = 2172,
  [SMALL_STATE(121)] = 2179,
  [SMALL_STATE(122)] = 2186,
  [SMALL_STATE(123)] = 2193,
  [SMALL_STATE(124)] = 2200,
  [SMALL_STATE(125)] = 2207,
  [SMALL_STATE(126)] = 2214,
  [SMALL_STATE(127)] = 2221,
  [SMALL_STATE(128)] = 2228,
  [SMALL_STATE(129)] = 2235,
  [SMALL_STATE(130)] = 2240,
  [SMALL_STATE(131)] = 2247,
  [SMALL_STATE(132)] = 2252,
  [SMALL_STATE(133)] = 2259,
  [SMALL_STATE(134)] = 2266,
  [SMALL_STATE(135)] = 2271,
  [SMALL_STATE(136)] = 2278,
  [SMALL_STATE(137)] = 2285,
  [SMALL_STATE(138)] = 2292,
  [SMALL_STATE(139)] = 2297,
  [SMALL_STATE(140)] = 2304,
  [SMALL_STATE(141)] = 2311,
  [SMALL_STATE(142)] = 2318,
  [SMALL_STATE(143)] = 2325,
  [SMALL_STATE(144)] = 2332,
  [SMALL_STATE(145)] = 2337,
  [SMALL_STATE(146)] = 2344,
  [SMALL_STATE(147)] = 2349,
  [SMALL_STATE(148)] = 2354,
  [SMALL_STATE(149)] = 2361,
  [SMALL_STATE(150)] = 2368,
  [SMALL_STATE(151)] = 2375,
  [SMALL_STATE(152)] = 2382,
  [SMALL_STATE(153)] = 2389,
  [SMALL_STATE(154)] = 2396,
  [SMALL_STATE(155)] = 2400,
  [SMALL_STATE(156)] = 2404,
  [SMALL_STATE(157)] = 2408,
  [SMALL_STATE(158)] = 2412,
  [SMALL_STATE(159)] = 2416,
  [SMALL_STATE(160)] = 2420,
  [SMALL_STATE(161)] = 2424,
  [SMALL_STATE(162)] = 2428,
  [SMALL_STATE(163)] = 2432,
  [SMALL_STATE(164)] = 2436,
  [SMALL_STATE(165)] = 2440,
  [SMALL_STATE(166)] = 2444,
  [SMALL_STATE(167)] = 2448,
  [SMALL_STATE(168)] = 2452,
  [SMALL_STATE(169)] = 2456,
  [SMALL_STATE(170)] = 2460,
  [SMALL_STATE(171)] = 2464,
  [SMALL_STATE(172)] = 2468,
  [SMALL_STATE(173)] = 2472,
  [SMALL_STATE(174)] = 2476,
  [SMALL_STATE(175)] = 2480,
  [SMALL_STATE(176)] = 2484,
  [SMALL_STATE(177)] = 2488,
  [SMALL_STATE(178)] = 2492,
  [SMALL_STATE(179)] = 2496,
  [SMALL_STATE(180)] = 2500,
  [SMALL_STATE(181)] = 2504,
  [SMALL_STATE(182)] = 2508,
  [SMALL_STATE(183)] = 2512,
  [SMALL_STATE(184)] = 2516,
  [SMALL_STATE(185)] = 2520,
  [SMALL_STATE(186)] = 2524,
  [SMALL_STATE(187)] = 2528,
  [SMALL_STATE(188)] = 2532,
  [SMALL_STATE(189)] = 2536,
  [SMALL_STATE(190)] = 2540,
  [SMALL_STATE(191)] = 2544,
  [SMALL_STATE(192)] = 2548,
  [SMALL_STATE(193)] = 2552,
  [SMALL_STATE(194)] = 2556,
  [SMALL_STATE(195)] = 2560,
  [SMALL_STATE(196)] = 2564,
  [SMALL_STATE(197)] = 2568,
  [SMALL_STATE(198)] = 2572,
  [SMALL_STATE(199)] = 2576,
  [SMALL_STATE(200)] = 2580,
  [SMALL_STATE(201)] = 2584,
  [SMALL_STATE(202)] = 2588,
  [SMALL_STATE(203)] = 2592,
  [SMALL_STATE(204)] = 2596,
  [SMALL_STATE(205)] = 2600,
  [SMALL_STATE(206)] = 2604,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verb_status, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verb_status, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_specific_date, 5, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 5, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_specific_date, 4, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 4, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verb, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verb, 1, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_receiver, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_definition, 4, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numerical_object, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numerical_expression, 3, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numerical_expression, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 8, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ID, 3, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ID, 3, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 4, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ID, 6, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ID, 6, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 6, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition, 6, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 7, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition, 7, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition, 8, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_holds, 5, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_holds, 5, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_holds, 6, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_holds, 6, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modal_verb, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obligation, 1, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modal_verb, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_definition, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 1, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_temporal_quantifier, 1, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_definition, 4, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_statement, 3, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_statement, 4, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_definition, 5, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_statement, 5, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_temporal_offset, 2, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_definition, 6, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_statement, 6, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract, 1, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 1, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pounds, 1, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dollars, 1, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_euros, 1, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract, 3, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 1, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnumerical_object, 2, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_month, 1, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 2, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equal, 2, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_more_than, 2, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equal, 1, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
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
