#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Person {
    char name[10];
    char gender[2];
    int age;
    char friends[10][10];
    int friendsCnt;
    int withFriends;
}person;

int main()
{
    int n, alert = 0, idx = 0, alertIdx = 0;
    char str[100];
    char alertList[150][10];
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
        list[i].withFriends = 0;
    }

    scanf("%s", str);

    for (int i = 0; i < n; i++)
    {
        if (strcmp(str, list[i].name) == 0)
        {
            idx = i;
        }
    }

    strcpy(alertList[alertIdx++], str);

    for (int i = 0; i < list[idx].friendsCnt; i++)
    {
        int idx2 = 0;
        alert++;
        strcpy(alertList[alertIdx++], list[idx].friends[i]);

        for (int j = 0; j < n; j++)
        {
            if (strcmp(list[idx].friends[i], list[j].name) == 0)
            {
                idx2 = j;
            }
        }

        for (int j = 0; j < list[idx2].friendsCnt; j++)
        {
            int isInArray = 0;

            for (int k = 0; k < alertIdx; k++)
            {
                if (strcmp(alertList[k], list[idx2].friends[j]) == 0)
                {
                    isInArray = 1;
                }
            }

            if (!isInArray)
            {
                strcpy(alertList[alertIdx++], list[idx2].friends[j]);
                alert++;
            }
        }
    }

    printf("%d", alert);

    free(list);
}