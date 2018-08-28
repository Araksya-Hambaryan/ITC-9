function toggleText(id) {
    switch (id) {
        case 'hero1': 
            document.getElementById('text').innerHTML = 'Viktor Amazaspovich Ambartsumian, (born Sept. 5 [Sept. 18, New Style], 1908, Tbilisi, Georgia, Russian Empire. Died Aug. 12, 1996, Byurakan Observatory, near Yerevan, Arm.), Soviet astronomer and astrophysicist best known for his theories concerning the origin and evolution of stars and stellar systems. He was also the founder of the school of theoretical astrophysics in the Soviet Union.';
            break;
        case 'hero2':
            document.getElementById('text').innerHTML = 'Charles Aznavour (born 22 May 1924) is an Armenian-French singer, songwriter and actor. He is one of France\'s most popular and long lasting singers, and also one of the most well-known French singers in other countries. He has appeared in more than 60 movies and written more than 1000 songs (including 150 in English, 100 in Italian, 70 in Spanish, and 50 in German). He has sold over 100 million albums. Aznavour started his final tour in late 2006.Aznavour was born as Shahnour Vaghinag Aznavouryan in Paris, the son of Armenian immigrants Michael Aznavouryan & Knar Baghdasaryan. His parents introduced him to the world of theatre at an early age.';
            break;
        case 'hero3':
            document.getElementById('text').innerHTML = 'Monte Melkonian (born November 25, 1957 – June 12, 1993) was a well-known Armenian military commander in the Nagorno-Karabakh war. He is largely known for major military victories against Azerbaijan from the late autumn of 1992, . Melkonian had no prior service record in any country\'s army before being placed in command of an estimated 4,000 men in the war. He had largely built his military education beginning from the late 1970s and 1980s where he fought against the various splintering factions in the Lebanese Civil War, against Israeli troops in the Israeli invasion of Lebanon and was a member of the Armenian guerrilla organization ASALA.';
            break;
        }
}

var createTable = (function () {
    const section = document.getElementById("tableSpace");
    const table = document.createElement("table");
    for(let i = 0; i < 8; i++) {
        let tableRow = document.createElement("tr");
        for(let j = 0; j < 8; j++) {
            let tableData = document.createElement("td");
            if(j == i || j == 8-1-i) {
                tableData.style.background = "#2E4A62";
            } else {
                tableData.style.background = "#92B6D5";
            }
            tableRow.appendChild(tableData);
        }
        table.appendChild(tableRow);
    }
    section.appendChild(table);
    section.style.display = "none";
}) ();

function showHideTable() {
    let x = document.getElementById("tableSpace");
    if (x.style.display === "none") {
        x.style.display = "block";
    } else {
        x.style.display = "none";
    }
}


