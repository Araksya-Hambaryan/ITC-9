

var imageActinvodes = document.getElementById("btnActivNodes");
var imageDownload = document.getElementById("btnDownloadUpload");



var arrUsers = [ {name:"Karen" , ip:"192.168.1.2"} ,
                 {name:"Astghik" , ip:"192.168.1.3"} ,
                 {name:"Gevorg" , ip:"192.168.1.5"},
                 {name:"Anush" , ip:"192.168.1.7"},
                 {name:"Gevorg" , ip:"192.168.1.8"} ];

var arrStatus = [ {isdown:"0", fileName:"music.mp3", status:"50", speed:"4mb/s"},
                  {isdown:"1", fileName:"text.txt", status:"10", speed:"2mb/s"},
                  {isdown:"1", fileName:"video.mp4", status:"25", speed:"1mb/s"},
                  {isdown:"0", fileName:"image.jpg", status:"50", speed:"2mb/s"},
                  {isdown:"0", fileName:"book.pdf", status:"80", speed:"2mb/s"} ];


changeActivNodes();

function changeActivNodes() {
    var table = document.getElementById("contentTable");
    while (table.firstChild) {
        table.removeChild(table.firstChild);
    }
    var list = [];
    imageActinvodes.src = "./images/activNodes1.png";
    imageDownload.src = "./images/download.png";
    var table = document.getElementById("contentTable");
    for(var i = 0; i < arrUsers.length; i++) {
        list.push(" " + arrUsers[i].name + " " + arrUsers[i].ip);
        var tableRow = document.createElement("tr");
        var txt = document.createTextNode(list[i]);
        var img = document.createElement("img");
        img.src = "./images/icon.png";
        var tableData = document.createElement("td");
        tableData.appendChild(img);
        tableData.appendChild(txt);
        tableRow.appendChild(tableData);
        table.appendChild(tableRow);
    }
    console.log(list);
}

function changeDownload() {
    var table = document.getElementById("contentTable");
    while (table.firstChild) {
        table.removeChild(table.firstChild);
    }
    var list = [];
    var list1 = [];
    imageActinvodes.src = "./images/activNodes.png";
    imageDownload.src = "./images/download1.png";
    var table = document.getElementById("contentTable");

    for(var i = 0; i < arrStatus.length; i++) {
        list.push(" " + arrStatus[i].fileName + " ");
        list1.push(" " + arrStatus[i].speed)
        var img = document.createElement("img");
        if(arrStatus[i].isdown === "1") {
            img.src = "./images/down.png";
        } else {
            img.src = "./images/up.png";
        }
        var progres = document.createElement("PROGRESS");
        progres.setAttribute("value", arrStatus[i].status);
        progres.setAttribute("max", "100");
        var tableRow = document.createElement("tr");
        var txt = document.createTextNode(list[i]);
        var txt1 = document.createTextNode(list1[i]);
        var tableData = document.createElement("td");
        tableData.appendChild(img);
        tableData.appendChild(txt);
        tableData.appendChild(progres);
        tableData.appendChild(txt1);
        tableRow.appendChild(tableData);
        table.appendChild(tableRow);
    }
}


