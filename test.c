#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void printArr(int *arr, int n, char word[7])
{
    printf("Current word: ");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == -1)
        {
            printf("* ");
        }
        else
        {
            printf("%c ", word[i]);
        }
    }
    printf("\n");
}
int checkWin(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == -1)
        {
            return 0;
        }
    }
    return 1;
}
int getIndex(char word[7], char g)
{
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == g)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    char names[4][7] = {"abcdef", "ghijkl", "mnopqr", "stvuwx"};
    char word[7];
    int n = 7;
    char g;
    int arr[6] = {-1, -1, -1, -1, -1, -1};
    int num = (rand() % (4 + 1));
    strcpy(word, names[num]);
    while (n > 0 && !checkWin(arr, 6))
    {
        printArr(arr, 6, word);
        printf("Enter you guess: ");
        scanf("%c%*c", &g);
        int ind = getIndex(word, g);
        if (ind >= 0)
        {
            arr[ind] = 1;
        }
        n--;
    }
    if (checkWin(arr, 6) > 0)
    {
        printArr(arr, 6, word);
        printf("\nYou Won!!\n");
    }
    else
    {
        printArr(arr, 6, word);
        printf("\nBetter Luck next time!!\n");
    }
    return 0;
}
