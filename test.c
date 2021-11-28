#include <stdio.h>
int fmax(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    return y;
}
int fmin(int x, int y)
{
    if (x < y)
    {
        return x;
    }
    return y;
}
int fabs(int x)
{
    if (x < 0)
    {
        return -1 * x;
    }
    return x;
}
int fma(int x, int y, int z)
{
    return x * y + z;
}
int main()
{
    printf("fmax(4,5): %d\n", fmax(4, 5));
    printf("fmin(4,5): %d\n", fmin(4, 5));
    printf("fabs(-4): %d\n", fabs(-4));
    printf("fma(4,5,6): %d\n", fma(4, 5, 6));
}
