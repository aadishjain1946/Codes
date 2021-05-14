# Taking input from user
print("Sample Input:")
N, updt = (int(i) for i in input().split(" "))
updateInp = [[int(i) for i in input().split(" ")] for k in range(updt)]
# initializing s0
s0 = ""
for i in range(N):
    s0 += "0"
# outputString to store the lexicographically largest string
outputString = ""
# generating string for all given ranges
for i in range(updt):
    for j in range(updateInp[i][0], updateInp[i][1]+1):
        if s0[j-1] == "1":
            if j == len(s0):
                s0 = s0[:j-1] + "0"
                continue
            s0 = s0[:j-1] + "0" + s0[j:]
        else:
            if j == len(s0):
                s0 = s0[:j-1] + "1"
                continue
            s0 = s0[:j-1] + "1" + s0[j:]

    # updating outputString
    if s0 > outputString:
        outputString = s0
# printing output
print("Sample Output:")
print(outputString)
