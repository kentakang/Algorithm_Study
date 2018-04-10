#include <stdio.h>
#include <string.h>

int main()
{
    char num1[100];
    char num2[100];
    scanf("%s %s", num1, num2);

    if (strlen(num1) > strlen(num2))
    {
        printf("%s %s", num2, num1);
    }
    else if (strlen(num1) < strlen(num2))
    {
        printf("%s %s", num1, num2);
    }
    else
    {
        if (strcmp(num1, num2) > 0)
        {
            printf("%s %s", num2, num1);
        }
        else if (strcmp(num1, num2) < 0)
        {
            printf("%s %s", num1, num2);
        }
        else
        {
            printf("%s %s", num1, num2);
        }
    }
}