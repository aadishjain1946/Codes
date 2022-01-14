#include <stdio.h>
#include <stdlib.h>
int main()
{
    char keyInput[100], textInput[100];
    int j = 0;
    printf("Enter the key Input: ");
    scanf("%s", keyInput);
    printf("Enter the Text Input: ");
    scanf("%s", textInput);
    for (int index = 0; keyInput[index] != '\0'; index++)
    {
        printf("%c\t", keyInput[index]);
    }
    printf("\n");
    for (int index = 0; textInput[index] != '\0'; j++)
    {
        if (keyInput[j] == '2')
        {
            printf("%c%c\t", textInput[index], textInput[index + 1]);
            index++;
            index++;
        }
        else
        {
            printf("%c%c%c\t", textInput[index], textInput[index + 1], textInput[index + 2]);
            index++;
            index++;
            index++;
        }
    }
    return 0;
}
