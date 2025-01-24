
// ------------
// Visualisation Management
// ------------


function loadContent(type, clickedLink) {
    fetch(`/${type}_draw`)
        .then(response => response.json())  // Get content as JSON
        .then(data => {
            // Update the content dynamically
            var element = document.getElementById('content-container')
            element.innerHTML = data.content;

            updateActiveLink(clickedLink);
        });
}

function updateActiveLink(clickedElement) {
    // Get all the links
    const links = document.querySelectorAll('.subheader a');

    // Remove active class from all links
    links.forEach(link => {
        link.classList.remove('active');
    });

    // Add active class to the clicked link
    clickedElement.classList.add('active');
}