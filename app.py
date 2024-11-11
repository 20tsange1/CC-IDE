from flask import Flask, render_template, request, jsonify, render_template_string
from main import Handler
import os

app = Flask(__name__)
handler = Handler()

# Define a route for the main page
@app.route('/')
def index():
    return render_template('index.html', node_types=handler.node_types)

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
    
    # Render as HTML
    html_content = f"""
    <html>
        <body>
            <h1>N-Ary Tree Visualization</h1>
            {svg_content}
        </body>
    </html>
    """
    return render_template_string(html_content)

@app.route('/submit-options', methods=['POST'])
def submit_options():
    # Collect color data from the JSON request
    data = request.get_json()
    highlight_colours = data.get("colors", {})
    handler.highlights = highlight_colours 

    print(highlight_colours)

    return "Highlights Applied"


TEXT_FILES_DIR = "text-files"  # Directory to store text files

@app.route('/bnfeditor')
def bnfeditor():
    return render_template('bnfeditor.html')

@app.route('/files', methods=['GET'])
def list_files():
    # List all text files in the directory
    files = [f for f in os.listdir(TEXT_FILES_DIR) if f.endswith('.txt') and 'bnf' in f]
    return jsonify(files)

@app.route('/load-file/<filename>', methods=['GET'])
def load_file(filename):
    filepath = os.path.join(TEXT_FILES_DIR, filename)
    if os.path.isfile(filepath):
        with open(filepath, 'r') as file:
            content = file.read()
        return jsonify({'content': content})
    return jsonify({'error': 'File not found'}), 404

@app.route('/save-file', methods=['POST'])
def save_file():
    data = request.get_json()
    filename = data.get('filename')
    content = data.get('content')
    if not filename or not content:
        return jsonify({'error': 'Invalid input'}), 400

    filepath = os.path.join(TEXT_FILES_DIR, filename)
    with open(filepath, 'w') as file:
        file.write(content)
    
    return jsonify({'message': 'File saved successfully'}), 200


if __name__ == '__main__':
    app.run(debug=True)
