#include <iostream>
using namespace std;
int main()
{
    int mat[5][5] = {{1, 2, 3, 4, 5},
                     {6, 7, 8, 9, 10},
                     {11, 12, 13, 14, 15},
                     {16, 17, 18, 19, 20},
                     {21, 22, 23, 24, 25}};
    int matRev[5][5];
    for (int i = 0; i < 5; i++)
    {
        int k = 0;
        for (int j = 4; j >= 0; j--, k++)
        {
            matRev[i][k] = mat[i][j];
        }
    }
    cout << "Original Matrix: \n";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "Reverse Matrix: \n";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << matRev[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
