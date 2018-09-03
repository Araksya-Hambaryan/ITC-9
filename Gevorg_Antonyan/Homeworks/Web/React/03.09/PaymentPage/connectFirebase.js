{/* <script src="https://www.gstatic.com/firebasejs/3.6.1/firebase.js">      
</script> */}

var config = {
    apiKey: "",
    authDomain: "",
    databaseURL: "",
    storageBucket: "",
    messagingSenderId: ""
};
var data;
firebase.initializeApp(config);
var ref = firebase.database().ref();
ref.once("value")
    .then(function (snapshot) {
        data = snapshot.child("userId ").val();  // set
        console.log(test);
    });
return data;