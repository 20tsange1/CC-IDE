// ------------
// File Management
// ------------

// Elements for file operations
const filesList = document.getElementById('files');
const grammarNameHolder = document.getElementById('grammarNameHolder');
const fileContent = document.getElementById('fileContent');
const fileName = document.getElementById('fileName');
const saveBtn = document.getElementById('saveBtn');
const applyBtn = document.getElementById('applyBtn');
const pathname = 'bnfs';

// Load the list of files from the server
function loadFileList() {
    fetch('/files', {
        method: 'POST',
        headers: { 'Content-Type': 'application/json' },
        body: JSON.stringify({ path: pathname, ends: '.txt', contains: '' })
    })
        .then(response => response.json())
        .then(files => {
            // Populate the dropdown and file list
            filesList.replaceChildren();

            const treeData = buildTree(files);
            const treeElement = renderTree(treeData, "Grammars");

            filesList.appendChild(treeElement);

        })
        .catch(error => console.error('Error loading files:', error));
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

    li_ret.addEventListener("click", () => {load_single_file(node["_fullPath"], "Edit File - " + nodeName)});

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


function load_single_file(filename, grammarName) {
    if (filename) {
        fetch(`/load-file`, {
            method: 'POST',
            headers: { 'Content-Type': 'application/json' },
            body: JSON.stringify({ path: filename })
        })
            .then(response => response.json())
            .then(data => {
                if (data.content) {
                    grammarNameHolder.value = filename;
                    fileContent.value = data.content; // Update editor content
                    fileName.textContent = grammarName;
                } else {
                    alert('Error loading file content');
                }
            })
            .catch(error => console.error('Error loading file content:', error));
    } else {
        fileContent.value = ''; // Clear editor if no file is selected
    }
}

// Save file content to the server
saveBtn.addEventListener('click', () => {
    const filename = grammarNameHolder.value;
    const content = fileContent.value;

    if (!filename) {
        alert('Please select a file to save');
        return;
    }

    fetch('/save-file', {
        method: 'POST',
        headers: { 'Content-Type': 'application/json' },
        body: JSON.stringify({ filename, content, path: pathname })
    })
        .then(response => response.json())
        .then(data => {
            alert(data.message || 'Error saving file');
        })
        .catch(error => console.error('Error saving file:', error));
});

// Save and apply file content
applyBtn.addEventListener('click', () => {
    const filename = grammarNameHolder.value;
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
        if (data.error) {
            alert(`Error saving file: ${data.error}`);
            return;
        }

        // If saving was successful, proceed to parse the file
        return fetch('/parse-bnf', {
            method: 'POST',
            headers: { 'Content-Type': 'application/json' },
            body: JSON.stringify({ filename, path: pathname,  ont: 'text-files' })
        });
    })
    .then(response => response ? response.json() : null)
    .then(data => {
        if (data) {
            if (data.error) {
                alert(`Error parsing file: ${data.error}`);
            } else {
                alert(data.message);
            }
            getNodeTypesColour();
            getNodeTypesFormat();
        }
    })
    .catch(error => {
        console.error('Error:', error);
        alert(`An error occurred: ${error.message}`);
    });
});


// Delete a file from the server
deleteBtn.addEventListener('click', () => {
    const filename = grammarNameHolder.value;

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
            loadFileList(); // Refresh the file list
        })
        .catch(error => console.error('Error deleting file:', error));
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
            loadFileList(); // Refresh the file list
        })
        .catch(error => console.error('Error creating file:', error));
});

// Load the file list on page load
document.addEventListener('DOMContentLoaded', () => {
    loadFileList();
    getNodeTypesColour();
    getNodeTypesFormat();
});



// ------------
// Color Management
// ------------

const colorOptionsContainer = document.getElementById('colorOptionsContainer');
const toggleColorsBtn = document.getElementById('toggleColorsBtn');
const saveColorsBtn = document.getElementById('saveColorsBtn');
let keysArrayColour = [];

function getNodeTypesColour() {
    fetch('/get-node-types-colour')
        .then(response => response.json())
        .then(data => {
            keysArrayColour = data; // Dynamically assign the keysArray
            createColorOptions(); // Call the function to populate color options
        })
        .catch(error => console.error('Error fetching node types:', error));
}

// Create color options for each key
function createColorOptions() {

    colorOptionsContainer.innerHTML = ''; // Clear existing options
    keysArrayColour.forEach(([key, color]) => {
        const entryDiv = document.createElement('div');
        entryDiv.classList.add('color-entry');

        const keyLabel = document.createElement('span'); // Key label
        keyLabel.textContent = key;
        keyLabel.classList.add('key-label');

        const colorInput = document.createElement('input'); // Color picker
        colorInput.type = 'color';
        colorInput.name = `${key}Color`;
        colorInput.value = color;
        colorInput.classList.add('color-picker');

        entryDiv.appendChild(keyLabel);
        entryDiv.appendChild(colorInput);
        colorOptionsContainer.appendChild(entryDiv);
    });
}

