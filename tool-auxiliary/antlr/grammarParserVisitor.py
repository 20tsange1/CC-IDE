# Generated from grammarParser.g4 by ANTLR 4.13.1
from antlr4 import *
if "." in __name__:
    from .grammarParserParser import grammarParserParser
else:
    from grammarParserParser import grammarParserParser

# This class defines a complete generic visitor for a parse tree produced by grammarParserParser.

class Component:
    def __init__(self, name, children=[]):
        self.name = name
        self.children = children
        self.next = {}
        self.prev = {}

    def __repr__(self):
        return self.name

class grammarParserVisitor(ParseTreeVisitor):
    """
    What I may want to try do is have two separate structures.
    One for the text to become a tree-sitter grammar.
    One for autosuggestion and node child, parent, combinations.
    """

    def __init__(self):
        super().__init__()
        
        # NODEMAP
        self.node_children = []
        self.nodes = []

        # NODETYPES
        self.node_types = []



    # Visit a parse tree produced by grammarParserParser#gram.
    def visitGram(self, ctx:grammarParserParser.GramContext):
        """
        gram: component+
            ;
        """
        exploration = []
        for i in range(ctx.getChildCount()):
            exploration.append(self.visit(ctx.getChild(i)))
        print(exploration)
        return exploration


    # Visit a parse tree produced by grammarParserParser#component.
    def visitComponent(self, ctx:grammarParserParser.ComponentContext):
        """
        component: symbol otter arg (SPLITTER arg)* SEMICOLON
            ;
        """
        symbol = ""
        arg_arr = []

        if isinstance(ctx.getChild(0), grammarParserParser.SymbolContext):
            symbol = ctx.getChild(0).getChild(1).getText().replace("-", "_")
            
        # NODEMAP
        self.node_children.append([])

        otter_type = self.visit(ctx.getChild(1))

        for i in range(2, ctx.getChildCount(), 2): # We know that all everything else is just arguments.
            # So you are iterating through the children and checking the arguments
            # 1 or more arguments, guaranteed to be split by a | 

            # NODEMAP
            self.node_children[-1].append([])

            arg_arr.append(self.visit(ctx.getChild(i)))

        # NODEMAP
        self.nodes.append(Component(symbol, self.node_children.pop()))
        self.node_types.append(symbol)

        arg_choice_string = ""

        if len(arg_arr) <= 1:
            arg_choice_string += "(" + '\n,'.join(arg_arr) + "\n)"
        else:
            arg_choice_string += "choice(\n\t" + '\n\t,'.join(arg_arr) + "\n)"

        if len(otter_type) > 0:
            return f"{symbol}: $ => {otter_type}{arg_choice_string}),"
        else:
            return f"{symbol}: $ => {arg_choice_string},"


    # Visit a parse tree produced by grammarParserParser#arg.
    def visitArg(self, ctx:grammarParserParser.ArgContext):
        """
        arg: entersymbol+
            ;
        """
        arg_internal_arr = []
        # It will be evaluated further down, you just need to combine them.
        for i in range(ctx.getChildCount()):
            arg_internal_arr.append(self.visit(ctx.getChild(i)))

        arg_string = ""

        # Sequences
        if len(arg_internal_arr) <= 1:
            arg_string += '\n,'.join(arg_internal_arr)
        else:
            arg_string += "seq(" + ', '.join(arg_internal_arr) + ")"

        return arg_string



    # Visit a parse tree produced by grammarParserParser#entersymbol.
    def visitEntersymbol(self, ctx:grammarParserParser.EntersymbolContext):
        """
        entersymbol: checksymbol optionalsymbol
            | checksymbol repeatsymbol
            | checksymbol repeat1symbol
            | checksymbol
            ;
        """
        if ctx.getChildCount() > 1:
            return self.visit(ctx.getChild(1)) + self.visit(ctx.getChild(0)) + ")"
        return self.visit(ctx.getChild(0))


    # Visit a parse tree produced by grammarParserParser#optionalsymbol.
    def visitOptionalsymbol(self, ctx:grammarParserParser.OptionalsymbolContext):
        """
        optionalsymbol: QUESTION
            ;
        """
        return "optional("


    # Visit a parse tree produced by grammarParserParser#repeatsymbol.
    def visitRepeatsymbol(self, ctx:grammarParserParser.RepeatsymbolContext):
        """
        repeatsymbol: STAR
            ;
        """
        return "repeat("


    # Visit a parse tree produced by grammarParserParser#repeat1symbol.
    def visitRepeat1symbol(self, ctx:grammarParserParser.Repeat1symbolContext):
        """
        repeat1symbol: PLUS
            ;

        Remember to add itself as a possible next child?
        """
        return "repeat1("


    # Visit a parse tree produced by grammarParserParser#bracketsymbol.
    def visitBracketsymbol(self, ctx:grammarParserParser.BracketsymbolContext):
        """
        bracketsymbol: OPENBRACKET arg CLOSEBRACKET
            ;
        """
        # ( ARGUMENT ), so we return the evaluation of the argument
        return self.visit(ctx.getChild(1))
        # return self.visitChildren(ctx)


    # Visit a parse tree produced by grammarParserParser#checksymbol.
    def visitChecksymbol(self, ctx:grammarParserParser.ChecksymbolContext):
        """
        checksymbol: bracketsymbol
            | symbol
            | strings
            | regex
            ;
        """
        return self.visitChildren(ctx)


    # Visit a parse tree produced by grammarParserParser#symbol.
    def visitSymbol(self, ctx:grammarParserParser.SymbolContext):
        """
        symbol: CHEVRON WORD ICHEVRON
            ;

        It is guaranteed that the name will be the second child.
        """
        symbol = ctx.getChild(1).getText().replace("-", "_")

        # NODEMAP
        self.node_children[-1][-1].append(symbol)
        
        return f"$.{symbol}"


    # Visit a parse tree produced by grammarParserParser#otter.
    def visitOtter(self, ctx:grammarParserParser.OtterContext):
        """
        otter: OTTER
            | WORD? OTTER
            ;
        """
        # User defined left / right recursive. Important for when you use a symbol within itself.
        symbol = ctx.getChild(0).getText()

        text = ''.join([c for c in symbol if not c.isdigit()])
        num = ''.join([c for c in symbol if c.isdigit()])

        if len(text) == 0:
            raise Exception("Invalid definition symbol")

        otter_map_num = {
            "L": "prec.left", 
            "R": "prec.right", 
            "P": "prec", 
            "PD": "prec.dynamic", 
        }

        otter_map_no_num = {
            "T": "token", 
            "TI": "token.immediate",
        }
        
        
        if text in otter_map_num:
            return f"{otter_map_num[text]}({num}," if len(num) > 0 else f"{otter_map_num[text]}("
        elif text in otter_map_no_num:
            return f"{otter_map_num[text]}("
        else:
            return ""


    # Visit a parse tree produced by grammarParserParser#strings.
    def visitStrings(self, ctx:grammarParserParser.StringsContext):
        """
        strings: QUOTE WORD* QUOTE
            | WORD
            ;
        """
        text = ctx.getText()

        # NODEMAP
        self.node_children[-1][-1].append(text)

        # Adding quotations to the text, so it is considered a string
        if text[0] == text[-1] == "'":
            return text
        else:
            return f"'{text}'"



    # Visit a parse tree produced by grammarParserParser#regex.
    def visitRegex(self, ctx:grammarParserParser.RegexContext):
        """
        regex: SLASH WORD SLASH
            ;
        """
        # Returning regex in it's entirety.
        return ctx.getText()