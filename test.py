import random

# function to return all the tempratures above freezing tempratures


def getFreezingTemprature(tempratures):
    return [i for i in tempratures if i > 32]


# creating an empty list
tempratures = []
# adding 24 random elements to the list
for i in range(24):
    tempratures.append(random.randint(10, 55))

tempratures = sorted(tempratures)
# printing tempratures in ascending order
print("Here are the tempratures, sorted asceding")
for i in range(len(tempratures)):
    print(tempratures[i], end=" ")
# checking if temprature 32 is present in the list or not
if 32 in tempratures:
    print("\nThe first instance of 32 is at", tempratures.index(32))
else:
    tempratures.insert(4, 32)
    print()
# print first 6 elements in the list
print("The first six elements are now", tempratures[:6])
# calling function to get freezing tempratures
freezingTemp = getFreezingTemprature(tempratures)
freezingTemp = sorted(freezingTemp, reverse=True)
# printing freezing tempratures in descending order
print("The coldest temprature above freezing is", freezingTemp[-1])
print("Here are the above freezing tempratures, sorted descending")
for i in range(len(freezingTemp)):
    print(freezingTemp[i], end=" ")
