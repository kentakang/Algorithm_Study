#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Person {
    char name[10];
    char gender[2];
    int age;
}person;

int main()
{
    int n, sum = 0;
    char str[100];
    scanf("%d", &n);
    person *list = malloc(sizeof(person) * n);

    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        scanf("%s", str);

        char *ptr = strtok(str, ",");

        strcpy(list[i].name, ptr);
        ptr = strtok(NULL, ",");
        strcpy(list[i].gender, ptr);
        ptr = strtok(NULL, ",");
        list[i].age = atoi(ptr);

        while (ptr != NULL)
        {
            ptr = strtok(NULL, ",");
            cnt++;
        }
        
        sum += cnt - 1;
    }

    free(list);
    printf("%.2f", (double) sum / n);
}