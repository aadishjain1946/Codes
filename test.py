def paurSum(arr,n,target):
    res = {}
    for i in range(n):
        if target - arr[i] in res:
            return [res[target - arr[i]], i]
        else:
            res[arr[i]] = i

arr = [int(i) for i in input("Enter Array Elements: ").split(" ")]
target = int(input("Enter target: "))
n = len(arr)
print("Output: ",paurSum(arr,n,target))

