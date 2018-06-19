function playVideo() {
    var url = document.getElementById("inp").value;
    console.log(url);
    var source = document.getElementById("video");
    source.setAttribute("src", url);
}
