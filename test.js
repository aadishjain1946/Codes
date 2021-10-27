var matrix = []
n = 3
m = 3
for (let i = 0; i < n; i++) {
    matrix[i] = [];
    for (let j = 0; j < m; j++) {
        matrix[i][j] = prompt('Enter a value for the cell ' + i + 'x' + j);
    }
}
console.log("The matrix is: ")
console.log(matrix)
isDiagonal = true
for (let i = 0; i < n; i++) {
    for (let j = 0; j < m; j++) {
        if (i != j && matrix[i][j] != 0) {
            isDiagonal = false;
        }
    }
}
console.log("The given matrix is diagonal? " + isDiagonal)
