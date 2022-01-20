#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter size of matrix(N X M): ";
    cin >> n >> m;
    int mat1[n][m], mat2[n][m], add[n][m], subt[n][m];
    cout << "Enter matrix 1 elements: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat1[i][j];
        }
    }
    cout << "Enter matrix 2 elements: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat2[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            add[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            subt[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
    cout << "Addition of two matrix: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << add[i][j] << " ";
        }
        cout << '\n';
    }
    cout << "Subtraction of two matrix: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << subt[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}
