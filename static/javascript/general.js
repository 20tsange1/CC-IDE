function hideExplanation() {
    var button = document.getElementById("explanation-button");
    var x = document.getElementById("explanation");
    if (x.style.display === "none") {
        button.textContent = "-";
        x.style.display = "block";
    } else {
        button.textContent = "+";
        x.style.display = "none";
    }
  }