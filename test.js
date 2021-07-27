//declaring array
var sports = [];
var n = 4;
//using for loop to promt user to enter sport name 4 times
for (var i = 0; i < n; i++) {
    sports[i] = prompt('Enter Sports ' + (i + 1));
}
//printing output
console.log("Output: ");
for (var i = 0; i < n; i++) {
    console.log(sports[i]);
}