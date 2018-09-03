import React from "react";

// init connection firebase
class Payment extends React.Component {
    // cretate constructor
    render() {
        return (
            <div>
                <paymantTitle />
                <paymentLastPaidAmount />
                <paymentStatus />
                <paymentDate />
                <paymentMoney />
                <paymentPay />
            </div>
        );
    }
}

class paymantTitle extends React.Component {
    render() {
        return (
            <div className="paymentdiv">
                <h3>PAYMENT</h3>
            </div>
        );
    }
}

class paymentLastPaidAmount extends React.Component {
    render() {
        return (
            <div className="paymentdiv">
                <h3>Last paid amount</h3>
                <h3>{this.props.data.payValue}</h3> 
            </div>
        );
    }
}

class paymentStatus extends React.Component {
    render() {
        <div className="paymentdiv">
            <h3>Payment status</h3>
            <img src={this.payStatus}/>   {/* init */}
        </div>        
    }
}

class paymentDate extends React.Component {
    render() {
        <div className="paymentdiv">
            <h3>Date</h3>
            <h3>{this.props.data.date}</h3> 
        </div>
    }
}

class paymentMoney extends React.Component {
    render() {
        <div className="paymentdiv">
            <h3>Money</h3>
            <h3>{this.props.data.money}</h3>  
        </div>
    }
}

class paymentPay extends React.Component {
    render() {
        <div className="payDiv">
            <button id="payButton">Pay</button>
        </div>
    }
}