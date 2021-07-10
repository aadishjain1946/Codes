from random import randint


def main():
    # prompt user to enter number of randm number to generate
    n = int(input("Enter count of random integers: "))
    output = ""
    # generating random integers
    for i in range(n):
        value = randint(1, 500)
        output += str(value)
        output += " "
    # writing data to file
    file = open("data.txt", "w")
    file.write(output)
    file.close()


if __name__ == "__main__":
    main()
