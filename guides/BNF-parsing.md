# Parsing the BNF

In order to enable any grammar to be written in this BNF form, a secondary parser was used. This parser was created with ANTLR and designed to parse a BNF. This allows us to correctly parse and process a BNF, breaking it down into the correct elements, extensions and syntaxes. In this case, the BNF is inputted as a text file, then parsed by the BNF-Parser to output a parse tree. This parse tree is then traversed to extract the relevant symbols and expansions of the grammar, and then building the grammar recursively in a format for a tree-sitter json. This includes creating sequences in the right places, putting optionals, making the expansion a list of choices, and so forth.  The next step is then feeding it into Tree-Sitter, utilising the Tree-Sitter CLI to generate the appropriate tree-sitter grammar. Then using it in our application to parse contracts.

## Reparsing BNF-parsing Grammar via ANTLR
For parsing Antlr, remember to save (Keep somewhere else) the Visitor file

Then run the command:

```
java -jar antlr-4.13.1-complete.jar grammarParser.g4 -visitor -no-listener -Dlanguage=Python3
```