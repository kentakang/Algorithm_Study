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
        printf("%d: ", i + 1);

        for (int j = 0; j < n; j++)
        {
            if (j == i)
                continue;

            printf("%c ", arr[j] > arr[i] ? '<' : arr[j] == arr[i] ? '=' : '>');
        }

        printf("\n");
    }
}