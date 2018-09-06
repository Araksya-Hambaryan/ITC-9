import React, { Component } from 'react';
import { Button } from 'react-bootstrap';
import DatePicker from 'react-datepicker';
import 'react-datepicker/dist/react-datepicker.css';
import moment from 'moment';
import '../styles/ParticipationSlider.css';

class ParticipationSlider extends Component {
  constructor(props) {
    super(props)
    this.state = {
      startDate: moment()
    };
    this.handleChange = this.handleChange.bind(this);
  }

  handleChange(date) {
    this.setState({
      startDate: date
    });
  }

  render() {
    return (
      <div className="participationSlider">
        <div className="participationContainer">
          <div className="defStatus">
            <h3><b>DEFAULT STATUS</b></h3>
          </div>
          <br></br>
          <div className="dateFrom">
            <h4 className="hDateFrom"><b>From</b></h4>
            <DatePicker className="pickerDateFrom"
              selected={this.state.startDate}
              onChange={this.handleChange} />
          </div>
          <br></br>
          <div className="dateTo">
            <h4 className="hdateTo"><b>To</b></h4>
            <DatePicker className="pickerDateTo"
              selected={this.state.startDate}
              onChange={this.handleChange} />
          </div>
          <br></br>
          <div className="switchDiv">
            <h4 id="status"><b>Status</b></h4>
            <label class="bs-switch">
              <input type="checkbox"/>
                <span class="slider round"></span>
            </label>
          </div>
            <br></br>
            <div className="acceptBtn">
              <Button bsStyle="success" onClick={this.buttonClicked}>Accept</Button>
            </div>
          </div>
        </div>
        );
      }
    }
    
export default ParticipationSlider;