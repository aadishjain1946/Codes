import math
def solveEquation():
    n = int(input("Enter an integer greater than or equal to 10: "))
    r = math.sqrt(n - 10)
    return r
r = solveEquation()
print("Output:",r)

