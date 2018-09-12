var mongoClient = require('mongodb').MongoClient;

module.exports = {
 createDB: function() {
    var url = 'mongodb://localhost:27017';

    mongoClient.connect(url, function (err, db) {
        if (err) throw err;
        console.log("DB created");
        db.close();
    });
}
}
