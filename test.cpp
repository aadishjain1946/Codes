#include <bits/stdc++.h>
using namespace std;
int main()
{
    //prompt usert to enter m & n
    int m, n;
    cout << "Enter value of m & n: ";
    cin >> m >> n;
    double arr[m][n];
    //prompt usert to enter elements of array
    cout << "Enter Array elements: \n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    //calculating output
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] < 0.5)
            {
                arr[i][j] = 1;
            }
            else if (arr[i][j] >= 0.5)
            {
                arr[i][j] = 10;
            }
        }
    }
    //printing the output
    cout << "Output: \n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
}
