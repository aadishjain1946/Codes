ch1 = input()
ch2 = input()
l = 1
for i in range(5):
    temp = ""
    if i == 0 or i == 4:
        temp = ' '
    else:
        temp = ch1
    for j in range(6):
        print(temp, end="")
    for k in range(l):
        print(ch2, end="")
    if i < 2:
        l += 1
    else:
        l -= 1
    print("\n", end="")
