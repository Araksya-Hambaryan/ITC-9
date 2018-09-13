var mySql = require('mysql');


var connection = mySql.createConnection({
    host: 'localhost',
    user: 'root',
    password: 'karen12',
    database: 'restorantsDB'
});

connection.connect(function(err) {
    if (err) throw err;
    console.log("Connected!");
    var sql = "INSERT INTO restVanadzor (name, address) VALUES ?";
    var values = [
      ['Afina Half', 'Yerevan hyf 71'],
      ['Tashir Pizza', 'Tigran Mttes 4'],
      ['Lori', 'Tumanyan ST 5'],
      ['Vernatun', 'Tumanyan ST 14'],
      ['Izagri', 'Vardananc 45'],
      ['Sandy', 'Ocean blvd 2'],
      ['KFC', 'Tigran Mtess 14'],
      ['Asteri', 'Miasnikyan 12'],
      ['Turs', 'Khorenatsi Street 5'],
      ['Elkani', 'Zoravr Andranik 21']
    ];
    connection.query(sql, [values], function (err, result) {
      if (err) throw err;
      console.log("Number of records inserted: " + result.affectedRows);
    });
  });