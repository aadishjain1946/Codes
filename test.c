#include <stdio.h>
int multiplyBitwise(int num1, int num2)
{
    int output = 0;
    while (num2 > 0)
    {
        if (num2 & 1)
        {
            output += num1;
        }
        num1 = num1 << 1;
        num2 = num2 >> 1;
    }
    return output;
}
int divideBitwise(int divi, int dor, int dorMain, int *rem)
{
    int output = 1;
    if (divi == dor)
    {
        *rem = 0;
        return 1;
    }
    else if (divi < dor)
    {
        *rem = divi;
        return 0;
    }

    while (dor <= divi)
    {
        dor = dor << 1;
        output = output << 1;
    }

    if (divi < dor)
    {
        dor >>= 1;
        output >>= 1;
    }

    output = output + divideBitwise(divi - dor, dorMain, dorMain, rem);

    return output;
}
int main()
{
    int rem = 0;
    printf("multiplyBitwise(75, 4) = %d\n", multiplyBitwise(75, 4));
    printf("multiplyBitwise(90, 9) = %d\n", multiplyBitwise(90, 9));
    printf("multiplyBitwise(83, 66) = %d\n", multiplyBitwise(83, 66));
    printf("divideBitwise(75, 4) = %d\n", divideBitwise(75, 4, 4, &rem));
    printf("divideBitwise(90, 9) = %d\n", divideBitwise(90, 9, 9, &rem));
    printf("divideBitwise(83, 66) = %d\n", divideBitwise(83, 66, 66, &rem));
    return 0;
}
