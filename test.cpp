#include <iostream>
using namespace std;
const int DISTRICTS = 4;
const int MONTHS = 3;
int main()
{
    int d, m;
    double sales[DISTRICTS][MONTHS];
    cout << "Input Array Values: \n";
    for (d = 0; d < DISTRICTS; d++)
    {
        for (m = 0; m < MONTHS; m++)
        {
            cin >> sales[d][m];
        }
    }
    cout << "Sales Array: \n";
    for (d = 0; d < DISTRICTS; d++)
    {
        for (m = 0; m < MONTHS; m++)
        {
            cout << sales[d][m] << " ";
        }
        cout << "\n";
    }
}