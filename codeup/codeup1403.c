#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int *arr = malloc(sizeof(int) * (n * 2));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        arr[i + n] = arr[i];
    }

    for (int i = 0; i < n * 2; i++)
    {
        printf("%d\n", arr[i]);
    }
}