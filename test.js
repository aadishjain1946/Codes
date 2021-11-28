const checkDate = function (date) {
    return (new Date(date) !== "Invalid Date") && !isNaN(new Date(date));
}
var dat = new Date("2012/2/30");
console.log(checkDate(dat));
