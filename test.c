#include <stdio.h>
int main()
{
    for (int i = 0; i < 10; i++)
    {
        if (i == 0 || i == 9)
        {
            for (int j = 0; j < 7; j++)
            {
                printf("*");
            }
        }
        else
        {
            printf("*");
        }
        printf("\n");
    }
}
