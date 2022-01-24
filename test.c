#include <stdio.h>
int pow(int n, int m)
{
    int output = 1;
    for (int i = 0; i < m; i++)
    {
        output *= n;
    }
    return output;
}
int main()
{
    int n;
    scanf("%d", &n);
    int x, a[n];
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int output = 0;
    for (int i = 0; i < n; i++)
    {
        output += (a[i] * pow(x, i));
    }
    printf("%d", output);
    return 0;
}
