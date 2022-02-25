let strArray = ["Javascript", "Java", "Java", "Python", "Rust", "Java", "Python", "Go", "Javascript", "Python"]
let myDict = {}

for (let i = 0; i < strArray.length; i++) {
    if (strArray[i] == "Java") {
        continue;
    }
    if (strArray[i] in myDict) {
        myDict[strArray[i]] += 1
    } else {
        myDict[strArray[i]] = 1
    }
}
console.log(myDict)
