
def gcd(a, b):
    if (a == 0 or b == 0):
        return False
    if (a == b):
        return a
    if (a > b):
        return gcd(a-b, b)

    return gcd(a, b-a)


def coprime(a, arr, start_i, start_j):
    count = {}
    for j in range(start_j+1, len(arr[0])):
        print((a, arr[start_i][j]))
        if ((gcd(a, arr[start_i][j]) == 1)):
            count[(a, arr[start_i][j])] = 1

    for i in range(start_i+1, len(arr)):
        print((a, arr[i][len(arr[0])-1]))
        if ((gcd(a, arr[i][len(arr[0])-1]) == 1)):
            count[(a, arr[i][len(arr[0])-1])] = 1
    return count


def numOfPairs(arr):
    count = {}
    for i in range(len(arr)):
        for j in range(len(arr[0])):
            sudo = coprime(arr[i][j], arr, i, j)
            count.update(sudo)

    return len(count)


n, m = (int(i) for i in input().split(" "))
arr = []
for i in range(1, n+1):
    sudo = []
    for j in range(1, m+1):
        sudo.append(i+j)
    arr.append(sudo)
print(arr)
print(numOfPairs(arr))
