def q1(oriString, repeatCount, letterToRepeat):
    freq = {}
    for i in range(len(letterToRepeat)):
        if letterToRepeat[i] not in freq:
            freq[letterToRepeat[i].lower()] = 1
    newString = ""
    for i in range(len(oriString)):
        if oriString[i].lower() in freq:
            temp = ""
            for j in range(repeatCount):
                temp += oriString[i]
            newString += temp
        else:
            newString += oriString[i]
    return newString


print(q1("Aab", 2, "az"))
print(q1("Our cat is funny.", 5, "aeiou"))
print(q1("Our cat is funny.", 3, "zu"))
print(q1("Hi there, Jim!!!", 2, "jix"))
print(q1("caat", 0, "az"))
