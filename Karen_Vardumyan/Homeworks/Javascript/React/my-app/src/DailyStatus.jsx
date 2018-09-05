import React, { Component } from 'react';
import Manu from "./Manu"



var expences = { totalExpences: 1500, dailyExpences: 500 };







class DailyStatus extends React.Component {
    constructor(props) {
        super(props);
        this.state = {
            totalExpences: expences.totalExpences + " AMD",
            dailyExpences: expences.dailyExpences + " AMD",

        };
    }

    
    render() {
        return (

            <div id="dailyStatus">
                <div id="divMenuOfToday" className="dialydiv">
                    <h2 id="MenuOfToday" className="dialh2"> MENU OF TODAY </h2>
                </div>
                <Manu/>


                <div id="divTotalExpences" className="dialydiv">
                    <h2 id="h1TotalExpences" className="dialh2"> TOTAL EXPENCES </h2>
                    <h2 id="totalExpences" className="expences"> {this.state.totalExpences} </h2>
                </div>


                <div className="divpadding"> </div>



                <div id="divDailyExpences" className="dialydiv">
                    <h2 id="h1DailyExpences" className="dialh2"> DAILY EXPENCES </h2>
                    <h2 id="dailyExpences" className="expences"> {this.state.dailyExpences} </h2>
                </div>


                <div className="divpadding"> </div>


                <div id="divStatusOfToday" className="dialydiv">
                    <h2 id="h1StatusOfToday" className="dialh2"> STATUS OF TODAY </h2>

                    <h3 id="h3participate"> Participate </h3>
                    <input id='participate'  type='checkbox'/>

                </div>


                <div id="enddiv"> </div>
            </div>
        );
    }
}






export default DailyStatus;
