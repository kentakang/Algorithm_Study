#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, num = 0;
    scanf("%d", &n);
    int **arr = malloc(sizeof(int *) * n);

    for (int i = 0; i < n; i++)
    {
        arr[i] = malloc(sizeof(int) * n);

        for (int j = 0; j < n; j++)
        {
            arr[i][j] = ++num;    
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d ", arr[i][j]);
            }
        }
        else
        {
            for (int j = n - 1; j >= 0; j--)
            {
                printf("%d ", arr[i][j]);
            }
        }

        printf("\n");
        free(arr[i]);
    }

    free(arr);
}