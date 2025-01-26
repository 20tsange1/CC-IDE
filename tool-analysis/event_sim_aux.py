class Condition:
    def __init__(self, identifier, sentence):
        self.identifier = identifier
        self.sentence = sentence
        self.flag = False

    def __repr__(self):
        return self.identifier + " --- " + str(self.flag)

class Statement:
    def __init__(self, identifier, sentence, ifelse):
        self.identifier = identifier
        self.sentence = sentence # The actual phrase behind it.
        self.conditions = []
        self.ifelse = ifelse # True = Else, False = Not Else

    def __repr__(self):
        return self.identifier + " --- " + str(self.evaluate())
        # return self.identifier + " --- " + str(self.evaluate()) + "---" + str(self.conditions)
    
    def evaluate(self):
        flag = True
        for e in self.conditions:
            flag = flag and e.flag

        if self.ifelse: # True when not ALL ANDs. 
            return not flag
        else:
            return flag

class EventSim:
    def __init__(self):
        self.conditions = {}
        self.state_def = {}

    def explore(self, node, flag, mapper, argarr):
        """
        Recursive exploration of the nodes.

        Checks each node to see if it is a condition, statement or definition.

        If it is, then it tracks the child nodes, placing it into an array.

        Splits our contracts into different conditions, statements and definitions.
        """
        if node:
            if node.type in mapper:
                # Begin tracking children
                argarr[-1].append([mapper[node.type]])
                for c in node.children:
                    self.explore(c, True, mapper, argarr)
            elif flag:
                # If a child
                if not node.children:
                    argarr[-1][-1].append(node.text.decode("utf-8"))
                else:
                    for c in node.children:
                        self.explore(c, flag, mapper, argarr)
            else:
                # Else look for whether we start a new contract
                if not node.children:
                    node_type = node.text.decode("utf-8")
                    if node_type == 'C-AND':
                        argarr.append([])
                    else:
                        argarr[-1].append(node_type)
                else:
                    for c in node.children:
                        self.explore(c, flag, mapper, argarr)


    def event_simulation(self, parse_tree):

        # Resets the conditions and states.
        if len(self.conditions) > 0:
            self.conditions = {}
        if len(self.state_def) > 0:
            self.state_def = {}

        # Arguments based on the Contracts
        argarr = [[]]
        mapper = {"simple_definition": 'D', "simple_statement": 'S', "simple_condition": 'C'} 

        if parse_tree != None:
            root = parse_tree.root_node
        else:
            return

        self.explore(root, False, mapper, argarr)

        # Conditionals stores all the conditionals, statements and definitions.
        # Follows [Conditions][Then][Else]
        # Sentences stores corresponding text, in same indexes.
        conditionals = []
        sentences = []

        for s in argarr:
            conditionals.append([[], []])
            sentences.append([[], []])
            for c in s:
                if isinstance(c, str):
                    # If there is an Else, then we know that there are 3 categories.
                    # Condition, Then, Else
                    if c == "ELSE":
                        conditionals[-1].append([])
                        sentences[-1].append([])
                else:
                    # We have a guarantee that the use of a condition means that it comes in the IF segment.
                    if c[0] == "C":
                        conditionals[-1][0].append(c[0] + c[2])
                        sentences[-1][0].append(' '.join(c[4:]))
                    else:
                        # Then always before Else, which is why this works. You don't have
                        # the additional list until you reach the Else keyword.
                        conditionals[-1][-1].append(c[0] + c[2])
                        sentences[-1][-1].append(' '.join(c[4:]))


        # Have to swap to enumerate to ensure that we get the equivalent position for the sentences.
        for i, contract in enumerate(conditionals):

            conditions_temp = []

            # Creates condition objects, using the identifier as a key. 
            for j, c in enumerate(contract[0]):
                identity = c[1:]
                if identity not in self.conditions:
                    self.conditions[identity] = Condition(identity, sentences[i][0][j])
                conditions_temp.append(self.conditions[identity])

            # Adds those conditions as a prerequisite for the subsequent statments and definitions.
            for j, c in enumerate(contract[1]):
                identity = c[1:]
                if identity not in self.state_def:
                    self.state_def[identity] = Statement(identity, sentences[i][1][j], False)
                # RIGHT NOW, due to the lack of OR, we are unable to do this correctly. Everything is treated as AND
                self.state_def[identity].conditions.extend(conditions_temp)

            if len(contract) > 2:
                for j, c in enumerate(contract[2]):
                    identity = c[1:]
                    if identity not in self.state_def:
                        self.state_def[identity] = Statement(identity, sentences[i][2][j], True)
                    self.state_def[identity].conditions.extend(conditions_temp)

    
    def toggle_condition(self, identity):
        self.conditions[identity].flag = not self.conditions[identity].flag
    
    def evaluate_state_def(self, identity):
        return self.state_def[identity]