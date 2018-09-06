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
             <div id="dailyStatus" className="col-xs-12 col-sm-7 col-md-7 col-lg-7">
                 
                 <div id="row" className="row">
                     <div className="col-xs-12 col-sm-8 col-md-8 col-lg-8">
                         <h2 className="text-justify"> MENU OF TODAY </h2>
                     </div>
                 </div>

                 <div className="row">
                     <div id="d1" className="col-xs-12 col-sm-12 col-md-12 col-lg-12"/>
                 </div>

                 <div className="row">
                     <div id="manu" className="col-xs-12 col-sm-12 col-md-12 col-lg-12">
                         <Manu/>
                     </div>
                 </div>

                 <div className="row">
                     <div id="d3" className="col-xs-12 col-sm-12 col-md-12 col-lg-12"/>
                 </div>


                 <div id="row" className="row">
                     <div className="col-xs-12 col-sm-6 col-md-8 col-lg-8">
                         <h2 className="text-justify"> TOTAL EXPENCES </h2>
                     </div>
                     <div className="col-xs-12 col-sm-6 col-md-4 col-lg-4">
                         <h2 className="text-justify"> {this.state.totalExpences} </h2>
                     </div>
                 </div>

                 <div className="row">
                     <div id="d1" className="col-xs-12 col-sm-12 col-md-12 col-lg-12"/>
                 </div>

                 <div id="row" className="row">
                     <div className="col-xs-12 col-sm-6 col-md-8 col-lg-8">
                         <h2 className="text-justify"> DAILY EXPENCES </h2>
                     </div>
                     <div className="col-xs-12 col-sm-6 col-md-4 col-lg-4">
                         <h2 className="text-justify"> {this.state.dailyExpences} </h2>
                     </div>
                 </div>

                 <div className="row">
                     <div id="d1" className="col-xs-12 col-sm-12 col-md-12 col-lg-12"/>
                 </div>

                <div id="row" className="row">
                    <div className="col-xs-12 col-sm-12 col-md-8 col-lg-8">
                        <h2 className="text-justify"> STATUS OF TODAY </h2>
                    </div>
                    <div id="divParticipate" className="col-xs-12 col-sm-6 col-md-4 col-lg-4">
                        <div className="pull-right">
                            <h3 id="h3participate" className="text-justify"> Participate </h3>
                        </div>
                        <div id="checkbox" className="pull-right">
                            <input id='participate'  type='checkbox'/>
                        </div>
                    </div>
                 </div>

                 <div className="row">
                     <div id="d2" className="col-xs-12 col-sm-12 col-md-12 col-lg-12"/>
                 </div>

             </div>

            // <div className="App" onClick={this.init}>
            //   <p> Daily Status </p>
            // </div>
        );
    }
}

export default DailyStatus;
