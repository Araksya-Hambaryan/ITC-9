function tableCreate(myTable) {
  myTable.setAttribute('border', '1');
  for (let i = 0; i < 8; i++) {
      let tr = document.createElement('tr');
      for (let j = 0; j < 8; j++) {
          let td = document.createElement('td');
          if(i === j || j === (7 - i)) {
            td.bgColor = '#dddddd';
          }
          td.height = 50;
          td.width = 80;
          tr.appendChild(td);
      }      
      myTable.appendChild(tr);        
  }
}

const myTable = document.getElementById('myTable');
tableCreate(myTable);
