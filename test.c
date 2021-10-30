#include <stdio.h>
int getDigit(int n, int y)
{
    while (n > 0)
    {
        if (n % 10 == y)
        {
            return 1;
        }
        n /= 10;
    }
    return 0;
}
int GetCount(int x, int y)
{
    int count = 0;
    int i = 1;
    while (1)
    {
        if (!getDigit(x, y))
        {
            break;
        }
        x += i;
        i++;
        count++;
    }
    return count;
}
int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int x, y;
        scanf("%d", &x);
        scanf("%d", &y);
        printf("%d \n", GetCount(x, y));
    }
    return 0;
}
