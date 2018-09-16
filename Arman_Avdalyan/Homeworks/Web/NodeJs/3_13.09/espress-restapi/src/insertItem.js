const mysql = require('mysql');

const connection = mysql.createConnection({
    host: 'localhost',
    user: 'root',
    password: 'password',
    database: 'restaurantsDB'
});

exports.insertItem = function (tableName, jsonObj, res) {
    connection.connect(function (err) {
        if (err) throw err;
        console.log('Connected !!!');
        var sqlCommand = `INSERT INTO ${tableName} (name, address) values(\"${jsonObj.name}\", \"${jsonObj.address}\");`;
        connection.query(sqlCommand, function (err, result) {
            if (err) throw err;
        });
    });
    res.end();
}