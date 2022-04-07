#include <stdio.h>
int calculateMedian(int arr[], int n)
{
    // sort the array
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    if (n % 2 == 0)
    {
        return arr[n / 2];
    }
    else
    {
        return (int)((arr[(n - 1) / 2] + arr[(n + 1) / 2]) / 2);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int median = calculateMedian(arr, n);
    printf("Median: %d", median);
    return 0;
}
