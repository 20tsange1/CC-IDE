import sys
sys.path.append('tool-auxiliary/')
sys.path.append('tool-auxiliary/antlr')

from main import Handler

from time_superclass import TimeOverride, TimeTest
from datetime import datetime

handler = Handler()

parseString = "Member has 7% discount if [they are in london and they are a member] or [they are in wales and they are a member] on 2042-March-21st."

tree = handler.bnfStructure(parseString)

root = handler.parse_tree.root_node

t = TimeOverride()

def explore(node):
    if node and node.type == "time":
        print(t.evaluate_time_str(node.text.decode("utf-8")))
        print(t.evaluate_time_tree(node))
    for c in node.children:
        explore(c)

explore(root)

print(t.return_time_str(datetime.now()))


testing = TimeTest()

print(testing.test_return(t.evaluate_time_str, "2042-March-21st"), "String to DateTime Test")
print(testing.test_convert(t.return_time_str, datetime.now()), "DateTime to String Test")