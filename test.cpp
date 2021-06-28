#include <iostream>
using namespace std;
int main()
{
    int n = 50;
    int X[n], Y[n];
    cout << "INPUT: ";
    //prompt user to enter 50 integers value
    for (int i = 0; i < n; i++)
    {
        cin >> X[i];
        Y[i] = 0;
    }
    //calculating Y[i] and printing X[i] and Y[i] in two column
    cout << "OUTPUT\nX   Y\n";
    for (int i = 0; i < n; i++)
    {
        if (X[i] == 100)
        {
            Y[i] = X[i] * X[i];
        }
        else if (X[i] > 30 && X[i] < 50)
        {
            Y[i] = 2 * X[i];
        }
        else
        {
            Y[i] = 3 * X[i] - 100;
        }
        cout << X[i] << "  " << Y[i] << '\n';
    }
}
