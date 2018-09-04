import React, { Component } from 'react';
import logo from './logo.svg';
import './App.css';
var createReactClass = require('create-react-class');


var App = createReactClass({
  getInitialState: function () {
    return (
      {
        rows: [{
          'Date': '01.09.2018',
          'Daily expences': '500',
          'Payment': 50,
          'Total expences': '12500',
        }, {
          'Date': '01.09.2018',
          'Daily expences': '500',
          'Payment': 50,
          'Total expences': '13500',
        }, {
          'Date': '01.09.2018',
          'Daily expences': '500',
          'Payment': 50,
          'Total expences': '14500',
        }]
      }
    )
  },
  addRow: function (row) {
    var timestamp = (new Date()).getTime();
    this.state.rows['row-' + timestamp] = row;
    this.setState({ rows: this.state.rows });
  },
  render: function () {
    return (
      <div className="component-wrapper">
        <TableComponent rows={this.state.rows} />
        <AddRowForm addRow={this.addRow} />
      </div>
    );
  }
});

var columns = ['Date', 'Daily expences', 'Payment', 'Total expences'];

var TableComponent = createReactClass({
  render: function () {
    var dataColumns = columns;
    var dataRows = this.props.rows;
    var tableColumns = (<thead>
      <tr>
        {dataColumns.map(function (column) {
          return <td>{column}</td>;
        })}
      </tr>
    </thead>);

    var tableBody = dataRows.map(function (row) {
      return (
        <tbody>
        <tr>
          {dataColumns.map(function (column) {
            return <td>{row[column]}</td>;
          })}
        </tr>
        </tbody>);
    });
    return (<table className="table table-bordered table-hover" width="100%">
      {tableColumns}
      {tableBody}
    </table>)
  }
});


var AddRowForm = createReactClass({
  createRow: function (e) {
    e.preventDefault();
    var row = this.refs.row.value;
    if (typeof row === 'string' && row.length > 0) {
      let arr = row.split(":");
      let obj = {
        'Date': arr[0],
        'Daily expences': arr[1],
        'Payment': arr[2],
        'Total expences': arr[3],
      }
      this.state.rows.push(obj);
      this.props.addRow(row);
      console.log(this.props.rows);
      this.refs.rowForm.reset();
    }
  },
  render: function () {
    return (
      <form className="form-inline" ref="rowForm" onSubmit={this.createFruit}>
        <div className="form-group">
          <label htmlFor="rowItem">
            Input row(like this 04.09.2018:700:0:15000)
              <input type="text" id="rowItem" ref="row" className="form-control" />
          </label>
        </div>
        <button type="submit" className="btn btn-primary">Add Fruit</button>
      </form>
    )
  }
});

export default App;