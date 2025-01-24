from collections import deque

class DrawTree:

    def __init__(self):
        self.maxwidth = 0
        self.maxheight = 0
    
    def calculateWidths(self, node, levelwidth, level=0):
        # Increment node count at the current level
        if level >= len(levelwidth):
            levelwidth.append(deque([0]))

        # Recursively calculate for each child node
        widthChild = 0
        for child in node.children:
            widthChild += self.calculateWidths(child, levelwidth, level + 1)

        if node.child_count > 0:
            if len(node.type) * 15 + 10 > widthChild:
                levelwidth[level].append(levelwidth[level][-1] + len(node.type) * 15 + 10)
                return len(node.type) * 15 + 10
            else:
                levelwidth[level].append(levelwidth[level][-1] + widthChild)
                return widthChild 
        else:
            levelwidth[level].append(levelwidth[level][-1] + len(node.text.decode("utf8")) * 15 +  10) 
            return len(node.text.decode("utf8")) * 15 +  10


    def textNode(self, node, level, levelwidth):
        # Create a single node with text inside
        text = node.text.decode("utf8")
        width = len(text) * 15 + 10
        x = (levelwidth[level].popleft() + levelwidth[level][0]) // 2 - (width // 2)
        content = f'<rect x="{x}" y="{level * 100}" rx="10" ry="10" width="{width}" height="50" style="fill:blue;stroke:black;stroke-width:2;opacity:0.5" />\n'
        content += f'<text x="{x + width // 2}" y="{level * 100 + 25}" font-size="15" text-anchor="middle">{text}</text>\n'

        self.maxheight = max(self.maxheight, level*100 + 50)
        self.maxwidth = max(self.maxwidth, x + width)

        return content


    def exploreNodes(self, node, level, levelwidth):
        numchild = node.child_count
        content = ""

        if numchild > 0:
            width = len(node.type) * 15 + 10
            x = (levelwidth[level].popleft() + levelwidth[level][0]) // 2 - (width // 2)
            content += f'<rect x="{x}" y="{level * 100}" rx="10" ry="10" width="{width}" height="50" style="fill:red;stroke:black;stroke-width:2;opacity:0.5" />\n'
            content += f'<text x="{x + width // 2}" y="{level * 100 + 25}" font-size="15" text-anchor="middle">{node.type}</text>\n'

            for i, child in enumerate(node.children):
                content += f'<line x1="{x+width//2}" y1="{level * 100+50}" x2="{levelwidth[level+1][0] + (levelwidth[level+1][1] - levelwidth[level+1][0]) // 2}" y2="{level*100 + 100}" stroke="black"/>'
                content += self.exploreNodes(child, level + 1, levelwidth)
            
            self.maxheight = max(self.maxheight, level*100 + 50)
            self.maxwidth = max(self.maxwidth, x + width)

            return content

        else:
            # Leaf node, use textNode function to render it
            return self.textNode(node, level, levelwidth)

        # Currently doing it all wrong, you should be calculating the width of the text, then adding that to total 
        # width of the level, then moving back upwards
        # and using that to split the widths


        # Good enough for now, but next, want to recursively calculate all widths and subwidths, then propagate back upwards.


    def buildTree(self, tree):
        if tree:
            levelwidth = []
            self.calculateWidths(tree.root_node, levelwidth)
            # print(levelwidth)
            content = self.exploreNodes(tree.root_node, 0, levelwidth)
            # print(content)
            return f'<svg width="{self.maxwidth}" height="{self.maxheight}">{content}</svg>'
        else:
            return ""