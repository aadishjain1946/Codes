n = int(input("Enter the number of element in the list:"))
arr = []
for i in range(n):
    arr.append(input("Enter element" + str(i + 1) + ":"))
print(arr)
removeWord = input("Enter a word to remove: ")
occurence = int(input("Enter the occurence to remove: "))
count = 0
freq = {}
freqSet = set()
output = []
for i in range(len(arr)):
    freqSet.add(arr[i])
    if arr[i] in freq:
        freq[arr[i]] += 1
    else:
        freq[arr[i]] = 1

    if arr[i] == removeWord:
        count += 1

    if count == occurence:
        print("Enter")
        count = 0
        continue
    output.append(arr[i])
print("The number of repetition is:", freq[removeWord])
print("Updated list is", output)
print("The distinct element are:", freqSet)
