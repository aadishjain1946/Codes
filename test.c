#include <stdio.h>
#include <stdlib.h>
//recursive function to return number of odd element in an array
int oddRec(int *arr, int n)
{
    if (n < 0)
    {
        return 0;
    }
    int ans = oddRec(arr, n - 1);
    if (arr[n] % 2 != 0)
    {
        return ans + 1;
    }
    return ans;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int ans = oddRec(arr, n - 1);
    printf("Output: %d", ans);
}
