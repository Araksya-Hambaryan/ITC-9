import React, { Component } from 'react'
import { ValidationForm, TextInput, Checkbox } from 'react-bootstrap4-form-validation';
import validator from 'validator'
import 'bootstrap/dist/css/bootstrap.min.css';
import './Login.css';
import logo from './images/logo.png';

class Login extends Component {
    state = {
        firstName: "",
        email: "",
        password: "",
        check1: false,
        check2: true,
    }

    handleChange = (e) => {
        this.setState({
            [e.target.name]: e.target.value
        })
    }

    handleChange = (e, value) => {
        this.setState({
            [e.target.name]: value
        })
    }

    handleSubmit = (e, formData, inputs) => {
        e.preventDefault();
        alert(JSON.stringify(formData, null, 2));
    }

    handleErrorSubmit = (e, formData, errorInputs) => {
        console.error(errorInputs)
    }

    render () {
        return (
          //Controlled Components
        <div className="loginContainer">  
          <div className="main">          
            <div className="logo">
                <img src={logo} alt="Logo"/>
            </div>
            <div className="signIn">Sign In</div>            
            <ValidationForm onSubmit={this.handleSubmit} onErrorSubmit={this.handleErrorSubmit}>
                <div className="form-group">
                    <label htmlFor="firstName">First name</label>
                    <TextInput name="firstName" id="firstName" required
                        value={this.state.firstName}
                        onChange={this.handleChange}
                    />
                </div>
                <div className="form-group">
                    <label htmlFor="email">Email</label>
                    <TextInput name="email" id="email" type="email" 
                        validator={validator.isEmail} 
                        errorMessage={{validator:"Please enter a valid email"}}
                        value={this.state.email}
                        onChange={this.handleChange}
                        />
                </div>
                <div className="form-group">
                    <label htmlFor="password">Password</label>
                    <TextInput name="password" id="password" type="password" required 
                        pattern="(?=.*[A-Z]).{6,}"
                        errorMessage={{required:"Password is required", pattern: "Password should be at least 6 characters and contains at least one upper case letter"}}
                        value={this.state.password}
                        onChange={this.handleChange}
                    />
                </div>
                <div className="form-group">
                <Checkbox name="check1" label="Remember Me" id="check" 
                    value={this.state.check1} 
                    onChange={this.handleChange}
                /> 
                </div>
                <div className="form-group">
                    <button className="btn btn-success btn-lg btn-block">Submit</button>
                </div>
            </ValidationForm>
          </div>
        </div>
        )
    }
}

export default Login;