def main():
    genes = [1, 2, 3, 4, 5, 6, 7, 8, 9, 0]
    n = int(input("Enter n: "))
    index = -1
    for i in range(len(genes)):
        if genes[i] == n:
            index = i
            break
    if index != -1:
        print("Genes found!")
    else:
        print("Genes not found!")


if __name__ == "__main__":
    main()
