function openDropdown() {
    document.getElementById("myDropdown").classList.toggle("show");
}

// Close the dropdown if the user clicks outside of it
window.onclick = function(event) {
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
}

function drowChess() {
    var table = document.getElementById("chessBoard");
    var tableRow = document.createElement("tr");
    var tableData = document.createElement("td");
    var txt = document.createTextNode("some value");
    tableData.appendChild(txt);
    tableRow.appendChild(tableData);

    for (var i = 0; i < 8; ++i) {
        table.appendChild(tableRow);
    }
    
}

var txtYura = "Յուրի Վաղարշակի Պողոսյան[1] (ապրիլի 8, 1961, Kotovo, Վոլգոգրադի մարզ," + 
    "ՌԽՖՍՀ, ԽՍՀՄ - հունիսի 12, 1992, Նախիջևանիկ, Ադրբեջան և Ասկերանի շրջան, Արցախ)," + 
    "հայ ազգային-ազատագրական պայքարի նվիրյալ, Արցախյան ազատամարտի մասնակից, վաշտի, զրահամեքենայի հրամանատար։" + 
    "Հայաստանի ազգային հերոս։ Զոհվել է 1992 թվականի հունիսի 12-ին Արցախի Նախիջևանիկ գյուղի պաշտպանության ժամանակ։";
var txtGeghaznik = "Գեղազնիկ Արմենակի Միքայելյան (նոյեմբերի 16, 1951 - օգոստոսի 29, 1990)," +  
    "Արցախյան ազատամարտի մասնակից, ազգային-ազատագրական պայքարի նվիրյալ, առաջին կամավորական ջոկատների" + 
    "կազմակերպիչներից, հետմահու ՀՀ ազգային հերոս (1996)։";
var txtTatul = "Թաթուլ Ժորժիկի Կրպեյան (ապրիլի 21, 1965, Արեգ, Արագածոտնի մարզ," +
     "Հայաստան - ապրիլի 30, 1991, Գետաշէն), Արցախյան պատերազմի մասնակից, ՀՀ ազգային հերոս։" + 
     "Արցախյան ազատամարտի ժամանակ՝ 1990 թվականի սեպտեմբերից մինչև 1991 թվականի մայիս ամիսը," + 
     "եղել է Գետաշեն-Մարտունաշեն ենթաշրջանի ինքնապաշտպանության ընդհանուր հրամանատարը։";
var txtMovses = "Մովսես Գորգիսյան (դեկտեմբերի 3, 1961, Երևան, ՀԽՍՀ, ԽՍՀՄ[1] - հունվարի 19, 1990, Երասխ)," + 
    "հայ քաղաքական գործիչ, հրապարակախոս, Ղարաբաղյան շարժման առաջնորդներից մեկը։ Հայաստանի ազգային հերոս։";
var txtVitya = "Վիտյա Վորոշի Այվազյան (1955, դեկտեմբերի 29 – 1990, օգոստոսի 29), հայ ազատամարտիկ," + 
    "ազգային-ազատագրական շարժման գործիչ, ազգային հերոս։";
var txtJivan = "Ջիվան Աբրահամյան (հուլիսի 6, 1961, Երևան - հուլիսի 20, 1991, գ. Վերինշեն, " +
    "ԼՂՀ Շահումյանի շրջան), ՀՀ Ազգային Բանակի կազմակերպիչներից, ռազմական գործիչ," + 
    "Հայաստանի ազգային հերոս (1996 թ., հետմահու), արմատներով Զովունի գյուղից է[1]։ Ջիվան Աբրահամյանը եղել է" + 
    "հատուկ գնդի առաջին վաշտի հրամանատար, գործուն մասնակցություն է ունեցել Արարատի, Կապանի, Վարդենիսի, " + 
    "Սիսիանի, Գորիսի, Նոյեմբերյանի, Վայքի, Տավուշի և ԼՂՀ Շահումյանի շրջանի ինքնապաշտպանական և ազատագրական մարտերին։" +
     "Աչքի է ընկել Շահումյանի շրջանի Էրքեջ, Բուզլուխ, Մանաշիդ, Վերինշեն գյուղերի ինքնապաշտպանության ժամանակ։" + 
     "Զոհվել է 1991 թ. հուլիսի 20-ին Շահումյանի շրջանի Վերինշեն ավանի պաշտպանության ժամանակ։" + 
     "Հետմահու պարգևատրվել է ՀՀ «Հայրենիք» շքանշանով։ Թաղված է Եռաբլուրում։";
var txtMonte = "Մոնթե Չարլզի Մելքոնյան, «Ավո» (նոյեմբերի 25, 1957[1], Վիսեյլիա," + 
    "Թուլարե շրջան, Կալիֆոռնիա, Ամերիկայի Միացյալ Նահանգներ[1] - հունիսի 12, 1993[1], Մարզիլի, Արցախ)," + 
    "արցախյան պատերազմի ակտիվ մասնակից, հայազգի հրամանատար, ՀԱՀԳԲ նախկին անդամ, " +
    "Լիբանանի քաղաքացիական պատերազմի և Իրանի շահի դեմ պայքարի ակտիվ մասնակից," +
     "Հայրենանվեր գործունեության համար արժանացել է Հայաստանի և Արցախի հանրապետությունների ազգային հերոսի կոչման։";
var txtNodeMonte = document.createTextNode(txtMonte);

function changeContent(name) {
    let paragraph = document.getElementById("showHeros");
    paragraph.nodeValue = "";
    let textNode;

    switch(name) {
        case 'Yura':
            txtNode = document.createTextNode(txtYura);
            paragraph.appendChild(txtNode);
            break;
        case 'Geghaznik':
        txtNode = document.createTextNode(txtGeghaznik);
            paragraph.appendChild(txtNode);
            break;
        case 'Tatul':
        txtNode = document.createTextNode(txtTatul);
            paragraph.appendChild(txtNode);
            break;
        case 'Movses':
        txtNode = document.createTextNode(txtMovses);
            paragraph.appendChild(txtNode);
            break;
        case 'Vitya':
        txtNode = document.createTextNode(txtVitya);
            paragraph.appendChild(txtNode);
            break;
        case 'Jivan':
        txtNode = document.createTextNode(txtJivan);
            paragraph.appendChild(txtNode);
            break;
        case 'Monte':
        txtNode = document.createTextNode(txtMonte);
            paragraph.appendChild(txtNode);
            break;
    }
    document.getElementById("showHeros").appendChild(txtNodeMonte);
}



//x.style.color = "red";                     // Change the color of the element
