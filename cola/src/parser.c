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
#define STATE_COUNT 177
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 114
#define ALIAS_COUNT 0
#define TOKEN_COUNT 83
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
  anon_sym_SOMEDATE = 37,
  anon_sym_THEDATE = 38,
  anon_sym_before = 39,
  anon_sym_after = 40,
  anon_sym_day = 41,
  anon_sym_week = 42,
  anon_sym_year = 43,
  anon_sym_days = 44,
  anon_sym_weeks = 45,
  anon_sym_years = 46,
  anon_sym_January = 47,
  anon_sym_February = 48,
  anon_sym_March = 49,
  anon_sym_April = 50,
  anon_sym_May = 51,
  anon_sym_June = 52,
  anon_sym_July = 53,
  anon_sym_August = 54,
  anon_sym_September = 55,
  anon_sym_October = 56,
  anon_sym_November = 57,
  anon_sym_December = 58,
  anon_sym_POUNDS = 59,
  anon_sym_DOLLARS = 60,
  anon_sym_EUROS = 61,
  anon_sym_FRANCS = 62,
  anon_sym_AMOUNT = 63,
  anon_sym_SOMECURRENCY = 64,
  anon_sym_REPORT = 65,
  anon_sym_NAMEDOBJECT = 66,
  anon_sym_OTHEROBJECT = 67,
  sym_string = 68,
  sym_num = 69,
  anon_sym_Must = 70,
  anon_sym_HaveTo = 71,
  anon_sym_NeedTo = 72,
  anon_sym_Should = 73,
  anon_sym_OughtTo = 74,
  anon_sym_Can = 75,
  anon_sym_May2 = 76,
  anon_sym_Could = 77,
  anon_sym_Might = 78,
  anon_sym_MustNot = 79,
  anon_sym_Cannot = 80,
  anon_sym_MayNot = 81,
  anon_sym_ShouldNot = 82,
  sym_contract = 83,
  sym_component = 84,
  sym_definition = 85,
  sym_simple_definition = 86,
  sym_numerical_expression = 87,
  sym_operator = 88,
  sym_conditional_definition = 89,
  sym_statement = 90,
  sym_conditional_statement = 91,
  sym_simple_statement = 92,
  sym_condition = 93,
  sym_simple_condition = 94,
  sym_boolean_expression = 95,
  sym_identity = 96,
  sym_holds = 97,
  sym_subject = 98,
  sym_verb = 99,
  sym_verb_status = 100,
  sym_comparison = 101,
  sym_modal_verb = 102,
  sym_date = 103,
  sym_temporal_quantifier = 104,
  sym_specific_date = 105,
  sym_temporal_offset = 106,
  sym_month = 107,
  sym_object = 108,
  sym_numerical_object = 109,
  sym_nonnumerical_object = 110,
  sym_OBLIGATION = 111,
  sym_PERMISSION = 112,
  sym_PROHIBITION = 113,
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
  [sym_temporal_quantifier] = "temporal_quantifier",
  [sym_specific_date] = "specific_date",
  [sym_temporal_offset] = "temporal_offset",
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
  [sym_temporal_quantifier] = sym_temporal_quantifier,
  [sym_specific_date] = sym_specific_date,
  [sym_temporal_offset] = sym_temporal_offset,
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
  [17] = 17,
  [18] = 17,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 25,
  [28] = 24,
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
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 62,
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
  [92] = 89,
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
  [105] = 104,
  [106] = 101,
  [107] = 107,
  [108] = 108,
  [109] = 107,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
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
  [126] = 125,
  [127] = 127,
  [128] = 124,
  [129] = 129,
  [130] = 130,
  [131] = 112,
  [132] = 132,
  [133] = 129,
  [134] = 123,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 12,
  [140] = 13,
  [141] = 10,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 2,
  [146] = 9,
  [147] = 56,
  [148] = 136,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 57,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 8,
  [160] = 160,
  [161] = 161,
  [162] = 151,
  [163] = 142,
  [164] = 14,
  [165] = 153,
  [166] = 144,
  [167] = 11,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 154,
  [173] = 173,
  [174] = 171,
  [175] = 173,
  [176] = 176,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(298);
      ADVANCE_MAP(
        ' ', 2,
        '(', 312,
        ')', 313,
        'A', 100,
        'C', 8,
        'D', 49,
        'E', 130,
        'F', 144,
        'I', 76,
        'J', 187,
        'L', 50,
        'M', 83,
        'N', 13,
        'O', 134,
        'P', 14,
        'R', 51,
        'S', 59,
        'T', 79,
        '[', 310,
        ']', 311,
        'a', 221,
        'b', 210,
        'c', 186,
        'd', 183,
        'i', 267,
        'n', 247,
        'o', 239,
        't', 226,
        'w', 211,
        'y', 212,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(383);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        ' ', 2,
        '(', 312,
        ')', 313,
        'A', 100,
        'C', 8,
        'D', 49,
        'E', 130,
        'F', 144,
        'I', 76,
        'J', 187,
        'L', 50,
        'M', 83,
        'N', 13,
        'O', 134,
        'P', 14,
        'R', 51,
        'S', 59,
        'T', 79,
        '[', 310,
        ']', 311,
        'a', 221,
        'b', 210,
        'c', 186,
        'd', 183,
        'i', 267,
        'n', 247,
        'o', 239,
        't', 226,
        'w', 211,
        'y', 212,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(383);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        ' ', 2,
        '(', 312,
        ')', 313,
        'A', 100,
        'C', 9,
        'D', 49,
        'E', 130,
        'F', 144,
        'H', 192,
        'I', 76,
        'J', 187,
        'L', 50,
        'M', 82,
        'N', 12,
        'O', 135,
        'P', 14,
        'R', 51,
        'S', 60,
        'T', 79,
        '[', 310,
        ']', 311,
        'a', 221,
        'b', 210,
        'c', 186,
        'd', 183,
        'i', 267,
        'n', 247,
        'o', 239,
        't', 226,
        'w', 211,
        'y', 212,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(383);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        ' ', 4,
        'A', 114,
        'C', 10,
        'D', 75,
        'E', 131,
        'I', 76,
        'M', 85,
        'O', 133,
        'P', 19,
        'S', 68,
        'T', 81,
        'a', 221,
        'b', 210,
        'o', 239,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(383);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        ' ', 4,
        'A', 114,
        'C', 11,
        'D', 75,
        'E', 131,
        'H', 192,
        'I', 76,
        'M', 84,
        'N', 214,
        'O', 136,
        'P', 19,
        'S', 69,
        'T', 81,
        'a', 221,
        'b', 210,
        'o', 239,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(383);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(165);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(166);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(167);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == 'H') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == 'H') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(241);
      if (lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == 'H') ADVANCE(27);
      if (lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == 'H') ADVANCE(27);
      if (lookahead == 'a') ADVANCE(241);
      if (lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(102);
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(290);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(102);
      if (lookahead == 'o') ADVANCE(290);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(88);
      if (lookahead == 'L') ADVANCE(172);
      if (lookahead == 'O') ADVANCE(177);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        'A', 101,
        'D', 121,
        'E', 132,
        'F', 144,
        'J', 187,
        'L', 50,
        'M', 122,
        'N', 13,
        'O', 159,
        'P', 123,
        'R', 51,
        'S', 127,
        'd', 183,
        'w', 211,
        'y', 212,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      END_STATE();
    case 16:
      if (lookahead == 'A') ADVANCE(168);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(137);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(111);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(87);
      if (lookahead == 'L') ADVANCE(172);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(94);
      END_STATE();
    case 21:
      if (lookahead == 'A') ADVANCE(107);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(97);
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(142);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(108);
      if (lookahead == 'E') ADVANCE(48);
      END_STATE();
    case 25:
      if (lookahead == 'A') ADVANCE(95);
      END_STATE();
    case 26:
      if (lookahead == 'A') ADVANCE(169);
      END_STATE();
    case 27:
      if (lookahead == 'A') ADVANCE(145);
      END_STATE();
    case 28:
      if (lookahead == 'A') ADVANCE(170);
      END_STATE();
    case 29:
      if (lookahead == 'B') ADVANCE(91);
      END_STATE();
    case 30:
      if (lookahead == 'B') ADVANCE(92);
      END_STATE();
    case 31:
      if (lookahead == 'C') ADVANCE(182);
      END_STATE();
    case 32:
      if (lookahead == 'C') ADVANCE(175);
      END_STATE();
    case 33:
      if (lookahead == 'C') ADVANCE(175);
      if (lookahead == 'D') ADVANCE(28);
      END_STATE();
    case 34:
      if (lookahead == 'C') ADVANCE(163);
      END_STATE();
    case 35:
      if (lookahead == 'C') ADVANCE(164);
      END_STATE();
    case 36:
      if (lookahead == 'C') ADVANCE(155);
      END_STATE();
    case 37:
      if (lookahead == 'D') ADVANCE(300);
      END_STATE();
    case 38:
      if (lookahead == 'D') ADVANCE(300);
      if (lookahead == 'Y') ADVANCE(45);
      END_STATE();
    case 39:
      if (lookahead == 'D') ADVANCE(326);
      END_STATE();
    case 40:
      if (lookahead == 'D') ADVANCE(324);
      if (lookahead == 'T') ADVANCE(328);
      END_STATE();
    case 41:
      if (lookahead == 'D') ADVANCE(299);
      END_STATE();
    case 42:
      if (lookahead == 'D') ADVANCE(327);
      END_STATE();
    case 43:
      if (lookahead == 'D') ADVANCE(325);
      END_STATE();
    case 44:
      if (lookahead == 'D') ADVANCE(120);
      END_STATE();
    case 45:
      if (lookahead == 'D') ADVANCE(16);
      END_STATE();
    case 46:
      if (lookahead == 'D') ADVANCE(156);
      END_STATE();
    case 47:
      if (lookahead == 'D') ADVANCE(55);
      END_STATE();
    case 48:
      if (lookahead == 'D') ADVANCE(26);
      if (lookahead == 'N') ADVANCE(308);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(93);
      if (lookahead == 'I') ADVANCE(179);
      if (lookahead == 'O') ADVANCE(96);
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(158);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(129);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(334);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(33);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(323);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(306);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(337);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(339);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(338);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(106);
      if (lookahead == 'O') ADVANCE(103);
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(106);
      if (lookahead == 'O') ADVANCE(103);
      if (lookahead == 'e') ADVANCE(254);
      if (lookahead == 'h') ADVANCE(253);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(34);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(32);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(44);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(138);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(153);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(112);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(42);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(115);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(115);
      if (lookahead == 'h') ADVANCE(253);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(43);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(109);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(148);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(35);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(147);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(99);
      if (lookahead == 'I') ADVANCE(179);
      END_STATE();
    case 76:
      if (lookahead == 'F') ADVANCE(307);
      if (lookahead == 'S') ADVANCE(301);
      END_STATE();
    case 77:
      if (lookahead == 'G') ADVANCE(54);
      END_STATE();
    case 78:
      if (lookahead == 'G') ADVANCE(67);
      END_STATE();
    case 79:
      if (lookahead == 'H') ADVANCE(24);
      if (lookahead == 'I') ADVANCE(105);
      if (lookahead == 'O') ADVANCE(333);
      END_STATE();
    case 80:
      if (lookahead == 'H') ADVANCE(72);
      END_STATE();
    case 81:
      if (lookahead == 'H') ADVANCE(71);
      if (lookahead == 'I') ADVANCE(105);
      END_STATE();
    case 82:
      if (lookahead == 'I') ADVANCE(116);
      if (lookahead == 'O') ADVANCE(140);
      if (lookahead == 'a') ADVANCE(262);
      if (lookahead == 'i') ADVANCE(223);
      if (lookahead == 'u') ADVANCE(268);
      END_STATE();
    case 83:
      if (lookahead == 'I') ADVANCE(116);
      if (lookahead == 'O') ADVANCE(140);
      if (lookahead == 'a') ADVANCE(262);
      if (lookahead == 'u') ADVANCE(268);
      END_STATE();
    case 84:
      if (lookahead == 'I') ADVANCE(116);
      if (lookahead == 'a') ADVANCE(295);
      if (lookahead == 'i') ADVANCE(223);
      if (lookahead == 'u') ADVANCE(268);
      END_STATE();
    case 85:
      if (lookahead == 'I') ADVANCE(116);
      if (lookahead == 'u') ADVANCE(268);
      END_STATE();
    case 86:
      if (lookahead == 'I') ADVANCE(180);
      END_STATE();
    case 87:
      if (lookahead == 'I') ADVANCE(39);
      END_STATE();
    case 88:
      if (lookahead == 'I') ADVANCE(39);
      if (lookahead == 'Y') ADVANCE(322);
      END_STATE();
    case 89:
      if (lookahead == 'I') ADVANCE(47);
      END_STATE();
    case 90:
      if (lookahead == 'I') ADVANCE(181);
      END_STATE();
    case 91:
      if (lookahead == 'J') ADVANCE(61);
      END_STATE();
    case 92:
      if (lookahead == 'J') ADVANCE(73);
      END_STATE();
    case 93:
      if (lookahead == 'L') ADVANCE(86);
      END_STATE();
    case 94:
      if (lookahead == 'L') ADVANCE(332);
      END_STATE();
    case 95:
      if (lookahead == 'L') ADVANCE(331);
      END_STATE();
    case 96:
      if (lookahead == 'L') ADVANCE(98);
      END_STATE();
    case 97:
      if (lookahead == 'L') ADVANCE(154);
      END_STATE();
    case 98:
      if (lookahead == 'L') ADVANCE(23);
      END_STATE();
    case 99:
      if (lookahead == 'L') ADVANCE(90);
      END_STATE();
    case 100:
      if (lookahead == 'M') ADVANCE(126);
      if (lookahead == 'N') ADVANCE(38);
      if (lookahead == 'p') ADVANCE(255);
      if (lookahead == 'u') ADVANCE(224);
      END_STATE();
    case 101:
      if (lookahead == 'M') ADVANCE(126);
      if (lookahead == 'p') ADVANCE(255);
      if (lookahead == 'u') ADVANCE(224);
      END_STATE();
    case 102:
      if (lookahead == 'M') ADVANCE(63);
      END_STATE();
    case 103:
      if (lookahead == 'M') ADVANCE(53);
      END_STATE();
    case 104:
      if (lookahead == 'M') ADVANCE(62);
      END_STATE();
    case 105:
      if (lookahead == 'M') ADVANCE(65);
      END_STATE();
    case 106:
      if (lookahead == 'N') ADVANCE(40);
      END_STATE();
    case 107:
      if (lookahead == 'N') ADVANCE(36);
      END_STATE();
    case 108:
      if (lookahead == 'N') ADVANCE(330);
      END_STATE();
    case 109:
      if (lookahead == 'N') ADVANCE(308);
      END_STATE();
    case 110:
      if (lookahead == 'N') ADVANCE(161);
      END_STATE();
    case 111:
      if (lookahead == 'N') ADVANCE(41);
      END_STATE();
    case 112:
      if (lookahead == 'N') ADVANCE(31);
      END_STATE();
    case 113:
      if (lookahead == 'N') ADVANCE(46);
      END_STATE();
    case 114:
      if (lookahead == 'N') ADVANCE(37);
      END_STATE();
    case 115:
      if (lookahead == 'N') ADVANCE(160);
      END_STATE();
    case 116:
      if (lookahead == 'N') ADVANCE(173);
      END_STATE();
    case 117:
      if (lookahead == 'N') ADVANCE(250);
      END_STATE();
    case 118:
      if (lookahead == 'N') ADVANCE(251);
      END_STATE();
    case 119:
      if (lookahead == 'N') ADVANCE(252);
      END_STATE();
    case 120:
      if (lookahead == 'O') ADVANCE(29);
      END_STATE();
    case 121:
      if (lookahead == 'O') ADVANCE(96);
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 122:
      if (lookahead == 'O') ADVANCE(140);
      if (lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 123:
      if (lookahead == 'O') ADVANCE(177);
      END_STATE();
    case 124:
      if (lookahead == 'O') ADVANCE(141);
      END_STATE();
    case 125:
      if (lookahead == 'O') ADVANCE(151);
      END_STATE();
    case 126:
      if (lookahead == 'O') ADVANCE(174);
      END_STATE();
    case 127:
      if (lookahead == 'O') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 128:
      if (lookahead == 'O') ADVANCE(30);
      END_STATE();
    case 129:
      if (lookahead == 'P') ADVANCE(124);
      END_STATE();
    case 130:
      if (lookahead == 'Q') ADVANCE(171);
      if (lookahead == 'U') ADVANCE(139);
      END_STATE();
    case 131:
      if (lookahead == 'Q') ADVANCE(176);
      END_STATE();
    case 132:
      if (lookahead == 'Q') ADVANCE(178);
      if (lookahead == 'U') ADVANCE(139);
      END_STATE();
    case 133:
      if (lookahead == 'R') ADVANCE(309);
      END_STATE();
    case 134:
      if (lookahead == 'R') ADVANCE(309);
      if (lookahead == 'T') ADVANCE(80);
      if (lookahead == 'c') ADVANCE(280);
      END_STATE();
    case 135:
      if (lookahead == 'R') ADVANCE(309);
      if (lookahead == 'T') ADVANCE(80);
      if (lookahead == 'c') ADVANCE(280);
      if (lookahead == 'u') ADVANCE(225);
      END_STATE();
    case 136:
      if (lookahead == 'R') ADVANCE(309);
      if (lookahead == 'u') ADVANCE(225);
      END_STATE();
    case 137:
      if (lookahead == 'R') ADVANCE(77);
      END_STATE();
    case 138:
      if (lookahead == 'R') ADVANCE(321);
      END_STATE();
    case 139:
      if (lookahead == 'R') ADVANCE(125);
      END_STATE();
    case 140:
      if (lookahead == 'R') ADVANCE(52);
      END_STATE();
    case 141:
      if (lookahead == 'R') ADVANCE(162);
      END_STATE();
    case 142:
      if (lookahead == 'R') ADVANCE(157);
      END_STATE();
    case 143:
      if (lookahead == 'R') ADVANCE(66);
      END_STATE();
    case 144:
      if (lookahead == 'R') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 145:
      if (lookahead == 'R') ADVANCE(78);
      END_STATE();
    case 146:
      if (lookahead == 'R') ADVANCE(143);
      END_STATE();
    case 147:
      if (lookahead == 'R') ADVANCE(70);
      END_STATE();
    case 148:
      if (lookahead == 'R') ADVANCE(128);
      END_STATE();
    case 149:
      if (lookahead == 'S') ADVANCE(329);
      END_STATE();
    case 150:
      if (lookahead == 'S') ADVANCE(303);
      END_STATE();
    case 151:
      if (lookahead == 'S') ADVANCE(364);
      END_STATE();
    case 152:
      if (lookahead == 'S') ADVANCE(304);
      END_STATE();
    case 153:
      if (lookahead == 'S') ADVANCE(305);
      END_STATE();
    case 154:
      if (lookahead == 'S') ADVANCE(302);
      END_STATE();
    case 155:
      if (lookahead == 'S') ADVANCE(365);
      END_STATE();
    case 156:
      if (lookahead == 'S') ADVANCE(362);
      END_STATE();
    case 157:
      if (lookahead == 'S') ADVANCE(363);
      END_STATE();
    case 158:
      if (lookahead == 'S') ADVANCE(149);
      END_STATE();
    case 159:
      if (lookahead == 'T') ADVANCE(80);
      if (lookahead == 'c') ADVANCE(280);
      END_STATE();
    case 160:
      if (lookahead == 'T') ADVANCE(328);
      END_STATE();
    case 161:
      if (lookahead == 'T') ADVANCE(366);
      END_STATE();
    case 162:
      if (lookahead == 'T') ADVANCE(368);
      END_STATE();
    case 163:
      if (lookahead == 'T') ADVANCE(369);
      END_STATE();
    case 164:
      if (lookahead == 'T') ADVANCE(370);
      END_STATE();
    case 165:
      if (lookahead == 'T') ADVANCE(243);
      END_STATE();
    case 166:
      if (lookahead == 'T') ADVANCE(244);
      END_STATE();
    case 167:
      if (lookahead == 'T') ADVANCE(245);
      END_STATE();
    case 168:
      if (lookahead == 'T') ADVANCE(56);
      END_STATE();
    case 169:
      if (lookahead == 'T') ADVANCE(57);
      END_STATE();
    case 170:
      if (lookahead == 'T') ADVANCE(58);
      END_STATE();
    case 171:
      if (lookahead == 'U') ADVANCE(20);
      END_STATE();
    case 172:
      if (lookahead == 'U') ADVANCE(150);
      END_STATE();
    case 173:
      if (lookahead == 'U') ADVANCE(152);
      END_STATE();
    case 174:
      if (lookahead == 'U') ADVANCE(110);
      END_STATE();
    case 175:
      if (lookahead == 'U') ADVANCE(146);
      END_STATE();
    case 176:
      if (lookahead == 'U') ADVANCE(22);
      END_STATE();
    case 177:
      if (lookahead == 'U') ADVANCE(113);
      END_STATE();
    case 178:
      if (lookahead == 'U') ADVANCE(25);
      END_STATE();
    case 179:
      if (lookahead == 'V') ADVANCE(89);
      END_STATE();
    case 180:
      if (lookahead == 'V') ADVANCE(64);
      END_STATE();
    case 181:
      if (lookahead == 'V') ADVANCE(74);
      END_STATE();
    case 182:
      if (lookahead == 'Y') ADVANCE(367);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(375);
      if (lookahead == 'b') ADVANCE(373);
      if (lookahead == 'i') ADVANCE(380);
      if (lookahead == 'o') ADVANCE(376);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(383);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(375);
      if (lookahead == 'b') ADVANCE(373);
      if (lookahead == 'o') ADVANCE(376);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(383);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 186:
      if (lookahead == 'a') ADVANCE(270);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(242);
      if (lookahead == 'u') ADVANCE(233);
      END_STATE();
    case 188:
      if (lookahead == 'a') ADVANCE(256);
      END_STATE();
    case 189:
      if (lookahead == 'a') ADVANCE(273);
      if (lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 190:
      if (lookahead == 'a') ADVANCE(263);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(264);
      END_STATE();
    case 192:
      if (lookahead == 'a') ADVANCE(289);
      END_STATE();
    case 193:
      if (lookahead == 'b') ADVANCE(266);
      END_STATE();
    case 194:
      if (lookahead == 'b') ADVANCE(215);
      END_STATE();
    case 195:
      if (lookahead == 'b') ADVANCE(216);
      END_STATE();
    case 196:
      if (lookahead == 'b') ADVANCE(217);
      END_STATE();
    case 197:
      if (lookahead == 'b') ADVANCE(218);
      END_STATE();
    case 198:
      if (lookahead == 'c') ADVANCE(227);
      END_STATE();
    case 199:
      if (lookahead == 'c') ADVANCE(205);
      END_STATE();
    case 200:
      if (lookahead == 'd') ADVANCE(392);
      END_STATE();
    case 201:
      if (lookahead == 'd') ADVANCE(387);
      END_STATE();
    case 202:
      if (lookahead == 'd') ADVANCE(6);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 221:
      if (lookahead == 'f') ADVANCE(281);
      END_STATE();
    case 222:
      if (lookahead == 'f') ADVANCE(248);
      END_STATE();
    case 223:
      if (lookahead == 'g') ADVANCE(228);
      END_STATE();
    case 224:
      if (lookahead == 'g') ADVANCE(286);
      END_STATE();
    case 225:
      if (lookahead == 'g') ADVANCE(229);
      END_STATE();
    case 226:
      if (lookahead == 'h') ADVANCE(189);
      END_STATE();
    case 227:
      if (lookahead == 'h') ADVANCE(352);
      END_STATE();
    case 228:
      if (lookahead == 'h') ADVANCE(274);
      END_STATE();
    case 229:
      if (lookahead == 'h') ADVANCE(282);
      END_STATE();
    case 230:
      if (lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 231:
      if (lookahead == 'k') ADVANCE(345);
      END_STATE();
    case 232:
      if (lookahead == 'l') ADVANCE(353);
      END_STATE();
    case 233:
      if (lookahead == 'l') ADVANCE(292);
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 234:
      if (lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 235:
      if (lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 236:
      if (lookahead == 'm') ADVANCE(195);
      END_STATE();
    case 237:
      if (lookahead == 'm') ADVANCE(196);
      END_STATE();
    case 238:
      if (lookahead == 'm') ADVANCE(197);
      END_STATE();
    case 239:
      if (lookahead == 'n') ADVANCE(335);
      END_STATE();
    case 240:
      if (lookahead == 'n') ADVANCE(389);
      END_STATE();
    case 241:
      if (lookahead == 'n') ADVANCE(390);
      END_STATE();
    case 242:
      if (lookahead == 'n') ADVANCE(285);
      END_STATE();
    case 243:
      if (lookahead == 'o') ADVANCE(385);
      END_STATE();
    case 244:
      if (lookahead == 'o') ADVANCE(386);
      END_STATE();
    case 245:
      if (lookahead == 'o') ADVANCE(388);
      END_STATE();
    case 246:
      if (lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 247:
      if (lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 248:
      if (lookahead == 'o') ADVANCE(265);
      END_STATE();
    case 249:
      if (lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 250:
      if (lookahead == 'o') ADVANCE(277);
      END_STATE();
    case 251:
      if (lookahead == 'o') ADVANCE(278);
      END_STATE();
    case 252:
      if (lookahead == 'o') ADVANCE(279);
      END_STATE();
    case 253:
      if (lookahead == 'o') ADVANCE(287);
      END_STATE();
    case 254:
      if (lookahead == 'p') ADVANCE(283);
      END_STATE();
    case 255:
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 256:
      if (lookahead == 'r') ADVANCE(346);
      END_STATE();
    case 257:
      if (lookahead == 'r') ADVANCE(342);
      END_STATE();
    case 258:
      if (lookahead == 'r') ADVANCE(359);
      END_STATE();
    case 259:
      if (lookahead == 'r') ADVANCE(361);
      END_STATE();
    case 260:
      if (lookahead == 'r') ADVANCE(360);
      END_STATE();
    case 261:
      if (lookahead == 'r') ADVANCE(358);
      END_STATE();
    case 262:
      if (lookahead == 'r') ADVANCE(198);
      if (lookahead == 'y') ADVANCE(354);
      END_STATE();
    case 263:
      if (lookahead == 'r') ADVANCE(293);
      END_STATE();
    case 264:
      if (lookahead == 'r') ADVANCE(294);
      END_STATE();
    case 265:
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 266:
      if (lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 267:
      if (lookahead == 's') ADVANCE(316);
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 268:
      if (lookahead == 's') ADVANCE(272);
      END_STATE();
    case 269:
      if (lookahead == 's') ADVANCE(275);
      END_STATE();
    case 270:
      if (lookahead == 's') ADVANCE(207);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(320);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(384);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(319);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(393);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(357);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(395);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(394);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(397);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(396);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 281:
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 282:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 283:
      if (lookahead == 't') ADVANCE(220);
      END_STATE();
    case 284:
      if (lookahead == 'u') ADVANCE(234);
      END_STATE();
    case 285:
      if (lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 286:
      if (lookahead == 'u') ADVANCE(269);
      END_STATE();
    case 287:
      if (lookahead == 'u') ADVANCE(235);
      END_STATE();
    case 288:
      if (lookahead == 'u') ADVANCE(191);
      END_STATE();
    case 289:
      if (lookahead == 'v') ADVANCE(208);
      END_STATE();
    case 290:
      if (lookahead == 'v') ADVANCE(219);
      END_STATE();
    case 291:
      if (lookahead == 'y') ADVANCE(344);
      END_STATE();
    case 292:
      if (lookahead == 'y') ADVANCE(356);
      END_STATE();
    case 293:
      if (lookahead == 'y') ADVANCE(350);
      END_STATE();
    case 294:
      if (lookahead == 'y') ADVANCE(351);
      END_STATE();
    case 295:
      if (lookahead == 'y') ADVANCE(391);
      END_STATE();
    case 296:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(296);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 297:
      if (eof) ADVANCE(298);
      ADVANCE_MAP(
        ' ', 4,
        'A', 114,
        'C', 10,
        'D', 75,
        'E', 131,
        'I', 76,
        'M', 85,
        'O', 133,
        'P', 19,
        'S', 68,
        'T', 81,
        'a', 221,
        'b', 210,
        'o', 239,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(297);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(383);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_C_DASHAND);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_IS);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_EQUALS);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_MINUS);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_TIMES);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_DIVIDE);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_THEN);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_it);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_it);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_the);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_that);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_DELIVER);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_PAY);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_CHARGE);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_SEND);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_DELIVERED);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_PAID);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_CHARGED);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_SENT);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_LESS);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_THAN);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_EQUAL);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_EQUAL);
      if (lookahead == 'S') ADVANCE(302);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_TO);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_MORE);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_on);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_ANYDATE);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_SOMEDATE);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_THEDATE);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_before);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_before);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_after);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_after);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_day);
      if (lookahead == 's') ADVANCE(347);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_week);
      if (lookahead == 's') ADVANCE(348);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead == 's') ADVANCE(349);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_days);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_weeks);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_years);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_January);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_February);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_March);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_April);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_May);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_June);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_July);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_August);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_September);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_October);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_November);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_December);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_POUNDS);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_DOLLARS);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_EUROS);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_FRANCS);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_AMOUNT);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_SOMECURRENCY);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_REPORT);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_NAMEDOBJECT);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_OTHEROBJECT);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(341);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(374);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'f') ADVANCE(377);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'f') ADVANCE(381);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(336);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'o') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(343);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(372);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(315);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_string);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_Must);
      if (lookahead == ' ') ADVANCE(117);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_HaveTo);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_NeedTo);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_Should);
      if (lookahead == ' ') ADVANCE(118);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_OughtTo);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_Can);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_Can);
      if (lookahead == 'n') ADVANCE(249);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_May2);
      if (lookahead == ' ') ADVANCE(119);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_Could);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_Might);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_MustNot);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_Cannot);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_MayNot);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_ShouldNot);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 297},
  [3] = {.lex_state = 297},
  [4] = {.lex_state = 297},
  [5] = {.lex_state = 297},
  [6] = {.lex_state = 297},
  [7] = {.lex_state = 297},
  [8] = {.lex_state = 297},
  [9] = {.lex_state = 297},
  [10] = {.lex_state = 297},
  [11] = {.lex_state = 297},
  [12] = {.lex_state = 297},
  [13] = {.lex_state = 297},
  [14] = {.lex_state = 297},
  [15] = {.lex_state = 297},
  [16] = {.lex_state = 297},
  [17] = {.lex_state = 15},
  [18] = {.lex_state = 15},
  [19] = {.lex_state = 297},
  [20] = {.lex_state = 297},
  [21] = {.lex_state = 15},
  [22] = {.lex_state = 15},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 15},
  [25] = {.lex_state = 15},
  [26] = {.lex_state = 184},
  [27] = {.lex_state = 15},
  [28] = {.lex_state = 15},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 184},
  [33] = {.lex_state = 15},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 184},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 185},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 185},
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
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 184},
  [57] = {.lex_state = 184},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 297},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 297},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 185},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 185},
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
  [110] = {.lex_state = 296},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 296},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 296},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 296},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 296},
  [121] = {.lex_state = 297},
  [122] = {.lex_state = 296},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 296},
  [125] = {.lex_state = 296},
  [126] = {.lex_state = 296},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 296},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 296},
  [131] = {.lex_state = 296},
  [132] = {.lex_state = 296},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 296},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 296},
  [140] = {.lex_state = 296},
  [141] = {.lex_state = 296},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 296},
  [146] = {.lex_state = 296},
  [147] = {.lex_state = 296},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 296},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 296},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 296},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 296},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 296},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 296},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
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
    [sym_contract] = STATE(157),
    [sym_component] = STATE(108),
    [sym_definition] = STATE(102),
    [sym_simple_definition] = STATE(85),
    [sym_conditional_definition] = STATE(118),
    [sym_statement] = STATE(103),
    [sym_conditional_statement] = STATE(118),
    [sym_simple_statement] = STATE(69),
    [sym_identity] = STATE(32),
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
    ACTIONS(7), 29,
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
      anon_sym_before,
      anon_sym_after,
      sym_num,
      anon_sym_HaveTo,
      anon_sym_NeedTo,
      anon_sym_OughtTo,
      anon_sym_Could,
      anon_sym_Might,
      anon_sym_MustNot,
      anon_sym_Cannot,
      anon_sym_MayNot,
      anon_sym_ShouldNot,
  [38] = 16,
    ACTIONS(13), 1,
      anon_sym_on,
    ACTIONS(17), 1,
      sym_num,
    STATE(8), 1,
      sym_specific_date,
    STATE(21), 1,
      sym_verb_status,
    STATE(63), 1,
      sym_modal_verb,
    STATE(64), 1,
      sym_date,
    STATE(92), 1,
      sym_temporal_quantifier,
    STATE(104), 1,
      sym_temporal_offset,
    ACTIONS(15), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(19), 2,
      anon_sym_Must,
      anon_sym_Should,
    ACTIONS(23), 2,
      anon_sym_Can,
      anon_sym_May2,
    ACTIONS(25), 2,
      anon_sym_Could,
      anon_sym_Might,
    ACTIONS(21), 3,
      anon_sym_HaveTo,
      anon_sym_NeedTo,
      anon_sym_OughtTo,
    STATE(82), 3,
      sym_OBLIGATION,
      sym_PERMISSION,
      sym_PROHIBITION,
    ACTIONS(11), 4,
      anon_sym_DELIVERED,
      anon_sym_PAID,
      anon_sym_CHARGED,
      anon_sym_SENT,
    ACTIONS(27), 4,
      anon_sym_MustNot,
      anon_sym_Cannot,
      anon_sym_MayNot,
      anon_sym_ShouldNot,
  [101] = 16,
    ACTIONS(13), 1,
      anon_sym_on,
    ACTIONS(17), 1,
      sym_num,
    STATE(8), 1,
      sym_specific_date,
    STATE(22), 1,
      sym_verb_status,
    STATE(59), 1,
      sym_date,
    STATE(67), 1,
      sym_modal_verb,
    STATE(92), 1,
      sym_temporal_quantifier,
    STATE(104), 1,
      sym_temporal_offset,
    ACTIONS(15), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(19), 2,
      anon_sym_Must,
      anon_sym_Should,
    ACTIONS(23), 2,
      anon_sym_Can,
      anon_sym_May2,
    ACTIONS(25), 2,
      anon_sym_Could,
      anon_sym_Might,
    ACTIONS(21), 3,
      anon_sym_HaveTo,
      anon_sym_NeedTo,
      anon_sym_OughtTo,
    STATE(82), 3,
      sym_OBLIGATION,
      sym_PERMISSION,
      sym_PROHIBITION,
    ACTIONS(11), 4,
      anon_sym_DELIVERED,
      anon_sym_PAID,
      anon_sym_CHARGED,
      anon_sym_SENT,
    ACTIONS(27), 4,
      anon_sym_MustNot,
      anon_sym_Cannot,
      anon_sym_MayNot,
      anon_sym_ShouldNot,
  [164] = 16,
    ACTIONS(13), 1,
      anon_sym_on,
    ACTIONS(17), 1,
      sym_num,
    ACTIONS(29), 1,
      anon_sym_IS,
    ACTIONS(31), 1,
      anon_sym_EQUALS,
    STATE(8), 1,
      sym_specific_date,
    STATE(20), 1,
      sym_date,
    STATE(60), 1,
      sym_modal_verb,
    STATE(92), 1,
      sym_temporal_quantifier,
    STATE(104), 1,
      sym_temporal_offset,
    ACTIONS(15), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(19), 2,
      anon_sym_Must,
      anon_sym_Should,
    ACTIONS(23), 2,
      anon_sym_Can,
      anon_sym_May2,
    ACTIONS(25), 2,
      anon_sym_Could,
      anon_sym_Might,
    ACTIONS(21), 3,
      anon_sym_HaveTo,
      anon_sym_NeedTo,
      anon_sym_OughtTo,
    STATE(82), 3,
      sym_OBLIGATION,
      sym_PERMISSION,
      sym_PROHIBITION,
    ACTIONS(27), 4,
      anon_sym_MustNot,
      anon_sym_Cannot,
      anon_sym_MayNot,
      anon_sym_ShouldNot,
  [224] = 14,
    ACTIONS(13), 1,
      anon_sym_on,
    ACTIONS(17), 1,
      sym_num,
    STATE(8), 1,
      sym_specific_date,
    STATE(19), 1,
      sym_date,
    STATE(65), 1,
      sym_modal_verb,
    STATE(92), 1,
      sym_temporal_quantifier,
    STATE(104), 1,
      sym_temporal_offset,
    ACTIONS(15), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(19), 2,
      anon_sym_Must,
      anon_sym_Should,
    ACTIONS(23), 2,
      anon_sym_Can,
      anon_sym_May2,
    ACTIONS(25), 2,
      anon_sym_Could,
      anon_sym_Might,
    ACTIONS(21), 3,
      anon_sym_HaveTo,
      anon_sym_NeedTo,
      anon_sym_OughtTo,
    STATE(82), 3,
      sym_OBLIGATION,
      sym_PERMISSION,
      sym_PROHIBITION,
    ACTIONS(27), 4,
      anon_sym_MustNot,
      anon_sym_Cannot,
      anon_sym_MayNot,
      anon_sym_ShouldNot,
  [278] = 14,
    ACTIONS(13), 1,
      anon_sym_on,
    ACTIONS(17), 1,
      sym_num,
    STATE(8), 1,
      sym_specific_date,
    STATE(20), 1,
      sym_date,
    STATE(60), 1,
      sym_modal_verb,
    STATE(92), 1,
      sym_temporal_quantifier,
    STATE(104), 1,
      sym_temporal_offset,
    ACTIONS(15), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(19), 2,
      anon_sym_Must,
      anon_sym_Should,
    ACTIONS(23), 2,
      anon_sym_Can,
      anon_sym_May2,
    ACTIONS(25), 2,
      anon_sym_Could,
      anon_sym_Might,
    ACTIONS(21), 3,
      anon_sym_HaveTo,
      anon_sym_NeedTo,
      anon_sym_OughtTo,
    STATE(82), 3,
      sym_OBLIGATION,
      sym_PERMISSION,
      sym_PROHIBITION,
    ACTIONS(27), 4,
      anon_sym_MustNot,
      anon_sym_Cannot,
      anon_sym_MayNot,
      anon_sym_ShouldNot,
  [332] = 2,
    ACTIONS(35), 4,
      anon_sym_Must,
      anon_sym_Should,
      anon_sym_Can,
      anon_sym_May2,
    ACTIONS(33), 19,
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
  [360] = 2,
    ACTIONS(39), 4,
      anon_sym_Must,
      anon_sym_Should,
      anon_sym_Can,
      anon_sym_May2,
    ACTIONS(37), 19,
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
  [388] = 2,
    ACTIONS(43), 4,
      anon_sym_Must,
      anon_sym_Should,
      anon_sym_Can,
      anon_sym_May2,
    ACTIONS(41), 19,
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
  [416] = 2,
    ACTIONS(47), 4,
      anon_sym_Must,
      anon_sym_Should,
      anon_sym_Can,
      anon_sym_May2,
    ACTIONS(45), 19,
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
  [444] = 2,
    ACTIONS(51), 4,
      anon_sym_Must,
      anon_sym_Should,
      anon_sym_Can,
      anon_sym_May2,
    ACTIONS(49), 19,
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
  [472] = 2,
    ACTIONS(55), 4,
      anon_sym_Must,
      anon_sym_Should,
      anon_sym_Can,
      anon_sym_May2,
    ACTIONS(53), 19,
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
  [500] = 2,
    ACTIONS(59), 4,
      anon_sym_Must,
      anon_sym_Should,
      anon_sym_Can,
      anon_sym_May2,
    ACTIONS(57), 19,
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
  [528] = 9,
    STATE(39), 1,
      sym_verb_status,
    STATE(66), 1,
      sym_modal_verb,
    ACTIONS(19), 2,
      anon_sym_Must,
      anon_sym_Should,
    ACTIONS(23), 2,
      anon_sym_Can,
      anon_sym_May2,
    ACTIONS(25), 2,
      anon_sym_Could,
      anon_sym_Might,
    ACTIONS(21), 3,
      anon_sym_HaveTo,
      anon_sym_NeedTo,
      anon_sym_OughtTo,
    STATE(82), 3,
      sym_OBLIGATION,
      sym_PERMISSION,
      sym_PROHIBITION,
    ACTIONS(11), 4,
      anon_sym_DELIVERED,
      anon_sym_PAID,
      anon_sym_CHARGED,
      anon_sym_SENT,
    ACTIONS(27), 4,
      anon_sym_MustNot,
      anon_sym_Cannot,
      anon_sym_MayNot,
      anon_sym_ShouldNot,
  [569] = 9,
    STATE(35), 1,
      sym_verb_status,
    STATE(70), 1,
      sym_modal_verb,
    ACTIONS(19), 2,
      anon_sym_Must,
      anon_sym_Should,
    ACTIONS(23), 2,
      anon_sym_Can,
      anon_sym_May2,
    ACTIONS(25), 2,
      anon_sym_Could,
      anon_sym_Might,
    ACTIONS(21), 3,
      anon_sym_HaveTo,
      anon_sym_NeedTo,
      anon_sym_OughtTo,
    STATE(82), 3,
      sym_OBLIGATION,
      sym_PERMISSION,
      sym_PROHIBITION,
    ACTIONS(11), 4,
      anon_sym_DELIVERED,
      anon_sym_PAID,
      anon_sym_CHARGED,
      anon_sym_SENT,
    ACTIONS(27), 4,
      anon_sym_MustNot,
      anon_sym_Cannot,
      anon_sym_MayNot,
      anon_sym_ShouldNot,
  [610] = 4,
    STATE(142), 1,
      sym_month,
    ACTIONS(61), 3,
      anon_sym_day,
      anon_sym_week,
      anon_sym_year,
    ACTIONS(63), 3,
      anon_sym_days,
      anon_sym_weeks,
      anon_sym_years,
    ACTIONS(65), 12,
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
  [638] = 4,
    STATE(163), 1,
      sym_month,
    ACTIONS(61), 3,
      anon_sym_day,
      anon_sym_week,
      anon_sym_year,
    ACTIONS(63), 3,
      anon_sym_days,
      anon_sym_weeks,
      anon_sym_years,
    ACTIONS(65), 12,
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
  [666] = 7,
    STATE(70), 1,
      sym_modal_verb,
    ACTIONS(19), 2,
      anon_sym_Must,
      anon_sym_Should,
    ACTIONS(23), 2,
      anon_sym_Can,
      anon_sym_May2,
    ACTIONS(25), 2,
      anon_sym_Could,
      anon_sym_Might,
    ACTIONS(21), 3,
      anon_sym_HaveTo,
      anon_sym_NeedTo,
      anon_sym_OughtTo,
    STATE(82), 3,
      sym_OBLIGATION,
      sym_PERMISSION,
      sym_PROHIBITION,
    ACTIONS(27), 4,
      anon_sym_MustNot,
      anon_sym_Cannot,
      anon_sym_MayNot,
      anon_sym_ShouldNot,
  [698] = 7,
    STATE(66), 1,
      sym_modal_verb,
    ACTIONS(19), 2,
      anon_sym_Must,
      anon_sym_Should,
    ACTIONS(23), 2,
      anon_sym_Can,
      anon_sym_May2,
    ACTIONS(25), 2,
      anon_sym_Could,
      anon_sym_Might,
    ACTIONS(21), 3,
      anon_sym_HaveTo,
      anon_sym_NeedTo,
      anon_sym_OughtTo,
    STATE(82), 3,
      sym_OBLIGATION,
      sym_PERMISSION,
      sym_PROHIBITION,
    ACTIONS(27), 4,
      anon_sym_MustNot,
      anon_sym_Cannot,
      anon_sym_MayNot,
      anon_sym_ShouldNot,
  [730] = 8,
    ACTIONS(69), 1,
      anon_sym_EQUAL,
    ACTIONS(73), 1,
      anon_sym_AMOUNT,
    STATE(49), 1,
      sym_object,
    STATE(135), 1,
      sym_comparison,
    ACTIONS(67), 2,
      anon_sym_LESS,
      anon_sym_MORE,
    STATE(42), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(71), 4,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_FRANCS,
    ACTIONS(75), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [763] = 8,
    ACTIONS(69), 1,
      anon_sym_EQUAL,
    ACTIONS(73), 1,
      anon_sym_AMOUNT,
    STATE(50), 1,
      sym_object,
    STATE(135), 1,
      sym_comparison,
    ACTIONS(67), 2,
      anon_sym_LESS,
      anon_sym_MORE,
    STATE(42), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(71), 4,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_FRANCS,
    ACTIONS(75), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [796] = 1,
    ACTIONS(77), 14,
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
      anon_sym_before,
      anon_sym_after,
      sym_num,
  [813] = 2,
    STATE(144), 1,
      sym_month,
    ACTIONS(65), 12,
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
  [831] = 2,
    STATE(151), 1,
      sym_month,
    ACTIONS(65), 12,
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
  [849] = 12,
    ACTIONS(17), 1,
      sym_num,
    ACTIONS(79), 1,
      anon_sym_it,
    ACTIONS(81), 1,
      anon_sym_on,
    ACTIONS(85), 1,
      sym_string,
    STATE(3), 1,
      sym_subject,
    STATE(40), 1,
      sym_holds,
    STATE(68), 1,
      sym_boolean_expression,
    STATE(89), 1,
      sym_temporal_quantifier,
    STATE(105), 1,
      sym_temporal_offset,
    STATE(110), 1,
      sym_date,
    STATE(159), 1,
      sym_specific_date,
    ACTIONS(83), 2,
      anon_sym_before,
      anon_sym_after,
  [887] = 2,
    STATE(162), 1,
      sym_month,
    ACTIONS(65), 12,
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
  [905] = 2,
    STATE(166), 1,
      sym_month,
    ACTIONS(65), 12,
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
  [923] = 5,
    ACTIONS(73), 1,
      anon_sym_AMOUNT,
    STATE(50), 1,
      sym_object,
    STATE(42), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(71), 4,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_FRANCS,
    ACTIONS(75), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [946] = 5,
    ACTIONS(73), 1,
      anon_sym_AMOUNT,
    STATE(53), 1,
      sym_object,
    STATE(42), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(71), 4,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_FRANCS,
    ACTIONS(75), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [969] = 5,
    ACTIONS(73), 1,
      anon_sym_AMOUNT,
    STATE(75), 1,
      sym_object,
    STATE(42), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(71), 4,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_FRANCS,
    ACTIONS(75), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [992] = 11,
    ACTIONS(17), 1,
      sym_num,
    ACTIONS(79), 1,
      anon_sym_it,
    ACTIONS(81), 1,
      anon_sym_on,
    ACTIONS(85), 1,
      sym_string,
    STATE(5), 1,
      sym_subject,
    STATE(44), 1,
      sym_holds,
    STATE(89), 1,
      sym_temporal_quantifier,
    STATE(105), 1,
      sym_temporal_offset,
    STATE(120), 1,
      sym_date,
    STATE(159), 1,
      sym_specific_date,
    ACTIONS(83), 2,
      anon_sym_before,
      anon_sym_after,
  [1027] = 1,
    ACTIONS(87), 12,
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
  [1042] = 5,
    ACTIONS(73), 1,
      anon_sym_AMOUNT,
    STATE(72), 1,
      sym_object,
    STATE(42), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(71), 4,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_FRANCS,
    ACTIONS(75), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [1065] = 5,
    ACTIONS(73), 1,
      anon_sym_AMOUNT,
    STATE(52), 1,
      sym_object,
    STATE(42), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(71), 4,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_FRANCS,
    ACTIONS(75), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [1088] = 5,
    ACTIONS(73), 1,
      anon_sym_AMOUNT,
    STATE(76), 1,
      sym_object,
    STATE(42), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(71), 4,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_FRANCS,
    ACTIONS(75), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [1111] = 11,
    ACTIONS(17), 1,
      sym_num,
    ACTIONS(79), 1,
      anon_sym_it,
    ACTIONS(81), 1,
      anon_sym_on,
    ACTIONS(85), 1,
      sym_string,
    STATE(7), 1,
      sym_subject,
    STATE(44), 1,
      sym_holds,
    STATE(89), 1,
      sym_temporal_quantifier,
    STATE(105), 1,
      sym_temporal_offset,
    STATE(120), 1,
      sym_date,
    STATE(159), 1,
      sym_specific_date,
    ACTIONS(83), 2,
      anon_sym_before,
      anon_sym_after,
  [1146] = 5,
    ACTIONS(73), 1,
      anon_sym_AMOUNT,
    STATE(78), 1,
      sym_object,
    STATE(42), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(71), 4,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_FRANCS,
    ACTIONS(75), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [1169] = 5,
    ACTIONS(73), 1,
      anon_sym_AMOUNT,
    STATE(47), 1,
      sym_object,
    STATE(42), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(71), 4,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_FRANCS,
    ACTIONS(75), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [1192] = 10,
    ACTIONS(17), 1,
      sym_num,
    ACTIONS(81), 1,
      anon_sym_on,
    ACTIONS(85), 1,
      sym_string,
    STATE(4), 1,
      sym_subject,
    STATE(61), 1,
      sym_boolean_expression,
    STATE(89), 1,
      sym_temporal_quantifier,
    STATE(105), 1,
      sym_temporal_offset,
    STATE(122), 1,
      sym_date,
    STATE(159), 1,
      sym_specific_date,
    ACTIONS(83), 2,
      anon_sym_before,
      anon_sym_after,
  [1224] = 10,
    ACTIONS(3), 1,
      anon_sym_IF,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(32), 1,
      sym_identity,
    STATE(69), 1,
      sym_simple_statement,
    STATE(85), 1,
      sym_simple_definition,
    STATE(102), 1,
      sym_definition,
    STATE(103), 1,
      sym_statement,
    STATE(108), 1,
      sym_component,
    STATE(137), 1,
      sym_contract,
    STATE(118), 2,
      sym_conditional_definition,
      sym_conditional_statement,
  [1256] = 1,
    ACTIONS(89), 10,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_OR,
      anon_sym_on,
      anon_sym_before,
      anon_sym_after,
      sym_num,
  [1269] = 1,
    ACTIONS(91), 10,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_OR,
      anon_sym_on,
      anon_sym_before,
      anon_sym_after,
      sym_num,
  [1282] = 9,
    ACTIONS(17), 1,
      sym_num,
    ACTIONS(81), 1,
      anon_sym_on,
    ACTIONS(85), 1,
      sym_string,
    STATE(6), 1,
      sym_subject,
    STATE(89), 1,
      sym_temporal_quantifier,
    STATE(105), 1,
      sym_temporal_offset,
    STATE(130), 1,
      sym_date,
    STATE(159), 1,
      sym_specific_date,
    ACTIONS(83), 2,
      anon_sym_before,
      anon_sym_after,
  [1311] = 1,
    ACTIONS(93), 9,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_FRANCS,
      anon_sym_AMOUNT,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [1323] = 3,
    STATE(48), 1,
      sym_operator,
    ACTIONS(95), 4,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
    ACTIONS(97), 4,
      anon_sym_PLUS,
      anon_sym_MINUS,
      anon_sym_TIMES,
      anon_sym_DIVIDE,
  [1339] = 7,
    ACTIONS(13), 1,
      anon_sym_on,
    ACTIONS(17), 1,
      sym_num,
    STATE(8), 1,
      sym_specific_date,
    STATE(75), 1,
      sym_date,
    STATE(92), 1,
      sym_temporal_quantifier,
    STATE(104), 1,
      sym_temporal_offset,
    ACTIONS(15), 2,
      anon_sym_before,
      anon_sym_after,
  [1362] = 5,
    ACTIONS(73), 1,
      anon_sym_AMOUNT,
    ACTIONS(99), 1,
      sym_num,
    STATE(46), 1,
      sym_numerical_object,
    STATE(87), 1,
      sym_numerical_expression,
    ACTIONS(71), 4,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_FRANCS,
  [1381] = 7,
    ACTIONS(13), 1,
      anon_sym_on,
    ACTIONS(17), 1,
      sym_num,
    STATE(8), 1,
      sym_specific_date,
    STATE(72), 1,
      sym_date,
    STATE(92), 1,
      sym_temporal_quantifier,
    STATE(104), 1,
      sym_temporal_offset,
    ACTIONS(15), 2,
      anon_sym_before,
      anon_sym_after,
  [1404] = 7,
    ACTIONS(13), 1,
      anon_sym_on,
    ACTIONS(17), 1,
      sym_num,
    STATE(8), 1,
      sym_specific_date,
    STATE(76), 1,
      sym_date,
    STATE(92), 1,
      sym_temporal_quantifier,
    STATE(104), 1,
      sym_temporal_offset,
    ACTIONS(15), 2,
      anon_sym_before,
      anon_sym_after,
  [1427] = 5,
    ACTIONS(73), 1,
      anon_sym_AMOUNT,
    ACTIONS(99), 1,
      sym_num,
    STATE(46), 1,
      sym_numerical_object,
    STATE(86), 1,
      sym_numerical_expression,
    ACTIONS(71), 4,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_FRANCS,
  [1446] = 7,
    ACTIONS(13), 1,
      anon_sym_on,
    ACTIONS(17), 1,
      sym_num,
    STATE(8), 1,
      sym_specific_date,
    STATE(78), 1,
      sym_date,
    STATE(92), 1,
      sym_temporal_quantifier,
    STATE(104), 1,
      sym_temporal_offset,
    ACTIONS(15), 2,
      anon_sym_before,
      anon_sym_after,
  [1469] = 7,
    ACTIONS(13), 1,
      anon_sym_on,
    ACTIONS(17), 1,
      sym_num,
    STATE(8), 1,
      sym_specific_date,
    STATE(79), 1,
      sym_date,
    STATE(92), 1,
      sym_temporal_quantifier,
    STATE(104), 1,
      sym_temporal_offset,
    ACTIONS(15), 2,
      anon_sym_before,
      anon_sym_after,
  [1492] = 1,
    ACTIONS(101), 6,
      anon_sym_POUNDS,
      anon_sym_DOLLARS,
      anon_sym_EUROS,
      anon_sym_FRANCS,
      anon_sym_AMOUNT,
      sym_num,
  [1501] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(32), 1,
      sym_identity,
    STATE(69), 1,
      sym_simple_statement,
    STATE(85), 1,
      sym_simple_definition,
    STATE(113), 1,
      sym_definition,
    STATE(116), 1,
      sym_statement,
  [1520] = 2,
    ACTIONS(105), 1,
      sym_num,
    ACTIONS(103), 5,
      anon_sym_it,
      anon_sym_on,
      anon_sym_before,
      anon_sym_after,
      sym_string,
  [1531] = 2,
    ACTIONS(109), 1,
      sym_num,
    ACTIONS(107), 5,
      anon_sym_it,
      anon_sym_on,
      anon_sym_before,
      anon_sym_after,
      sym_string,
  [1542] = 2,
    ACTIONS(61), 3,
      anon_sym_day,
      anon_sym_week,
      anon_sym_year,
    ACTIONS(63), 3,
      anon_sym_days,
      anon_sym_weeks,
      anon_sym_years,
  [1553] = 2,
    STATE(36), 1,
      sym_verb_status,
    ACTIONS(11), 4,
      anon_sym_DELIVERED,
      anon_sym_PAID,
      anon_sym_CHARGED,
      anon_sym_SENT,
  [1563] = 2,
    STATE(39), 1,
      sym_verb,
    ACTIONS(111), 4,
      anon_sym_DELIVER,
      anon_sym_PAY,
      anon_sym_CHARGE,
      anon_sym_SEND,
  [1573] = 1,
    ACTIONS(113), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_OR,
  [1581] = 4,
    ACTIONS(115), 1,
      anon_sym_the,
    ACTIONS(117), 1,
      anon_sym_ANYDATE,
    ACTIONS(121), 1,
      sym_num,
    ACTIONS(119), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [1595] = 2,
    STATE(29), 1,
      sym_verb,
    ACTIONS(111), 4,
      anon_sym_DELIVER,
      anon_sym_PAY,
      anon_sym_CHARGE,
      anon_sym_SEND,
  [1605] = 2,
    STATE(34), 1,
      sym_verb_status,
    ACTIONS(11), 4,
      anon_sym_DELIVERED,
      anon_sym_PAID,
      anon_sym_CHARGED,
      anon_sym_SENT,
  [1615] = 2,
    STATE(35), 1,
      sym_verb,
    ACTIONS(111), 4,
      anon_sym_DELIVER,
      anon_sym_PAY,
      anon_sym_CHARGE,
      anon_sym_SEND,
  [1625] = 2,
    STATE(31), 1,
      sym_verb,
    ACTIONS(111), 4,
      anon_sym_DELIVER,
      anon_sym_PAY,
      anon_sym_CHARGE,
      anon_sym_SEND,
  [1635] = 2,
    STATE(30), 1,
      sym_verb,
    ACTIONS(111), 4,
      anon_sym_DELIVER,
      anon_sym_PAY,
      anon_sym_CHARGE,
      anon_sym_SEND,
  [1645] = 1,
    ACTIONS(123), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_OR,
  [1653] = 2,
    ACTIONS(127), 2,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(125), 3,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
  [1663] = 2,
    STATE(38), 1,
      sym_verb,
    ACTIONS(111), 4,
      anon_sym_DELIVER,
      anon_sym_PAY,
      anon_sym_CHARGE,
      anon_sym_SEND,
  [1673] = 1,
    ACTIONS(129), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_OR,
  [1681] = 1,
    ACTIONS(131), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_OR,
  [1689] = 2,
    ACTIONS(135), 2,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(133), 3,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_THEN,
  [1699] = 2,
    ACTIONS(139), 1,
      sym_num,
    ACTIONS(137), 4,
      anon_sym_on,
      anon_sym_before,
      anon_sym_after,
      sym_string,
  [1709] = 1,
    ACTIONS(141), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_OR,
  [1717] = 1,
    ACTIONS(143), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_OR,
  [1725] = 2,
    ACTIONS(147), 1,
      sym_num,
    ACTIONS(145), 4,
      anon_sym_on,
      anon_sym_before,
      anon_sym_after,
      sym_string,
  [1735] = 1,
    ACTIONS(149), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_OR,
  [1743] = 1,
    ACTIONS(151), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_OR,
  [1751] = 4,
    ACTIONS(153), 1,
      anon_sym_the,
    ACTIONS(155), 1,
      anon_sym_ANYDATE,
    ACTIONS(159), 1,
      sym_num,
    ACTIONS(157), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [1765] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym_identity,
    STATE(73), 1,
      sym_simple_condition,
    STATE(111), 1,
      sym_condition,
  [1778] = 1,
    ACTIONS(161), 4,
      anon_sym_DELIVER,
      anon_sym_PAY,
      anon_sym_CHARGE,
      anon_sym_SEND,
  [1785] = 4,
    ACTIONS(163), 1,
      anon_sym_LBRACK,
    STATE(85), 1,
      sym_simple_definition,
    STATE(99), 1,
      sym_definition,
    STATE(114), 1,
      sym_identity,
  [1798] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym_identity,
    STATE(73), 1,
      sym_simple_condition,
    STATE(176), 1,
      sym_condition,
  [1811] = 2,
    ACTIONS(167), 1,
      anon_sym_AND,
    ACTIONS(165), 3,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
  [1820] = 1,
    ACTIONS(169), 4,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
  [1827] = 1,
    ACTIONS(171), 4,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
  [1834] = 1,
    ACTIONS(95), 4,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
  [1841] = 3,
    ACTIONS(173), 1,
      sym_num,
    STATE(101), 1,
      sym_temporal_offset,
    ACTIONS(119), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [1852] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      sym_identity,
    STATE(69), 1,
      sym_simple_statement,
    STATE(100), 1,
      sym_statement,
  [1865] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym_identity,
    STATE(73), 1,
      sym_simple_condition,
    STATE(115), 1,
      sym_condition,
  [1878] = 3,
    ACTIONS(175), 1,
      sym_num,
    STATE(106), 1,
      sym_temporal_offset,
    ACTIONS(157), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [1889] = 1,
    ACTIONS(177), 4,
      anon_sym_DELIVER,
      anon_sym_PAY,
      anon_sym_CHARGE,
      anon_sym_SEND,
  [1896] = 1,
    ACTIONS(179), 4,
      anon_sym_DELIVER,
      anon_sym_PAY,
      anon_sym_CHARGE,
      anon_sym_SEND,
  [1903] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym_identity,
    STATE(73), 1,
      sym_simple_condition,
    STATE(97), 1,
      sym_condition,
  [1916] = 1,
    ACTIONS(181), 4,
      anon_sym_DELIVER,
      anon_sym_PAY,
      anon_sym_CHARGE,
      anon_sym_SEND,
  [1923] = 1,
    ACTIONS(183), 3,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_THEN,
  [1929] = 1,
    ACTIONS(185), 3,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
      sym_num,
  [1935] = 1,
    ACTIONS(187), 3,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
  [1941] = 1,
    ACTIONS(189), 3,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
  [1947] = 2,
    STATE(123), 1,
      sym_temporal_quantifier,
    ACTIONS(15), 2,
      anon_sym_before,
      anon_sym_after,
  [1955] = 2,
    ACTIONS(193), 1,
      anon_sym_IF,
    ACTIONS(191), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [1963] = 2,
    ACTIONS(195), 1,
      anon_sym_IF,
    ACTIONS(191), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [1971] = 2,
    STATE(107), 1,
      sym_temporal_quantifier,
    ACTIONS(15), 2,
      anon_sym_before,
      anon_sym_after,
  [1979] = 2,
    STATE(109), 1,
      sym_temporal_quantifier,
    ACTIONS(15), 2,
      anon_sym_before,
      anon_sym_after,
  [1987] = 2,
    STATE(134), 1,
      sym_temporal_quantifier,
    ACTIONS(15), 2,
      anon_sym_before,
      anon_sym_after,
  [1995] = 1,
    ACTIONS(197), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [2000] = 2,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(201), 1,
      anon_sym_C_DASHAND,
  [2007] = 1,
    ACTIONS(203), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [2012] = 2,
    ACTIONS(205), 1,
      sym_string,
    STATE(64), 1,
      sym_subject,
  [2019] = 1,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2024] = 2,
    ACTIONS(209), 1,
      sym_string,
    STATE(139), 1,
      sym_subject,
  [2031] = 1,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2036] = 2,
    ACTIONS(205), 1,
      sym_string,
    STATE(121), 1,
      sym_subject,
  [2043] = 1,
    ACTIONS(213), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2048] = 1,
    ACTIONS(215), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2053] = 2,
    ACTIONS(205), 1,
      sym_string,
    STATE(23), 1,
      sym_subject,
  [2060] = 1,
    ACTIONS(191), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2065] = 2,
    ACTIONS(217), 1,
      anon_sym_the,
    ACTIONS(219), 1,
      anon_sym_not,
  [2072] = 2,
    ACTIONS(205), 1,
      sym_string,
    STATE(15), 1,
      sym_subject,
  [2079] = 2,
    ACTIONS(29), 1,
      anon_sym_IS,
    ACTIONS(31), 1,
      anon_sym_EQUALS,
  [2086] = 2,
    ACTIONS(205), 1,
      sym_string,
    STATE(59), 1,
      sym_subject,
  [2093] = 1,
    ACTIONS(221), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [2098] = 2,
    ACTIONS(209), 1,
      sym_string,
    STATE(140), 1,
      sym_subject,
  [2105] = 2,
    ACTIONS(209), 1,
      sym_string,
    STATE(167), 1,
      sym_subject,
  [2112] = 2,
    ACTIONS(205), 1,
      sym_string,
    STATE(11), 1,
      sym_subject,
  [2119] = 1,
    ACTIONS(223), 2,
      anon_sym_before,
      anon_sym_after,
  [2124] = 2,
    ACTIONS(205), 1,
      sym_string,
    STATE(13), 1,
      sym_subject,
  [2131] = 2,
    ACTIONS(225), 1,
      anon_sym_RBRACK,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
  [2138] = 2,
    ACTIONS(205), 1,
      sym_string,
    STATE(16), 1,
      sym_subject,
  [2145] = 2,
    ACTIONS(205), 1,
      sym_string,
    STATE(12), 1,
      sym_subject,
  [2152] = 2,
    ACTIONS(205), 1,
      sym_string,
    STATE(86), 1,
      sym_subject,
  [2159] = 2,
    ACTIONS(229), 1,
      anon_sym_RBRACK,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
  [2166] = 1,
    ACTIONS(233), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [2171] = 2,
    ACTIONS(205), 1,
      sym_string,
    STATE(71), 1,
      sym_subject,
  [2178] = 1,
    ACTIONS(235), 1,
      sym_num,
  [2182] = 1,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
  [2186] = 1,
    ACTIONS(239), 1,
      anon_sym_that,
  [2190] = 1,
    ACTIONS(49), 1,
      sym_string,
  [2194] = 1,
    ACTIONS(53), 1,
      sym_string,
  [2198] = 1,
    ACTIONS(41), 1,
      sym_string,
  [2202] = 1,
    ACTIONS(241), 1,
      sym_num,
  [2206] = 1,
    ACTIONS(243), 1,
      anon_sym_case,
  [2210] = 1,
    ACTIONS(245), 1,
      sym_num,
  [2214] = 1,
    ACTIONS(7), 1,
      sym_string,
  [2218] = 1,
    ACTIONS(37), 1,
      sym_string,
  [2222] = 1,
    ACTIONS(105), 1,
      sym_string,
  [2226] = 1,
    ACTIONS(247), 1,
      sym_num,
  [2230] = 1,
    ACTIONS(249), 1,
      anon_sym_is,
  [2234] = 1,
    ACTIONS(251), 1,
      sym_string,
  [2238] = 1,
    ACTIONS(253), 1,
      sym_num,
  [2242] = 1,
    ACTIONS(255), 1,
      sym_num,
  [2246] = 1,
    ACTIONS(257), 1,
      anon_sym_RBRACK,
  [2250] = 1,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
  [2254] = 1,
    ACTIONS(109), 1,
      sym_string,
  [2258] = 1,
    ACTIONS(261), 1,
      sym_num,
  [2262] = 1,
    ACTIONS(263), 1,
      ts_builtin_sym_end,
  [2266] = 1,
    ACTIONS(265), 1,
      anon_sym_that,
  [2270] = 1,
    ACTIONS(33), 1,
      sym_string,
  [2274] = 1,
    ACTIONS(267), 1,
      anon_sym_case,
  [2278] = 1,
    ACTIONS(269), 1,
      anon_sym_the,
  [2282] = 1,
    ACTIONS(271), 1,
      sym_num,
  [2286] = 1,
    ACTIONS(273), 1,
      sym_num,
  [2290] = 1,
    ACTIONS(57), 1,
      sym_string,
  [2294] = 1,
    ACTIONS(275), 1,
      anon_sym_RBRACK,
  [2298] = 1,
    ACTIONS(277), 1,
      sym_num,
  [2302] = 1,
    ACTIONS(45), 1,
      sym_string,
  [2306] = 1,
    ACTIONS(279), 1,
      anon_sym_THAN,
  [2310] = 1,
    ACTIONS(279), 1,
      anon_sym_TO,
  [2314] = 1,
    ACTIONS(281), 1,
      sym_string,
  [2318] = 1,
    ACTIONS(283), 1,
      sym_num,
  [2322] = 1,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
  [2326] = 1,
    ACTIONS(287), 1,
      sym_num,
  [2330] = 1,
    ACTIONS(289), 1,
      sym_num,
  [2334] = 1,
    ACTIONS(291), 1,
      sym_num,
  [2338] = 1,
    ACTIONS(293), 1,
      anon_sym_THEN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 101,
  [SMALL_STATE(5)] = 164,
  [SMALL_STATE(6)] = 224,
  [SMALL_STATE(7)] = 278,
  [SMALL_STATE(8)] = 332,
  [SMALL_STATE(9)] = 360,
  [SMALL_STATE(10)] = 388,
  [SMALL_STATE(11)] = 416,
  [SMALL_STATE(12)] = 444,
  [SMALL_STATE(13)] = 472,
  [SMALL_STATE(14)] = 500,
  [SMALL_STATE(15)] = 528,
  [SMALL_STATE(16)] = 569,
  [SMALL_STATE(17)] = 610,
  [SMALL_STATE(18)] = 638,
  [SMALL_STATE(19)] = 666,
  [SMALL_STATE(20)] = 698,
  [SMALL_STATE(21)] = 730,
  [SMALL_STATE(22)] = 763,
  [SMALL_STATE(23)] = 796,
  [SMALL_STATE(24)] = 813,
  [SMALL_STATE(25)] = 831,
  [SMALL_STATE(26)] = 849,
  [SMALL_STATE(27)] = 887,
  [SMALL_STATE(28)] = 905,
  [SMALL_STATE(29)] = 923,
  [SMALL_STATE(30)] = 946,
  [SMALL_STATE(31)] = 969,
  [SMALL_STATE(32)] = 992,
  [SMALL_STATE(33)] = 1027,
  [SMALL_STATE(34)] = 1042,
  [SMALL_STATE(35)] = 1065,
  [SMALL_STATE(36)] = 1088,
  [SMALL_STATE(37)] = 1111,
  [SMALL_STATE(38)] = 1146,
  [SMALL_STATE(39)] = 1169,
  [SMALL_STATE(40)] = 1192,
  [SMALL_STATE(41)] = 1224,
  [SMALL_STATE(42)] = 1256,
  [SMALL_STATE(43)] = 1269,
  [SMALL_STATE(44)] = 1282,
  [SMALL_STATE(45)] = 1311,
  [SMALL_STATE(46)] = 1323,
  [SMALL_STATE(47)] = 1339,
  [SMALL_STATE(48)] = 1362,
  [SMALL_STATE(49)] = 1381,
  [SMALL_STATE(50)] = 1404,
  [SMALL_STATE(51)] = 1427,
  [SMALL_STATE(52)] = 1446,
  [SMALL_STATE(53)] = 1469,
  [SMALL_STATE(54)] = 1492,
  [SMALL_STATE(55)] = 1501,
  [SMALL_STATE(56)] = 1520,
  [SMALL_STATE(57)] = 1531,
  [SMALL_STATE(58)] = 1542,
  [SMALL_STATE(59)] = 1553,
  [SMALL_STATE(60)] = 1563,
  [SMALL_STATE(61)] = 1573,
  [SMALL_STATE(62)] = 1581,
  [SMALL_STATE(63)] = 1595,
  [SMALL_STATE(64)] = 1605,
  [SMALL_STATE(65)] = 1615,
  [SMALL_STATE(66)] = 1625,
  [SMALL_STATE(67)] = 1635,
  [SMALL_STATE(68)] = 1645,
  [SMALL_STATE(69)] = 1653,
  [SMALL_STATE(70)] = 1663,
  [SMALL_STATE(71)] = 1673,
  [SMALL_STATE(72)] = 1681,
  [SMALL_STATE(73)] = 1689,
  [SMALL_STATE(74)] = 1699,
  [SMALL_STATE(75)] = 1709,
  [SMALL_STATE(76)] = 1717,
  [SMALL_STATE(77)] = 1725,
  [SMALL_STATE(78)] = 1735,
  [SMALL_STATE(79)] = 1743,
  [SMALL_STATE(80)] = 1751,
  [SMALL_STATE(81)] = 1765,
  [SMALL_STATE(82)] = 1778,
  [SMALL_STATE(83)] = 1785,
  [SMALL_STATE(84)] = 1798,
  [SMALL_STATE(85)] = 1811,
  [SMALL_STATE(86)] = 1820,
  [SMALL_STATE(87)] = 1827,
  [SMALL_STATE(88)] = 1834,
  [SMALL_STATE(89)] = 1841,
  [SMALL_STATE(90)] = 1852,
  [SMALL_STATE(91)] = 1865,
  [SMALL_STATE(92)] = 1878,
  [SMALL_STATE(93)] = 1889,
  [SMALL_STATE(94)] = 1896,
  [SMALL_STATE(95)] = 1903,
  [SMALL_STATE(96)] = 1916,
  [SMALL_STATE(97)] = 1923,
  [SMALL_STATE(98)] = 1929,
  [SMALL_STATE(99)] = 1935,
  [SMALL_STATE(100)] = 1941,
  [SMALL_STATE(101)] = 1947,
  [SMALL_STATE(102)] = 1955,
  [SMALL_STATE(103)] = 1963,
  [SMALL_STATE(104)] = 1971,
  [SMALL_STATE(105)] = 1979,
  [SMALL_STATE(106)] = 1987,
  [SMALL_STATE(107)] = 1995,
  [SMALL_STATE(108)] = 2000,
  [SMALL_STATE(109)] = 2007,
  [SMALL_STATE(110)] = 2012,
  [SMALL_STATE(111)] = 2019,
  [SMALL_STATE(112)] = 2024,
  [SMALL_STATE(113)] = 2031,
  [SMALL_STATE(114)] = 2036,
  [SMALL_STATE(115)] = 2043,
  [SMALL_STATE(116)] = 2048,
  [SMALL_STATE(117)] = 2053,
  [SMALL_STATE(118)] = 2060,
  [SMALL_STATE(119)] = 2065,
  [SMALL_STATE(120)] = 2072,
  [SMALL_STATE(121)] = 2079,
  [SMALL_STATE(122)] = 2086,
  [SMALL_STATE(123)] = 2093,
  [SMALL_STATE(124)] = 2098,
  [SMALL_STATE(125)] = 2105,
  [SMALL_STATE(126)] = 2112,
  [SMALL_STATE(127)] = 2119,
  [SMALL_STATE(128)] = 2124,
  [SMALL_STATE(129)] = 2131,
  [SMALL_STATE(130)] = 2138,
  [SMALL_STATE(131)] = 2145,
  [SMALL_STATE(132)] = 2152,
  [SMALL_STATE(133)] = 2159,
  [SMALL_STATE(134)] = 2166,
  [SMALL_STATE(135)] = 2171,
  [SMALL_STATE(136)] = 2178,
  [SMALL_STATE(137)] = 2182,
  [SMALL_STATE(138)] = 2186,
  [SMALL_STATE(139)] = 2190,
  [SMALL_STATE(140)] = 2194,
  [SMALL_STATE(141)] = 2198,
  [SMALL_STATE(142)] = 2202,
  [SMALL_STATE(143)] = 2206,
  [SMALL_STATE(144)] = 2210,
  [SMALL_STATE(145)] = 2214,
  [SMALL_STATE(146)] = 2218,
  [SMALL_STATE(147)] = 2222,
  [SMALL_STATE(148)] = 2226,
  [SMALL_STATE(149)] = 2230,
  [SMALL_STATE(150)] = 2234,
  [SMALL_STATE(151)] = 2238,
  [SMALL_STATE(152)] = 2242,
  [SMALL_STATE(153)] = 2246,
  [SMALL_STATE(154)] = 2250,
  [SMALL_STATE(155)] = 2254,
  [SMALL_STATE(156)] = 2258,
  [SMALL_STATE(157)] = 2262,
  [SMALL_STATE(158)] = 2266,
  [SMALL_STATE(159)] = 2270,
  [SMALL_STATE(160)] = 2274,
  [SMALL_STATE(161)] = 2278,
  [SMALL_STATE(162)] = 2282,
  [SMALL_STATE(163)] = 2286,
  [SMALL_STATE(164)] = 2290,
  [SMALL_STATE(165)] = 2294,
  [SMALL_STATE(166)] = 2298,
  [SMALL_STATE(167)] = 2302,
  [SMALL_STATE(168)] = 2306,
  [SMALL_STATE(169)] = 2310,
  [SMALL_STATE(170)] = 2314,
  [SMALL_STATE(171)] = 2318,
  [SMALL_STATE(172)] = 2322,
  [SMALL_STATE(173)] = 2326,
  [SMALL_STATE(174)] = 2330,
  [SMALL_STATE(175)] = 2334,
  [SMALL_STATE(176)] = 2338,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subject, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_specific_date, 4, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_specific_date, 4, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 3, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 3, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 5, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 5, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 4, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 4, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_specific_date, 5, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_specific_date, 5, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numerical_object, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verb_status, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnumerical_object, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verb, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numerical_expression, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identity, 3, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity, 3, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identity, 6, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity, 6, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 4, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition, 5, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_holds, 5, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_holds, 5, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 6, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition, 6, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_holds, 6, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_holds, 6, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 7, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition, 7, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modal_verb, 1, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_definition, 4, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numerical_expression, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_OBLIGATION, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PROHIBITION, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PERMISSION, 1, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_temporal_quantifier, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 1, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract, 1, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_definition, 3, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_definition, 4, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_statement, 3, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_statement, 4, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_temporal_offset, 2, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract, 3, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 2, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_month, 1, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
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
