function funcShow() {
    selected = document.forms.myForm.number.value;
    var disp = document.getElementById(selected).getAttribute("style");
    if(disp == "visibility:visible") {
        alert("The block is already shown!");
        return;
    }
    document.getElementById(selected).setAttribute("style","visibility:visible");
}

function funcHide() {
    selected = document.forms.myForm.number.value;
    var disp = document.getElementById(selected).getAttribute("style");
    if(disp == "visibility:hidden") {
        alert("The block is already hidden!");
        return;
    }
    document.getElementById(selected).setAttribute("style","visibility:hidden");
}
