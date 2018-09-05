import React, { Component } from 'react';
import './Login.css';
import logo from './images/logo.png';

import Input from './Input'

import 'bootstrap/dist/css/bootstrap.min.css';
import { Button } from 'react-bootstrap';

class Login extends Component {

  buttonClicked() {
      alert ("Button clicked");
  }
    
  render() {
    return (
      <div className="Login">
        <div className="mycontainer">
        <main className="main"> 
            <div className="logo">
               <img src={logo} alt="Logo"/>
            </div>
            <div className="signIn">Sign In</div>
            <div className="emailAddress">Email Address</div>
            <Input className="inputEmail" type="text" placeholder="Email Address" name="email" ></Input>
            <div className="password">Password</div>
            <Input className="inputPassword" type="text" name="password" ></Input>
            <Input className="rememberMe" type="checkbox" name="checkbox" >Remember Me</Input>
            <Button bsStyle="success" onClick={this.buttonClicked}>Sign In</Button>
            <div onClick={this.buttonClicked} className="forgotPassword">Forgot password?</div>
        </main> 
        </div>
      </div>
    );
  }
}

export default Login;
