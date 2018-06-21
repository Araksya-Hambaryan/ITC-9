function delElement() {
    var num = document.getElementById("number").value;
    document.getElementById(num).remove();
    document.getElementById(num+"o").remove();
}
