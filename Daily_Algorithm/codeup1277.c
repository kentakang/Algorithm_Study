#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int *ptr = malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("%d %d %d", ptr[0], ptr[n - (n / 2) - 1], ptr[n - 1]);

    free(ptr);
}