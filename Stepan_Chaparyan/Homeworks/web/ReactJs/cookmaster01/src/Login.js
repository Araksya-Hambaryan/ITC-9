import React, { Component } from 'react';
import './Login.css';
import logo from './images/logo.png';

import Input from './Input'
import Checkbox from './Checkbox';

import 'bootstrap/dist/css/bootstrap.min.css';
import { Button } from 'reactstrap';

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
            <Input className="inputEmail" name="email" type="text"></Input>
            <div className="password">Password</div>
            <Input className="inputPassword" name="password" type="text"></Input>
            <Input className="rememberMe" name="checkbox" type="checkbox">Remember Me</Input>

        {/*}    <Checkbox></Checkbox>
         */}
         <Button color="success" onClick={this.buttonClicked}>Sign In</Button>
            <div onClick={this.buttonClicked} className="forgotPassword">Forgot password?</div>
        </main> 
        </div>
      </div>
    );
  }
}

export default Login;