// Toggle color options visibility
toggleColorsBtn.addEventListener('click', () => {
    const isHidden = colorOptionsContainer.style.display === 'none';
    colorOptionsContainer.style.display = isHidden ? 'block' : 'none';
    saveColorsBtn.style.display = isHidden ? 'block' : 'none';
    toggleColorsBtn.textContent = isHidden ? 'Hide Colours' : 'Show Colours';
});

// Save the selected colors
saveColorsBtn.addEventListener('click', () => {

    const colorData = {};
    keysArrayColour.forEach(([key, color]) => {
        const colorInput = document.querySelector(`input[name="${key}Color"]`);
        colorData[key] = colorInput.value;
    });

    fetch('/submit-colour-options', {
        method: 'POST',
        headers: { 'Content-Type': 'application/json' },
        body: JSON.stringify({ colors: colorData })
    })
        .then(response => response.text())
        .then(data => {
            console.log('Server response:', data);
            alert('Colors saved successfully!');
        })
        .catch(error => console.error('Error saving colors:', error));
});


// ------------
// Format Management
// ------------

const formatOptionsContainer = document.getElementById('formatOptionsContainer');
const toggleFormatsBtn = document.getElementById('toggleFormatsBtn');
const saveFormatsBtn = document.getElementById('saveFormatsBtn');
let keysArrayFormat = [];

function getNodeTypesFormat() {
    fetch('/get-node-types-format')
        .then(response => response.json())
        .then(data => {
            keysArrayFormat = data; // Dynamically assign the keysArray
            createFormatOptions(); // Populate formatting options
        })
        .catch(error => console.error('Error fetching node types:', error));
}

// Create format options for each key
function createFormatOptions() {
    formatOptionsContainer.innerHTML = ''; // Clear existing options
    keysArrayFormat.forEach(([key, prefix, suffix, inline]) => {
        const entryDiv = document.createElement('div');
        entryDiv.classList.add('format-entry');

        const keyLabel = document.createElement('span'); // Key label
        keyLabel.textContent = key;
        keyLabel.classList.add('key-label');

        // Prefix input
        const prefixInput = document.createElement('input');
        prefixInput.type = 'text';
        prefixInput.name = `${key}Prefix`;
        prefixInput.placeholder = 'Prefix';
        prefixInput.value = prefix;
        prefixInput.classList.add('format-input');

        // Suffix input
        const suffixInput = document.createElement('input');
        suffixInput.type = 'text';
        suffixInput.name = `${key}Suffix`;
        suffixInput.placeholder = 'Suffix';
        suffixInput.value = suffix;
        suffixInput.classList.add('format-input');

        // NodeType input
        const inlineInput = document.createElement('input');
        inlineInput.type = 'text';
        inlineInput.name = `${key}Inline`;
        inlineInput.placeholder = 'Inline';
        inlineInput.value = inline;
        inlineInput.classList.add('format-input');

        entryDiv.appendChild(keyLabel);
        entryDiv.appendChild(prefixInput);
        entryDiv.appendChild(suffixInput);
        entryDiv.appendChild(inlineInput);

        formatOptionsContainer.appendChild(entryDiv);
    });
}

// Toggle format options visibility
toggleFormatsBtn.addEventListener('click', () => {
    const isHidden = formatOptionsContainer.style.display === 'none';
    formatOptionsContainer.style.display = isHidden ? 'block' : 'none';
    saveFormatsBtn.style.display = isHidden ? 'block' : 'none';
    toggleFormatsBtn.textContent = isHidden ? 'Hide Formats' : 'Show Formats';
});

// Save the selected formatting options
saveFormatsBtn.addEventListener('click', () => {
    const formatData = {};
    keysArrayFormat.forEach(([key, prefix, suffix, inline]) => {
        const prefixInput = document.querySelector(`input[name="${key}Prefix"]`);
        const suffixInput = document.querySelector(`input[name="${key}Suffix"]`);
        const inlineInput = document.querySelector(`input[name="${key}Inline"]`);

        formatData[key] = {
            prefix: prefixInput.value,
            suffix: suffixInput.value,
            inline: inlineInput.value,
        };
    });

    fetch('/submit-format-options', {
        method: 'POST',
        headers: { 'Content-Type': 'application/json' },
        body: JSON.stringify({ formats: formatData })
    })
        .then(response => response.text())
        .then(data => {
            console.log('Server response:', data);
            alert('Formats saved successfully!');
        })
        .catch(error => console.error('Error saving formats:', error));
});



// Upload the time file
function uploadFile() {
    const fileInput = document.getElementById('fileInput');
    const file = fileInput.files[0];

    if (!file) {
        document.getElementById('status').innerText = "No file selected!";
        return;
    }

    let formData = new FormData();
    formData.append('file', file);

    fetch('/submit-file-upload', {
        method: 'POST',
        body: formData
    })
    .then(response => response.json())
    .then(data => {
        document.getElementById('status').innerText = data.message || data.error;
    })
    .catch(error => {
        console.error("Error:", error);
        document.getElementById('status').innerText = "Upload failed!";
    });
}

function validateFile() {
    fetch('/submit-file-validation', {
        method: 'POST'
    })
    .then(response => response.json())
    .then(data => {
        document.getElementById('status').innerText = data.message || data.error;
    })
    .catch(error => {
        console.error("Error:", error);
        document.getElementById('status').innerText = "Upload failed!";
    });
}