class DrawContract:

    def __init__(self):
        pass

    def exploreNodes(self, node, depth):
        if node.type == "clause":
            self.clauses.append((node.text.decode('utf8'), [[], []]))
        elif node.type == "statement":
            self.clauses[-1][1][0].append(node.text.decode('utf8'))
        elif node.type == "condition":
            self.clauses[-1][1][1].append(node.text.decode('utf8'))
            
        if node.children:
            for c in node.children:
                self.exploreNodes(c, depth + 1)


    def buildFileStructure(self, tree):
        if tree:
            self.clauses = []
            self.exploreNodes(tree.root_node, 0)

            contract_content = ""
            
            for c in self.clauses:
                clause_content = c[0]
                statement_content = "<p>" + "</p><p>".join(c[1][0]) + "</p>"
                condition_content = "<p>" + "</p><p>".join(c[1][1])  + "</p>"

                contract_content += f"""
                <section id="clause">
                    <h2>Clause</h2>
                    <p>{clause_content}</p>
                    
                    <section id="statement">
                        <h3>Statement</h3>
                        {statement_content}
                    </section>

                    <section id="condition">
                        <h3>Condition</h3>
                        {condition_content}
                    </section>

                </section>
                """
            return f'<pre>{contract_content}</pre>'
        else:
            return ""