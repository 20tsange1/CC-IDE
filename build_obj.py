from parserobjects import BNFParser, Component

if __name__=="__main__":
    bnfp = BNFParser("text-files/colabnf.txt")
    bnfp.main()

    nodes = bnfp.nodes

    mapper = {}

    # print(nodes)

    for node in nodes:
        mapper[node.name] = node

    for node in nodes:
        for i in range(len(node.children)):
            for j in range(len(node.children[i])):
                child = node.children[i][j]
                if child in mapper:
                    node.children[i][j] = mapper[child]

    for node in nodes:
        for i in range(len(node.children)):
            for j in range(len(node.children[i])):
                child = node.children[i][j]
                if type(child) == Component:
                    if j > 0:
                        childprev = node.children[i][j-1]
                        child.prev.add(childprev)
                    if j < len(node.children[i]) - 1:
                        childnext = node.children[i][j+1]
                        child.next.add(childnext)

    # for name in mapper["nonnumerical_object"].children:
    #     print(name)

    print(mapper["string"])

    # print(mapper["string"].prev)
    # print(mapper["string"].next)

    # Think about how to use this in conjunction with tree-sitter parsing. 
    # Build a Trie -> Autocorrect
    # Cyclic Analysis?
    # Next step prediction