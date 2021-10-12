function treeOneZeros(n) {
    let mid = n / 2
    if (n % 2 == 0) {
        mid = (n - 1) / 2
    }
    let left = mid
    let right = mid + 1
    let out = '0'.repeat(n)
    for (let i = 0; i < n; i++) {
        if (i % 2 == 0) {
            out = out.substring(0, left) + "1" + out.substring(left + 1)
            left--
        } else {
            out = out.substring(0, right) + "1" + out.substring(right + 1)
            right++
        }
        console.log(out)
    }

}
console.log("For n = 4")
treeOneZeros(4)
console.log("For n = 7")
treeOneZeros(7)
