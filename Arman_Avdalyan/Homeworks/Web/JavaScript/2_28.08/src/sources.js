const arrId = new Array();

function createTable() {
    var table = document.getElementById("table");
    const size = 9
    const divSize = 100 / size;
    const rowId = new Array();
    for (let i = 0; i < size; i++) {
        let tr = document.createElement('tr');
        let rowId = new Array();
        for (let j = 0; j < size; j++) {
            let td = document.createElement('td');
            const id = 'table_row_' + i + '_col_' + j;
            td.id = id;
            td.style.height = divSize + '%';
            td.style.width = divSize + '%';
            if (i == j || i == (size - j - 1)) {
                td.style.backgroundColor = getRandomColor();
            }
            tr.appendChild(td);
            rowId.push(id);
        }
        arrId.push("");
        arrId[i] = rowId;
        table.appendChild(tr);
    }
    swapColors();
}

function getRandomColor() {
    const letters = '0123456789ABCDEF';
    let color = '#';
    for (let k = 0; k < 6; k++) {
        color += letters[Math.floor(Math.random() * 16)];
    }
    return color
}

function swapColors() {
    let size = 9;
    for (let i = 0; i < size; ++i) {
        setTimeout(function () {
            const secondIndex = size - i - 1;
            let firstElem = document.getElementById(arrId[i][i]);
            let secondElem = document.getElementById(arrId[i][secondIndex]);
            const firstColor = getComputedStyle(firstElem).getPropertyValue("background-color");
            const secondColor = getComputedStyle(secondElem).getPropertyValue("background-color");
            firstElem.style.backgroundColor = secondColor;
            secondElem.style.backgroundColor = firstColor;
        }, 1000);
    }

}