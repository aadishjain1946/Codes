countUpperCase = 0
countLowerCase = 0
with open("input.txt", "r") as txt_file:
    fileContent = txt_file.readlines()
    for i in range(len(fileContent)):
        text = fileContent[i]
        for j in range(len(text)):
            if text[j].isupper():
                countUpperCase += 1
            else:
                countLowerCase += 1

print("Count of upper case letters:", countUpperCase)
print("Count of lower case letters:", countLowerCase)
