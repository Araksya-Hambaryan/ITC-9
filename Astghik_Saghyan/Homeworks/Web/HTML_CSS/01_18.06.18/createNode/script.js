function addElement() {
    var elem = document.getElementById("tag").value;
    var node = document.createElement(elem);
    var text = document.getElementById("text").value;
    node.innerHTML = text;
    document.getElementById("newElem").appendChild(node);    
}
