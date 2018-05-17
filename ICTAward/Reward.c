#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    int max = 0, sum = 0;
    scanf("%d %d", &n, &m);
    int *arr = malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - (m - 1); i++)
    {
        sum = 0;

        for (int j = 0; j < m; j++)
        {
            sum += arr[i + j];
        }

        if (sum > max)
            max = sum;
    }

    printf("%d", max);
}