#include <stdio.h>
char getLast(char *input)
{
    char lastChar;
    for (int i = 0; input[i] != '\0'; i++)
    {
        lastChar = input[i];
    }
    return lastChar;
}
int main()
{
    char input[100];
    printf("Enter a string: ");
    scanf("%s", input);
    printf("Output: %c", getLast(input));
    return 0;
}
