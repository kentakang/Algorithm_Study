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
        else if (str[i] == 'a')
        {
            printf("x");
        }
        else if (str[i] == 'b')
        {
            printf("y");
        }
        else if (str[i] == 'c')
        {
            printf("z");
        }
        else
        {
            printf("%c", str[i] - 3);
        }
    }
}