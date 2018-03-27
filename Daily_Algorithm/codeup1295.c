#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++)
    {
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
        {
            if (str[i] - 97 >= 0)
            {
                printf("%c", str[i] - 32);
            }
            else
            {
                printf("%c", str[i] + 32);
            }
        }
        else
        {
            printf("%c", str[i]);
        }
    }
}