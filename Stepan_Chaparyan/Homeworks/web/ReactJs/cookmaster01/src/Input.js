import React, { Component } from 'react';
import './Input.css';

class Input extends Component {

  constructor(props) {
    super(props);
    this.state = {checked: true};
    this.handleCheck = this.handleCheck.bind(this);
  } 

  handleCheck () {
      this.setState ({checked: !this.state.checked});
  }

  render() {
    var message;
    if (this.state.checked) {
        message = "Checked";
    } else {
        message = "Uncheched";
    }
    var rememberMe;
    if (this.props.name == 'checkbox') {
        rememberMe = "Remember Me";
    } else {
        rememberMe = "";
    }
    return (
      <div className="Input">
        <div className={this.props.className}>
            <input type={this.props.type} onChange={this.handleCheck}
                defaultChecked={this.state.checked} name={this.props.name}/>
                <span className="spanrememberme">{rememberMe}</span>
            <hr/>
        </div>
      </div>
    );
  }
}

export default Input;
