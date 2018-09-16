const mysql = require('mysql');

const connection = mysql.createConnection({
    host: 'localhost',
    user: 'root',
    password: 'password',
    database: 'restaurantsDB'
});

exports.updateItem = function (tableName, jsonObj, res) {
    connection.connect(function (err) {
        if (err) throw err;
        var sql = `UPDATE  ${tableName} SET name = \"${jsonObj.name}\",
            address = \"${jsonObj.address}\" WHERE id = \"${jsonObj.id}\";`;
        connection.query(sql, function (err, result) {
            if (err) throw err;
            console.log('Values Updated!!!');
            res.end();
        });
    });
}