n1 = int(input("Enter n1: "))
n2 = int(input("Enter n2: "))

while (n1 >= n2 or n1<=0 or n2<=0):
    print("Invalid Input!!")
    n1 = int(input("Enter n1: "))
    n2 = int(input("Enter n2: "))

ans1 = 0
ans2 = 0
ans3 = 0
for i in range(n1, n2 + 1):
    if ((i % 7 == 0) and (i % 3 != 0)):
        ans1 += 1
    if ((i % 5 == 0)):
        ans2 += 1
    if ((i % 5 == 0) and (i % 9 == 0)):
        ans3 += 1

print("Number of integers that satisfy A from", n1, "to", n2, ":", ans1)
print("Number of integers that satisfy B from", n1, "to", n2, ":", ans2)
print("Number of integers that satisfy C from", n1, "to", n2, ":", ans3)
