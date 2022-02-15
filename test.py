def main():
    inputList = [1, 2, 3, 4, 5]
    print("Input List: ", inputList)
    myMap = {}
    for i in inputList:
        if i not in myMap:
            myMap[i] = 2
        else:
            myMap[i] += 2
    output = []
    for i in myMap:
        for j in range(myMap[i]):
            output.append(i)
    print("Output List: ", output)


if __name__ == "__main__":
    main()
