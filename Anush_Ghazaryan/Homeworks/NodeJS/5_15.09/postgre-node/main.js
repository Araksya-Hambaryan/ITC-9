const express = require('express');
var app = express();

var coockieParser = require('cookie-parser');
var session = require('express-session');
var bodyParser = require('body-parser');
var path = require('path');
 
app.use(bodyParser.json());
var port = 8081;

var users = [
    {username: 'admin', password: '12345'},
    {username: 'foo', password: 'bar'},
    {username: 'user', password: 'test'}
]

var sessionHandler = require('./js/session-handler');
var store = sessionHandler.createStore();

app.use(coockieParser());

app.use(session({
  store: store,
  resave: false,
  saveUninitialized: true,
  secret: 'supersecret'
}));

app.get('/',function(req, res){
  res.sendFile(path.join(__dirname, 'index.html'));
});

app.post('/login',function(req,res){
  var foundUser;
  for(var i = 0; i < user.length; ++i){
    var u = users[i];
    if(u.username == req.body.username && u.password == req.body.password){
      foundUser = u.username;
      break;
    }
  }
  if(foundUser !== undefined){
    req.session.username = foundUser;
    console.log("Login succeded : ", req.session.username);
    res.send('Login succesful: '+ 'sessionID : ' + req.session.id + 'user : '+ req.session.username);
  } else{
    console.log("Login failed : ", req.body.username);
    res.status(401).send('Login error');
  }
});

app.get('./check', function(req,res){
  if(req.session.username){
    res.set('Content-Type','text/html');
    res.send('<h2>User'+ req.session.username + ' is logged in !</h2>');

  } else{
    res.send('not logged in');
  }
});
app.listen(port, function(){
  console.log('app is running on port : '+ port);
});









// const router = express.Router();

// router.get('/', (req,res)=>{
//   res.json({
//     message : 'lock'
//   });
// });


// module.exports = router;