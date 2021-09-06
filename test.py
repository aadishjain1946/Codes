def getCharFreq(strInp):
    output = {}
    for i in range(len(strInp)):
        if strInp[i].isalpha() == False:
            continue
        else:
            if strInp[i] in output:
                output[strInp[i]].append(i)
            else:
                temp = []
                temp.append(i)
                output[strInp[i]] = temp
    return output


strInp = input()
charDict = getCharFreq(strInp)
print(charDict)
