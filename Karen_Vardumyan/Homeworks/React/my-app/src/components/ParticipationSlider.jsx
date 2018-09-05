import React, { Component } from 'react';
import { Button } from 'react-bootstrap';

import DatePicker from 'react-datepicker';

class ParticipationSlider extends Component {
  render() {
    return (
      <div className="participationSlider">
        <div className="participationContainer">
          <div className="defStatus">
          <h2>2>DEFAULT STATUS</h2>
          </div>
          <div className="dateFrom">
            <h3>From</h3>
            <DatePicker></DatePicker>
          </div>
          <div className="dateTo">
            <h3>To</h3>
            <DatePicker></DatePicker>
          </div>
          <div className="switchDiv">
            <h3>Status</h3>
            <Switch></Switch>
          </div>
          <div className="acceptBtn">
          <Button bsStyle="success" onClick={this.buttonClicked}>Accept</Button>
                    </div>
          <p>Participation Slider </p>
          {/* return <DatePicker
                onChange={this.handleChange} */}
          />;
        </div>
      </div>
    );
  }
}

class Switch extends React.Component {

  constructor(props) {
    super(props);

    this.state = {
      isChecked: null
    }
  }

  componentWillMount() {
    this.setState({ isChecked: this.props.isChecked });
  }


  render() {

    return (
      <div className="switch-container">
        <label>
          <input ref="switch" checked={this.state.isChecked} onChange={this._handleChange} className="switch" type="checkbox" />
          <div>
            <span><g className="icon icon-toolbar grid-view"></g></span>
            <span><g className="icon icon-toolbar ticket-view"></g></span>
            <div></div>
          </div>
        </label>
      </div>
    );
  }


  _handleChange() {
    this.setState({ isChecked: !this.state.isChecked });
  }

}
// React.render(<Switch isChecked={true} />, document.getElementsByClassName("switchDiv"));

export default ParticipationSlider;
