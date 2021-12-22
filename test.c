#include <stdio.h>
int main()
{
    int n = 10;
    int arr[n];
    printf("Enter 10 numbers: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int evenSum = 0, oddProduct = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenSum += arr[i];
        }
        else
        {
            oddProduct *= arr[i];
        }
    }
    printf("Sum of even numbers is %d and product of odd numbers is %d", evenSum, oddProduct);
    return 0;
}
