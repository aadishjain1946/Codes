#include <iostream>
using namespace std;
void printDenom(double amount)
{
    int quarters = 0, dimes = 0, nickels = 0, pennies = 0;
    double q = (double)(0.25), d = (double)(0.10), n = (double)(0.05), p = (double)(0.01);
    while ((amount*100) >= 1)
    {
        if (amount >= q)
        {
            amount -= q;
            quarters++;
        }
        else if (amount >= d)
        {
            amount -= d;
            dimes++;
        }
        else if (amount >= n)
        {
            amount -= n;
            nickels++;
        }
        else if (amount >= p)
        {
            amount -= p;
            pennies++;
        }
    }
    cout << "The coins are " << quarters
         << " quarters, " << dimes
         << " dimes, " << nickels
         << " nickels and " << pennies
         << " pennies" << '\n';
}
int main()
{
    double d, c;
    cout << "# of dollars: ";
    cin >> d;
    cout << "# of cents: ";
    cin >> c;
    double amount = (double)(d + (1.0)*(c / 100));
    printDenom(amount);
}
