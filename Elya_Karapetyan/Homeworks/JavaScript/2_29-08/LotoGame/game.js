function createLotoCard(id) {
    const lotoCard = document.getElementById(id);    
    const row = 3;
    const column = 9;
    lotoCard.setAttribute("border", "1");
    for (let i = 0; i < row; i++) {
        let tr = document.createElement("tr");
        for (let j = 0; j < column; j++) {
            let td = document.createElement("td");
            td.height = 40;
            td.width = 60;
            tr.appendChild(td); 
            td.innerText = generateRandomNumber();           
        }              
        lotoCard.appendChild(tr); 
    }
  }

function generateRandomNumber() {
   const number = Math.floor((Math.random() * 90));
   return number;
}
  
createLotoCard("firstLotoCard");
createLotoCard("secondLotoCard");
createLotoCard("thirdLotoCard");