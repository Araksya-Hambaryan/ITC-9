# Connect PgSql

connect-pgsql is a PostgreSQL session store backed by [node-postgres](https://github.com/brianc/node-postgres).

## Requirements

1. PostgreSQL 9.2 or higher

## Installation

Run `install.sql` script, then `npm install connect-pgsql`.

## Options

  - `table` (*optional*) - sessions table name (default: `connect_session`)
  - `getClient` (*required*) - provide postgresql client, see usage example

## Usage

    var connect = require('connect')
      , PgSqlStore = require('connect-pgsql')(connect)
      , pg = require('pg')
      , connectionString = 'pg://localhost/postgres';

    connect()
      .use(connect.session({
        store: new PgSqlStore({
          getClient = function(fn) { pg.connect(connectionString, fn); }
        }),
        secret: 'keyboard cat'
      }));

## License

MIT
