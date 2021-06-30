#include <stdio.h>
#include <stdlib.h>
//recursive function tocalculate largest sum
//here cnt represents count of element in a row in pyramid
//start represent index of first element in a row
int calcLargestSum(int *arr, int n, int cnt, int start)
{
    //base case
    if (start >= n)
    {
        return 0;
    }
    //recursive call
    int largestSum = calcLargestSum(arr, n, cnt + 1, start + cnt);
    //calculating largest element from each row in pyramid
    int maxEle = -1;
    for (int i = start; i < start + cnt; i++)
    {
        if (arr[i] > maxEle)
        {
            maxEle = arr[i];
        }
    }
    return maxEle + largestSum;
}
int main()
{
    int *arr = (int *)malloc(10 * sizeof(int));
    printf("Enter last 10 digit of your student number: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Output: %d", calcLargestSum(arr, 10, 1, 0));
}
