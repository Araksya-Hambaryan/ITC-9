

var ticket1 = [ ["","","","","","","","",""],
                ["","","","","","","","",""],
                ["","","","","","","","",""] ]



var ticket2 = [ ["","","","","","","","",""],
                ["","","","","","","","",""],
                ["","","","","","","","",""] ]

var ticket3 = [ ["","","","","","","","",""],
                ["","","","","","","","",""],
                ["","","","","","","","",""] ]


var numbers = ["", "", "", "", ""];


function creatnumbers() {
    var table = document.getElementById("numbers");
    while (table.firstChild) {
        table.removeChild(table.firstChild);
    }

    var table = document.getElementById("numbers");
    var tableRow = document.createElement("tr");
    for(let j = 0; j < numbers.length ; j++) {
        numbers[j] = Math.floor(Math.random() * 20) + 1;
        var txt = document.createTextNode(numbers[j]);
        var tableData = document.createElement("td");
        tableData.appendChild(txt);
        tableRow.appendChild(tableData);
        table.appendChild(tableRow);
    }

    // for(let i = 0; i < ticket1.length; i++) {
    //     for(let j = 0; j < ticket1[i].length ; j++) {
    //         if(ticket1[i][j] === numbers[i]) {
    //
    //             console.log(ticket1);
    //
    //             var x = document.getElementById("ticket1").getElementsByTagName("td");
    //             // x[0].innerHTML = "i want to change my cell color";
    //             x[j].style.backgroundColor = "yellow";
    //             x[9 + j].style.backgroundColor = "yellow";
    //             x[18 + j].style.backgroundColor = "yellow";
    //
    //         }
    //     }
    // }
    return numbers;

}

function steep() {
    var num = creatnumbers();

    console.log(num);
    console.log(ticket1[0]);
    console.log(ticket1[1]);

    for(let i = 0; i < 3; ++i ) {
        for(let j = 0; j < 9; ++j) {
            for(let k = 0; k < 5; k++) {
                if(ticket1[i][j] == num[k]) {
                    console.log("&&&&&&&&&&&&&&&&&&&&&&&&7");

                    var x = document.getElementById("ticket1").getElementsByTagName("td");
                    x[j].style.backgroundColor = "yellow";
                }
            }
        }
    }
}





function foo() {
    creatT1();
    creatT2();
    creatT3()
}

function creatT1() {
    var table = document.getElementById("ticket1");
    for(let i = 0; i < ticket1.length; i++) {
        var tableRow = document.createElement("tr");
        for(let j = 0; j < ticket1[i].length ; j++) {





            // var rundom = new Set();
            // for (let i = 0; i < 6; i++) {
            //     rundom[i] = Math.floor(Math.random() * 8) + 1;
            // }
            // //console.log(rundom);
            //
            // ticket1[i][rundom[j]] = Math.floor(Math.random() * 20) + 1;

            ticket1[i][j] = Math.floor(Math.random() * 20) + 1;


            var txt = document.createTextNode(ticket1[i][j]);
            var tableData = document.createElement("td");
            tableData.appendChild(txt);
            tableRow.appendChild(tableData);
        }
        table.appendChild(tableRow);
    }
}







function creatT2() {
    var table = document.getElementById("ticket2");
    for(let i = 0; i < ticket2.length; i++) {
        var tableRow = document.createElement("tr");
        for(let j = 0; j < ticket2[i].length ; j++) {

            var rundom = new Set();
            for (let i = 0; i < 6; i++) {
                rundom[i] = Math.floor(Math.random() * 8) + 1;
            }
            //console.log(rundom);

            ticket2[i][rundom[j]] = Math.floor(Math.random() * 20) + 1;

            var txt = document.createTextNode(ticket2[i][j]);
            var tableData = document.createElement("td");
            tableData.appendChild(txt);
            tableRow.appendChild(tableData);
        }
        table.appendChild(tableRow);
    }
}

function creatT3() {
    var table = document.getElementById("ticket3");
    for(let i = 0; i < ticket3.length; i++) {
        var tableRow = document.createElement("tr");
        for(let j = 0; j < ticket3[i].length ; j++) {

            var rundom = new Set();
            for (let i = 0; i < 6; i++) {
                rundom[i] = Math.floor(Math.random() * 8) + 1;
            }
            //console.log(rundom);

            ticket3[i][rundom[j]] = Math.floor(Math.random() * 20) + 1;


            var txt = document.createTextNode(ticket3[i][j]);
            var tableData = document.createElement("td");
            tableData.appendChild(txt);
            tableRow.appendChild(tableData);
        }
        table.appendChild(tableRow);
    }
}


function changeColor() {
    var x = document.getElementById("ticket1").getElementsByTagName("td");
    // x[0].innerHTML = "i want to change my cell color";
    x[19].style.backgroundColor = "yellow";
}


//console.log(Math.floor(Math.random() * 20));
