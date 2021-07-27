# prompt user to enter space saperated element of list
arr = [int(i) for i in input("Input: ").split(" ")]
# declaring result array to store odd element from given list
result = []
# using for loop to iterate over the input list
# and storing odd element in the empty list declared above
for i in range(len(arr)):
    if arr[i] % 2 == 1:
        result.append(arr[i])
# printing output
print("Output: ", result)
