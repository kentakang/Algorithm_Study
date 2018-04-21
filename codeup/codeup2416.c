#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Person {
    char name[10];
    char gender[2];
    int age;
    char friends[10][10];
    int friendsCnt;
}person;

int main()
{
    int n, male = 0, female = 0;
    char str[100];
    scanf("%d", &n);
    person *list = malloc(sizeof(person) * n);

    for (int i = 0; i < n; i++)
    {
        int cnt = -1;
        scanf("%s", str);

        char *ptr = strtok(str, ",");

        strcpy(list[i].name, ptr);
        ptr = strtok(NULL, ",");
        strcpy(list[i].gender, ptr);
        ptr = strtok(NULL, ",");
        list[i].age = atoi(ptr);

        while (ptr != NULL)
        {
            cnt++;
            ptr = strtok(NULL, ",");
            if (ptr != NULL)
                strcpy(list[i].friends[cnt], ptr);
        }

        list[i].friendsCnt = cnt;
    }

    scanf("%s", str);
    int idx = 0;

    for (int i = 0; i < n; i++)
    {
        if (strcmp(str, list[i].name) == 0)
        {
            idx = i;
            break;
        }
    }

    for (int i = 0; i < list[idx].friendsCnt; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (strcmp(list[idx].friends[i], list[j].name) == 0)
            {
                if (strcmp("M", list[j].gender) == 0)
                {
                    male++;
                }
                else
                {
                    female++;
                }
            }
        }
    }

    printf("%d\n%d", male, female);

    free(list);
}