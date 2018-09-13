var mySql = require('mysql');


var connection = mySql.createConnection({
    host: 'localhost',
    user: 'root',
    password: 'karen12'
});

connection.connect(function(error) {
    if(error) throw error;
    console.log("Connected!"); 
    connection.query('CREATE DATABASE IF NOT EXISTS restorantsDB', function(error, resalt) {
        if(error) throw error;
        console.log("Database created!");
    });

});