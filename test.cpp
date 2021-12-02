#include <iostream>
#include "license.h"
using namespace std;
int main()
{
    license l1;
    cout << "What is the person's first name: ";
    cin >> l1.firstName;
    cout << "What is the person's last name: ";
    cin >> l1.lastName;
    cin.ignore();
    cout << "What is their address: ";
    getline(cin, l1.address);
    cout << "What is the city: ";
    getline(cin, l1.city);
    cout << "What is the state: ";
    getline(cin, l1.state);
    cout << "What is the zip code: ";
    cin >> l1.zipCode;
    cout << "What is the driver license number: ";
    cin >> l1.licenseNumber;
    cout << '\n';
    l1.print();
    return 0;
}
