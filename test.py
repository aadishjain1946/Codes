import numpy as np


def findBig(arr):
    output = []
    for i in range(len(arr)):
        for j in range(len(arr[i])):
            if i > 0 and i < len(arr) - 1:
                if (arr[i - 1][j] + arr[i + 1][j]) < arr[i][j]:
                    output.append([i, j])
    return output


arr = np.array([[19, 7, 7, 3, 2, 16], [10, 5, 6, 5, 2, 6], [3, 13, 1, 1, 7, 1],
                [2, 2, 9, 2, 2, 19]])

print(findBig(arr))
