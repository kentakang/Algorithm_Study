#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    char *str = malloc(sizeof(char) * 100);
    char **list = malloc(sizeof(char *) * n);
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s", str);
        list[i] = malloc(sizeof(char) * 100);
        strcpy(list[i], str);
    }

    for (int i = 0; i < n; i++)
    {
        if (i != n - 1)
        {
            printf("%s\nAMOLED\n", list[i]);
        }
        else
        {
            printf("%s\n", list[i]);
        }
    }
}