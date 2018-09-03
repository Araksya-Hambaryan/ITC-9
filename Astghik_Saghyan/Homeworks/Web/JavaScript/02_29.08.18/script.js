let playersCards = [];

function divideCards(tableIds) {
    for(let i = 0; i < tableIds.length; ++i) {
        let table = document.getElementById(tableIds[i]);
        while (table.firstChild) {
            table.removeChild(section.firstChild);
        }
        let array = givNumbersToCard();
        while(!checkEmptyColumns(array)) {
            array = givNumbersToCard();
        }
        playersCards.push(array);
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
        let check  = countColumnStownsOfColumn(row, column, value, array);
        if(!array[row][column] && check) {
            ++quantity;
            array[row][column] = value;    
        }
    }   
    return array;
}

function countColumnStownsOfColumn(row, column, value, array) {
    let columnElements = [];
    let countColumn = 0;
    let countRow = 0;

    for(let i = 0; i < array.length; ++i) {
        if(array[i][column]) {
            ++countColumn;
            columnElements.push(array[i][column]);
        }   
    }

    for(let i = 0; i < array[row].length; ++i) {
        if(array[row][i]) {
            ++countRow;
        }
    }

    columnElements.push(value);
    let setColumn = new Set(columnElements);

    if (countColumn < 2 && countRow < 5 && columnElements.length == setColumn.size) {
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


