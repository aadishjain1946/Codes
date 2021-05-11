//using express to create server
const express = require('express');
const path = require('path');
const app = express();

//get request to handle /Q1/table, /Q1/div, /Q1/grid, /Q2/a
app.get('/Q1/table', (req, res) => {
    res.sendFile(path.join(__dirname + 'PASTE PATH TO SOLUTION OF Q1 WITH TABLES'));
})
app.get('/Q1/div', (req, res) => {
    res.sendFile(path.join(__dirname + 'PASTE PATH TO SOLUTION OF Q1 WITH DIV'));
})
app.get('/Q1/grid', (req, res) => {
    res.sendFile(path.join(__dirname + 'PASTE PATH TO SOLUTION OF Q1 WITH GRID'));
})
app.get('/Q2/a', (req, res) => {
    res.sendFile(path.join(__dirname + 'PASTE PATH TO SOLUTION OF Q2 PART a'));
})

//creating server on port 3000
app.listen(process.env.PORT || 3000, (err) => {
    if (err) {
        throw err;
    } else {
        console.log("Server Started on Port 3000!!");
    }
})