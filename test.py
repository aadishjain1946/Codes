def determing_stars(total):
    stars = ''
    if total >= 9:
        stars = "*****"
    elif total >= 8.0 and total <= 8.9:
        stars = "****"
    elif total >= 7.0 and total <= 7.9:
        stars = "***"
    elif total >= 6.0 and total <= 6.9:
        stars = "**"
    elif total >= 5.0 and total <= 5.9:
        stars = "*"
    else:
        stars = 'No Stars'
    return stars


i = 0
total = 0
while i < 5:
    num = int(input("Enter critic's score between 0 and 10: "))
    if num < 1 or num > 10:
        print("Error: ", end="")
    else:
        total += num
        i += 1

total /= 5
stars = determing_stars(total)
print("Your score of", total, "gives you", stars)
