var card1 = [];
var card2 = [];
var card3 = [];

var ticket1 = [];
var ticket2 = [];
var ticket3 = [];

var numbers = [];

function getnumbers() {

    numbers = getnumbersArray();

    var table = document.getElementById("numbers");
    while (table.firstChild) {
        table.removeChild(table.firstChild);
    }
    var table = document.getElementById("numbers");
    var tableRow = document.createElement("tr");
    for(let j = 0; j < numbers.length ; j++) {
        var txt = document.createTextNode(numbers[j]);
        var tableData = document.createElement("td");
        tableData.appendChild(txt);
        tableData.style.color = "#c97819";
        tableRow.appendChild(tableData);
        table.appendChild(tableRow);
    }
    return numbers;
}

function changeColor(t1,id) {
    for(let i = 0; i < t1[0].length; ++i) {
        if(t1[0][i] === numbers[num]) {
            var x = document.getElementById(id).getElementsByTagName("td");
           
        }
    }
    for(let i = 0; i < t1[0].length; ++i) {
        if(t1[1][i] === numbers[num]) {
            var x = document.getElementById(id).getElementsByTagName("td");
          
        }
    }
    for(let i = 0; i < t1[0].length; ++i) {
        if(t1[2][i] === numbers[num]) {
            var x = document.getElementById(id).getElementsByTagName("td");
         
        }
    }
}



num = 0;
counterT1 = 0;
counterT2 = 0;
counterT3 = 0;
function openNumbers() {
    openOneNumber(num);
    changeColor(t1,"ticket1");
    changeColor(t2,"ticket2");
    changeColor(t3,"ticket3");
    if (num !== 4) {
        num++;
    } else {
        num = 0;
    }
}
function openOneNumber(num) {
    var x = document.getElementById("numbers").getElementsByTagName("td");
    x[num].style.color = "black";
}


function getnumbersArray() {
    var nums = [];
    for(let k = 1; k < 91; ++k) {
        nums.push(k);
    }
    ranNums = [],
    i = nums.length,
    j = 0;
    while (i--) {
        j = Math.floor(Math.random() * (i+1));
        ranNums.push(nums[j]);
        nums.splice(j,1);
    }
    var elem = [];
    for(let i = 0; i < 5; ++i) {
        elem[i] = ranNums[i];
    }
    elem.sort();
    return elem;
}



function ticketFunc() {
    t1 = creatTicket(ticket1,"ticket1");
    t2 = creatTicket(ticket2,"ticket2");
    t3 = creatTicket(ticket3,"ticket3");
}


function creatTicket(ticket1,id) {
    ticket1 = [ [,,,,,,,,,],[,,,,,,,,,],[,,,,,,,,,] ];
    var table = document.getElementById(id);
    while (table.firstChild) {
        table.removeChild(table.firstChild);
    }

    
    var tableRow = document.createElement("tr");
    var positions = getPositions();
    for(let i = 0; i < 5; ++i) {
        ticket1[0][positions[i]] = (Math.floor(Math.random() * 9) + 1) + (positions[i]*10);
    }
    for(let j = 0; j < ticket1[0].length ; j++) {
        if(ticket1[0][j] !== undefined) {
            var txt = document.createTextNode(ticket1[0][j]);
        } else {
            var txt = document.createTextNode(" ");
        }
        var tableData = document.createElement("td");
        tableData.appendChild(txt);
        tableRow.appendChild(tableData);
    }
    table.appendChild(tableRow);

    
    var tableRow = document.createElement("tr");
    var positions = getPositions();
    for(let i = 0; i < 5; ++i) {
         while (true) {      
            ticket1[1][positions[i]] = (Math.floor(Math.random() * 9) + 1) + (positions[i] * 10);
            if (ticket1[0][positions[i]] !== ticket1[1][positions[i]] && ticket1[1][positions[i]] !== undefined) {
                break;
            }
        }
    }
    for(let j = 0; j < ticket1[1].length ; j++) {
        if(ticket1[1][j] !== undefined) {
            var txt = document.createTextNode(ticket1[1][j]);
        } else {
            var txt = document.createTextNode(" ");
        }
        var tableData = document.createElement("td");
        tableData.appendChild(txt);
        tableRow.appendChild(tableData);
    }
    table.appendChild(tableRow);

    
    var empty = [];
    for(let i = 0; i < 9; ++i) {
        if ((ticket1[0][i] === ticket1[1][i] && ticket1[1][i] === undefined))  {
            empty.push(i);
        }
    }
    for(let i = 0; i < empty.length; ++i) {
        ticket1[2][empty[i]] = (Math.floor(Math.random() * 9) + 1) + (empty[i]*10);
    }
    var result = arrDiff(empty);
    var last = getPositionsLast(result,empty.length);
    var tableRow = document.createElement("tr");
    for(let i = 0; i < last.length - 1; ++i) {
        while (true) {        // for(let k = 0; k < 100; k++){
            ticket1[2][last[i]] = (Math.floor(Math.random() * 9) + 1) + (last[i] * 10);
            if ((ticket1[2][last[i]] !== ticket1[1][last[i]])  && (ticket1[2][last[i]] !== ticket1[0][last[i]])
                && ticket1[2][last[i]] !== undefined) {
                break;
            }
        }
    }
    for(let j = 0; j < ticket1[2].length ; j++) {
        if(ticket1[2][j] !== undefined) {
            var txt = document.createTextNode(ticket1[2][j]);
        } else {
            var txt = document.createTextNode(" ");
        }
        var tableData = document.createElement("td");
        tableData.appendChild(txt);
        tableRow.appendChild(tableData);
    }
    table.appendChild(tableRow);


    return ticket1;
}







function getPositions() {
    var nums = [0,1,2,3,4,5,6,7,8],
        ranNums = [],
        i = nums.length,
        j = 0;
    while (i--) {
        j = Math.floor(Math.random() * (i+1));
        ranNums.push(nums[j]);
        nums.splice(j,1);
    }
    var elem = [];
    for(let i = 0; i < 5; ++i) {
        elem[i] = ranNums[i];
    }
    elem.sort();
    return elem;
}


function getPositionsLast(nums,count) {
        ranNums = [],
        i = nums.length,
        j = 0;
    while (i--) {
        j = Math.floor(Math.random() * (i+1));
        ranNums.push(nums[j]);
        nums.splice(j,1);
    }
    var elem = [];
    for(let i = 0; i < 6 - count; ++i) {
        elem[i] = ranNums[i];
    }
    elem.sort();
    return elem;
}


function arrDiff (a2) {
    var a1 = [1,2,3,4,5,6,7,8,9];

    var a = [], diff = [];
    for (var i = 0; i < a1.length; i++) {
        a[a1[i]] = true;
    }
    for (var i = 0; i < a2.length; i++) {
        if (a[a2[i]]) {
            delete a[a2[i]];
        } else {
            a[a2[i]] = true;
        }
    }
    for (var k in a) {
        diff.push(k);
    }
    return diff;
}



