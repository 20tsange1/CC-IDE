class DrawContract:

    def __init__(self):
        self.showset = {}

    def exploreNodes(self, node, show, store_arr):
        retstr = ""
        # print(store_arr)
        if node.children:

            if node.type in show:
                store_arr.append([])
            
            # retstr = "\t" * depth + node.type + "\n"
            for c in node.children:
                # retstr += self.exploreNodes(c, depth + 1, show, store_arr)
                self.exploreNodes(c, show, store_arr)
            
            if node.type in show:
                check = store_arr.pop()
                retstr = "\t" * len(store_arr) + node.type + "\n"
                if len(check) > 0:
                    retstr += ''.join(check)
                else:
                    retstr += "\t" * (len(store_arr) + 1) + '<b style="color:#01422f;">' + node.text.decode("utf-8") + "</b>" + "\n"
                store_arr[-1].append(retstr)
        else:
            if node.type in show:
                store_arr[-1].append("\t" * len(store_arr) + '<b style="color:#01422f;">' + node.text.decode('utf-8') + "</b>" + "\n") 

    def buildFileStructure(self, tree):
        if tree:
            store_arr = [[]]

            self.exploreNodes(tree.root_node, self.showset, store_arr)

            content = ''.join(store_arr[0])

            return f'<pre>{content}</pre>'
        else:
            return ""