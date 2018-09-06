import React from 'react';
import { BootstrapTable, TableHeaderColumn } from 'react-bootstrap-table';

export default class AlternativeTable extends React.Component {
    constructor(props) {
        super(props);
    }

    remote(remoteObj) {
        remoteObj.cellEdit = false;
        remoteObj.insertRow = false;
        remoteObj.dropRow = false;
        return remoteObj;
    }

    render() {
        const selectRow = {
            mode: 'checkbox',
            cliclToSelct: true
        };
        return (
            <BootstrapTable data={this.props.data}
                selectRow={selectRow}
                remote={this.remote}
                deleteRow
                search pagination
                options={{
                    onDeleteRow: this.props.onDeleteRow,
                }}>
                <TableHeaderColumn dataField='date' isKey={true} dataSort>Date</TableHeaderColumn>
                <TableHeaderColumn dataField='dailyExp' dataSort>Daily Expenses</TableHeaderColumn>
                <TableHeaderColumn dataField='totalExp' dataSort>Total Expenses</TableHeaderColumn>
            </BootstrapTable>
        );
    }
}