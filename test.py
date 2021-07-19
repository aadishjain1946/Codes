A = [[0 for j in range(2)] for i in range(1)]
# prompt user to enter value of X,B,C
X = int(input("Enter Scaler Value of X: "))
print("Enter element of matrix(2X2) B:")
B = [[int(j) for j in input().split(" ")] for i in range(2)]
print("Enter element of matrix(2X1) C:")
C = [[int(j) for j in input().split(" ")] for i in range(2)]
# calculating product of vector B & C
output = [[0 for x in range(1)] for y in range(2)]
for i in range(len(B)):
    for j in range(len(C[0])):
        for k in range(len(C)):
            output[i][j] += B[i][k] * C[k][j]
# calculating values of vector A
sum = 0
for i in range(len(output)):
    for j in range(len(output[0])):
        sum += output[i][j]
A[0][0] = X/sum
A[0][1] = 1 - A[0][0]

print("The element of vector A:", A)
