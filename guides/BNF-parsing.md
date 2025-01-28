# Parsing the BNF

In order to enable any grammar to be written in this BNF form, a secondary parser was used. This parser was created with ANTLR and designed to parse a BNF. This allows us to correctly parse and process a BNF, breaking it down into the correct elements, extensions and syntaxes. In this case, the BNF is inputted as a text file, then parsed by the BNF-Parser to output a parse tree. This parse tree is then traversed to extract the relevant symbols and expansions of the grammar, and then building the grammar recursively in a format for a tree-sitter json. This includes creating sequences in the right places, putting optionals, making the expansion a list of choices, and so forth. 

^ Need to dive deeper into what I did. Important part of making it work, taking out the hard work basically.

The next step is then feeding it into Tree-Sitter, utilising the Tree-Sitter CLI to generate the appropriate tree-sitter grammar. Then using it in our application to parse contracts.