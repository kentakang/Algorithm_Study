#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int *arr = malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n + i; j++)
        {
            if (j >= n)
                printf("%d ", arr[j - n]);
            else
                printf("%d ", arr[j]);
        }

        printf("\n");
    }

    free(arr);
}