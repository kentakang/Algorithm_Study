#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct answer {
    char name[100];
    int num;
}answer;

int main()
{
    int n, m, num;
    char name[100];
    scanf("%d %d", &n, &m);
    answer *arr = malloc(sizeof(answer) * 250);

    for (int i = 0; i < n; i++)
    {
        scanf("%s %d", name, &num);
        int idx = 0;

        for (int j = 0; j < strlen(name); j++)
        {
            idx += (int) name[j] - 97;
        }

        if (strcmp(arr[idx].name, name) == 0)
        {
            arr[idx].num += num;
        }
        else
        {
            strcpy(arr[idx].name, name);
            arr[idx].num = num;
        }
    }

    for (int i = 0; i < m; i++)
    {
        scanf("%s", name);
        int idx = 0;

        for (int j = 0; j < strlen(name); j++)
        {
            idx += (int) name[j] - 97;
        }

        if (strcmp(arr[idx].name, name) == 0)
        {
            printf("%d\n", arr[idx].num);
        }
        else
        {
            printf("0\n");
        }
    }

    free(arr);
}