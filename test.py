C = []
for i in range(4):
    sudo = []
    for j in range(4):
        if i == j:
            sudo.append(1)
        else:
            sudo.append(0)
    C.append(sudo)

for i in range(4):
    for j in range(4):
        print(C[i][j],end=" ")
    print("")
    