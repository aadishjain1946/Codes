def main():
    # printing sequence a
    i = 24
    print("a) ", end=" ")
    while i >= -6:
        print(i, end=" ")
        i -= 6

    # printing sequence b
    i = -10
    print("\nb) ", end=" ")
    while i <= 20:
        print(i, end=" ")
        i += 5

    # printing sequence c
    i = 18
    print("\nc) ", end=" ")
    while i <= 63:
        print(i, end=" ")
        i += 9

    # printing sequence d
    i = 18
    j = 0
    print("\nd) ", end=" ")
    while i <= 63:
        if j % 2 == 0:
            print(i, end=" ")
        else:
            print(i*-1, end=" ")
        i += 9
        j += 1


if __name__ == "__main__":
    main()
