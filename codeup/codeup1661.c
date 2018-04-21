#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    scanf("%[^\n]", str);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ',')
            printf(" ");
        else if (str[i] == ';')
            printf(" \n");
        else if (str[i] == ' ')
            continue;
        else
            printf("%c", str[i]);

        if (i == strlen(str) - 1)
            printf(" ");
    }
}