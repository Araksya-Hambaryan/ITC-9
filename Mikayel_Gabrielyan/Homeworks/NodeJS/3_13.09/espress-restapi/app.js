const express = require('express');
var mysql = require('mysql');
const database = require('./database');
const createDB = require('./create_db');
const app = express();
app.use(express.json());

createDB.database();

app.get('/', function (req, res) {
    res.send("Hello!!!");
});

app.get('/api/restaurants', function (req, res) {
    database.getAllElements(res);
});

app.get('/api/restaurants/:id', function (req, res) {
   database.getSimpleElement(req, res);
});

app.post('/api/addRestaurant', function (req, res) {
    database.insertElement(req.body, res);
});

app.delete('/api/deleteRestaurant', function (req, res) {
    database.deleteElement(req.body.id, res);
});

app.post('/api/putRestaurant', function (req, res) {
    database.updateElement(req.body, res);
});

app.listen(8081, function () {
    console.log('Listening...');
});