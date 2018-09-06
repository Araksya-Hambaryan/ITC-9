import React, { Component } from 'react'
import { ValidationForm, TextInput, Checkbox } from 'react-bootstrap4-form-validation';
import validator from 'validator'
import 'bootstrap/dist/css/bootstrap.min.css';
import './Login.css';
import logo from './images/logo.png';

class Login extends Component {
    state = {
        email: "",
        password: "",
    }

    handleChange = (e, value) => {
        this.setState({
            [e.target.name]: value
        })
    }

    handleSubmit = (e, formData, inputs) => {
        e.preventDefault();
        alert(JSON.stringify(formData, null, 2));
        console.log("You are logged in");
    }

    handleErrorSubmit = (e, formData, errorInputs) => {
        console.error(errorInputs)
    }

    buttonClicked() {
        alert ("Button clicked");
    }

    render () {
        return (
        <div className="loginContainer">  
          <div className="main">          
            <div className="logo">
                <img src={logo} alt="Logo"/>
            </div>
            <div className="signIn">Sign In</div>            
            <ValidationForm onSubmit={this.handleSubmit} onErrorSubmit={this.handleErrorSubmit}>
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
                <div onClick={this.buttonClicked} className="forgotPassword">Forgot password?</div>
            </ValidationForm>
          </div>
        </div>
        )
    }
}

export default Login;