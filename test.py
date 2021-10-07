num = int(input("Enter a number: "))

if num < 0:
    num *= -1

digitCount = 0
while num > 0:
    digitCount += 1
    num = int(num / 10)

if digitCount > 6:
    print("Output: Lots")
else:
    print("Output:", digitCount)
