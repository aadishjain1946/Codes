gems = ["Emerald", "Ivory", "Jasper", "Ruby", "Garnet"]
prices = [1760, 2119, 1599, 3920, 3999]
qty = [0, 0, 0, 0, 0]
total = 0
for i in range(len(gems)):
    print("#" + str(i + 1), gems[i], ", Rs. " + str(prices[i]))
    qty[i] = int(input("Enter qty: "))
    total = qty[i] * prices[i]
print("\nTotal Bill")
for i in range(len(gems)):
    print(
        str(i + 1) + ". ", gems[i] + " X " + str(qty[i]) + " = Rs. " + str(
            (qty[i] * prices[i])))
if (total > 30000):
    print("Discount @5% - Rs." + str(total * 0.05))
    print("Total Rs. " + str(total - total * 0.05))
else:
    print("Total Rs. " + str(total))
