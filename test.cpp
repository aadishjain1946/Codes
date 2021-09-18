#include <iostream>
using namespace std;
int main()
{
    int mat[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int sum = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += mat[i][j];
        }
    }
    cout << "Sum of element of matrix: " << sum << '\n';
    int maxFirst = -1;
    for (int i = 0; i < 3; i++)
    {
        maxFirst = max(maxFirst, mat[0][i]);
    }
    cout << "Max element in first row: " << maxFirst << '\n';
    return 0;
}
