var mysql = require('mysql');

var connection = mysql.createConnection ({
    host: 'localhost',
    user: 'root',
    password: 'password',
    database: 'restaurantsDB'
});

connection.connect(function(err) {
    if (err) throw err;
    var sqlCommand = 'CREATE TABLE IF NOT EXISTS restaurants ( ' +
        'id INTEGER PRIMARY KEY AUTO_INCREMENT,' +
        'name VARCHAR(50) NOT NULL,' +
        'address VARCHAR(50) NOT NULL' +
        ' );';
    connection.query(sqlCommand, function(err, result) {
        if (err) throw err;
            console.log("Created table");
            console.log("results: " + result);
    });
});