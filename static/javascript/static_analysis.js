// ------------
// FOR ANALYSIS
// ------------

const conditionsList = document.getElementById('conditions');
const statesList = document.getElementById('states');

// Trigger full process on page load
document.addEventListener('DOMContentLoaded', () => {
    staticAnalysis();
});


function staticAnalysis() {
    fetch('/event-simulation')
    .then( response => response.json())
    .then(data => {
        staticLoad();
        console.log(data.message);
    });
}

function createLiItem(identifier, flag, sentence) {

    const li = document.createElement('li');

    const divID = document.createElement('div');
    const divFlag = document.createElement('div');
    const divSentence = document.createElement('div');

    divID.textContent = identifier;
    divFlag.textContent = flag;
    divSentence.textContent = sentence;

    li.appendChild(divID);
    li.appendChild(divFlag);
    li.appendChild(divSentence);

    li.flag = flag;

    li.classList.add("flag");

    if (flag) {
        li.classList.add("flagTrue");
    }
    else {
        li.classList.add("flagFalse");
    }

    li.addEventListener('click', () => {staticFlip(identifier)});

    return li;

}

function staticLoad() {
    fetch('/event-read')
        .then(response => response.json())
        .then(data => {
            
            conditionsList.replaceChildren();
            statesList.replaceChildren();

            data.conditions.forEach(([identifier, flag, sentence]) => {
                console.log(identifier);

                const li = createLiItem(identifier, flag, sentence);
                conditionsList.appendChild(li);

            });

            data.states.forEach(([identifier, flag, sentence]) => {
                console.log(identifier);

                const li = createLiItem(identifier, flag, sentence);
                statesList.appendChild(li);

            });
        });
    }

function staticFlip(identifier) {
    fetch(`/event-toggle`, {
        method: "POST",
        headers: {"Content-Type": "application/json"},
        body: JSON.stringify({"identifier": identifier})
    })
    .then(response => response.json())
    .then(data => {
        console.log(data.message || data.error);
        staticLoad();
    });
}