import React, { Component } from 'react'
import { ValidationForm, TextInput, Checkbox } from 'react-bootstrap4-form-validation';
import validator from 'validator'
import 'bootstrap/dist/css/bootstrap.min.css';
import fire from './Fire';
import './Login.css';
import logo from './assets/logo.png';


class Login extends Component {
    constructor(props) {
        super(props);
        this.login = this.login.bind(this);
        this.handleChange = this.handleChange.bind(this);
        this.state = {
        email: '',
        password: ''
        }    
    } 

     handleChange = (e, value) => {
        this.setState({
            [e.target.name]: e.target.value
        })
    }

    login(e) {
        e.preventDefault();
        fire.auth().signInWithEmailAndPassword(this.state.email, this.state.password).then((u) => {
        }).catch((error) => {
            console.log(error);
        });
    }

    render () {
        return (
        <div className="loginContainer">  
          <div className="main">          
            <div className="logo">
                <img src={logo} alt="Logo"/>
            </div>
            <div className="signIn">Sign In</div>            
            <ValidationForm onSubmit={this.login}>
                <div className="form-group">
                    <label className="lebel" htmlFor="email">Email</label>
                    <TextInput  name="email" 
                                id="email" 
                                type="email" 
                                validator={validator.isEmail} 
                                errorMessage={{validator:"Please enter a valid email"}}
                                value={this.state.email}
                                onChange={this.handleChange}
                    />
                </div>
                <div className="form-group">
                    <label className="lebel" htmlFor="password">Password</label>
                    <TextInput  name="password"
                                id="password" 
                                type="password" 
                                required 
                                pattern="(?=.*[A-Z]).{6,}"
                                errorMessage={{required:"Password is required", 
                                        pattern: "Password should be at least 6 characters and contains at least one upper case letter"}}
                                value={this.state.password}
                                onChange={this.handleChange}
                    />
                </div>
                <div className="form-group">
                    <Checkbox   name="check1" 
                                label="Remember Me" 
                                id="check" 
                                value={this.state.check1} 
                                onChange={this.handleChange}
                    /> 
                </div>
                <div className="form-group" id="btn">
                    <button className="btn btn-success btn-lg btn-block">Submit</button>
                </div>
                <div onClick={this.login} className="forgotPassword">Forgot password?</div>
            </ValidationForm>
          </div>
        </div>
        )
    }
}

export default Login;
