#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, length = 1, max = 1;
    scanf("%d", &n);
    int *arr = malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= arr[i + 1])
        {
            length++;
        }
        else
        {
            if (length > max)
                max = length;

            length = 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= arr[i - 1])
        {
            length++;
        }
        else
        {
            if (length > max)
                max = length;

            length = 1;
        }
    }

    printf("%d", max);
}