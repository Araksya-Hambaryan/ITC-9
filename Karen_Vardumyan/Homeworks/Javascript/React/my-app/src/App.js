import React, { Component } from 'react';
import logo from './logo.svg';
import './App.css';
import './DailyStatus.css';
import DailyStatus from './DailyStatus'



class App extends Component {
  render() {
    return (
      <div className="App">

        <DailyStatus />


      </div>
    );
  }
}

export default App;
