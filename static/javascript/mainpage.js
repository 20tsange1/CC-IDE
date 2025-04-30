
// ------------
// FOR PARSING
// ------------

// Elements for parsing functionality
const inputText = document.getElementById('inputText'); // Input text area
const parsedText = document.getElementById('parsedText'); // Parsed text display

// A function for encapsulating all necessary parsing processes
function full_process() {
    parseText();
    dynamicAnalysis();
}

// Function to parse text and update the parsed display
function parseText() {
    fetch('/parse', {
        method: 'POST',
        headers: { 'Content-Type': 'application/json' },
        body: JSON.stringify({ text: inputText.value })
    })
        .then(response => response.json())
        .then(data => {
            parsedText.innerHTML = data.parsed_text; // Update parsed text
        })
        .catch(error => console.error('Error parsing text:', error));
}

// Trigger parsing and analysis on input change
inputText.addEventListener('input', full_process);

// Trigger full process on page load
document.addEventListener('DOMContentLoaded', () => {
    full_process();
    loadFileList(); // Load file list when the page is ready
});

// ------------
// FOR THE FILES
// ------------

// Elements for file management
const filesList = document.getElementById('files'); // List of files
const contractNameHolder = document.getElementById('contractNameHolder'); // Dropdown for file selection
const fileContent = document.getElementById('inputText'); // Editor for file content
const pathname = 'contracts'; // Directory for files
const title = document.getElementById('titleHolder'); // Editor title display

// Load the list of files from the server
function loadFileList() {
    fetch('/files', {
        method: 'POST',
        headers: { 'Content-Type': 'application/json' },
        body: JSON.stringify({ path: pathname, ends: '.txt', contains: '' })
    })
        .then(response => response.json())
        .then(files => {
            filesList.replaceChildren();

            const treeData = buildTree(files);
            const treeElement = renderTree(treeData, "Contracts");

            filesList.appendChild(treeElement);

        })
        .catch(error => console.error('Error loading file list:', error));
}


// https://www.w3schools.com/howto/howto_js_treeview.asp

// Breaking down the paths into a tree (dictionary based)
function buildTree(paths) {
    const root = {};

    for (const path of paths) {
        const parts = path.split('/');
        let current = root;

        // alert(parts);
    
        for (let i = 0; i < parts.length; i++) {
          const part = parts[i];
    
          if (!current[part]) {
            current[part] = {};
          }    
          current = current[part];
        }
        current["_fullPath"] = path
      }

    console.log(JSON.stringify(root, null, 2));
    return root;
  }


function build_li_obj(node, nodeName=null) {
    const li_ret = document.createElement('li');
    li_ret.classList.add("option");
    li_ret.textContent = nodeName;

    li_ret.addEventListener("click", () => {load_single_file(node["_fullPath"], nodeName)});

    return li_ret;
}

function build_li_big_obj(node, nodeName=null) {
    const li_big = document.createElement('li');

    const text_span = document.createElement('span');
    text_span.textContent = nodeName;
    text_span.classList.add("caret");
    text_span.addEventListener("click", function() {
        this.parentElement.querySelector(".nested").classList.toggle("active");
        this.classList.toggle("caret-down");
    });

    const ul = document.createElement('ul');
    ul.classList.add("nested");

    for (const key in node) {
        const children = renderTree(node[key], key);
        ul.appendChild(children);
    }

    li_big.appendChild(text_span);
    li_big.appendChild(ul);

    return li_big;
}


// Expanding tree into HTML elements
function renderTree(node, nodeName = null) {
    if ("_fullPath" in node) {
        return build_li_obj(node, nodeName);
    }
    else {
        return build_li_big_obj(node, nodeName);   
    }
}


function load_single_file(filename, contractName) {
    if (filename) {
        fetch(`/load-file`, {
            method: 'POST',
            headers: { 'Content-Type': 'application/json' },
            body: JSON.stringify({ path: filename })
        })
            .then(response => response.json())
            .then(data => {
                if (data.content) {
                    contractNameHolder.value = filename;
                    fileContent.value = data.content; // Update editor content
                    title.textContent = `Edit Text - ${contractName}`;
                    full_process();
                } else {
                    alert('Error loading file content');
                }
            })
            .catch(error => console.error('Error loading file content:', error));
    } else {
        contractNameHolder.value = "";
        fileContent.value = ''; // Clear editor if no file is selected
        title.textContent = 'Edit Text';
        full_process(); // Needs to be repeated in both, otherwise it just doesn't work. i.e can't be outside if statement.
    }
}

