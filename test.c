#include <stdio.h>
#include <stdlib.h>
//function to check if given row indexes are valid or not
int check(int n, int m, int i, int j)
{
    return i >= 0 && j >= 0 && i < n && j < m;
}
int main()
{
    FILE *filePointer;
    char c;
    //creating file object
    filePointer = fopen("data.txt", "r");
    if (filePointer == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }
    char sudo[100];
    int k = 0, l = 0, m = 0;
    double dataArray[7][4];
    //reading data file from file object
    c = fgetc(filePointer);
    while (c != EOF)
    {
        //storing data into 2d array
        if (c == ' ' || c == '\n')
        {
            sudo[k] = '\0';
            double temp = atof(&sudo[0]);
            dataArray[m][l % 4] = temp;
            l++;
            if (l % 4 == 0 && l != 0)
                m++;
            k = 0;
        }
        sudo[k] = c;
        k++;
        c = fgetc(filePointer);
    }
    fclose(filePointer);

    sudo[k] = '\0';
    double temp = atof(&sudo[0]);
    dataArray[m][l % 4] = temp;
    //printing data in 2d array
    printf("The content of the array is:\n");
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%f ", dataArray[i][j]);
        }
        printf("\n");
    }
    //reading row indexes from user
    int index1, index2;
    printf("Enter two row indexes to swap: ");
    scanf("%d", &index1);
    scanf("%d", &index2);
    while (check(7, 7, index1, index2) == 0)
    {
        printf("Enter two row indexes to swap: ");
        scanf("%d", &index1);
        scanf("%d", &index2);
    }
    //swaping two rows using temporary array
    double tempArr[4];
    for (int i = 0; i < 4; i++)
    {
        tempArr[i] = dataArray[index1][i];
    }
    for (int i = 0; i < 4; i++)
    {
        dataArray[index1][i] = dataArray[index2][i];
    }
    for (int i = 0; i < 4; i++)
    {
        dataArray[index2][i] = tempArr[i];
    }
    printf("The content of the array AFTER the swap operations:\n");
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%f ", dataArray[i][j]);
        }
        printf("\n");
    }
    return 0;
}
