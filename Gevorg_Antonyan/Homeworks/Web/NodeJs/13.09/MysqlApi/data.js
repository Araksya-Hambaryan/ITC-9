const express = require('express');
const app = express();
const functions = require('./functionsDatabase');
const select = functions['select'];
const deleteNode = functions['deleteNode'];
const repleace = functions['repleace'];
const insert = functions['insert'];
const selectAll = functions['selectAll'];

app.use(express.json());

app.get('/', (req, res) => {
    res.send('Hello Itc');
});

app.get('/api/restaurants', (req, res) => {
    selectAll(res);
});

app.get('/api/restaurants/:id', (req, res) => {
    const restaurantId = req.params.id;
    select(restaurantId, res);
});

app.delete('/api/restaurants/delete/:id', (req, res) => {
    const restaurantId = req.params.id;
    deleteNode(restaurantId, res);
});

app.put('/api/putRestaurant', (req, res) => {
    const restID = req.body.id;
    const restName = req.body.name;
    const restAdress = req.body.address;
    repleace(restID, restName, restAdress, res);
});

app.post('/api/addRestaurant', (req, res) => {
    const restName = req.body.name;
    const restAdress = req.body.address;
    insert(restName, restAdress, res);
});

app.listen(3001, () => {
    console.log('Listening...');
});