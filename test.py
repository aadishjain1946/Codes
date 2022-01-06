grade = int(input("Enter numerical grade: "))
if grade <= 100 and grade > 90:
    print("Character grade: A")
elif grade <= 90 and grade > 80:
    print("Character grade: B")
elif grade <= 80 and grade > 70:
    print("Character grade: C")
elif grade <= 70 and grade > 60:
    print("Character grade: D")
else:
    print("Character grade: E")
    