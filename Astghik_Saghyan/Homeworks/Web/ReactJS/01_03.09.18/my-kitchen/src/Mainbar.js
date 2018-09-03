import React, { Component } from 'react';
import './Mainbar.css';

class Mainbar extends Component {
  render() {
    return (
      <div>
        <div id="temporery">  
            <div id="menu">
                <img id="logo" src={require('./image/logo.png')} alt="Logo"></img>
                <ul>
                    <li><a>PROFILE</a></li>
                    <li><a>ABOUT</a></li>
                    <li><a>PAYMENT HISTORY</a></li>
                    <li><a>PAYMENT</a></li>
                    <li><a className="active">CURRENT CONSULTANT</a></li>
                </ul>
            </div>
        </div>    
      </div>
    );
  }
}

export default Mainbar;