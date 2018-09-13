const express = require('express');
const createDatabase = require('./createDB');
const table = require('./createTable');
const insItem = require('./insertItem');
const updItem = require('./updateItem');
const rmItem = require('./removeItem');
const get = require('./getTable');
const Joi = require('joi')
const TABLE_NAME = "restaurant";
const app = express();

const insertSchema = Joi.object().keys({
    name: Joi.string().alphanum().required(),
    address: Joi.string().alphanum().required()
});

const updateSchema = Joi.object().keys({
    id: Joi.number().integer().required(),
    name: Joi.string().alphanum().required(),
    address: Joi.string().alphanum().required()
});

const removeSchema = Joi.object().keys({
    id: Joi.number().integer().required(),
});

app.use(express.json());
createDatabase.createDB();
table.createTable(TABLE_NAME);

app.get('/api/restaurants', function (req, res) {
    get.getTable(TABLE_NAME, res);
});

app.post('/api/insertRestaurant', function (req, res) {
    insertSchema.validate(req.body, { abortEarly: false })
        .then(validatedChanges => {
            insItem.insertItem(TABLE_NAME, req.body, res);
        }).catch(validationError => {
            res.status(400).send(validationError.details.map(d => d.message));
        });
});

app.delete('/api/removeRestaurant', function (req, res) {
    removeSchema.validate(req.body, { abortEarly: false })
        .then(validatedChanges => {
            updItem.updateItem(TABLE_NAME, req, res);
        }).catch(validationError => {
            res.status(400).send(validationError.details.map(d => d.message));
        });
    rmItem.removeItem(TABLE_NAME, req.body.id, res);
});

app.put('/api/updateRestaurant', function (req, res) {
    updateSchema.validate(req.body, { abortEarly: false })
        .then(validatedChanges => {
            updItem.updateItem(TABLE_NAME, req, res);
        }).catch(validationError => {
            res.status(400).send(validationError.details.map(d => d.message));
        });
});

app.listen(8081, () => { console.log('Listening...'); });