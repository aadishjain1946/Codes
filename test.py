def main():
    name = "Abcd"
    Id = 123
    bookPrice = 10
    # loop to perform operations 4 times
    for i in range(4):
        # prompt user to enter number of books and name
        n = int(input("How many book you want to buy: "))
        custName = input("Enter your name: ")
        print("Customer Name:", custName)
        totalCost = 0
        # calculating book cost
        if n > 100:
            totalCost = n * bookPrice * 0.4
            print("Output: Huge bulk")
        elif n >= 50 and n <= 100:
            totalCost = n * bookPrice * 0.2
            print("Output: Medium bulk")
            break
        else:
            totalCost = n * bookPrice * 0.05
            print("Output: Small bulk")

        print("Total Cost:", totalCost)


if __name__ == "__main__":
    main()
