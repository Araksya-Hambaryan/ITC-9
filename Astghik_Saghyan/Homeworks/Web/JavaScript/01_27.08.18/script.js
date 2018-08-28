var section = document.getElementById("showContent");

function openDropdown() {
    document.getElementById("myDropdown").classList.toggle("show");
}

// Close the dropdown if the user clicks outside of it
window.onclick = function(event) {
  if (!event.target.matches('.dropbtn')) {
    var dropdowns = document.getElementsByClassName("dropdown-content");
    var i;
    for (i = 0; i < dropdowns.length; i++) {
      var openDropdown = dropdowns[i];
      if (openDropdown.classList.contains('show')) {
        openDropdown.classList.remove('show');
      }
    }
  }
}

function drowChess() {
    var index = 0;
    while (section.firstChild) {
        section.removeChild(section.firstChild);
    }
    var table = document.createElement("table");
    for(let i = 0; i < 8; i++) {
        var tableRow = document.createElement("tr");
        for(let j = 0; j < 8; j++) {
            var tableData = document.createElement("td");
            if(j == index || j == 8-1-index) {
                tableData.style.background = "magenta";
            } else {
                tableData.style.background = "#3498DB";
            }
            tableRow.appendChild(tableData);
        }
        table.appendChild(tableRow);
        ++index;
    }
    section.appendChild(table);
}

function changeContent(name) {
    while (section.firstChild) {
        section.removeChild(section.firstChild);
    }
    let paragraph = document.createElement("p");
    let txtNode;
    switch(name) {
        case 'Yura':
            txtNode = document.createTextNode(txtYura);
            break;
        case 'Geghaznik':
            txtNode = document.createTextNode(txtGeghaznik);
            break;
        case 'Tatul':
            txtNode = document.createTextNode(txtTatul);
            break;
        case 'Movses':
            txtNode = document.createTextNode(txtMovses);
            break;
        case 'Vitya':
            txtNode = document.createTextNode(txtVitya);
            break;
        case 'Jivan':
            txtNode = document.createTextNode(txtJivan);
            break;
        case 'Monte':
            txtNode = document.createTextNode(txtMonte);
            break;    
    }
    paragraph.appendChild(txtNode);
    section.appendChild(paragraph);
}

drowChess();
