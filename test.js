//using queryString module to parse the given address
const querystring = require('querystring');

//Given Address
const url = "http://localhost:8080/?year=2017&month=July";
//splitting string using query parser module
var splitString = querystring.parse(url)
//printing output
process.stdout.write("Output: ")
for (let i in splitString) {
    process.stdout.write(splitString[i] + " ");
}