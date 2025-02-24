import sys
sys.path.append('tool-auxiliary/')
sys.path.append('tool-auxiliary/antlr')

from main import Handler

from tree_sitter import LookaheadIterator

handler = Handler()


parseString = ""
with open("contracts/short.txt", "r") as file:
    parseString = file.read()


# print(parseString)

parseString = "[1] it is not the case that on the 7 January 26 Alice may pay GBP 7 t"

tree = handler.bnfStructure(parseString)

print(handler.parse_tree)

# root = handler.parse_tree.root_node

cursor = handler.parse_tree.walk()

def explore(cursor):
    flag = True
    print(cursor.node.text.decode('utf8'), cursor.node.is_error)
    if cursor.goto_first_child():
        while flag:
            explore(cursor)
            flag = cursor.goto_next_sibling()
        cursor.goto_parent()
    return cursor

explore(cursor)

# Recursive Stack idea, you just need to track it.









 


# lookahead = handler.language.lookahead_iterator(cursor.node.parse_state)
# print([i for i in lookahead.iter_names()])

# print(root.type)

# lookahead = handler.language.lookahead_iterator(root.children[0].parse_state)

# print([i for i in lookahead.iter_names()])

# print(lookahead.reset_state(, language=handler.language))