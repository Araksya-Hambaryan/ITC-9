import React, { Component } from 'react';
import '../styles/Input.css';

class Input extends Component {
  render() {
    return (
      <div className="Input">
        <div className={this.props.className}>
            <input type={this.props.type} name={this.props.name}/><hr/>
        </div>
      </div>
    );
  }
}

export default Input;
