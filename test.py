print("--Welcome to Assignments Systems--")
print("--Enter All Your Assignment Mark--")
print("Then It will Display Min, Max, Average, Value and Sum --")
print("\n")
arr = []
for i in range(6):
    arr.append(int(input()))

lowestScore = 999999
highestScore = 0
averageScore = 0
sumScore = 0

for i in range(6):
    if arr[i] < lowestScore:
        lowestScore = arr[i]
    if arr[i] > highestScore:
        highestScore = arr[i]
    averageScore += arr[i]
    sumScore += arr[i]

averageScore /= 6

print("The lowest score is:", lowestScore)
print("The highest score is:", highestScore)
print("Average score is:", averageScore)
print("Sum score is:", sumScore)

print("--Thank You For Using This Program--")
