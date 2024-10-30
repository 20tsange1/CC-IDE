from tree_sitter import Language, Parser

class Draw:
    def __init__(self):
        pass

    def textNode(self, node, x, y, level):
        # Create a single node with text inside
        text = node.text.decode("utf8")
        width = len(text) * 10
        content = f'<rect x="{x - width // 2 - 5}" y="{y - 30}" rx="20" ry="20" width="{width + 10}" height="50" style="fill:blue;stroke:black;stroke-width:5;opacity:0.5" />\n'
        content += f'<text x="{x}" y="{y}" font-size="15" text-anchor="middle">{text}</text>\n'
        return content
    
    def calculateMaxWidthPerLevel(self, node, level_counts, level=0):
        # Increment node count at the current level
        if level >= len(level_counts):
            level_counts.append(0)
        level_counts[level] += 1

        # Recursively calculate for each child node
        for child in node.children:
            self.calculateMaxWidthPerLevel(child, level_counts, level + 1)


    def exploreNodes(self, node, x, y, level, level_counts):
        numchild = node.child_count
        content = ""

        if numchild > 0:
            # Add the parent node with a rectangle and label
            width = len(node.type) * 20
            content += f'<rect x="{x- width // 2}" y="{y-30}" rx="20" ry="20" width="{width}" height="50" style="fill:red;stroke:black;stroke-width:5;opacity:0.5" />\n'
            content += f'<text x="{x}" y="{y}" font-size="15" text-anchor="middle">{node.type}</text>\n'

            # Get spacing based on the maximum width at this level
            max_width = level_counts[level]
            child_spacing = 600 / max_width  # Total width can be adjusted as needed
            start_x = x - (child_spacing * (numchild - 1) / 2)

            for i, child in enumerate(node.children):
                # Position for each child node
                child_x = start_x + i * child_spacing
                child_y = y + 150  # Increase y to place children below the parent

                # Draw line to child node
                content += f'<line x1="{x}" y1="{y+20}" x2="{child_x}" y2="{child_y - 30}" stroke="black"/>'

                # Recurse to draw each child node
                content += self.exploreNodes(child, child_x, child_y, level + 1, level_counts)
        else:
            # Leaf node, use textNode function to render it
            return self.textNode(node, x, y, level)


        # Currently doing it all wrong, you should be calculating the width of the text, then adding that to total 
        # width of the level, then moving back upwards
        # and using that to split the widths

        return content



    def buildTree(self, tree, width, height):
        if tree:
            level_counts = []
            self.calculateMaxWidthPerLevel(tree.root_node, level_counts)
            content = self.exploreNodes(tree.root_node, width // 2, height // 2, 0, level_counts)
            return f'<svg width="{width}" height="{height}">{content}</svg>'
        else:
            return ""