class Condition:
    def __init__(self, identifier):
        self.identifier = identifier
        self.flag = False

    def __repr__(self):
        return self.identifier + " --- " + str(self.flag)

class Statement:
    def __init__(self, identifier, ifelse):
        self.identifier = identifier
        self.conditions = []
        self.ifelse = ifelse # True = Else, False = Not Else

    def __repr__(self):
        return self.identifier + "---" + str(self.evaluate())
        # return self.identifier + " --- " + str(self.evaluate()) + "---" + str(self.conditions)
    
    def evaluate(self):
        flag = True
        for e in self.conditions:
            flag = flag and e.flag

        if self.ifelse: # True when not ALL ANDs. 
            return not flag
        else:
            return flag

def explore(node, flag, mapper, argarr, connector):
    if node:
        if node.type in mapper:
            argarr[-1].append([mapper[node.type]])
            for c in node.children:
                explore(c, True, mapper, argarr, connector)
        elif flag:
            if not node.children:
                argarr[-1][-1].append(node.text.decode("utf-8"))
            else:
                for c in node.children:
                    explore(c, flag, mapper, argarr, connector)
        else:
            if not node.children:
                node_type = node.text.decode("utf-8")
                if node_type == 'C-AND':
                    argarr.append([])
                else:
                    argarr[-1].append(node_type)
                connector.append(node_type)
            else:
                for c in node.children:
                    explore(c, flag, mapper, argarr, connector)