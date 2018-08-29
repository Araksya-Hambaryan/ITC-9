function divideCards(sectionIds) {
    for(let i = 0; i < sectionIds.length; ++i) {
        var section = document.getElementById(sectionIds[i]);
        while (section.firstChild) {
            section.removeChild(section.firstChild);
        }
        var table = document.createElement("table");
        for(let i = 0; i < 3; i++) {
            let array = givNumbersToRow();
            var tableRow = document.createElement("tr");
            for(let j = 0; j < 10; j++) {
                var tableData = document.createElement("td");
                if(array[j]) {
                    var txt = document.createTextNode(array[j]);
                    tableData.appendChild(txt);
                }
                tableRow.appendChild(tableData);
            }
            table.appendChild(tableRow);
        }
        section.appendChild(table);
    }    
}

function givNumbersToRow() {
    let array = new Array(9);
    let quantity = 1;
    let index;
    let value;
    while(quantity < 6) {
        value = Math.round(Math.random()*100);
        index = Math.floor(value/10);
        if(array[index] === undefined) {
            ++quantity;
            array[index] = value;    
        }
    }
    return array;
}

let stownsArray = [];

function removeStowns() {
    let stown;
    let quantity = 1;
    while(quantity < 6) {
        stown = Math.round(Math.random()*100);
        if(stownsArray.indexOf(stown) === -1) {
            ++quantity;
            stownsArray.push(stown);    
        }
    }
}

function drowStownsStack() {
    removeStowns();
    var section = document.getElementById("stack");
    while (section.firstChild) {
        section.removeChild(section.firstChild);
    }
    for(let i = 0; i < stownsArray.length; i++) {
        var div = document.createElement("div");
        div.setAttribute("class","stown");
        var txt = document.createTextNode(stownsArray[i]);
        div.appendChild(txt);
        section.appendChild(div);
    }      
}
