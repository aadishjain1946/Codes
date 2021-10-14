function randomizeArray(arr) {
    for (let index = arr.length - 1; index > 0; index--) {
        const k = Math.floor(Math.random() * (index + 1));
        [arr[index], arr[k]] = [arr[k], arr[index]];
    }
}
arr = [-7, -1, 9, 11, 12, 18, 34, 67, 78, 98]
randomizeArray(arr)
console.log(arr)
