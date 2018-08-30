//playerCards is from script.js

let stonesArray = [];
let newStonesArray;

function randomStones(quantity) {
    let stone;
    newStonesArray = [];
    while(quantity) {
        stone = Math.round(Math.random()*89)+1;
        if(stonesArray.indexOf(stone) === -1) {
            console.log(stonesArray.indexOf(stone));
            --quantity;
            newStonesArray.push(stone);   
        }
    }
}

function drowStones(sectionId, array) {
    var section = document.getElementById(sectionId);
    while (section.firstChild) {
        section.removeChild(section.firstChild);
    }
    for(let i = 0; i < array.length; i++) {
        var div = document.createElement("div");
        div.setAttribute("class","stown");
        var txt = document.createTextNode(array[i]);
        div.appendChild(txt);
        section.appendChild(div);
    }      
}

function compare(a, b) {
    return a - b;
}

function removeStones() {
    randomStones(5);
    stonesArray.push(...newStonesArray);
    stonesArray.sort(compare);
    if(stonesArray.length > 90) {
        alert("Game Over");
        return;
    }

    drowStones("newStones", newStonesArray);
    drowStones("removedStones", stonesArray);
    console.log(newStonesArray );
    console.log(stonesArray );
}



