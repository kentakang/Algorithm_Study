#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, input;
    int *arr = malloc(sizeof(int) * 10000001);
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &input);
        arr[input] = 1;
    }

    scanf("%d", &m);

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &input);
        printf("%d ", arr[input]);
    }

    free(arr);
}