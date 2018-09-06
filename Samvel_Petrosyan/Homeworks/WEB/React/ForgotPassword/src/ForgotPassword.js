import React, { Component } from 'react'
import { ValidationForm, TextInput, Checkbox } from 'react-bootstrap4-form-validation';
import validator from 'validator'
import 'bootstrap/dist/css/bootstrap.min.css';
import './ForgotPassword.css';
import logo from './images/logo.png';

class ForgotPassword extends Component {
    state = {
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
            <div className="forgotPass">Forgot password ?</div>            
            <ValidationForm onSubmit={this.handleSubmit} onErrorSubmit={this.handleErrorSubmit}>
                <div className="form-group">
                    <label className="lebel" htmlFor="email">Entet your email in order to reset password</label>
                    
                </div>
                <div className="form-group">
                    <label className="lebel" htmlFor="password">Password</label>
                    <TextInput name="password" id="password" type="password" required 
                        pattern="(?=.*[A-Z]).{6,}"
                        errorMessage={{required:"Password is required", pattern: "Password should be at least 6 characters and contains at least one upper case letter"}}
                        value={this.state.password}
                        onChange={this.handleChange}
                    />
                </div>
               
                <div className="form-group" id="btn">
                    <button className="btn btn-success btn-lg btn-block">RESET PASSWORD</button>
                </div>
            </ValidationForm>
          </div>
        </div>
        )
    }
}

export default ForgotPassword;