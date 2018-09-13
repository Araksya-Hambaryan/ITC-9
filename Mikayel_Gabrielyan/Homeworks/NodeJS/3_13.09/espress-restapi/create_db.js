
exports.createdb = function() {
    var connection = mysql.createConnection({
        host: 'localhost',
        user: 'root',
        password: 'test'
    });
    connection.connect(function (err) {
        if (err) throw err;
        console.log('Connected !!!');
        connection.query('CREATE DATABASE IF NOT EXISTS restaurantsDB', function (err, result) {
            if (err) throw err;
            console.log('DATABASE CREATED !!!');
        });
        createTable();
    });
}

function createTable() {
    connection = mysql.createConnection({
        host: 'localhost',
        user: 'root',
        password: 'test',
        database: 'restaurantsDB'
    });
    var sqlCommand = 'CREATE TABLE IF NOT EXISTS restaurants ( ' + 'id INTEGER PRIMARY KEY AUTO_INCREMENT, ' + 'name VARCHAR(50) NOT NULL, ' + 'address VARCHAR(50) NOT NULL);';
    connection.query(sqlCommand, function (err, result) {
        if (err) throw err;
        console.log('TABLE CREATED !!!');
        console.log(result);
    });
}