import React, { Component } from 'react';
import './Login.css';
import logo from './images/logo.png';

class Login extends Component {
  render() {
    return (
      <div className="Login">
        <div class="container">
        <main class="main"> 
            <div class="logo">
               <img src={logo} alt="Logo"/>
            </div>
            <div class="signIn">Sign In</div>
            <div class="emailAddress">Email Address</div>
            <div class="inputEmail">
                <input type="text" name="email"/><hr/>
            </div>
            <div class="password">Password</div>
            <div class="inputPassword">
                <input type="text" name="password"/><hr/>
            </div>
            <div class="rememberMe">
                <input type="checkbox" checked name="rememberMe"/> <span>Remember me</span>
            </div>
            <div class="button">
                <button class="btn">Sign In</button>
            </div>
            <div class="forgotPassword">Forgot password?</div>
        </main> 
        </div>
      </div>
    );
  }
}

export default Login;
