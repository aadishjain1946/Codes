def CentigradeToKelvin(C):
    return (C + 273.15)


def main():
    C = 100
    print("Temperature in Centigrade C = ", C)
    print("Temperature in Kelvin K = ", CentigradeToKelvin(C))


if __name__ == "__main__":
    main()
