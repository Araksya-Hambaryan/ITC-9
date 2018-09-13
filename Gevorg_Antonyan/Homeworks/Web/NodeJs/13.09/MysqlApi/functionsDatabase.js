const connections = require('./connectDatabase');
const connection = connections['connection'];

var selectAll = function (res) {
    var sqlCommand = `SELECT * FROM restaurantes1`;
    connection.query(sqlCommand, function (err, resoult) {
        if (err) throw err;
        console.log("Inserted all");
        res.send(resoult);
    });
}

var select = function (restaurantId, res) {
    var sqlCommand = `SELECT * FROM restaurantes1 WHERE id=${restaurantId}`;
    connection.query(sqlCommand, function (err, resoult) {
        if (err) throw err;
        if (resoult.length == 0) {
            res.send(404, 'restaurant not found');
            res.end();
        } else {
            console.log("Inserted");
            res.send(resoult);
        }
    });
}

var deleteNode = function (restaurantId, res) {
    var sqlCommand = `DELETE FROM restaurantes1 WHERE id=${restaurantId}`;
    connection.query(sqlCommand, function (err, result) {
        if (err) throw err;
        console.log("remove element from id: " + restaurantId);
        res.send(result);
    });
}

var repleace = function (restID, restName, restAdress, res) {
    var sql = `REPLACE INTO restaurantes1 SET id = ${restID}, name = '${restName}', adress = '${restAdress}'`;
    connection.query(sql, function (err, result) {
        if (err) throw err;
        console.log(" record(s) updated");
        res.send(result);
    });
}

var insert = function (restName, restAdress, res) {
    var sqlCommand = 'INSERT INTO restaurantes1 (name, adress) values(\"' + restName + '\", \"' + restAdress + '\")';
    connection.query(sqlCommand, function (err, result) {
        if (err) throw err;
        console.log("result --------");
        console.log(result);
        res.send(result);
    });
}

module.exports = {
    selectAll: selectAll,
    select: select,
    deleteNode: deleteNode,
    repleace: repleace,
    insert: insert
}