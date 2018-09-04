import React, { Component } from 'react';
import App from "./App";




var expences = { totalExpences: 1500, dailyExpences: 500 };


var manuData = [ {image: "./vegetables.jpg", name: "MEAL1"},
                 {image: "./vegetables.jpg", name: "MEAL2"},
                 {image: "./vegetables.jpg", name: "MEAL3"} ]





class DailyStatus extends React.Component {
    render() {
        return (
            <div id="dailyStatus">
                <div id="divMenuOfToday" className="dialydiv">
                    <h2 id="MenuOfToday" className="dialh2"> MENU OF TODAY </h2>
                </div>
                <Manu/>
                <TotalExpences/>
                <div className="divpadding"> </div>
                <DailyExpences/>
                <div className="divpadding"> </div>
                <StatusOfToday/>
                <div id="enddiv"> </div>
            </div>
        );
    }
}


class Manu extends React.Component {
    constructor(props) {
        super(props);
        this.state = {
            data: manuData

        };
    }
    render() {
        return (
            <div id="divManu">
                <div className="divDinner">
                    <img src={this.state.data[0].image} id="image1" className="menuImages"/>
                    <h3 className="dinners"> {this.state.data[0].name} </h3>
                </div>
                <div className="divDinner">
                    <img src={this.state.data[1].image} id="imag1" className="menuImages"/>
                    <h3 className="dinners"> {this.state.data[1].name} </h3>
                </div>

                <div className="divDinner">
                    <img src={this.state.data[2].image} id="imae1" className="menuImages"/>
                    <h3 className="dinners"> {this.state.data[2].name} </h3>
                </div>
            </div>
        );
    }
}



class TotalExpences extends React.Component {
    constructor(props) {
        super(props);
        this.state = {
            expences: expences.totalExpences + " AMD",
        };
    }
    render() {
        return (
            <div id="divTotalExpences" className="dialydiv">
                <h2 id="h1TotalExpences" className="dialh2"> TOTAL EXPENCES </h2>
                <h2 id="totalExpences" className="expences"> {this.state.expences} </h2>
            </div>
        );
    }
}



class DailyExpences extends React.Component {
    constructor(props) {
        super(props);
        this.state = {
            expences: expences.dailyExpences + " AMD",
        };
    }
    render() {
        return (
            <div id="divDailyExpences" className="dialydiv">
                <h2 id="h1DailyExpences" className="dialh2"> DAILY EXPENCES </h2>
                <h2 id="dailyExpences" className="expences"> {this.state.expences} </h2>
            </div>
        );
    }
}


class StatusOfToday extends React.Component {
    render() {
        return (
            <div id="divStatusOfToday" className="dialydiv">
                <h2 id="h1StatusOfToday" className="dialh2"> STATUS OF TODAY </h2>

                <h3 id="h3participate"> Participate </h3>
                <input id='participate'  type='checkbox'/>

            </div>

        );
    }
}



export default DailyStatus;
