import React from 'react';
import Tabelify from 'react-tabelify';
import ReactDOM from 'react-dom';

// var _ = require('underscore');

var columnMetadata = [
  {
    "columnName": "cgpa",
    "displayName": "CGPA",
  },
  {
    "columnName": "name",
    "displayName": "Name"
  },
  {
    "columnName": "university",
    "displayName": "University",
  },
  {
    "columnName": "discipline",
    "displayName": "Discipline",
  },
  {
    "columnName": "year",
    "displayName": "Year",
    // render:()=>{
    //     return <div style={{backgroundColor:'lightblue'}}>"Custom Column"</div>
    // },
    // "flexBasis":'190px'
  }
];
class Table extends React.Component {
  constructor() {
    super();
    this.onChangeGrid = this.onChangeGrid.bind(this);
    this.state = {
      tableConfig: {
        columnMetadata: columnMetadata,
        currentPage: 1,
        showCheckbox: true,
        data:
          [
            {
              "cgpa": 5.2,
              "name": "Rishabh",
              "discipline": "Computer Science",
              "university": "BITS Pilani",
              "year": "fourth"
            },
            {
              "cgpa": 7.9,
              "name": "Suyash",
              "discipline": "Electrical and Electronics",
              "university": "BITS Pilani",
              "year": "fourth"
            },
            {
              "cgpa": 7.4,
              "name": "Tanuj",
              "discipline": "Electrical and Electronics",
              "university": "BITS Pilani",
              "year": "fourth"
            },
            {
              "cgpa": 9.7,
              "name": "Karan",
              "discipline": "Computer Science",
              "university": "BITS Pilani",
              "year": "fourth"
            },
            {
              "cgpa": 7.2,
              "name": "Harsh",
              "discipline": "Information Systems",
              "university": "BITS Pilani",
              "year": "fourth"
            },
            {
              "cgpa": 4.2,
              "name": "Sanchit",
              "discipline": "Mathematics",
              "university": "BITS Pilani",
              "year": "fifth"
            },
            {
              "cgpa": 7.9,
              "name": "Rahul",
              "discipline": "Computer Science",
              "university": "BITS Pilani",
              "year": "fourth"
            },
            {
              "cgpa": 7.1,
              "name": "Ram",
              "discipline": "Electrical and Electronics",
              "university": "BITS Pilani",
              "year": "fourth"
            },
            {
              "cgpa": 8.9,
              "name": "Rohan",
              "discipline": "Electrical and Electronics",
              "university": "BITS Pilani",
              "year": "fourth"
            },
            {
              "cgpa": 3.9,
              "name": "Karshit",
              "discipline": "IT",
              "university": "BITS Pilani",
              "year": "fourth"
            },
            {
              "cgpa": 4.9,
              "name": "Amitesh",
              "discipline": "Information Systems",
              "university": "BITS Pilani",
              "year": "fourth"
            },
            {
              "cgpa": 9.0,
              "name": "Ayush",
              "discipline": "Information Systems",
              "university": "BITS Pilani",
              "year": "fourth"
            },
            {
              "cgpa": 5.0,
              "name": "Sullu",
              "discipline": "Information Systems",
              "university": "BITS Pilani",
              "year": "fourth"
            },
            {
              "cgpa": 7.6,
              "name": "Dhruv Suri",
              "discipline": "Information Systems",
              "university": "BITS Pilani",
              "year": "fourth"
            },
            {
              "cgpa": 7.3,
              "name": "Shan Balasubraniam",
              "discipline": "Computer Science",
              "university": "BITS Pilani",
              "year": "fourth"
            },
            {
              "cgpa": 9.2,
              "name": "Punit",
              "discipline": "Computer Science",
              "university": "BITS Pilani",
              "year": "fourth"
            },
            {
              "cgpa": 8.5,
              "name": "Prerak",
              "discipline": "Computer Science",
              "university": "BITS Pilani",
              "year": "fourth"
            },
            {
              "cgpa": 8.7,
              "name": "Anand Mishra",
              "discipline": "Computer Science",
              "university": "BITS Pilani",
              "year": "fourth"
            },
            {
              "cgpa": 7.6,
              "name": "Rakesh",
              "discipline": "Electrical and Electronics",
              "university": "BITS Pilani",
              "year": "fourth"
            },
            {
              "cgpa": 5.9,
              "name": "Roshan",
              "discipline": "Information Systems",
              "university": "BITS Pilani",
              "year": "fourth"
            },
            {
              "cgpa": 2.9,
              "name": "Shah Rukh",
              "discipline": "Electrical and Electronics",
              "university": "BITS Pilani",
              "year": "fourth"
            },
            {
              "cgpa": 7.4,
              "name": "Anmol",
              "discipline": "Physics",
              "university": "BITS Pilani",
              "year": "fourth"
            },
            {
              "cgpa": 7.5,
              "name": "Rishi",
              "discipline": "Electrical and Electronics",
              "university": "BITS Pilani",
              "year": "fourth"
            },
            {
              "cgpa": 6.9,
              "name": "GKB",
              "discipline": "Electrical and Electronics",
              "university": "BITS Pilani",
              "year": "fourth"
            },
            {
              "cgpa": 4.9,
              "name": "Ramu",
              "discipline": "Information Systems",
              "university": "BITS Pilani",
              "year": "fourth"
            },
            {
              "cgpa": 5.4,
              "name": "Rishikesh",
              "discipline": "Electrical and Electronics",
              "university": "BITS Pilani",
              "year": "fourth"
            },
            {
              "cgpa": 4.7,
              "name": "Sharma",
              "discipline": "Information Systems",
              "university": "BITS Pilani",
              "year": "fourth",
            }
          ],
        onChangeGrid: this.onChangeGrid,
        selectedRows: {},
        onRowClick: this.onRowClick,
        resultsPerPage: 10,
        // CustomRow: require('./CustomRow.js')
        // CustomHeader: require('./CustomHeader')
        // showHeader:false,
        // showFooter: false
        localSearch: true,
        // fixedHeight:100,
        // width: '1000px'
      }
    }
  }

