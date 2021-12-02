#include <iostream>
#include <string>
using namespace std;
class license
{
public:
    string firstName, lastName, address, city, state;
    int zipCode, licenseNumber;
    license() {}
    license(string firstName, string lastName, string address, string city, string state, int zipCode, int licenseNumber)
    {
        this->firstName = firstName;
        this->lastName = lastName;
        this->address = address;
        this->city = city;
        this->state = state;
        this->zipCode = zipCode;
        this->licenseNumber = licenseNumber;
    }
    void print()
    {
        cout << this->state << " DRIVER'S LICENSE: " << this->licenseNumber << '\n';
        cout << this->firstName << " " << this->lastName << '\n';
        cout << this->address << '\n';
        cout << this->city << " " << this->state << " " << this->zipCode << '\n';
    }
};
