from tree_sitter import Language, Parser
from drawTree import DrawTree
from drawFile import DrawFile
from drawContract import DrawContract

class Visualiser:
    def __init__(self):
        self.types = ['Tree', 'File']

        self.tree_drawer = DrawTree()
        self.file_drawer = DrawFile()
        self.contract_drawer = DrawContract()

    """
    As an idea, why not use treecursor to draw subtrees, limiting the visual representation

    https://tree-sitter.github.io/py-tree-sitter/classes/tree_sitter.TreeCursor.html

    https://tree-sitter.github.io/tree-sitter/using-parsers#walking-trees-with-tree-cursors

    "You can access every node in a syntax tree using the TSNode APIs described above, but if 
    you need to access a large number of nodes, the fastest way to do so is with a tree cursor. 
    A cursor is a stateful object that allows you to walk a syntax tree with maximum efficiency.
    
    Note that the given input node is considered the root of the cursor, and the cursor cannot 
    walk outside this node, so going to the parent or any sibling of the root node will return false. 
    This has no unexpected effects if the given input node is the actual root node of the tree, but is 
    something to keep in mind when using nodes that are not the root node."

    What this means is that we are restricted to our node and it's children, perfect for our usecase.
    
    """

    def drawTree(self, tree):
        return self.tree_drawer.buildTree(tree)

    def drawFile(self, tree):
        return self.file_drawer.buildFileStructure(tree)

    def drawContract(self, tree):
        return self.contract_drawer.buildFileStructure(tree)