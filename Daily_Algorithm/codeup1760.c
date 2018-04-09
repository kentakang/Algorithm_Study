#include <stdio.h>
#include <string.h>

int main()
{
    char str[10];
    char inputStr[33];
    char a[11], b[11], c[11];
    scanf("%s", str);
    scanf("%s%s%s", a, b, c);

    strcat(inputStr, a);
    strcat(inputStr, " ");
    strcat(inputStr, b);
    strcat(inputStr, " ");
    strcat(inputStr, c);
    strcat(inputStr, " ");

    for (int i = 0; i < strlen(inputStr); i++)
    {
        int index = 0;

        if (inputStr[i] == ' ')
        {
            printf(" ");
            continue;
        }

        for (int j = 0; j < 10; j++)
        {
            if (inputStr[i] == str[j])
                index = j;
        }

        printf("%d", index);
    }
}