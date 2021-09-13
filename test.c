#include <stdio.h>
#include <stdlib.h>
int cmp(const void *num1, const void *num2)
{
    return (*(int *)num1 - *(int *)num2);
}
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], pairSum[n - 1];
    int maxSum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    qsort((void *)arr, n, sizeof(arr[0]), cmp);
    for (int i = 0; i < n - 1; i++)
    {
        pairSum[i] = abs(arr[i] - arr[i + 1]);
        maxSum = max(maxSum, pairSum[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (pairSum[i] == maxSum)
        {
            printf("%d %d ", arr[i], arr[i + 1]);
        }
    }
}
