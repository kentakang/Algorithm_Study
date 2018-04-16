#include <stdio.h>
#include <stdlib.h>

typedef struct student{
    int score;
    char name[10];
}student;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    student *arr = malloc(sizeof(student) * n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s %d", arr[i].name, &arr[i].score);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j].score < arr[j + 1].score)
            {
                student temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        printf("%s\n", arr[i].name);
    }

    free(arr);
}