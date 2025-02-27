class DrawFile:

    def __init__(self):
        pass

    def exploreNodes(self, node, depth):
        if node.children:
            retstr = "\t" * depth + node.type + "\n"
            for c in node.children:
                retstr += self.exploreNodes(c, depth + 1)
            return retstr
        else:
            retstr = "\t" * depth + '<b style="color:#01422f;">' + node.text.decode('utf-8') + "</b>" + "\n"
            return retstr


    def buildFileStructure(self, tree):
        if tree:
            content = self.exploreNodes(tree.root_node, 0)
            # print(content)
            return f'<pre>{content}</pre>'
        else:
            return ""