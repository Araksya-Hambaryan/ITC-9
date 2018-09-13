const mysql = require('mysql');

const connection = mysql.createConnection({
    host: 'localhost',
    user: 'root',
    password: 'password',
});

exports.createDB = function () {
    connection.connect(function (err) {
        if (err) throw err;
        connection.query('CREATE DATABASE IF NOT EXISTS restaurantsDB;', function (err, result) {
            if (err) throw err;
            console.log('DATABASE CREATED !!!');
        });
    });
}