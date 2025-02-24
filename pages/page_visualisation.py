from flask import Blueprint, jsonify, current_app
from markupsafe import Markup

page_visualisation = Blueprint("page_visualisation", __name__)

# ------------
# Visualisation Page
# ------------

@page_visualisation.route("/tree_draw")
def tree_draw():
    # Generate SVG for the tree
    svg_content = current_app.config["visualiser"].drawTree(current_app.config["handler"].parse_tree)
    svg_content = Markup(svg_content)
    return jsonify(content=svg_content)


@page_visualisation.route("/file_draw")
def file_draw():
    # Generate SVG for the file structure
    svg_content = current_app.config["visualiser"].drawFile(current_app.config["handler"].parse_tree)
    svg_content = Markup(svg_content)
    return jsonify(content=svg_content)