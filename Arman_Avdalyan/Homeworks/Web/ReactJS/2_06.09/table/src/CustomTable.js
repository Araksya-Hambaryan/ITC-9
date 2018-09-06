import React from 'react';
import AlternativeTable from './AlternativeTable.js';

export default class CustomTable extends React.Component {
    constructor(props) {
        super(props);
        this.products = getProducts();
        this.state = {
            data: this.products
        };
    }

    // onAddRow = (row) => {
    //   this.products.push(row);
    //   this.setState({
    //     data: this.products
    //   });
    // }

    onDeleteRow = (row) => {
        this.products = this.products.filter((product) => {
            return product.id !== row[0];
        });

        this.setState({
            data: this.products
        });
    }

    render() {
        return (
            <AlternativeTable
                onDeleteRow={this.onDeleteRow}
                {...this.state} />
        );
    }
}

function getProducts() {
    const products = [];
    const startId = products.length;
    for (let i = 1; i <= 12; i++) {
        let date;
        if (i < 10) {
            date = "01.0" + i + ".2018";
        } else {
            date = "01." + i + ".2018";
        }
        products.push({
            date: date,
            dailyExp: Math.floor((Math.random() * 100) + 500),
            totalExp: Math.floor((Math.random() * 5000) + 10000)
        });
    }
    return products;
}