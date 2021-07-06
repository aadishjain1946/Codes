#include <iostream>
using namespace std;
// function to evaluate result for coin row problem
int coin_row_dynamic_programming(int *array, int n)
{
    if (n == 1)
    {
        return array[0];
    }
    if (n == 2)
    {
        return max(array[0], array[1]);
    }

    int F[n + 1], i;
    F[0] = 0;
    F[1] = array[0];

    for (i = 2; i <= n + 1; i++)
    {
        F[i] = max(array[i - 1] + F[i - 2], F[i - 1]);
    }
    return F[n];
}
int main()
{
    int array[] = {5, 1, 2, 10, 6, 2};
    int n = 6;
    cout << "Output: " << coin_row_dynamic_programming(array, n) << '\n';
}
