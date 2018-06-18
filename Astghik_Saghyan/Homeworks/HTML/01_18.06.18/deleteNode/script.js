function delElement() {
    var elem = event.target.value;
    var node = document.createElement(elem);
    var text = document.getElementById("text").value;
    node.innerHTML = text;
    document.getElementById("newElem").appendChild(node);    
}
