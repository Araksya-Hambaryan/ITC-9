var mongoClient = require('mongodb').MongoClient;

module.exports = {
    createCollection: function () {

        var url = 'mongodb://localhost:27017';

        mongoClient.connect(url, function (err, db) {
            if (err) throw err;
            var dbObj = db.db('my_db');
            dbObj.createCollection('restaurants', function (err, result) {
                if (err) throw err;
                console.log("Collection created");
                console.log(result);
                db.close();
            });
        });

    }
}

