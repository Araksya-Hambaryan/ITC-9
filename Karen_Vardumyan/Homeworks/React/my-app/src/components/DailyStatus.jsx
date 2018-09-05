import React, { Component } from 'react';
import Manu from "./Manu"
import '../styles/DailyStatus.css';

var expences = { totalExpences: 1500, dailyExpences: 500 };

class DailyStatus extends Component {
    constructor(props) {
        super(props);
        this.state = {
            totalExpences: expences.totalExpences + " AMD",
            dailyExpences: expences.dailyExpences + " AMD",

        };
    }

    // init = function() {
    //   console.log('click !!!');
    // };
    render() {
         return (
             <div id="dailyStatus" className="col-xs-12 col-sm-8 col-md-8 col-lg-8">


                 <div id="divMenuOfToday" className="row">
                     <div className="col-xs-12 col-sm-8 col-md-8 col-lg-8">
                         <h2 id="MenuOfToday" className="dialh2"> MENU OF TODAY </h2>
                     </div>
                 </div>

                 <div className="col-xs-12 col-sm-8 col-md-8 col-lg-8">
                     <Manu/>
                 </div>


                 <div id="divTotalExpences" className="row">
                     <div className="col-xs-12 col-sm-8 col-md-8 col-lg-8">
                         <h2 id="h1TotalExpences" className="dialh2"> TOTAL EXPENCES </h2>
                     </div>
                     <div className="col-xs-12 col-sm-4 col-md-4 col-lg-4">
                         <h2 id="totalExpences" className="expences"> {this.state.totalExpences} </h2>
                     </div>
                 </div>

                 <div id="divDailyExpences" className="row">
                     <div className="col-xs-12 col-sm-8 col-md-8 col-lg-8">
                         <h2 id="h1DailyExpences" className="dialh2"> DAILY EXPENCES </h2>
                     </div>
                     <div className="col-xs-12 col-sm-4 col-md-4 col-lg-4">
                         <h2 id="dailyExpences" className="expences"> {this.state.dailyExpences} </h2>
                     </div>
                 </div>

                <div id="divStatusOfToday" className="row">
                    <div className="col-xs-12 col-sm-8 col-md-8 col-lg-8">
                        <h2 id="h1StatusOfToday" className="dialh2"> STATUS OF TODAY </h2>
                    </div>
                    <div className="col-xs-12 col-sm-4 col-md-4 col-lg-4">
                        <div className="row">
                            <div className="col-xs-12 col-sm-9 col-md-9 col-lg-9">
                                <h3 id="h3participate"> Participate </h3>
                            </div>
                            <div className="col-xs-12 col-sm-3 col-md-1 col-lg-1">
                                <input id='participate'  type='checkbox'/>
                            </div>
                        </div>
                     </div>
                 </div>


                 <div id="enddiv"> </div>
             </div>

            // <div className="App" onClick={this.init}>
            //   <p> Daily Status </p>
            // </div>
        );
    }
}

export default DailyStatus;
