{/* <script src="https://www.gstatic.com/firebasejs/3.6.1/firebase.js">      
</script> */}
var 
var config = {
    apiKey: "",
    authDomain: "",
    databaseURL: "",
    storageBucket: "",
    messagingSenderId: ""
};

firebase.initializeApp(config);
var ref = firebase.database().ref();
ref.once("value")
    .then(function (snapshot) {
        this.refs. = snapshot.child("userId ").val();  // set
        console.log(test);
});
