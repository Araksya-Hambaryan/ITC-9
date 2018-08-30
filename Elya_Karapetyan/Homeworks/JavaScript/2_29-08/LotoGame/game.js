const row = 3;
const column = 9;
let matrix;

function findCardTable(id) {
    return document.getElementById(id);    
}

function generateRandomNumber(max, min) {
    const number = Math.floor((Math.random() * (max - min) + min));
    return number;
 }

function createLotoCard(id) {
    const lotoCard = findCardTable(id);
    lotoCard.setAttribute("border", "1");
    for (let i = 0; i < row; i++) {
        let tr = document.createElement("tr");
        for (let j = 0; j < column; j++) {
            let td = document.createElement("td");
            td.height = 40;
            td.width = 60;
            tr.appendChild(td); 
        }              
        lotoCard.appendChild(tr); 
    }
}

function generateRandomMatrix() {
    matrix = new Array(row);
    for (let i = 0; i < row; ++i) {
        let min = 0;
        let max = 10;

        matrix[i] = new Array(column);
        for (let j = 0; j < column; ++j) {
            if (j === 0) { 
                matrix[i][j] = generateRandomNumber(1, 9);
            } 
            if (j === max/10) {
                min += 10
                max += 10;
                   matrix[i][j] = generateRandomNumber(min, max);
            } 
        }
    }
}

function setNumbersInLotoCard(id) {
    createLotoCard(id);
    const oneCard = findCardTable(id);
    generateRandomMatrix();
    
    let numberCount = 15;
    let rowMaxCount = 2;
    let columnMaxCount = 5;
    let rowIndexArray = new Array(row);
    let columnIndexArray = new Array(column);
    let i = 0;
    let j = 0;
    while (numberCount > 0) {
        rowIndexArray[i] = generateRandomNumber(0, 3);
        columnIndexArray[j] = generateRandomNumber(0, 9);
        oneCard.rows[row].cells[column].innerText = matrix[row][column];
        --numberCount;
        ++i;
        ++j;
    }
}
 setNumbersInLotoCard("firstLotoCard");

 setNumbersInLotoCard("secondLotoCard");

 setNumbersInLotoCard("thirdLotoCard");