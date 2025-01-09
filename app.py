import sys
sys.path
sys.path.append('./tool-visualisations/')
sys.path.append('./tool-analysis/')

# For building webapp and making sure content is safe.
from flask import Flask, render_template, request, jsonify, render_template_string
from markupsafe import Markup

# For Auxiliary parsing and visualisation functions
from main import Handler
from dynamicanalysis import DynamicAnalysis
from staticanalysis import StaticAnalysis
from visualiser import Visualiser
from ontology import Ontology

# Necessary
import os

app = Flask(__name__)
handler = Handler()
ont = Ontology()
dynamic_analyser = DynamicAnalysis()
static_analyser = StaticAnalysis()
visualiser = Visualiser()

CONTRACT_FILES_DIR = "contracts"  # Directory to store contracts
TEXT_FILES_DIR = "text-files"  # Directory to store text files

# ------------
# Home Page
# ------------
#
#   Mainly for parsing and dynamic analysis

@app.route("/")
def index():
    # print(handler.highlights)
    return render_template("index.html", current_page="home", prev_string=handler.prevString)


# Define a route for parsing text
@app.route("/parse", methods=["POST"])
def parse_text():
    # Get the text from the request
    text = request.json.get("text")
    # Basic parsing - you can replace this with custom parsing logic
    parsed_text = handler.bnfStructure(text)  # Example: Convert text to uppercase
    return jsonify({"parsed_text": parsed_text})


# Define a route for parsing text
@app.route("/parse-node", methods=["POST"])
def parse_node_text():
    # Get the text from the request
    nodeID = request.json.get("nodeID")
    # Basic parsing - you can replace this with custom parsing logic
    parsed_text = handler.bnfSubStructure(nodeID)  # Example: Convert text to uppercase
    return jsonify({"parsed_text": parsed_text})


@app.route("/files", methods=["POST"])
def list_files():
    # List all text files in the directory
    data = request.get_json()
    directory = data.get("path")
    ending = data.get("ends")
    contains = data.get("contains")
    files = [f for f in os.listdir(directory) if f.endswith(ending) and contains in f]
    return jsonify(files)


@app.route("/load-file/<filename>", methods=["POST"])
def load_file(filename):
    data = request.get_json()
    directory = data.get("path")
    filepath = os.path.join(directory, filename)
    if os.path.isfile(filepath):
        with open(filepath, "r") as file:
            content = file.read()
        return jsonify({"content": content})
    return jsonify({"error": "File not found"}), 404


@app.route("/save-file", methods=["POST"])
def save_file():
    data = request.get_json()
    filename = data.get("filename")
    directory = data.get("path")
    content = data.get("content")
    if not filename or not content:
        return jsonify({"error": "Invalid input"}), 400

    filepath = os.path.join(directory, filename)
    with open(filepath, "w") as file:
        file.write(content)

    print(filepath)

    return jsonify({"message": "File saved successfully"}), 200


@app.route("/delete-file", methods=["POST"])
def delete_file():
    data = request.get_json()
    filename = data.get("filename")
    directory = data.get("path")
    if not filename:
        return jsonify({"error": "Invalid input"}), 400

    filepath = os.path.join(directory, filename)
    if os.path.isfile(filepath):
        os.remove(filepath)
    else:
        return jsonify({"error": "Invalid input"}), 400

    return jsonify({"message": "File deleted successfully"}), 200


@app.route("/create-file", methods=["POST"])
def create_file():
    data = request.get_json()
    filename = data.get("filename")
    directory = data.get("path")
    if not filename:
        return jsonify({"error": "Invalid input"}), 400

    filepath = os.path.join(directory, filename) + ".txt"
    with open(filepath, "w") as file:
        file.write(" ")

    return jsonify({"message": "File created successfully"}), 200


@app.route("/dynamic-analysis", methods=["POST"])
def dynamic_analysis():
    percentage = dynamic_analyser.error_analyser(handler.parse_tree)

    return (
        jsonify(
            {"message": "Contract Analysed Successfully", "percentage": percentage}
        ),
        200,
    )


