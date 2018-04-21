#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, cnt = 1;
    scanf("%d", &n);
    int **arr = malloc(sizeof(int *) * n);

    for (int i = 0; i < n; i++)
    {
        arr[i] = malloc(sizeof(int) * n);

        for (int j = n - 1; j >= 0; j--)
        {
            arr[i][j] = cnt++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        
        printf("\n");
        free(arr[i]);
    }

    free(arr);
}