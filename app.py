from flask import Flask, render_template, request, jsonify
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

if __name__ == '__main__':
    app.run(debug=True)
