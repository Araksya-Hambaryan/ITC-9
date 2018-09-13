const mysql = require('mysql');
const express = require('express');
const app = express();
const functions = require('./functions');
app.use(express.json());

var connection = mysql.createConnection({
    host: 'localhost',
    user: 'root',
    password: 'Aram050182@',
    database: 'restourants'
});

connection.connect(function(err) {
    var sqlCommand = 'CREATE TABLE IF NOT EXISTS restourants ( ' + 
                        'id INTEGER PRIMARY KEY AUTO_INCREMENT,' +
                        'name VARCHAR(50) NOT NULL, ' + 
                        'address VARCHAR(50) NOT NULL ' +
                        ' );';    
    connection.query(sqlCommand, function(err, result) {
        if (err) throw err;
    });
});

app.get('/', (req, res) => {
    res.send('Hello_ITC');
});

app.get('/api/restaurants', (req, res) => {
    functions.getOneData(req, res);   
});

app.get('/api/restaurants/:id', (req, res) => {
     functions.getAllData(req, res);   
 });

app.post('/api/addRestaurant', (req, res) => {
     functions.addData(req, res);
});

app.put('/api/updateRestaurant', (req, res) => {
    functions.updateData(req, res);
});

app.delete('/api/deleteRestaurant/:id', (req, res) => {
    functions.deleteData(req, res);
});

app.listen(8089, () => {
});