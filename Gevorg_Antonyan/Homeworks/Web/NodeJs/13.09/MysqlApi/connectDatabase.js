var mysql = require('mysql');

var connection = mysql.createConnection({
    host: 'localhost',
    user: 'root',
    password: 'gevor1994',
    database: 'restauranesDB'
});

connection.connect(function (err) {
    if (err) throw err;
    var sqlCommand = 'CREATE TABLE IF NOT EXISTS restaurantes1 ( ' +
        'id INTEGER AUTO_INCREMENT PRIMARY KEY,' +
        'name  VARCHAR(50) NOT NULL,' +
        'adress VARCHAR(50) NOT NULL' +
        ');';
    connection.query(sqlCommand, function (err, resoult) {
        if (err) throw err;
        console.log('Table created');
        console.log(resoult);
    });
});

module.exports = {
    connection: connection
}