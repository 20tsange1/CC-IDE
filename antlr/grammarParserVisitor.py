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
        for i in range(2, ctx.getChildCount(), 2): # We know that all everything else is just arguments.
            if isinstance(ctx.getChild(i), grammarParserParser.SymbolContext):
                retArr.append([self.visit(ctx.getChild(i))])
            elif isinstance(ctx.getChild(i), grammarParserParser.ArgContext):
                retArr.append(self.visit(ctx.getChild(i)))
        return symbol, retArr


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

