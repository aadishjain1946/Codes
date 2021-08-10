def show_palindromic_triangle(n):
    for i in range(n):
        for k in range(n - 1 - i):
            print("", end=" ")
        for j in range(1, n):
            print(j, end=" ")
        for l in range(i, 1, -1):
            print(l, end=" ")
        print()


show_palindromic_triangle(5)