var mySql = require('mysql');


var connection = mySql.createConnection({
    host: 'localhost',
    user: 'root',
    password: 'password',
    database: 'restorantsDB'
});

connection.connect(function(error) {
    if(error) throw error;
    console.log("Connected!"); 
    var sqlCommand = `CREATE TABLE IF NOT EXISTS restVanadzor (
        id INTEGER PRIMARY KEY AUTO_INCREMENT,
        name VARCHAR(50) NOT NULL,
        address VARCHAR(50) NOT NULL
        )`;

    connection.query(sqlCommand, function(error, result) {
        if(error) throw error;
        console.log("Table created!");
        console.log(result);
    });

    

});