  onChangeGrid(event, data) {
    var tableConfig = this.state.tableConfig;
    // _.extend(tableConfig, data);
    this.setState({
      tableConfig: tableConfig
    });
  }

  render() {
    return <div>
      <Tabelify style={{ margin: '30px' }} {...this.state.tableConfig} />
    </div>
  }
}

export default Table;

/*
class Table extends React.Component {
  constructor() {
    super()
    this.onChangeGrid = this.onChangeGrid.bind(this);
    this.state = {
      tableConfig: {
        columnMetadata: [
          {
            "columnName": "date",
            "displayName": "Date",
          },
          {
            "columnName": "dailyExp",
            "displayName": "Daily Expenses",
          }
        ],
        currentPage: 1,
        showCheckbox: true,
        data: [
          {
            date: "01.01.2018",
            dailyExp: "370",
          }
        ],
        onChangeGrid: this.onChangeGrid,
        selectedRows: {},
        onRowClick: this.onRowClick,
        resultsPerPage: 10,
        localSearch: true,
      }
    }
  }
  onChangeGrid(event, data) {
    var tableConfig = this.state.tableConfig;
    this.setState({
      tableConfig: tableConfig
    })
  }
  render() {
    return <div>
      <Tabelify style={{margin:'30px'}} {...this.state.tableConfig}/>
    </div>
  }
}

export default Table;
*/
// function table() {
//   return(
//     <div>
//       <h1>Hello world</h1>
//     <ReactDataGrid width={"100%"} esitable dataProvider={
//       [{date:"01.01.2018", "daily expensive": "600", "total expensive": "12000"},
//       {date:"01.02.2018", "daily expensive": "700", "total expensive": "12500"},
//       {date:"01.03.2018", "daily expensive": "500", "total expensive": "13500"},
//       {date:"01.04.2018", "daily expensive": "650", "total expensive": "13000"},
//       {date:"01.05.2018", "daily expensive": "550", "total expensive": "12800"},
//       {date:"01.06.2018", "daily expensive": "400", "total expensive": "13200"},
//       {date:"01.07.2018", "daily expensive": "450", "total expensive": "14200"},
//       {date:"01.08.2018", "daily expensive": "730", "total expensive": "15100"},
//       {date:"01.09.2018", "daily expensive": "620", "total expensive": "10300"},
//       {date:"01.10.2018", "daily expensive": "710", "total expensive": "11700"},
//       {date:"01.11.2018", "daily expensive": "490", "total expensive": "9600"},
//       {date:"01.12.2018", "daily expensive": "510", "total expensive": "9300"},]}>
//         <ReactDataGridColumn dataField="date"/>
//         <ReactDataGridColumn dataField="daily expensive" sortNumeric/>
//         <ReactDataGridColumn dataField="total expensive" sortNumeric/>      
//       </ReactDataGrid>
//     </div>
//   )
// }