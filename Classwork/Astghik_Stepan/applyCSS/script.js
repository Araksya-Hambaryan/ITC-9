function applyCSS() {
    var css = document.getElementById("text").value;
    console.log(css);
    var head = document.getElementsByTagName("head")[0];  
    var styleNode = document.createElement("style");
    styleNode.innerHTML = css;
    head.appendChild(styleNode);

}
