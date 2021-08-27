#include <iostream>
#include <bits/stdc++.h>
using namespace std;
double rnd(double val, unsigned char dec)
{
    double pw = pow(10.0f, (double)dec);
    return round(val * pw) / pw;
}
int main()
{
    double price, tax, total = 0;
    cout << "Enter the price: ";
    cin >> price;
    cout << "  $" << price << '\n';
    tax = price * 0.075;
    tax = rnd(tax, 1);
    cout << "+ $" << tax << "\n";
    total = price + tax;
    cout << "==========\n";
    cout << "  $" << total << '\n';
    return 0;
}
