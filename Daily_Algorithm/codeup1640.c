#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, virus = 0;
    char **arr = malloc(sizeof(char *) * n);

    scanf("%d\n", &n);

    for (int i = 0; i < n; i++)
    {
        arr[i] = malloc(sizeof(char) * 50);
        
        scanf(" %[^\n]s", arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (strlen(arr[i]) <= 3)
        {
            printf("%s\n", arr[i]);
            virus++;
            continue;
        }

        if (strstr(arr[i], "xocure") != NULL)
        {
            printf("%s\n", arr[i]);
            virus++;
            continue;
        }

        if (strstr(arr[i], "tap") != NULL)
        {
            printf("%s\n", arr[i]);
            virus++;
            continue;
        }

        free(arr[i]);
    }

    if (virus >= 7)
    {
        printf("danger");
    }
    else if (virus >= 4 && virus <= 6)
    {
        printf("warning");
    }
    else
    {
        printf("safe");
    }

    free(arr);
}