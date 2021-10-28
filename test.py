def genMatrix(n):
    output = []
    output.append([0])
    i = 2
    while i <= n:
        curZero = i - 1
        curCount = 1
        temp = []
        for j in range(i):
            for k in range(curZero):
                temp.append(0)
            for k in range(curCount, 0, -1):
                temp.append(k)
            curCount += 1
            curZero -= 1
        output.append(temp)
        i += 1
    return output


n = int(input("Enter n: "))
arr = genMatrix(n)
print("Output: ")
for i in range(len(arr)):
    for j in range(len(arr[i])):
        print(arr[i][j], end=" ")
    print()
