#prompt user to enter 2 integers as input
print("Input")
a, b, c = (int(i) for i in input().split(" "))
print("Output")
##calculating and printing the output
ans = a * a + b * b + c * c
print(ans)