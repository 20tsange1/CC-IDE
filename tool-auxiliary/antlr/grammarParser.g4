// Grammar for parsing grammars
grammar grammarParser;
gram: component+
    ;
    
component: symbol otter expansion SEMICOLON
    ;
    
expansion: arg (SPLITTER arg)*
    ;

arg: entersymbol+
    ;
    
entersymbol: checksymbol optionalsymbol
    | checksymbol repeatsymbol
    | checksymbol repeat1symbol
    | checksymbol
    ;
    
    
optionalsymbol: QUESTION
    ;

repeatsymbol: STAR
    ;

repeat1symbol: PLUS
    ;

bracketsymbol: OPENBRACKET expansion CLOSEBRACKET
    ;
    
checksymbol: bracketsymbol
    | symbol
    | strings
    | regex
    ;
    
symbol: CHEVRON WORD ICHEVRON
    ;

otter: OTTER
    | WORD? OTTER
    ;
    
strings: QUOTE WORD* QUOTE
    | WORD
    ;

regex: SLASH WORD SLASH
    ;

OTTER : '::=' ;
OPENBRACKET: '(';
CLOSEBRACKET: ')';
SPLITTER: '|' ;
CHEVRON: '<'  ;
ICHEVRON: '>' ; // inverted chevron
QUOTE: '"';
QUESTION: '?';
PLUS: '+';
STAR: '*';
SEMICOLON: ';';
SLASH: '/';

INT : [0-9]+ ;
WORD: ~[ \t\n?"<>:|;()/]+;
ID: [a-zA-Z_][a-zA-Z_0-9]* ;
WS: [ \t\n\r\f]+ -> skip ;