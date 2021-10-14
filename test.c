#include <stdio.h>
#include <math.h>
void power(int x, int y)
{
    float output = pow(x, y);
    printf("%d ^ %d is %f\n", x, y, output);
}
int main()
{
    power(3, 5);
    power(3, -5);
    power(2, 10);
}
