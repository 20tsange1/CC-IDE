# ------------
# Analysis Page
# ------------
#
#   Event Simulation

from flask import Blueprint, render_template, request, jsonify, render_template_string
from markupsafe import Markup

from staticanalysis import StaticAnalysis
static_analyser = StaticAnalysis()

from app import handler

analysis_page = Blueprint('analysis_page', __name__, template_folder='templates')
handle = handler

@analysis_page.route("/analysis")
def analysis_page_render():
    return render_template("analysis.html", current_page="analysis")


@analysis_page.route("/event-simulation")
def static_analysis():
    static_analyser.simulate(handle.parse_tree)
    return jsonify({"message": "Simulation Successful"}), 200


@analysis_page.route("/event-read")
def event_sim_events():
    conditions = [
        [i.identifier, i.flag, i.sentence]
        for i in static_analyser.event_simulator.conditions.values()
    ]
    states = [
        [i.identifier, i.evaluate(), i.sentence]
        for i in static_analyser.event_simulator.state_def.values()
    ]
    return (
        jsonify(
            {
                "conditions": conditions,
                "states": states,
                "message": "Successful Analysis",
            }
        ),
        200,
    )

@analysis_page.route("/event-toggle", methods=["POST"])
def event_sim_toggle():
    data = request.get_json()
    identifier = data.get("identifier")
    event_sim = static_analyser.event_simulator
    if identifier in event_sim.conditions:
        event_sim.toggle_condition(identifier)
        return jsonify({"message": "Successful toggle"}), 200
    else:
        return jsonify({"error": "Unsuccessful toggle"}), 404