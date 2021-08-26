#include <stdio.h>
int processPointers(int *p, int *q, int n)
{
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        sum1 += p[i];
        sum2 += q[i];
    }
    if (sum1 > sum2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a[] = {11, 55, 33, 44, 22};
    int b[] = {1, 2, 3, 4, 5};
    int ans = processPointers(&a[0], &b[0], 5);
    printf("Output: %d", ans);
}
