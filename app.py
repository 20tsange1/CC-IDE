import sys

sys.path
sys.path.append("tool-visualisations/")
sys.path.append("tool-analysis/")
sys.path.append("tool-auxiliary/")
sys.path.append("tool-auxiliary/antlr/")
sys.path.append("tool-auxiliary/time/")
sys.path.append("pages/")

# For building webapp and making sure content is safe.
from flask import Flask, render_template, request, jsonify, render_template_string
from markupsafe import Markup

# For Auxiliary parsing and visualisation functions
from main import Handler
from dynamicanalysis import DynamicAnalysis
from staticanalysis import StaticAnalysis
from visualiser import Visualiser
from ontology import Ontology
from metadata import MetaData

# For Testing and Validation
from time_test import TimeTest

try:
    from time_override import TimeOverride
except ImportError:
    from time_base import TimeOverride

from datetime import datetime

# Necessary
import os

app = Flask(__name__)

# Global Objects
handler = Handler()
ont = Ontology()
dynamic_analyser = DynamicAnalysis()
static_analyser = StaticAnalysis()
visualiser = Visualiser()
metadata = MetaData()
time_tester = TimeTest()


# Global Objects - Into Config
app.config["handler"] = handler
app.config["ont"] = ont
app.config["dynamic_analyser"] = dynamic_analyser
app.config["static_analyser"] = static_analyser
app.config["visualiser"] = visualiser
app.config["metadata"] = metadata
app.config["time_tester"] = time_tester


# Adding blueprints
from page_parse import page_parse
from page_developer import page_developer
from page_visualisation import page_visualisation
from page_analysis import page_analysis
from page_output import page_output

app.register_blueprint(page_parse)
app.register_blueprint(page_developer)
app.register_blueprint(page_visualisation)
app.register_blueprint(page_analysis)
app.register_blueprint(page_output)


CONTRACT_FILES_DIR = "contracts"  # Directory to store contracts
TEXT_FILES_DIR = "text-files"  # Directory to store text files
AUXILIARY_FILES_DIR = "tool-auxiliary"
BNF_DIR = "bnfs"

# ------------
# Home Page
# ------------
#
#   Mainly for parsing and dynamic analysis


@app.route("/")
def index():
    # print(handler.highlights)
    return render_template(
        "index.html", current_page="home", prev_string=handler.prevString
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

# ------------
# Visualisation Page
# ------------


@app.route("/tree")
def display_tree():
    return render_template("treeview.html", current_page="tree")


# ------------
# Display Page
# ------------


@app.route("/output")
def output():
    return render_template("output.html", current_page="output")


# ------------
# Analysis Page
# ------------
#
#   Event Simulation


@app.route("/analysis")
def analysis_page():
    return render_template("analysis.html", current_page="analysis")



if __name__ == "__main__":
    app.run(debug=True, host="0.0.0.0", port=8080)
