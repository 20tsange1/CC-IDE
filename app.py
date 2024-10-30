from flask import Flask, render_template, request, jsonify, render_template_string
from main import Handler

app = Flask(__name__)
handler = Handler()

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
    handler.bnfStructure("[1] it is not the case that on the 7 January 26 Alice Must PAY OTHEROBJECT objectthing")
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


if __name__ == '__main__':
    app.run(debug=True)
