def hopskangaroo(arr):

    if len(arr) <= 1:
        return 0

    if arr[0] == 0:
        return (0, 0)

    maxKangarooJump = arr[0]
    stepCount = arr[0]
    output = []
    output.append(0)
    jumpCount = 1

    for i in range(1, len(arr)):

        if i == len(arr) - 1:
            return (jumpCount, output)

        if maxKangarooJump < i + arr[i]:
            maxKangarooJump = i + arr[i]

        stepCount -= 1

        if stepCount == 0:
            jumpCount += 1
            output.append(i)
            if i >= maxKangarooJump:
                return (0, 0)

            stepCount = maxKangarooJump - i

    return (0, 0)


n = int(input("Input length: "))
arr = [int(i) for i in input("Input array: ").split(" ")]
jumps, output = hopskangaroo(arr)
print("Number of hops: ", jumps)
print("Indexes: ", output)
