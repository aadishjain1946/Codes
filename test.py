import time


def fibonacci(num):
    if num == 0:
        return 0
    if num == 1:
        return 1
    return fibonacci(num - 1) + fibonacci(num - 2)


def main():
    num = int(input("Enter the nth value: "))
    start = time.perf_counter()
    fib = fibonacci(num)
    end = time.perf_counter()
    print("Output: ", fib)
    print(f"Fibonacci finished in {end - start:0.10f} seconds")


main()
