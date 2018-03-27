#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    scanf("%[^\n]", str);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ' ')
            printf(" ");
        else if (str[i] == 'x')
        {
            printf("a");
        }
        else if (str[i] == 'y')
        {
            printf("b");
        }
        else if (str[i] == 'z')
        {
            printf("c");
        }
        else
        {
            printf("%c", str[i] + 3);
        }
    }
}