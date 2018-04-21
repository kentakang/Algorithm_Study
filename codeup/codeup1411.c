#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int *arr = malloc(sizeof(int) * n);

    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i <= n; i++)
    {
        int isInArray = 0;

        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] == i)
            {
                isInArray = 1;
            }
        }

        if (!isInArray)
        {
            printf("%d", i);
        }
    }
}