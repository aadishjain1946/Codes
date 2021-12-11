import math


def main():
    answerA = pow(-19 + 100, 1 / 4)
    print("Answer a: ", answerA, "\n")
    m = int(input("Enter m: "))
    A0 = int(input("Enter A0: "))
    A = [int(i) for i in input("Enter A: ").split(" ")]
    B = [int(i) for i in input("Enter B: ").split(" ")]
    x = int(input("Enter x: "))
    l = int(input("Enter l: "))
    answerB = A0
    for i in range(m):
        answerB = A[i] * math.cos((math.pi * i * x) / l) + B[i] * math.sin(
            (math.pi * i * x) / l)
    print("\nAnswer b: ", answerB)


if __name__ == "__main__":
    main()
