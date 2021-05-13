#include <iostream>
using namespace std;
int n = 5, m = 5;
int visited[5][5];
int x_corr[] = {1, -1, 0, 0};
int y_corr[] = {0, 0, 1, -1};
//function to validate coordinates
bool checkBoundary(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}
//recursive funtion return total number of ways in which mouse can reach cheese.
int returnNumberPaths(int i, int j)
{
    //if mouse reach at cheese we return 0
    if (i == n - 1 && j == m - 1)
    {
        return 0;
    }
    int ans = 0;
    visited[i][j] = 1;
    //making recursive calls on all possible paths
    for (int k = 0; k < 4; k++)
    {
        int newi = i + x_corr[k];
        int newj = j + y_corr[k];
        if (checkBoundary(newi, newj) && !visited[newi][newj])
        {
            ans += returnNumberPaths(newi, newj);
        }
    }
    return ans + 1;
}
int main(int argc, char *argv[])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            visited[i][j] = 0;
        }
    }
    cout << "NUmber of ways to reach cheese: " << returnNumberPaths(3, 3) << '\n';
}