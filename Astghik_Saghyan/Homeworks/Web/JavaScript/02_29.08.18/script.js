// const CARD_ROW = 3;
let playersCards = [];


function divideCards(sectionIds) {
    for(let i = 0; i < sectionIds.length; ++i) {
        var section = document.getElementById(sectionIds[i]);
        while (section.firstChild) {
            section.removeChild(section.firstChild);
        }
        let table = document.createElement("table");
        let array = givNumbersToCard();
        while(!checkEmptyColumns(array)) {
            array = givNumbersToCard();
        }
        playersCards.push(array);
        console.log(playersCards);
        for(let i = 0; i < array.length; i++) {
            let tableRow = document.createElement("tr");
            for(let j = 0; j < array[i].length; j++) {
                let tableData = document.createElement("td");
                if(array[i][j]) {
                    let txt = document.createTextNode(array[i][j]);
                    tableData.appendChild(txt);
                }
                tableRow.appendChild(tableData);
            }
            table.appendChild(tableRow);
        }
        section.appendChild(table);
    }    
}

function givNumbersToCard() {
    let array = new Array(3);
    for (let i = 0; i < array.length; i++) {
        array[i] = new Array(9);
    }
    let row;
    let column;
    let value;
    let quantity = 1;
    while(quantity < 16) {
        value = Math.round(Math.random()*89)+1;
        column = Math.floor(value/10);
        row = Math.round(Math.random()*2);

        //case, that value is 90;
        if(column == 9) {
            column = 8;
        }
        let check  = countColumnStownsOfColumn(row, column, array, value);
        if(!array[row][column] && check) {
            ++quantity;
            array[row][column] = value;    
        }
    }   
    return array;
}

function countColumnStownsOfColumn(row, column, array, value) {
    let columnElements = [];
    let countColumn = 0;
    for(let i = 0; i < array.length; ++i) {
        if(array[i][column]) {
            ++countColumn;
            columnElements.push(array[i][column]);
        }   
    }
    let countRow = 0;
    for(let i = 0; i < array[row].length; ++i) {
        if(array[row][i]) {
            ++countRow;
        }
    }
    let setRow = new Set(array[row]); 
    columnElements.push(value);
    let setColumn = new Set(columnElements);

    if (countColumn < 2 && columnElements.length == setColumn.size && countRow < 5) {
        return true;
    } else {
        return false; 
    }
}

function checkEmptyColumns(array) {
    for(let col = 0; col < array[0].length; ++col) {
        let countOfColumnElements = 0;
        for(let row = 0; row < array.length; ++row) {
            if(array[row][col]) {
                ++countOfColumnElements;
            }   
        }
        if(!countOfColumnElements) {
            return false;
        }   
    } 
    return true;
}


let stownsArray = [];

function removeStowns() {
    let stown;
    let quantity = 1;
    while(quantity < 6) {
        stown = Math.round(Math.random()*90);
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
