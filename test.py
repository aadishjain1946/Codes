count_a = 0
count_b = 0
def ab_verify(s,ind):
    global count_a
    global count_b
    if ind == 0:
        count_a = 0
        count_b = 0
    if ind == len(s):
        if count_a >= count_b:
            return True
        else:
            return False
    if count_b > count_a:
        return False
    if s[ind] == 'a':
        count_a +=1
    else:
        count_b +=1
    return ab_verify(s,ind + 1)

def main():
    s = input('Enter a string to test: ')
    while s != 'quit':
        print(ab_verify(s, 0))
        s = input('Enter a string to test: ')


if __name__ == "__main__":
    main()
