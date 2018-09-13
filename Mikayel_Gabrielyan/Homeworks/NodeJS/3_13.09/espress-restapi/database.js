const connection = mysql.createConnection({
    host: 'localhost',
    user: 'root',
    password: 'test',
    database: 'restaurantsDB'
});

exports.getAllElements = function (res) {
    connection.connect(function (err) {
        if (err) throw err;
        console.log('Connected !!!');
        var sqlCommand = 'SELECT * FROM restaurants;';
        connection.query(sqlCommand, function (err, result) {
            if (err) throw err;
            console.log("All Elements Selected");
            res.send(result);
            res.end();
        });
    });
}

exports.getSimpleElement = function (req, res) {
    connection.connect(function (err) {
        if (err) throw err;
        console.log('Connected !!!');
        const restId = Number(req.params.id);
        const sqlCom = `SELECT max(id) FROM restaurants;`;
        var dbMaxId = 0;
        connection.query(sqlCom, function (err, result) {
            if (err) throw err;
            console.log("Max Id Selected");
            dbMaxId = result;
        });
        if (restId < 1 || restId > dbMaxId || restId === NaN) {
            res.status(400).send('Bad request');
        } else {
            var sqlCommand = `SELECT * FROM restaurants WHERE id=\"${restId}\";`;
            connection.query(sqlCommand, function (err, result) {
                if (err) throw err;
                console.log("Element Selected");
                res.send(result);
                res.end();
            });
        }
    });
}

exports.insertElement = function (jsonObj, res) {
    connection.connect(function (err) {
        if (err) throw err;
        console.log('Connected !!!');
        if (!jsonObj.name || !jsonObj.address) {
            res.status(400).send('Bad request');
        } else {
            var sqlCommand = `INSERT INTO restaurants (name, address) values(\"${jsonObj.name}\", \"${jsonObj.address}\");`;
            connection.query(sqlCommand, function (err, result) {
                if (err) throw err;
                console.log('Values Inserted !!!');
                res.end();
            });
        }
    });
}

exports.deleteElement = function (id, res) {
    connection.connect(function (err) {
        if (err) throw err;
        console.log('Connected !!!');
        var sql = `DELETE FROM restaurants WHERE id = ${Number(id)};`;
        connection.query(sql, function (err, result) {
            if (err) throw err;
            console.log('Value Deleted!!!');
            res.end();
        });
    });
}

exports.updateElement = function (jsonObj, res) {
    connection.connect(function (err) {
        if (err) throw err;
        console.log('Connected !!!');
        var sql = `UPDATE restaurants SET name = \"${jsonObj.name}\", address = \"${jsonObj.address}\" WHERE id = \"${jsonObj.id}\";`;
        connection.query(sql, function (err, result) {
            if (err) throw err;
            console.log('Values Updated!!!');
            res.end();
        });
    });
}