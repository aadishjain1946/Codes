# function to find and return sum of first n natural numbers
def sum(n):
    if(n == 0):
        return 0
    return n + sum(n-1)


def main():
    # prompt user to enter value of n
    n = int(input("Enter value of n: "))
    nSum = sum(n)
    # printing the sum of n natural numbers
    print("Sum of first n naturam numbers is", nSum)


if __name__ == "__main__":
    main()
