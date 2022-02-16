output = 0
for (let i = 1; i <= 1000; i++) {
    if (i % 5 == 0 && i % 7 == 0) {
        output += i
    }
}
console.log("Sum of multiples of 5 and 7 less than 1000 is", output)
