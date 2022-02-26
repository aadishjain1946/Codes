def main():
    kineticEnergy = float(input("Enter Kinetic Energy: "))
    totalEnergy = float(input("Enter Total Energy: "))
    potentialEnergy = totalEnergy - kineticEnergy
    print("Total Energy:", potentialEnergy)


if __name__ == "__main__":
    main()
