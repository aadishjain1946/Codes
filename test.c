#include <stdio.h>
int main()
{
    //prompt user to enter input
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    //checking if given input has alternative positive and negative numbers
    int prev = -1, curr = 0;
    if (arr[0] > 0)
        curr = 1;
    else
        curr = 0;
    int flag = 1;
    for (int i = 1; i < n; i++)
    {
        if (prev == curr)
        {
            flag = 0;
            break;
        }
        if (arr[i] > 0)
        {
            prev = curr;
            curr = 1;
        }
        else
        {
            prev = curr;
            curr = 0;
        }
    }
    //printing output
    if (flag == 1)
    {
        printf("Output: true");
    }
    else
    {
        printf("Output: false");
    }
}