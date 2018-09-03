import React, { Component } from 'react';
import logo from './logo.svg';
import './App.css';

var columns = ['Date', 'Daily', 'Total'];

var data =
  [{
    'Date': '01.10.18',
    'Daily': 500,
    'Total': 12000
  }, {
    'Date': '01.11.18',
    'Daily': 500,
    'Total': 13000
  }, {
    'Date': '01.12.18',
    'Daily': 600,
    'Total': 18000
  }];

class App extends Component {
  render() {
    return (
      <div className="App">
        <div className="App-header">
          <img src={logo} className="App-logo" alt="logo" />
          <h2>Welcome to React</h2>
        </div>
        <CustomTable></CustomTable>
      </div>
    );
  }
}

class CustomTable extends React.Component {
  render() {
    return (
      <div>
        <table>
          <Columns></Columns>
          <tbody>
            <TableRow></TableRow>
          </tbody>
        </table>
      </div>
    );
  }
}

class Columns extends React.Component {
  render() {
    return (<tr>
      {columns.map(function (column) {
        return <td>{column}</td>;
      })}
    </tr>);
  }
}

class TableRow extends React.Component {
  render() {
    return (<tr>
      {data.map(function (row) {
        return
        row.map(function (item) {
          <td>{item}</td>
        });
      })}
    </tr>);
  }
}
export default App;