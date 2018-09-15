exports.get = (api, sqlCommand) => {
    app.get(api, (req, res) => {
        connection.query(sqlCommand, function (error, result) {
            if (error) throw error;
            res.send(result);
        });
    });
}