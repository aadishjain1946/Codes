def main():
    myString = input()
    first = myString.split("(")[1]
    second = first.split(")")[0]
    result = "(" + second + ")"
    print("Output:", result)


if __name__ == "__main__":
    main()
