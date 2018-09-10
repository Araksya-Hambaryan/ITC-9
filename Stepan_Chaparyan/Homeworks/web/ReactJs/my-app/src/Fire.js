import firebase from 'firebase';

const config = {
    apiKey: "AIzaSyB5J-3dAwEfKCUvUbpbPakKY4CSYsE7APs",
    authDomain: "cookmaster-13adb.firebaseapp.com",
    databaseURL: "https://cookmaster-13adb.firebaseio.com",
    projectId: "cookmaster-13adb",
    storageBucket: "cookmaster-13adb.appspot.com",
    messagingSenderId: "116922402741"
  };
  const fire = firebase.initializeApp(config);
  export default fire;