#include <stdio.h>
#include <stdlib.h>

typedef struct Student {
    int rank;
    int score;
}student;

int main()
{
    int n, max = 0;
    scanf("%d", &n);
    student *arr = malloc(sizeof(student) * n);
    int *arr2 = malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i].score);
        arr2[i] = arr[i].score;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr2[j] < arr2[j + 1])
            {
                int temp = arr2[j + 1];
                arr2[j + 1] = arr2[j];
                arr2[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i].score == arr2[j])
            {
                if (arr[i].rank > 0 && arr[i].rank <= n)
                    continue;
                    
                arr[i].rank = j + 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d %d\n", arr[i].score, arr[i].rank);
    }
}