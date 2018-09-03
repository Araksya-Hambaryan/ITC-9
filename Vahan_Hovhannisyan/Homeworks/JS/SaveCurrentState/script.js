var value;
function add() {
    var num = document.getElementById("number");
    value = document.getElementById("number").textContent;
    num.innerText = ++value;
}

window.onbeforeunload = function () {
    this.console.log("refreshed");
    saveValue();

};

document.addEventListener('DOMContentLoaded', function () {
    console.log("saved value:" + getSavedValue());
    setValue();
}, false);

function setValue() {
    if (getSavedValue() != null) {
        var num = document.getElementById("number");
        num.innerText = getSavedValue();
    }
}

function saveValue() {
    sessionStorage.setItem("val", value.toString());
}

function getSavedValue() {
    var savedValue = sessionStorage.getItem("val");
    return savedValue;
}