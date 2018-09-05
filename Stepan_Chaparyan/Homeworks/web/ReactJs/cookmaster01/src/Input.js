import React, { Component } from 'react';
import './Input.css';

class Input extends Component {

  constructor(props) {
    super(props);
    this.state = {checked: true};
    this.handleCheck = this.handleCheck.bind(this);
  } 

  handleCheck () {
      var message;
      this.setState ({checked: !this.state.checked});
      if (this.state.checked) {
        message = "Checked";
        document.getElementsByTagName('span')[0].color = 'red';    
    } else {
        message = "Uncheched";
    }
  }

  render() {
    var rememberMe;
    if (this.props.name === 'checkbox') {
        rememberMe = "Remember Me";
    } else {
        rememberMe = "";
    }
    return (
      <div className="Input">
        <div className={this.props.className}>
            <input id="test1" type={this.props.type} onChange={this.handleCheck}
                defaultChecked={this.state.checked} name={this.props.name}/>
                <span id="test" className="spanrememberme">{rememberMe}</span>
            <hr/>
        </div>
      </div>
    );
  }
}

export default Input;
