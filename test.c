#include <stdio.h>
#include <stdlib.h>
int main()
{
    //declaring 2d array
    double data[50][5];
    int n = 0;
    double inp;
    //for loop to rwad and store element in 2d array
    for (int i = 0; i < 50; i++)
    {
        //prompt user after every 5 iterations
        if (i % 5 == 0)
        {
            //ask user if s/he wants to continue or not
            if (i != 0)
            {
                n++;
                int check;
                printf("If you want to stop please enter 0, to continue enter 1: ");
                scanf("%d", &check);
                if (check == 0)
                {
                    break;
                }
            }
            printf("Enter 5 items to store: ");
        }
        scanf("%lf", &inp);
        data[n][i % 5] = inp;
    }
    //printing the final array
    printf("Entered items are: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%lf ", data[i][j]);
        }
        printf("\n");
    }
    return 0;
}
