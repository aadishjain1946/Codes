#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
    //creating array of integers
    int arr[] = {23, 4, 8, 33, 25, 7, 12, 6, 49, 50, 11, 20, 21, 24, 35};
    //calculating size of above array
    int size = sizeof(arr) / sizeof(int);
    //using fork to create a child process
    int child;
    child = fork();
    //for parent process
    if (child > 0)
    {
        printf("I'm the parent process, I'll be printing the odd numbers: \n");
        //printing odd numbers for parent process
        for (int i = 0; i < size; i++)
        {
            if (arr[i] % 2 != 0)
            {
                printf("%d  ", arr[i]);
            }
        }
        printf("\n");
    }
    else
    {
        printf("I'm a child, I'll be printing the even numbers: \n");
        //printing odd numbers for child process
        for (int i = 0; i < size; i++)
        {
            if (arr[i] % 2 == 0)
            {
                printf("%d  ", arr[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
