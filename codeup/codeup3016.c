#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student {
    char name[10];
    int firstSubject;
    int secondSubject;
    int thirdSubject;
}student;

int main()
{
    int n;
    char name[10];
    scanf("%d", &n);
    student *arr = malloc(sizeof(student) * n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s %d %d %d", arr[i].name, &arr[i].firstSubject,
            &arr[i].secondSubject, &arr[i].thirdSubject);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j].firstSubject < arr[j + 1].firstSubject)
            {
                student temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    strcpy(name, arr[0].name);
    printf("%s ", name);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j].secondSubject < arr[j + 1].secondSubject)
            {
                student temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (strcmp(arr[i].name, name) == 0)
        {
            if (i != 0 && arr[i].secondSubject == arr[i - 1].secondSubject)
            {
                int rank;
                
                for (int j = 0; j < n; j++)
                {
                    if (arr[j].secondSubject == arr[i].secondSubject)
                    {
                        rank = j + 1;
                        break;
                    }
                }

                printf("%d ", rank);
                break;
            } 
            else
            {
                printf("%d ", i + 1);
                break;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j].thirdSubject < arr[j + 1].thirdSubject)
            {
                student temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (strcmp(arr[i].name, name) == 0)
        {
            if (i != 0 && arr[i].thirdSubject == arr[i - 1].thirdSubject)
            {
                int rank;

                for (int j = 0; j < n; j++)
                {
                    if (arr[j].thirdSubject == arr[i].thirdSubject)
                    {
                        rank = j + 1;
                        break;
                    }
                }

                printf("%d ", rank);
                break;
            } 
            else
            {
                printf("%d ", i + 1);
                break;
            }
        }
    }
}