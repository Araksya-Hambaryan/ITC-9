import React, { Component } from 'react';
import '../styles/DailyStatus.css';

import Diamond from '../assets/back_image.jpg';
// import Diamond from './vegetables.jpg';
var manuData = [ {image: "./vegetables.jpg", name: "MEAL1"},
                 {image: "./vegetables.jpg", name: "MEAL2"},
                 {image: "./vegetables.jpg", name: "MEAL3"} ]


class Manu extends React.Component {
    constructor(props) {
        super(props);
        this.state = {
            data: manuData

        };
    }
    render() {
        return (
            <div id="row" className="row">
                <div className="col-xs-6 col-sm-6 col-md-4 col-lg-4" >
                    <img src={Diamond}  className="img-thumbnail" />
                    <h3> {this.state.data[0].name} </h3>
                </div>

                <div className="col-xs-6 col-sm-6 col-md-4 col-lg-4">
                    <img src={Diamond}  className="img-thumbnail" />
                    {/*<img src={this.state.data[1].image} class="img-fluid" />*/}
                    <h3> {this.state.data[1].name} </h3>
                </div>

                <div className="col-xs-6 col-sm-6 col-md-4 col-lg-4">
                    <img src={Diamond}  className="img-thumbnail" />
                    {/*<img src={this.state.data[2].image} class="img-fluid" />*/}
                    <h3> {this.state.data[2].name} </h3>
                </div>
            </div>
        );
    }
}

export default Manu;