# ------------
# Developer Page
# ------------
#
#   For adding highlight Colours
#   Changing BNFs


@app.route("/dev")
def bnf_editor():
    return render_template("bnfeditor.html", current_page="dev")


# keep as function just for ont breakdown and reparseBNF
@app.route("/parse-bnf", methods=["POST"])
def parse_bnf():
    data = request.get_json()
    filename = data.get("filename")
    directory = data.get("path")
    ontdirectory = data.get("ont")
    if not filename or not directory:
        return jsonify({"error": "Invalid input"}), 400

    ont.breakdown(ontdirectory + "/ontologies.txt")

    try:
        handler.reparseBNF(f"{directory}/{filename}", ont.ontologies)
    except Exception as e:
        return jsonify({"error": f"{e}"}), 400

    return jsonify({"message": "BNF Parsed successfully"}), 200


@app.route("/submit-colour-options", methods=["POST"])
def submit_colour_options():
    # Collect color data from the JSON request
    data = request.get_json()
    highlight_colours = data.get("colors", {})
    handler.highlights = highlight_colours

    # print(handler.highlights)
    # print(highlight_colours)

    with open('text-files/nodecolours.txt', 'w') as file:
        coloursFormat = ""
        for node, colour in highlight_colours.items():
            coloursFormat += f"{node}:{colour}\n"
        file.write(coloursFormat)

    return "Highlights Applied"


@app.route("/submit-format-options", methods=["POST"])
def submit_format_options():
    # Collect color data from the JSON request
    data = request.get_json()
    formatting_options = data.get("formats", {})
    handler.pref_suf_format = formatting_options

    with open('text-files/nodeformats.txt', 'w') as file:
        formats = ""
        for node, formatting in formatting_options.items():
            prefix = formatting["prefix"]
            suffix = formatting["suffix"]
            notprev = formatting["notPrevious"]
            formats += f"{node}~~{prefix}~~{suffix}~~{notprev}~~\n"
        file.write(formats)

    return "Formatting Applied"


@app.route('/get-node-types-colour')
def get_node_types_colour():
    # For choosing colours for each of the node types.
    node_types_colour = [(t, handler.highlights[t] if t in handler.highlights else "") for t in handler.node_types]
    return jsonify(node_types_colour)

@app.route('/get-node-types-format')
def get_node_types_format():
    # For choosing colours for each of the node types.
    node_types = []
    # print(handler.pref_suf_format)
    formatref = handler.pref_suf_format
    for t in handler.node_types:
        if t in handler.pref_suf_format:
            add = (t, formatref[t]["prefix"], formatref[t]["suffix"], formatref[t]["notPrevious"])
        else:
            add = (t, "", "", "")
        node_types.append(add)
    # print(node_types)
    return jsonify(node_types)


# ------------
# Visualisation Page
# ------------

@app.route("/tree")
def display_tree():
    return render_template("treeview.html", current_page="tree")

@app.route("/tree_draw")
def tree_draw():
    # Generate SVG for the tree
    svg_content = visualiser.drawTree(handler.parse_tree)   
    svg_content = Markup(svg_content)
    return jsonify(content=svg_content)

@app.route("/file_draw")
def file_draw():
    # Generate SVG for the file structure
    svg_content = visualiser.drawFile(handler.parse_tree)
    svg_content = Markup(svg_content)
    return jsonify(content=svg_content)

# ------------
# Analysis Page
# ------------
#
#   Event Simulation

@app.route("/analysis")
def analysis_page():
    return render_template("analysis.html", current_page="analysis")

@app.route("/event-simulation", methods=["POST"])
def static_analysis():
    static_analyser.event_simulation(handler.parse_tree)
    return jsonify({"message": "Successful Analysis"}), 200





if __name__ == "__main__":
    app.run(debug=True, host="0.0.0.0", port=8080)
