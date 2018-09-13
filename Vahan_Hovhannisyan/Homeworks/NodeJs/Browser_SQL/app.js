const express = require('express');
var app = express();
var mysql = require('mysql');
let restaurants;
let specificRestaurant;
let lengthOfArr;
let events = require('events');
let eventEmitter = new events.EventEmitter();

app.use(express.json());

let connection = mysql.createConnection({
    host: 'localhost',
    user: 'root',
    password: 'password',
    database: 'myDB1'
});

connection.connect(function (err) {
    if (err) throw err;
    connection.query('CREATE DATABASE IF NOT EXISTS myDB1', function (err, result) {
        if (err) throw err;
        console.log("Connection created");
        createTable('restaurantsTable');
    });
});

app.get('/api/restaurants', function (req, res) {
    new Promise((resolve, reject) => {
        selectAll('restaurantsTable');
        resolve();
    }).then(() => {
        console.log("Current json: ", restaurants);
        res.send(restaurants);
    });
});

app.get('/api/restaurants/:id', function (req, res) {
    const res_id = req.params.id;
    new Promise(function (resolve, reject) {
        selectAll('restaurantsTable');
        resolve();
    }).then(function () {
        selectSpecific('restaurantsTable', res_id);
        console.log("ID: " + res_id);
    }).then(function () {
        console.log("Current json item: ", specificRestaurant);
        setTimeout(() => {
            res.send(specificRestaurant);
        }, 250);
    });
});

app.post('/api/addRestaurant', function (req, res) {
    new Promise(function (resolve, reject) {
        selectAll('restaurantsTable');
        resolve();
    }).then(function () {
        let resName = req.body.name;
        let restAddress = req.body.address;
        insertIntoTable(resName, restAddress, 'restaurantsTable');
    }).then(function () {
        restaurants = selectAll('restaurantsTable');
    }).then(function () {
        res.send(restaurants);
    });
});

app.delete('/api/deleteRestaurant/:id', function (req, res) {
    const res_id = req.params.id - 1;
    new Promise(function (resolve, reject) {
        selectAll('restaurantsTable');
        resolve();
    }).then(function () {
        deleteById('restaurantsTable', res_id);
    }).then(function () {
        restaurants = selectAll('restaurantsTable');
    }).then(function () {
        res.send(restaurants);
    });
});

app.put('/api/putRestaurant/:id', function (req, res) {
    const resName = req.body.name;
    const restAddress = req.body.address;
    const res_id = req.params.id;
    console.log("ID " + res_id);
    console.log("name " + resName);
    console.log("address " + restAddress);
    new Promise(function (resolve, reject) {
        selectAll('restaurantsTable');
        resolve();
    }).then(function () {
        putById('restaurantsTable', res_id, resName, restAddress);
    }).then(function () {
        restaurants = selectAll('restaurantsTable');
    }).then(function () {
        res.send(restaurants);
    });
});

app.listen(8000, function () {
    console.log("Listening...");
});

function insertIntoTable(name, address, rest) {
    var sqlCommand = 'INSERT INTO ' + rest + ' (name, address) values(\"' + name + '\", \"' + address + '\")';
    connection.query(sqlCommand, function (err, result) {
        if (err) throw err;
    });
}

function selectSpecific(rest, id) {
    var sqlCommand = "SELECT * FROM " + rest + " WHERE id = " + id;
    connection.query(sqlCommand, function (err, result) {
        if (err) throw err;
        specificRestaurant = result;
    });
}

function selectAll(rest) {
    const sqlCommand = 'SELECT * FROM ' + rest;
    connection.query(sqlCommand, function (err, result) {
        if (err) throw err;
        restaurants = result;
    });
}

function createTable(rest) {
    var sqlCommand = 'CREATE TABLE IF NOT EXISTS ' + rest +
        '( id INTEGER PRIMARY KEY AUTO_INCREMENT,name VARCHAR(50) NOT NULL,address VARCHAR(50) NOT NULL );';
    connection.query(sqlCommand, function (err, result) {
        if (err) throw err;
        console.log("Created table " + rest);
    });
}

function getSize(rest) {
    const sqlCommand1 = 'SELECT COUNT(*) FROM ' + rest + ';';
    connection.query(sqlCommand1, function (err, result) {
        if (err) {
            console.log("Error in Select COUNT");
            throw err;
        }
        result = JSON.stringify(result);
        lengthOfArr = result[13] + result[14];
        console.log("+++++++++++++DESIRED ID " + lengthOfArr);
        eventEmitter.emit('gotLength');
    });
}

function deleteById(rest, id) {
    const sqlCommand1 = 'DELETE FROM ' + rest + ' WHERE id = ' + id + ';';
    connection.query(sqlCommand1, function (err, result) {
        if (err) throw err;
        restaurants = result;
        lengthOfArr--;
    });
}


//Put not working (((
// function putById(rest, id, restName, restAddress) {
//     const sqlCommand1 = 'UPDATE ' + rest + ' SET name = '+'' + restName + ''+', address = ' + restAddress +
//         ' WHERE id = ' + id;

//     connection.query(sqlCommand1, function (err, result) {
//         if (err) throw err;
//         restaurants = result;
//     });
// }