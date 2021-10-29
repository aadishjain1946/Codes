def helper(x, y):
    result = 0
    i = 1
    while (True):
        flag = False
        while x > 0:
            if x % 10 == y:
                flag = True
            x /= 10
        if flag == False:
            break
        x += i
        i += 1
        result += 1
    return result


t = int(input())
for k in range(t):
    x, y = (int(i) for i in input().split(" "))
    print(helper(x, y))
