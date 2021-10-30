def decimalToHexaDecimal(n):

    result = ['0'] * 100
    index = 0
    while (n != 0):
        sudo = 0
        sudo = n % 16
        if (sudo < 10):
            result[index] = chr(sudo + 48)
            index = index + 1
        else:
            result[index] = chr(sudo + 55)
            index = index + 1
        n = int(n / 16)
    print("Output:", end=" ")
    j = index - 1
    while (j >= 0):
        print((result[j]), end="")
        j = j - 1


n = int(input("Enter an integer: "))
decimalToHexaDecimal(n)
