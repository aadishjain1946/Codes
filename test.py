def printCrazyLetter(str1, str2, str3):
    str1 = str1.upper()
    print(str1, end="")
    str2 = reversed(str2)
    print(str2, end="")
    for i in range(len(str3)):
        print(str3[i], end=" ")


def main():
    # prompt user to enter a string
    inputStr = input("Enter a string: ")
    # using inbuilt function to convert string to lower case
    resultLowr = inputStr.lower()
    # using inbuilt function to convert string to upper case
    resultUppr = inputStr.upper()
    # printing the output
    print("String in UpperCase:", resultUppr)
    print("String in LowerCase:", resultLowr)


if __name__ == "__main__":
    main()
