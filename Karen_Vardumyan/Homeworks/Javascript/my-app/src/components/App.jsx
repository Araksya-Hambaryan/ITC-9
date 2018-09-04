import React, { Component } from 'react';
import DailyStatus from './DailyStatus';
import Login from './Login';
import ParticipationSlider from './ParticipationSlider';
import MenuBar from './MenuBar';

import '../styles/App.css';
import logo from '../logo.svg';

class App extends Component {
    constructor(props) {
        super(props);
        this.state = {
            isLoggedIn: this.props.isLoggedIn
        };
    }

    render() {
        let page;
        if (this.state.isLoggedIn) {
            page = <div>
                        <MenuBar />
                        <div>
                            <DailyStatus />
                            <ParticipationSlider />
                        </div>
                    </div>;
        } else {
            page = <Login />;
        }
    return (
      <div className="App">
          {page}
      </div>
    );
  }
}

export default App;
