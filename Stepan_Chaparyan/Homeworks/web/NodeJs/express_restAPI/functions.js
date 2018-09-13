const mysql = require('mysql');
const restaurantsData = require('./dummy_data');
const restaurants = restaurantsData['restaurants'];

var connection = mysql.createConnection({
    host: 'localhost',
    user: 'root',
    password: 'XXXXXXXXX',
    database: 'restourants'
});

exports.getOneData = function(req, res) {
    var sqlCommand = 'SELECT * FROM restourants';
    connection.query(sqlCommand, function (err, resault) {
        if (err) throw err;
        res.send(resault);
    }); 
}

exports.getAllData = function(req, res) {
    const restaurantId = req.params.id;
    if (restaurantId >= restaurants.length) {
        res.send(404, 'restaurant not found')
    } else {
        var sqlCommand = 'SELECT * FROM restourants';
        connection.query(sqlCommand, function (err, resault) {
            if (err) throw err;
            res.send(resault[restaurantId - 1]);
        });
    }
}

exports.addData = function(req, res) {
    const restName = req.body.name;
    const restAddress = req.body.address;
    if(!restName || !restAddress) {
        res.status(400).send('Bad request');
    }
    const newrestaurant = {
        id: restaurants.length + 1,
        name: restName,
        address: restAddress
    }
    var sqlCommand = `INSERT INTO restourants (name, address) values(\"${restName}\", \"${restAddress}")`;  
    connection.query(sqlCommand, function(err, result) {
        if (err) throw err;
    });
    restaurants.push(newrestaurant);
    res.send(restaurants);
}

exports.updateData = function(req, res) {
    const restId = req.body.id;
    const restName = req.body.name;
    const restAddress = req.body.address;
    if(!restName || !restAddress || !restId) {
        res.status(400).send('Bad request');
    }
    const newrestaurant = {
        id: restId,
        name: restName,
        address: restAddress
    }
    var sqlCommand = `UPDATE restourants SET name = \"${restName}\", address = \"${restAddress}\" WHERE id = \"${restId}\";`;  
    connection.query(sqlCommand, function(err, result) {
        if (err) throw err;
    });
    restaurants.push(newrestaurant);
    res.send(restaurants);
}

exports.deleteData = function(req, res) {
    const restaurantsId = req.params.id;
    var sql = `DELETE FROM restourants WHERE id = ${restaurantsId};`;
    connection.query(sql, function (err, result) {
      if (err) throw err;
    });
    restaurants.splice(restaurantsId-1,1);
    res.send(restaurants);
}