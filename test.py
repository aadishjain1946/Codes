print("Input")
n = int(input())
arr = [int(i) for i in input().split(" ")]
l,r = (int(i) for i in input().split(" "))
print("Output")
for i in range(l-1, r):
    print(arr[i],end=" ")
    