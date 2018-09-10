import React, { Component } from 'react';
import '../styles/Checkbox.css';

class Checkbox extends Component {

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
    return (
      <div className="Checkbox">
        <div className={this.props.className}>
            <input type="checkbox" onChange={this.handleCheck}
            defaultChecked={this.state.checked}/>
            <span>You {message}: Remember Me </span>
        </div>
      </div>
    );
  }
}

export default Checkbox;
