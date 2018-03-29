#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    int **arr = malloc(sizeof(int *) * n);

    for (int i = 0; i < n; i++)
    {
        arr[i] = malloc(sizeof(int) * 6);

        for (int j = 0; j < 6; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 6; i++)
    {
        int max = 0;

        for (int j = 0; j < n; j++)
        {
            if (arr[j][i] > max)
                max = arr[j][i];
        }

        sum += max;
    }

    for (int i = 0; i < n; i++)
    {
        free(arr[i]);
    }

    free(arr);
    printf("%d", sum);
}