# function to return area of tiangle
def area_of_triangle(base, height):
    return 0.5*base*height


def main():
    # prompt user to enter base and height
    base, height = (int(i) for i in input("Enter base & height: ").split(" "))
    retryCount = 3
    i = 1
    while base > height and retryCount > 0:
        base, height = (int(i)
                        for i in input("Retry #" + str(i)+" Enter base & height: ").split(" "))
        retryCount -= 1
        i += 1
    if retryCount == 0:
        print("You have exhausted your 3 attempts please try again later")
    else:
        area = area_of_triangle(base, height)
        print("Area of triangle is", area)


if __name__ == "__main__":
    main()


