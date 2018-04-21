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

void sort(char (*str)[10], int n)
{
    int min;
    char temp[10];

    for (int i = 0; i < n - 1; i++)
    {
        min = i;

        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(str[min], str[j]) > 0)
            {
                min = j;
            }
        }

        strcpy(temp, str[i]);
        strcpy(str[i], str[min]);
        strcpy(str[min], temp);
    }
}

int main()
{
    int n, max = 0, withFriendsCnt = 0;
    char str[100];
    char withFriendsList[150][10];
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

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < list[i].friendsCnt; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (strcmp(list[i].friends[j], list[k].name) == 0)
                {
                    if (strcmp(list[i].gender, list[k].gender) != 0)
                    {
                        list[k].withFriends++;

                        if (list[k].withFriends > max)
                            max = list[k].withFriends;
                    
                        break;
                    }
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (list[i].withFriends == max)
        {
            strcpy(withFriendsList[withFriendsCnt++], list[i].name);
        }
    }

    sort(withFriendsList, withFriendsCnt);

    for (int i = 0; i < withFriendsCnt; i++)
    {
        printf("%s\n", withFriendsList[i]);
    }

    free(list);
}