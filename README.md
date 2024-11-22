# Final Year Project

A Computable Contract IDE, designed for drafting contracts.

In order to install tree-sitter, follow the steps below:

1. Open Terminal
2. Run `npm install tree-sitter-cli`
3. Make sure Docker is installed (https://www.docker.com/)
4. Run `docker build -t gp-app .`
5. Run `docker run -p 8080:8080 gp-app`
6. Open up `http://localhost:8080/` in a web browser.


Current flow of operations:

1. BNF of Grammar written in a text file.
2. BNF is then parsed and evaluated into a Tree-Sitter grammar json file.
3. Tree-Sitter is then used to convert this into a parser
4. We build the language on Python and are now able to parse using this language + traverse our parse trees.
5. The front-end application is hosted on Flask, establishing a web-server.

Current Implemented Features:

- Autosuggestion
- Syntax Highlighting
- BNF Parsing
- File saving + editing
- Incremental Parsing


A key benefit currently provided by this application is our ability to use grammars as we develop them (although there are considerations still to be solved regarding associativity, precedence and so forth), making it versatile towards all current legal grammars with a valid BNF.

Additionally, there will need to be a guide produced on BNF creation and standards. 


Things to Consider:
- Parsing is not immediate after loading file, add a space or reenter a letter to trigger.
- Colours do not save yet, however, once set, unless the grammar is changed, they will be consistent as long as the program is running.



Reminders to Self:
For parsing Antlr, remember to save (Keep somewhere else) the Visitor file
java -jar antlr-4.13.1-complete.jar grammarParser.g4 -visitor -no-listener -Dlanguage=Python3