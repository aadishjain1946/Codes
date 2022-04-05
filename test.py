import math


def main():
    for i in range(1, 6):
        print("Cos", i, "->", math.cos(i))
        print("Sin", i, "->", math.sin(i))
        print("tan", i, "->", math.tan(i))
        print("degrees", i, "->", math.degrees(i))
        print("radians", i, "->", math.radians(i))
        print()

    str = "ILOVENVSU"
    asciiStr = [ord(c) for c in str]
    print(str, "to ASCII:", asciiStr)


if __name__ == "__main__":
    main()
