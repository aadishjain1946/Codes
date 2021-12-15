#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int output = 1;
    for (int i = 1; i <= n; i++)
    {
        output *= i;
    }
    printf("%d\n", output);
    return 0;
}
