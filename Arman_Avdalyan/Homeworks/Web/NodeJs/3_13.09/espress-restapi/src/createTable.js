const mysql = require('mysql');

const connection = mysql.createConnection({
    host: 'localhost',
    user: 'root',
    password: 'password',
    database: 'restaurantsDB'
});

exports.createTable = function (tableName) {
    var sqlCommand = `CREATE TABLE IF NOT EXISTS ${tableName} (` +
        'id INTEGER PRIMARY KEY AUTO_INCREMENT, ' +
        'name VARCHAR(50) NOT NULL, ' +
        'address VARCHAR(50) NOT NULL);';
    connection.query(sqlCommand, function (err, result) {
        if (err) throw err;
        console.log('TABLE CREATED !!!');
        console.log(result);
    });
}