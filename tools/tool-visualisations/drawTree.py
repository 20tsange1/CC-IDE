# Why write a fancy one when there are perfectly good libraries.
from graphviz import Digraph

class DrawTree:

    def __init__(self):
        self.maxwidth = 0
        self.maxheight = 0

    def exploreNodes(self, node, graph):

        text = ""
        identifier = str(node.id)
        if node.children:
            text = node.type
        else:
            text = node.text.decode("utf8")
        graph.node(identifier, text)

        for c in node.children:
            graph.edge(identifier, self.exploreNodes(c, graph))
        
        return identifier

    def buildTree(self, tree):
        if tree:
            levelwidth = []
            graph = Digraph(format='svg')
            self.exploreNodes(tree.root_node, graph)
            content = graph.pipe(encoding='utf-8')
            return content
        else:
            return ""