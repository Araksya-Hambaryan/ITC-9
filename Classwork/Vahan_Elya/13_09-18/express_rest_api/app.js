
const express = require('express');
const app = express();
const restaurantsData = require('./dummy_data');

const restaurants = restaurantsData['restaurants'];

app.use(express.json());

app.get('/', function (req, res) {
    res.send('Hello...');
});

app.get('/api/restaurants', function (req, res) {
    res.send(restaurants);
});

app.get('/api/restaurants/:id', function (req, res) {
    const res_id = req.params.id;

    if (res_id >= restaurants.length) {
        res.send(404, "Restaurant not found");
    } else {
        res.send(restaurants[res_id]);
    }
});

app.post('/api/addRestaurant', function (req, res) {
    const resName = req.body.name;
    const restAddress = req.body.address;
    if (resName.length < 3 || !restAddress) {
        res.status(400).send("Bad Request!!!");
    }
    const newRestaurant = {
        id: restaurants.length + 1,
        name: resName,
        address: restAddress,
    }
    restaurants.push(newRestaurant);
    res.send(restaurants);
});

app.delete('/api/deleteRestaurant/:id', function (req, res) {
    const res_id = req.params.id - 1;
    console.log(res_id);
    if (res_id >= restaurants.length) {
        res.send(404, "Restaurant not found");
    } else {
        restaurants = restaurants.splice(res_id, 1);
        res.send(restaurants);
    }
});

app.put('/api/putRestaurant/:id', function (req, res) {
    const resName = req.body.name;
    const restAddress = req.body.address;
    const res_id = req.params.id - 1;
    console.log(res_id);
    const newRestaurant = {
        id: restaurants.length + 1,
        name: resName,
        address: restAddress,
    }
    if (res_id >= restaurants.length) {
        res.send(404, "Restaurant not found");
    } else {
        res.send(restaurants);
    }
});

app.listen(3000, function () {
    console.log("Listening...");
});


