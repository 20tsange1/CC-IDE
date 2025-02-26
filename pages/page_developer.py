from flask import Blueprint, request, current_app, jsonify
import os

page_developer = Blueprint("page_developer", __name__)

TEXT_FILES_DIR = "text-files"  # Directory to store text files
AUXILIARY_FILES_DIR = "tool-auxiliary"

# ------------
# Developer Page
# ------------
#
#   For adding highlight Colours
#   Changing BNFs


# keep as function just for ont breakdown and reparseBNF
@page_developer.route("/parse-bnf", methods=["POST"])
def parse_bnf():
    data = request.get_json()
    filename = data.get("filename")
    directory = data.get("path")
    ontdirectory = data.get("ont")
    if not filename or not directory:
        return jsonify({"error": "Invalid input"}), 400

    current_app.config["ont"].breakdown(ontdirectory + "/ontologies.txt")

    try:
        current_app.config["handler"].reparseBNF(f"{directory}/{filename}", filename, current_app.config["ont"].ontologies)
        current_app.config["metadata"].bnf_meta(directory, filename)
        current_app.config["metadata"].grammar_meta(directory, filename)
        current_app.config["handler"].reset()

        outputCSS(current_app.config["handler"].highlights, current_app.config["handler"].pref_suf_format)
    except Exception as e:
        return jsonify({"error": f"{e}"}), 400

    return jsonify({"message": "BNF Parsed successfully"}), 200


def outputCSS(highlights, formatting):
    """
    Function for outputing colours and formatting options into a css file.
    Leerages the use of CSS before and after for prefix and suffix.
    """

    with open("static/parsing-formatting/parse.css", "w") as file:
        formats = ""
        for node in highlights.keys():

            node_name_actual = node
            if node in current_app.config["handler"].node_types:
                node_name_actual = current_app.config["handler"].node_types[node]

            if node in formatting:
                prefix = formatting[node]["prefix"]
                suffix = formatting[node]["suffix"]
                inline = formatting[node]["inline"]
                if prefix:
                    formats += f".{node_name_actual}::before {{ {prefix} }}\n"
                if suffix:
                    formats += f".{node_name_actual}::after {{ {suffix} }}\n"
                formats += f".{node_name_actual} {{ {'color: ' + highlights[node] + '; font-weight: bold;' if highlights[node] != '#000000' else ''} {inline} }}\n"
            else:
                formats += f".{node_name_actual} {{ {'color: ' + highlights[node] + '; font-weight: bold;' if highlights[node] != '#000000' else ''} }}\n"

        file.write(formats)

    return True


@page_developer.route("/submit-colour-options", methods=["POST"])
def submit_colour_options():
    # Collect color data from the JSON request
    data = request.get_json()
    highlight_colours = data.get("colors", {})
    current_app.config["handler"].highlights = highlight_colours

    outputCSS(current_app.config["handler"].highlights, current_app.config["handler"].pref_suf_format)

    name = current_app.config["handler"].grammar_name

    with open(f"text-files/{name}/nodecolours.txt", "w") as file:
        coloursFormat = ""
        for node, colour in highlight_colours.items():
            coloursFormat += f"{node}:{colour}\n"
        file.write(coloursFormat)

    return "Highlights Applied"


@page_developer.route("/submit-format-options", methods=["POST"])
def submit_format_options():
    # Collect color data from the JSON request
    data = request.get_json()
    formatting_options = data.get("formats", {})
    current_app.config["handler"].pref_suf_format = formatting_options

    outputCSS(current_app.config["handler"].highlights, current_app.config["handler"].pref_suf_format)

    name = current_app.config["handler"].grammar_name
    with open(f"{TEXT_FILES_DIR}/{name}/nodeformats.txt", "w") as file:
        formats = ""
        for node, formatting in formatting_options.items():
            prefix = formatting["prefix"]
            suffix = formatting["suffix"]
            inline = formatting["inline"]
            formats += f"{node}~~{prefix}~~{suffix}~~{inline}~~\n"
        file.write(formats)

    return "Formatting Applied"


@page_developer.route("/get-node-types-colour")
def get_node_types_colour():
    # For choosing colours for each of the node types.
    node_types_colour = [
        (t, current_app.config["handler"].highlights[t] if t in current_app.config["handler"].highlights else "")
        for t in current_app.config["handler"].node_types
    ]
    return jsonify(node_types_colour)


@page_developer.route("/get-node-types-format")
def get_node_types_format():
    # For choosing colours for each of the node types.
    node_types = []
    # print(handler.pref_suf_format)
    formatref = current_app.config["handler"].pref_suf_format
    for t in current_app.config["handler"].node_types:
        if t in current_app.config["handler"].pref_suf_format:
            add = (
                t,
                formatref[t]["prefix"],
                formatref[t]["suffix"],
                formatref[t]["inline"],
            )
        else:
            add = (t, "", "", "")
        node_types.append(add)
    # print(node_types)
    return jsonify(node_types)


@page_developer.route("/submit-file-upload", methods=["POST"])
def upload_file():
    if 'file' not in request.files:
        return jsonify({"error": "No file part"}), 400
    
    file = request.files['file']
    
    if file.filename == '':
        return jsonify({"error": "No selected file"}), 400

    if file:
        file_path = os.path.join(AUXILIARY_FILES_DIR, "time", "time_override.py")
        file.save(file_path)

        return jsonify({"message": "File uploaded successfully", "filename": "time.py"}), 200

@page_developer.route("/submit-file-validation", methods=["POST"])
def validate_file():
    try:
        from time_override import TimeOverride
        t = TimeOverride()
    except Exception as e:
        return jsonify({"error": "File Content Invalid"}), 400

    if not current_app.config["time_tester"].test_suite(t):
        return jsonify({"error": "Override failed"}), 400
    else:
        print("PASSED TEST")
    
    return jsonify({"message": "File Content Valid", "filename": "time.py"}), 200