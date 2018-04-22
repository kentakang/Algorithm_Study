#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, value = 1, inc = 1;
    int row = 0, col = -1;
    scanf("%d", &n);
    int num = n;
    int **arr = malloc(sizeof(int *) * n);

    for (int i = 0; i < n; i++)
    {
        arr[i] = malloc(sizeof(int) * n);
    }

    while (n > 0)
    {
        for (int i = 0; i < n; i++)
        {
            col += inc;
            arr[row][col] = value++;
        }

        n--;
        if (n == 0)
            break;

        for (int i = 0; i < n; i++)
        {
            row += inc;
            arr[row][col] = value++;
        }

        inc *= -1;
    }

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
        free(arr[i]);
    }

    free(arr);
}