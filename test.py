def main():
    n1, n2 = (int(i) for i in input("Enter 2 numbers: ").split(" "))
    print("Sum:", n1 + n2)
    print("Bitwise XOR: ", n1 ^ n2)
    print("Bitwise OR: ", n1 ^ n2)


if __name__ == "__main__":
    main()
