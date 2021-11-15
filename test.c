#include <stdio.h>
int main()
{
    int numRows = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &numRows);
    printf("\n");
    for (int i = 1; i <= numRows; ++i)
    {
        for (int k = 1; k <= i; ++k)
        {
            printf(" ");
        }
        for (int j = 1; j <= ((numRows * 2) - ((2 * i) - 1)); ++j)
        {
            if (i == 1 || j == 1 || j == ((numRows * 2) - ((2 * i) - 1)))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
