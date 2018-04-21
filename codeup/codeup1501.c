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
            printf("%d ", arr[i][j]);
        }

        printf("\n");
        free(arr[i]);
    }

    free(arr);
}