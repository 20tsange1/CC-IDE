from tree_sitter import Language, Parser
from collections import deque

class Draw:
    def __init__(self):
        pass
    

    def calculateWidths(self, node, levelwidth, textwidth, level=0):
        # Increment node count at the current level
        if level >= len(levelwidth):
            levelwidth.append(deque([]))
            textwidth.append(deque([]))

        widthChild = 0
        for child in node.children:
            self.calculateWidths(child, levelwidth, textwidth, level + 1)

        print(node, node.start_point[1], node.end_point[1])

        levelwidth[level].append(node.start_point[1] * 25)
        levelwidth[level].append(node.end_point[1] * 25)

        if node.child_count > 0:
            textwidth[level].append(len(node.type) * 15 + 10)
        else:
            text = node.text.decode("utf8")
            textwidth[level].append(len(text) * 15 + 10)

        print(levelwidth)

        # Recursively calculate for each child node
        

        # if node.child_count > 0:
        #     if len(node.type) * 15 + 10 > widthChild:
        #         levelwidth[level].append(levelwidth[level][-1] + len(node.type) * 15 + 10)
        #         return len(node.type) * 15 + 10
        #     else:
        #         levelwidth[level].append(levelwidth[level][-1] + widthChild)
        #         return widthChild 
        # else:
        #     levelwidth[level].append(levelwidth[level][-1] + len(node.text.decode("utf8")) * 15 +  10) 
        #     return len(node.text.decode("utf8")) * 15 +  10


    def textNode(self, node, level, levelwidth, textwidth):
        # Create a single node with text inside
        text = node.text.decode("utf8")
        width = textwidth[level].popleft()
        x1 = (levelwidth[level].popleft())
        x2 = (levelwidth[level].popleft())
        x = (x1 + x2) // 2
        content = f'<rect x="{x}" y="{level * 100}" rx="10" ry="10" width="{width}" height="50" style="fill:blue;stroke:black;stroke-width:2;opacity:0.5" />\n'
        content += f'<text x="{x + width // 2}" y="{level * 100 + 25}" font-size="15" text-anchor="middle">{text}</text>\n'
        return content


    def exploreNodes(self, node, level, levelwidth, textwidth):
        numchild = node.child_count
        content = ""

        if numchild > 0:
            width = textwidth[level].popleft()
            x1 = (levelwidth[level].popleft())
            x2 = (levelwidth[level].popleft())
            x = (x1 + x2) // 2
            content += f'<rect x="{x}" y="{level * 100}" rx="10" ry="10" width="{width}" height="50" style="fill:red;stroke:black;stroke-width:2;opacity:0.5" />\n'
            content += f'<text x="{x + width // 2}" y="{level * 100 + 25}" font-size="15" text-anchor="middle">{node.type}</text>\n'

            for i, child in enumerate(node.children):
                content += f'<line x1="{x+width//2}" y1="{level * 100+50}" x2="{(levelwidth[level+1][0] + levelwidth[level+1][1]) // 2 + textwidth[level+1][0] // 2}" y2="{level*100 + 100}" stroke="black"/>'
                content += self.exploreNodes(child, level + 1, levelwidth, textwidth)

            return content

        else:
            # Leaf node, use textNode function to render it
            return self.textNode(node, level, levelwidth, textwidth)

        # Currently doing it all wrong, you should be calculating the width of the text, then adding that to total 
        # width of the level, then moving back upwards
        # and using that to split the widths


        # Good enough for now, but next, want to recursively calculate all widths and subwidths, then propagate back upwards.


    def buildTree(self, tree, width, height):
        if tree:
            levelwidth = []
            textwidth = []
            self.calculateWidths(tree.root_node, levelwidth, textwidth)
            # print(levelwidth)
            content = self.exploreNodes(tree.root_node, 0, levelwidth, textwidth)
            # print(content)
            return f'<svg width="{width}" height="{height}">{content}</svg>'
        else:
            return ""