// Save file content to the server
saveBtn.addEventListener('click', () => {
    const filename = contractNameHolder.value;
    const content = fileContent.value;

    if (!filename) {
        alert('Please select a file to save');
        return;
    }

    fetch('/save-file', {
        method: 'POST',
        headers: { 'Content-Type': 'application/json' },
        body: JSON.stringify({ filename, content })
    })
        .then(response => response.json())
        .then(data => {
            alert(data.message || 'Error saving file');
        })
        .catch(error => console.error('Error saving file:', error));
});

// Delete file from the server
deleteBtn.addEventListener('click', () => {
    const filename = contractNameHolder.value;

    if (!filename) {
        alert('Please select a file to delete');
        return;
    }

    fetch('/delete-file', {
        method: 'POST',
        headers: { 'Content-Type': 'application/json' },
        body: JSON.stringify({ filename })
    })
        .then(response => response.json())
        .then(data => {
            alert(data.message || 'Error deleting file');
        })
        .catch(error => console.error('Error deleting file:', error));
    loadFileList(); // Refresh the file list
});

// Create a new file on the server
createBtn.addEventListener('click', () => {
    const filename = document.getElementById('createName').value;

    if (!filename) {
        alert('Please input a filename');
        return;
    }

    fetch('/create-file', {
        method: 'POST',
        headers: { 'Content-Type': 'application/json' },
        body: JSON.stringify({ filename, path: pathname })
    })
        .then(response => response.json())
        .then(data => {
            alert(data.message || 'Error creating file');
        })
        .catch(error => console.error('Error creating file:', error));
    loadFileList(); // Refresh the file list
});

// ------------
// FOR ANALYSIS
// ------------

function dynamicAnalysis() {
    fetch('/dynamic-analysis', {
        method: 'POST',
        headers: { 'Content-Type': 'application/json' },
        body: JSON.stringify({})
    })
        .then(response => response.json())
        .then(data => {
            if (data.message) {
                errorAnalysis(data.percentage);
                idAnalysis(data.problematic_ids);
            } else {
                alert('Error running analysis');
            }
        })
        .catch(error => console.error('Error running analysis:', error));
}

// Perform dynamic analysis and update the progress bar
function errorAnalysis(result) {
    const progressBar = document.querySelector(".progress-bar");
    progressBar.style.width = `${result}%`; // Update progress bar
    document.getElementById('progress-val').textContent = `${result}%`; // Update progress text
}

function idAnalysis(problematic_ids) {
    const idList = document.getElementById('problematic-ids');
    idList.replaceChildren();
    problematic_ids.forEach(identifier => {
        const li = document.createElement("li");
        li.textContent = identifier;
        idList.appendChild(li);
    });
    }


// ------------
// FOR POPUPS
// ------------

// Show or hide a popup
function popupFunction(elementID) {
    const popup = document.getElementById(elementID);
    popup.classList.toggle("show");
    event.stopPropagation(); // Prevent event propagation
}

// Close all popups when clicking outside
document.addEventListener('click', () => {
    document.querySelectorAll('.popuptext').forEach(box => {
        box.classList.remove("show"); // Hide visible popups
    });
});

// ------------
// FOR NODE SUBSET
// ------------

// Show or hide a popup
function nodeIDs(elementID) {
    parseDisplayIDs(elementID);
}

function nodeDefs() {
    parseDisplayDefs();
}

// Function to parse text and update the parsed display
function parseDisplayIDs(nodeID) {
    fetch('/display-id', {
        method: 'POST',
        headers: { 'Content-Type': 'application/json' },
        body: JSON.stringify({ nodeID: nodeID })
    })
        .then(response => response.json())
        .then(data => {
            parsedText.innerHTML = data.parsed_text; // Update parsed text
        })
        .catch(error => console.error('Error parsing text:', error));
}

// Function to parse text and update the parsed display
function parseDisplayDefs() {
    fetch('/display-def', {
        method: 'POST',
        headers: { 'Content-Type': 'application/json' }
    })
        .then(response => response.json())
        .then(data => {
            parsedText.innerHTML = data.parsed_text; // Update parsed text
        })
        .catch(error => console.error('Error parsing text:', error));
}