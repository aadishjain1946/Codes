def Multiply2(mylist):
    print(mylist[0] * 2, end="")
    for i in range(1, len(mylist)):
        print("", end=".")
        print(mylist[i] * 2, end="")


def main():
    mylist = [1, 2, 3, 4]
    Multiply2(mylist)


if __name__ == "__main__":
    main()
