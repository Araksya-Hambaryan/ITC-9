let mysql = require('mysql');

let connection = mysql.createConnection({
    host: 'localhost',
    user: 'root',
    password: 'password'
});

connection.connect(function(err){
    if(err) throw err;
    console.log("connected!");
    connection.query('CREATE DATABASE IF NOT EXISTS restaurantsDB', function(err, result) {
        if (err) throw err;
        console.log("Database created");
    });
});
