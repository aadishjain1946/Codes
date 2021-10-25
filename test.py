def calMinGunFire(n1, n2):
    if n1 == 0 and n2 == 0:
        return 0
    if n1 <= 0:
        return 99999
    if n2 <= 0:
        return 99999

    ans1 = calMinGunFire(n1 - 1, n2 - 1) + 1
    ans2 = 99999
    ans3 = 99999
    if n1 < n2:
        ans2 = calMinGunFire(n1 * 2, n2) + 1
    if n1 > n2:
        ans3 = calMinGunFire(n1, n2 * 2) + 1
    return min(ans1, min(ans2, ans3))


print(calMinGunFire(2, 6))
