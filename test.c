#include <stdio.h>
int main()
{
    int num;
    int arr[100000];
    printf("Input: ");
    scanf("%d", &num);
    int flag = 0;
    printf("Output: ");
    int sz = 0;
    while (num > 0)
    {
        if ((num % 10) > 3)
        {
            arr[sz++] = num % 10;
            flag = 1;
        }
        num /= 10;
    }
    if (flag == 0)
    {
        printf("none");
    }
    else
    {
        for (int i = sz - 1; i >= 0; i--)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
