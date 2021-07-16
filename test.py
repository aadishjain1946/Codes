# function to return most popular flavor from the given dictionary
def most_popular_flavor(flav_dict):
    cnt = 0
    most_pop = ""
    for i in flav_dict:
        if flav_dict[i] > cnt:
            cnt = flav_dict[i]
            most_pop = i
    return most_pop

# function to create dictionary of flavors


def create_flavor_dict(lines):
    flav_dict = {}
    for i in range(len(lines)):
        sudo = lines[i].split(" ")
        if sudo[1] in flav_dict:
            flav_dict[sudo[1]] += 1
        else:
            flav_dict[sudo[1]] = 1
    return flav_dict


def main():
    file1 = open("data.txt", "r+")
    str = (file1.read())
    print("Input")
    print(str)
    str = str.split("\n")
    flav_dict = create_flavor_dict(str)
    most_pop = most_popular_flavor(flav_dict)
    print("\nThe most popular flavor is:", most_pop)


if __name__ == "__main__":
    main()
