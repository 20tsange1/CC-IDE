class DrawBoolean:

    def __init__(self):
        self.identities = {}
        pass

    def exploreNodes(self, node, depth):
        if node.type == "clause":
            # [Clause Text, [[CONDITIONS], [STATEMENTS], [ALTERNATIVES]]]
            self.clauses.append((node.text.decode('utf8'), [[[]], []]))

        elif len(self.clauses) > 0:
            if node.type == "statement":
                self.clauses[-1][1][-1].append('<b style="color:#01422f;">' + node.text.decode('utf8') + '</b>')
            elif node.type == "else":
                self.clauses[-1][1].append([])

            elif node.type == "condition":
                text = node.text.decode("utf8")
                self.clauses[-1][1][0][-1].append(self.identities[node.id] + f" {text}")

            elif node.type == "bracket":
                self.clauses[-1][1][0].append([])

            elif node.type == "and_expression":
                self.clauses[-1][1][0][-1].append("AND")

            elif node.type == "or_expression":
                self.clauses[-1][1][0][-1].append("OR")
        
            
        if node.children:
            for c in node.children:
                self.exploreNodes(c, depth + 1)

        if node.type == "bracket":
            inner = self.clauses[-1][1][0].pop()
            self.clauses[-1][1][0][-1].append(inner)


    def build_bool(self, conditions, depth):
        print(conditions)
        if isinstance(conditions, list):
            retstr = ' '.join([self.build_bool(c, depth + 1) for c in conditions])
            print(retstr)
            return f'<div class="condition plain">{retstr}</div>'
        else:
            if conditions == "AND":
                return f'<div class="condition and">{conditions}</div>'
            elif conditions == "OR":
                return f'<div class="condition or">{conditions}</div>'
            else:
                return f'<div class="condition plain"><b style="color:#01422f;">({conditions})</b></div>'


    def buildFileStructure(self, tree, identities):
        if tree:
            self.clauses = []

            self.identities = identities

            self.exploreNodes(tree.root_node, 0)

            contract_content = ""
            
            # print(self.clauses, identities)

            # print(self.build_bool(self.clauses[0][1][0], 0))

            css = """
                    <style>
                    .condition {
                        display: block; margin: 1rem;
                    }
                    .conditionblock {
                        display: block; margin: 1rem; background-color: #a6d2de; padding: 2rem; border-radius: 0.5rem;
                    }
                    .statementblock { 
                        display: block; margin: 1rem; background-color: #cfb5e6; padding: 2rem; border-radius: 0.5rem;
                    }
                    .alternativeblock { 
                        display: block; margin: 1rem; background-color: #e6b5ca; padding: 2rem; border-radius: 0.5rem;
                    }
                    .and { color: green; font-weight: bold; }
                    .or { color: red; font-weight: bold; }
                    .clause {
                        display: block; background-color: #cce0ff; margin: 1rem; padding: 2rem; border-radius: 0.5rem;
                    }
                    </style>
                """

            contract_content += css

            for i, c in enumerate(self.clauses):
                clause_content = c[0]
                
                statement_content = ""
                alternative_content = ""
                condition_content = ""

                if len(c[1][1]) > 0:
                    statement_inner_content = "<p>" + "</p><p>".join(c[1][1]) + "</p>"
                    statement_content = f"""
                    <section class="statementblock">
                        <h3>Statement</h3>
                        {statement_inner_content}
                    </section>
                    """

                if len(c[1]) == 3 and len(c[1][-1]) > 0:
                    alternative_inner_content = "<p>" + "</p><p>".join(c[1][-1]) + "</p>"
                    alternative_content = f"""
                    <section class="alternativeblock">
                        <h3>Alternative</h3>
                        {alternative_inner_content}
                    </section>
                    """

                if len(c[1][0][0]) > 0:
                    condition_inner_content = "<p>" + self.build_bool(c[1][0], 0)  + "</p>"
                    condition_content = f"""
                    <section class="conditionblock">
                        <h3>Condition</h3>
                        {condition_inner_content}
                    </section>
                    """

                contract_content += f"""

                <section class="clause">
                    <h2>Clause {i + 1}</h2>

                        {statement_content}

                        {alternative_content}
                
                        {condition_content}

                </section>

                """
            return contract_content
        else:
            return ""