import React, { Component } from 'react';
import DailyStatus from './DailyStatus';
import Login from './Login';
import ParticipationSlider from './ParticipationSlider';
import MenuBar from './MenuBar' ;
import Manu from "./Manu"


import '../styles/App.css';

class App extends Component {
    constructor(props) {
        super(props);
        this.state = {
            isLoggedIn: this.props.isLoggedIn
        };
    }

    render() {
        const divStyle = {
            background: 'url("../assets/back_image.jpg")'
        }
        let page;
        if (this.state.isLoggedIn) {
            page = <div style={divStyle}>
                        <MenuBar active={2}/>
                        <div>
                            <DailyStatus />
                            {/*<ParticipationSlider />*/}
                    	</div>
                </div>;
        } else {
            page = <Login />
        }
    return (
      <div className="App">
          {page}
      </div>
    );
  }
}

export default App;
