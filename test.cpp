#include <iostream>
using namespace std;
//function to calculate sum of the given series
double calcSum(double n, double i, double x)
{
    if (i >= n)
    {
        double sum = (i / x);
        return sum;
    }
    double sum = calcSum(n, i + 1, x);
    if (((int)i % 2) != 0)
    {
        sum += (i / x);
    }
    else
    {
        sum -= (i / x);
    }
    return sum;
}
int main()
{
    double sum = 13 + 150;
    double n, x;
    //prompt user to enter input
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter x: ";
    cin >> x;
    cout << "Sum of series: " << sum + calcSum(n, 1, x) << '\n';
}
