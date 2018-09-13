const mysql = require('mysql');

const connection = mysql.createConnection({
    host: 'localhost',
    user: 'root',
    password: 'password',
    database: 'restaurantsDB'
});

exports.removeItem = function(tableName, id, res) {
    connection.connect(function (err) {
        if (err) throw err;
        var sql = `DELETE FROM ${tableName} WHERE id = ${Number(id)};`;
        connection.query(sql, function (err, result) {
            if (err) throw err;
            console.log('Value Deleted!!!');
            res.end();
        });
    });
}