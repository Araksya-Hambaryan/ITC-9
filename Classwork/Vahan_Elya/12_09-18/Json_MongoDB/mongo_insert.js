var mongoClient = require('mongodb').MongoClient;

module.exports = {
    insertData: function(restArray) {
        var url = 'mongodb://localhost:27017';

        console.log("data ---------> ");
        console.log(restArray);

        mongoClient.connect(url, function (err, db) {
            if (err) throw err;
            var dbObj = db.db('my_db');
            /*var restaurantObj = {
                name: 'Tashir',
                address: 'Tigran Mec'
            };
            var restArray = [
                {
                    name: 'Tashir2',
                    address: 'Tigran Mec2'
                },
                {
                    name: 'Tashir3',
                    address: 'Tigran Mec3'
                },
                {
                    name: 'Tashir4',
                    address: 'Tigran Mec4'
                },
                {
                    name: 'Tashir5',
                    address: 'Tigran Mec5'
                }
            ];*/

            dbObj.collection('restaurants').insertOne(restArray, function (err, result) {
                if (err) throw err;
                console.log("Inserted");
                console.log(result);
                db.close();
            });

            // dbObj.collection('restaurants').insertMany(restArray, function (err, result) {
            //     if (err) throw err;
            //     console.log("Inserted");
            //     console.log(result);
            //     db.close();
            // });
        });
    }
}


