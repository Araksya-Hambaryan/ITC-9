const pg = require('pg');
const pool = new pg.Pool({
    user: 'postgres',
    host: 'localhost',
    database: 'files',
    password: 'postgres',
    port: '5432'
});

exports.createTable = function (tableName) {
    pool.query(`CREATE TABLE IF NOT EXISTS ${tableName} (path TEXT NOT NULL)`, (err, res) => {
        console.log(err, res);
        pool.end();
    });
}