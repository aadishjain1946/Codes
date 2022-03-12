def main():
    s = int(input("Enter the value of s: "))
    arr = [int(i) for i in input().split(" ")]
    if s == 1:
        sum = 0
        for i in range(len(arr)):
            if arr[i] >= 6 and arr[i] <= 60:
                sum += arr[i]
        print("Sum of numbers between 6 and 60:", sum)
    elif s == 2:
        sum = 0
        for i in range(len(arr)):
            if arr[i] >= 0:
                sum += arr[i]
        print("Sum of positive number:", sum)
    else:
        for i in range(len(arr)):
            if arr[i] % 4 == 0:
                print(arr[i], end=" ")


if __name__ == "__main__":
    main()
