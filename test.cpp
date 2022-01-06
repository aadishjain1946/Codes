#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;
    double num[n];
    cout << "Enter numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    double sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        double real, frac;
        frac = modf(num[i], &real);
        sum1 += real;
        sum2 += frac;
    }
    cout << "Sum of integer parts: " << sum1;
    cout << "\nSum of fraction parts: " << sum2;
}
