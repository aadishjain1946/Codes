function matchmaker(obj) {
    function pred(input) {
        console.log(Object.keys(obj).keys())
        for (var x in obj) {
            console.log(typeof (x));
            if (obj[x] != input[x]) {
                return false;
            }
        }
        return true;
    }
    return pred;
}

var m = matchmaker({
    a: 'b',
    c: 3
});

console.log(m({
    a: 'b',
    c: 3,
    d: true
}));
console.log(m({
    a: 'b',
    c: 4,
    d: true
}));
console.log(m(328));