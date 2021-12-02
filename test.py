def getTopKIndex(arr, k):
    trackElement = {}
    for i in range(len(arr)):
        trackElement[i] = arr[i]
    output = []
    count = 0
    for key in sorted(trackElement, key=trackElement.get, reverse=True):
        if count == k:
            break
        output.append(key)
        count += 1
    return output


def getFirstOccurance(arr):
    for i in range(len(arr)):
        if arr[i] > 90:
            return i
    return -1


def getUniqueElement(arr):
    frequency = {}
    for i in range(len(arr)):
        if arr[i] in frequency:
            frequency[arr[i]] += 1
        else:
            frequency[arr[i]] = 1
    output = []
    for key in frequency:
        if frequency[key] == 1:
            output.append(key)

    return output


def main():
    print("Indices of top K values in array:",
          getTopKIndex([10, 20, 30, 40, 50, 60], 4))
    print("First occurrence of the value greater than 90:",
          getFirstOccurance([10, 76, 88, 567, 234, 2434, 66]))
    print(
        "Unique element of array:",
        getUniqueElement(
            [1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 4, 5, 6, 7, 7, 7, 8, 9, 10, 10]))


if __name__ == "__main__":
    main()
