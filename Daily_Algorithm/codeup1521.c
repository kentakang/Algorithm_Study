#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k, cnt = 0;
    scanf("%d %d", &n, &k);
    int **arr = malloc(sizeof(int *) * n);

    for (int i = 0; i < n; i++)
    {
        arr[i] = malloc(sizeof(int) * n);

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] != -1 && arr[i][j] + k <= 5)
            {
                cnt++;
            }
        }

        free(arr[i]);
    }

    printf("%d", cnt);

    free(arr);
}