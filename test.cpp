#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int **arr = new int*[m];
    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                arr[i][j] = 120 + (std::rand() % (340 - 120 + 1));
            }
            else
            {
                arr[i][j] = 0;
            }
        }
    }
    //updating lower triangular matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (i == j)
            {
                continue;
            }
            else if (i > j)
            {
                arr[i][j] = (arr[i][j + 1] - arr[i - 1][j]);
            }
        }
    }
    //updating upper triangular matrix
    for (int i = m - 1; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }
            else if (i < j)
            {
                arr[i][j] = (arr[i + 1][j] + arr[i][j - 1]);
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] >= 0)
                cout << " ";
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
    for (int i = 0; i < m; i++)
    {
        delete [] arr[i];
    }
    delete [] arr;
}
