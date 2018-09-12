var mysql = require('mysql');

function insertIntoTable(name,address) {
    var connection = mysql.createConnection({
        host: 'localhost',
        user: 'root',
        password: 'password',
        database: 'restaurantsDB'
    });

    connection.connect( function (err) {
        if (err) throw err;
        var sqlCommand = 'INSERT INTO restaurants (name, address) values(' + name + ',' + address + ')';
        connection.query(sqlCommand, function (err, result) {
            if (err) throw err;
            console.log(result);
        });
    });
}