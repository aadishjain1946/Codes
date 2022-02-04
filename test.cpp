#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int mat[16][3];
    for (int i = 0; i < 16; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mat[i][j] = (std::rand() % (10 - 0 + 1));
        }
    }
    int maxI = 0;
    double maxDistance = INT_MIN;
    for (int i = 0; i < 16; i++)
    {
        double dist = sqrt(mat[i][0] * mat[i][0] + mat[i][1] * mat[i][1] + mat[i][2] * mat[i][2]);
        if (dist > maxDistance)
        {
            maxDistance = dist;
            maxI = i;
        }
    }
    cout << "Maximum Distance: " << maxDistance << '\n';
    cout << "Index of max distance: " << maxI << '\n';
    return 0;
}
