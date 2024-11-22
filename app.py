from flask import Flask, render_template, request, jsonify, render_template_string
from markupsafe import Markup
from main import Handler
from ontology import Ontology
import os

app = Flask(__name__)
handler = Handler()
ont = Ontology()

CONTRACT_FILES_DIR = "contracts" # Directory to store contracts
TEXT_FILES_DIR = "text-files"  # Directory to store text files


# Define a route for the main page
@app.route('/')
def index():
    return render_template('index.html')

# Define a route for parsing text
@app.route('/parse', methods=['POST'])
def parse_text():
    # Get the text from the request
    text = request.json.get("text")
    # Basic parsing - you can replace this with custom parsing logic
    parsed_text = handler.bnfStructure(text)  # Example: Convert text to uppercase
    return jsonify({"parsed_text": parsed_text})

@app.route('/tree')
def display_tree():

    # Generate SVG for the tree
    # handler.bnfStructure("[1] it is the case that on the 20 January 15 Alice Cannot PAY POUNDS 100 IF [2] it is not the case that Alice PAID EQUAL TO Bob")
    svg_content = handler.drawTree()
    svg_content = Markup(svg_content)
    return render_template('treeview.html', content=svg_content)

@app.route('/contract_files', methods=['GET'])
def contract_list_files():
    # List all text files in the directory
    files = [f for f in os.listdir(CONTRACT_FILES_DIR)]
    return jsonify(files)

@app.route('/contract_load-file/<filename>', methods=['GET'])
def contract_load_file(filename):
    filepath = os.path.join(CONTRACT_FILES_DIR, filename)
    if os.path.isfile(filepath):
        with open(filepath, 'r') as file:
            content = file.read()
        return jsonify({'content': content})
    return jsonify({'error': 'File not found'}), 404

@app.route('/contract_save-file', methods=['POST'])
def contract_save_file():
    data = request.get_json()
    filename = data.get('filename')
    content = data.get('content')
    if not filename or not content:
        return jsonify({'error': 'Invalid input'}), 400

    filepath = os.path.join(CONTRACT_FILES_DIR, filename)
    with open(filepath, 'w') as file:
        file.write(content)
    
    return jsonify({'message': 'File saved successfully'}), 200


# Developer page
#   For adding highlight Colours
#   Changing BNFs

@app.route('/dev')
def bnf_editor():
    return render_template('bnfeditor.html', node_types=handler.node_types)

@app.route('/bnf_files', methods=['GET'])
def bnf_list_files():
    # List all text files in the directory
    files = [f for f in os.listdir(TEXT_FILES_DIR) if f.endswith('.txt') and 'bnf' in f]
    return jsonify(files)

@app.route('/bnf_load-file/<filename>', methods=['GET'])
def bnf_load_file(filename):
    filepath = os.path.join(TEXT_FILES_DIR, filename)
    if os.path.isfile(filepath):
        with open(filepath, 'r') as file:
            content = file.read()
        return jsonify({'content': content})
    return jsonify({'error': 'File not found'}), 404

@app.route('/bnf_save-file', methods=['POST'])
def bnf_save_file():
    data = request.get_json()
    filename = data.get('filename')
    content = data.get('content')
    if not filename or not content:
        return jsonify({'error': 'Invalid input'}), 400

    filepath = os.path.join(TEXT_FILES_DIR, filename)
    with open(filepath, 'w') as file:
        file.write(content)

    ont.breakdown("text-files/ontologies.txt")
    handler.reparseBNF(f"{TEXT_FILES_DIR}/{filename}", ont.ontologies)
    
    return jsonify({'message': 'File saved successfully'}), 200

@app.route('/submit-options', methods=['POST'])
def submit_options():
    # Collect color data from the JSON request
    data = request.get_json()
    highlight_colours = data.get("colors", {})
    handler.highlights = highlight_colours 

    # print(highlight_colours)

    return "Highlights Applied"



if __name__ == '__main__':
    app.run(debug=True, host='0.0.0.0', port=8080)
