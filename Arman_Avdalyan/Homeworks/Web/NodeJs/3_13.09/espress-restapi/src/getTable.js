const mysql = require('mysql');

const connection = mysql.createConnection({
    host: 'localhost',
    user: 'root',
    password: 'password',
    database: 'restaurantsDB'
});

exports.getTable = function (tableName, res) {
    var sqlCommand = `SELECT * FROM ${tableName};`;
    connection.query(sqlCommand, function (err, result) {
        if (err) throw err;
        res.send(result);
        res.end();
    });
}