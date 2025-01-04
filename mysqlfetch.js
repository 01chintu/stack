// fetch('https://jsonplaceholder.typicode.com/todos/1')
// .then((res) => res.json())
// .then((data) => console.log(data))

const mysql = require('node:mysql');

const mysql = mysql.createConnection({
  host: 'Chintu',
  user: 'root',
  password: 'Chintu@123'
});

mysql.connect((error)=>{
  if(error) {
    throw error;
  }else {
    console.log('connect database');
  }

  con.query('SELECT * FROM student', (error, result) => {
    if(error) throw error;
    console.log('result');
   });
});