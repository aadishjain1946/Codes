#declaring color and ratio list
colorList = ["Red", "Yellow", "Blue"]
ratioList = []
#prompt user to enter ratio of colors
for i in range(len(colorList)):
    r = int(input("input ratio for " + colorList[i] + ": "))
    ratioList.append(r)
#printing the ratio of color
for i in range(len(colorList)):
    print(colorList[i] + " " + str(ratioList[i]) + " " + "parts")
