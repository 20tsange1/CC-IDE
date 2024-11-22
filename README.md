# Final Year Project

A Computable Contract IDE, designed for drafting contracts.


For parsing Antlr, remember to save (Keep somewhere else) the Visitor file

java -jar antlr-4.13.1-complete.jar grammarParser.g4 -visitor -no-listener -Dlanguage=Python3


In order to install tree-sitter, follow the steps below:

1. Open Terminal
2. Run `npm install tree-sitter-cli`
3. Make sure Docker is installed (https://www.docker.com/)
4. Run `docker build -t gp-app .`
5. Run `docker run -p 8080:5000 gp-app`
6. Open up `http://localhost:8080/` in a web browser.