strInput = input("Enter a string: ")
word = input("Enter a word: ")

if word.lower() in strInput.lower():
    print(True)
else:
    print(False)
