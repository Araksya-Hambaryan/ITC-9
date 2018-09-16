const pg = require('pg');
const pool = new pg.Pool({
    user: 'postgres',
    host: 'localhost',
    database: 'files',
    password: 'postgres',
    port: '5432'
});

exports.insertPath = function (tableName, path) {
    pool.query(`INSERT into  ${tableName} (path) VALUES(\"${path}\");`, (err, res) => {
        console.log(err, res);
    });
}

exports.getPaths = function (tableName) {
    pool.query(`SELECT * FROM ${tableName};`, (err, res) => {
        console.log(res);
    });
}