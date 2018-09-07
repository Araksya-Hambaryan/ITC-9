import React, { Component } from 'react';
import 'bootstrap/dist/css/bootstrap.min.css';
import fire from './Fire';
import Login from './Login';
import Home from './Home';

import './App.css';

class App extends Component {
  constructor(props) {
    super(props);
    this.state = {
      user:{},
    } 
  }

  componentDidMount() {
    this.authListener();
  }

  authListener() {
    fire.auth().onAuthStateChanged((user) => {
      console.log(user);
      if (user) {
        this.setState({ user });
      } else {
        this.setState({ user: null });
      }
    });
  }

  render() {
    return (
      <div className="App">
        {this.state.user ? (<Home/>) : (<Login/>)}
      </div>
    );
  }
}

export default App;
