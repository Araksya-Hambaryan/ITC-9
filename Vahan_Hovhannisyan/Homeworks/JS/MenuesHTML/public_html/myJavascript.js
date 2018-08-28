/* When the user clicks on the button, 
 toggle between hiding and showing the dropdown content */
function myFunction() {
    document.getElementById("myDropdown").classList.toggle("show");
}

// Close the dropdown menu if the user clicks outside of it
window.onclick = function (event) {
    if (!event.target.matches('.dropbtn')) {

        var dropdowns = document.getElementsByClassName("dropdown-content");
        var i;
        for (i = 0; i < dropdowns.length; i++) {
            var openDropdown = dropdowns[i];
            if (openDropdown.classList.contains('show')) {
                openDropdown.classList.remove('show');
            }
        }
    }
};

function showBaelish() {
    document.getElementById("Info").style.backgroundColor = 'white';
    document.getElementById("Info").innerHTML = "Lord Petyr Baelish, popularly called Littlefinger, was the \n\
    Master of Coin on the Small Council under King Robert Baratheon and\n\
    King Joffrey Baratheon. He was a skilled manipulator and used his ownership of brothels in \n\
    King's Landing to both accrue intelligence on political rivals and acquire vast wealth. Baelish's \n\
    spy network is eclipsed only by that of his arch-rival Varys.";
}

function showTywin() {
    document.getElementById("Info").style.backgroundColor = 'white';
    document.getElementById("Info").innerHTML = "Tywin is the Lord of House Lannister, Savior of the City, the Lord Paramount of the Westerlands, \n\
    the Lord of Casterly Rock, the Lord of Harrenhal, Shield of Lannisport, Warden of the West, \n\
    Protector of the Realm, and Hand of the King. Despite the several recent Kings in King's Landing, \n\
    Tywin is the real power in King's Landing, and he is the true ruler of the city. Tywin is the \n\
    richest and most powerful man in Westeros, and he is the most powerful man in the world. ";
}

function showGregor() {
    document.getElementById("Info").style.backgroundColor = 'white';
    document.getElementById("Info").innerHTML = "Ser Gregor Clegane is the head of House Clegane, a knightly house \n\
    from the Westerlands, and the elder brother of Sandor Clegane. When Sandor and Gregor were children, \n\
    Gregor held his brother's face in a fire for playing with one of his toys without permission, horrifically \n\
    scarring him.[1] Gregor is a landed knight rather than a full-fledged lord. Gregor is monstrously huge, said \n\
    to be the largest, strongest and most feared man in Westeros. He is feared throughout Westeros with a reputation \n\
    for committing unspeakable acts of violence, such as brutally torturing his victims to death, and he has a \n\
    notorious reputation for ferocity, brutality and anger. He is a fiercely loyal retainer and servant of \n\
    House Lannister, particularly to Lord Tywin.";
}

function chessBoard(size) {
    let html = `<div class="chessboard">\n`;
    for (let row = 0; row < size; row++) {
        html += `  <div>\n`;
        let color = (row % 2 === 0) ? "black" : "white";
        for (let col = 0; col < size; col++) {
            html += `    <span class="${color}"></span>\n`;
            color = (color === "white") ? "black" : "white";
        }
        html += `  </div>\n`;
    }
    document.getElementById("Info").innerHTML = html;
    return html + `</div>`;
}

