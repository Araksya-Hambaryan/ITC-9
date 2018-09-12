var mysql = require('mysql');

function selectTable() {
    var connection = mysql.createConnection({
        host: 'localhost',
        user: 'root',
        password: 'password',
        database: 'restaurantDB'
    });

    connection.connect(function (err) {
        if (err) throw err;
        var sqlCommand = 'SELECT * FROM restaurants';
        connection.query(sqlCommand, function (err, result) {
            if (err) throw err;
            console.log(result);
        });
    });
}