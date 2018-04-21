#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, c;
    scanf("%d %d", &n, &c);
    int *arr = malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i != 0 && i % c == 0)
            printf("\n");

        printf("%d ", arr[i]);
    }
}