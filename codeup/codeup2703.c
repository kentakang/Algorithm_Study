#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, up = 0, down = 0;
    scanf("%d", &n);
    int *arr = malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] < arr[i + 1])
            up++;
        else if (arr[i] > arr[i + 1])
            down++;
    }

    printf("%d %d", up, down);
}