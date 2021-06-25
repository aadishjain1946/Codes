def even(nu):
    return nu % 2 == 0


def adult(nu):
    return nu >= 18


jhon = 19
terry = 18
print(not (even(jhon) or adult(jhon)))
print((not even(jhon)) and adult(jhon))
print(even(jhon) and adult(jhon))
print(not (even(jhon) and adult(jhon)))
print((not even(jhon)) or (not adult(jhon)))
print(even(terry) or adult(terry))
print(even(terry) and adult(terry))
print((not even(terry)) or adult(terry))
print((not even(jhon)) or adult(jhon))
