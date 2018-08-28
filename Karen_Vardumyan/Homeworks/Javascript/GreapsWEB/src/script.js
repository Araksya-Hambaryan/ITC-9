

var imageActinvodes = document.getElementById("btnActivNodes");
var imageDownload = document.getElementById("btnDownloadUpload");


var array  = ["Karen168.1.7","Astghik192.168.1.2","Anush192.168.1.9","Gevorg192.16.1.3","Arman192.168.1.6"];


function changeActivNodes() {
    imageActinvodes.src = "./activNodes1.png"
    imageDownload.src = "./download.png"


    var table = document.getElementById("contentTable");





    for(let i = 0; i < array.length; i++) {
        var tableRow = document.createElement("tr");
        var txt = document.createTextNode(array[i]);

        var tableData = document.createElement("td");
        tableData.appendChild(txt);
        tableRow.appendChild(tableData);
        table.appendChild(tableRow);
    }


    // var tableData = document.createElement("td");
    // tableData.appendChild(txt);
    // tableRow.appendChild(tableData);
    // table.appendChild(tableRow);


}

function changeDownload() {
    imageActinvodes.src = "./activNodes.png"
    imageDownload.src = "./download1.png"

}


