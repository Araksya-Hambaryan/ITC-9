function delElement() {
    var num = document.getElementById("number").value;
    var span = document.getElementById(num).remove();
    document.getElementById(num+"o").remove();
}
