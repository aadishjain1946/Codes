#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 10000;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = (rand() % (30 - 1 + 1)) + 1;
    }
    printf("Array before sorting: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int sudo = arr[i];
                arr[i] = arr[j];
                arr[j] = sudo;
            }
        }
    }
    printf("Array after sorting: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
