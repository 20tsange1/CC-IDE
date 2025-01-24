# Generated from grammarParser.g4 by ANTLR 4.13.1
from antlr4 import *
if "." in __name__:
    from .grammarParserParser import grammarParserParser
else:
    from grammarParserParser import grammarParserParser

# This class defines a complete generic visitor for a parse tree produced by grammarParserParser.

class grammarParserVisitor(ParseTreeVisitor):

    # Visit a parse tree produced by grammarParserParser#gram.
    def visitGram(self, ctx:grammarParserParser.GramContext):
        retArr = []
        for i in range(ctx.getChildCount()):
            retArr.append(self.visit(ctx.getChild(i)))
        return retArr


    # Visit a parse tree produced by grammarParserParser#component.
    def visitComponent(self, ctx:grammarParserParser.ComponentContext):
        symbol = ""
        retArr = []
        

        if isinstance(ctx.getChild(0), grammarParserParser.SymbolContext):
            symbol = self.visit(ctx.getChild(0))

        recursiveness = self.visit(ctx.getChild(1))

        for i in range(2, ctx.getChildCount(), 2): # We know that all everything else is just arguments.
            # So you are iterating through the children and checking if it is a standalone symbol or an argument - 
            # Mix of text + symbols
            if isinstance(ctx.getChild(i), grammarParserParser.SymbolContext):
                # Standalone symbol, you will get the <SYMBOL>, hence why we wrap it in an array
                retArr.append([self.visit(ctx.getChild(i))])
            elif isinstance(ctx.getChild(i), grammarParserParser.ArgContext):
                # Argument, you will get an array ['IF', '<condition>', 'THEN', '<definition>']
                retArr.append(self.visit(ctx.getChild(i)))
        return symbol, recursiveness, retArr


    # Visit a parse tree produced by grammarParserParser#arg.
    def visitArg(self, ctx:grammarParserParser.ArgContext):
        retArr = []
        for i in range(ctx.getChildCount()):
            retArr.append(self.visit(ctx.getChild(i)))
        return retArr

    # Visit a parse tree produced by grammarParserParser#symbol.
    def visitSymbol(self, ctx:grammarParserParser.SymbolContext):
        retArr =[]
        for i in range(ctx.getChildCount()):
            retArr.append(ctx.getChild(i).getText())
        if retArr[0] == retArr[-1] == '"':
            return '"' + ' '.join(retArr[1:-1]) + '"'
        return ''.join(retArr)

    # Visit a parse tree produced by grammarParserParser#bracketsymbol.
    def visitBracketsymbol(self, ctx:grammarParserParser.BracketsymbolContext):
        return self.visitChildren(ctx)

    # Visit a parse tree produced by grammarParserParser#otter.
    def visitOtter(self, ctx:grammarParserParser.OtterContext):
        # User defined left / right recursive. Important for when you use a symbol within itself.
        symbol = ctx.getChild(0).getText()

        # print(symbol)

        text = ''.join([c for c in symbol if not c.isdigit()])
        num = ''.join([c for c in symbol if c.isdigit()])

        if len(text) == 0:
            raise Exception("Invalid definition symbol")

        valid = {"L", "R", "P", "PD", "T", "IT"}
        
        if text in valid:
            return (text, num) if len(num) > 0 else (text, "0")
        else:
            return ("NONE", "0")