const express = require('express');
const app = express();
var mySql = require('mysql');
const Joi = require('joi');

app.use(express.json());


var connection = mySql.createConnection({
  host: 'localhost',
  user: 'root',
  password: 'password',
  database: 'restorantsDB'
});


connection.connect(function (error) {
  if (error) throw error;
  console.log("Connected!");
  var sqlCommand;

  app.get('/api/restaurants', (req, res) => {
    sqlCommand = `SELECT * FROM restVanadzor`;
    connection.query(sqlCommand, function (error, result) {
      if (error) throw error;
      res.send(result);
    });
  });


  app.get('/api/restaurants/:id', (req, res) => {
    const restID = req.params.id;
    sqlCommand = `SELECT * FROM restVanadzor WHERE id = \'${restID}\'`;
    connection.query(sqlCommand, function (error, result) {
      if (error) throw error;
      res.send(result);
    });


  });

  app.post('/api/addRestaurant', (req, res) => {
    console.log(req.body);
    const name = req.body.name;
    const address = req.body.address;
    if (name.length < 3 || !address) {
      res.status(400).send('Bed request!');
    } else {
      sqlCommand = `INSERT INTO restVanadzor (name, address) 
        VALUES (\'${name}\', \'${address}\')`;
      connection.query(sqlCommand, function (error, result) {
        if (error) throw error;
      });
      res.send("Inserted!");
    }
  });

  app.delete('/api/delRestaurant/:id', (req, res) => {
    const restID = req.params.id;

    if (false) {
      res.status(400).send('Bed request!');
    } else {
      sqlCommand = `DELETE FROM restVanadzor WHERE id = \'${restID}\'`;
      connection.query(sqlCommand, function (error, result) {
        if (error) throw error;
      });
      res.send("Deleted");
    }
  });

  app.put('/api/updateRestaurant/:id', (req, res) => {
    const restID = req.params.id;
    const name = req.body.name;
    const address = req.body.address;
    if (name.length < 3 || !address) {
      res.status(400).send('Bed request!');
    } else {
      sqlCommand = `UPDATE restVanadzor SET name = \'${name}\', address = \'${address}\' WHERE id = \'${restID}\'`;
      connection.query(sqlCommand, function (error, result) {
        if (error) throw error;
      });
      res.send("Updateted!");
    }
  });

});


app.listen(3001, () => {
  console.log('Listenning...3001');
});


























