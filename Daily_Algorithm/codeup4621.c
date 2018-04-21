#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k, j = 0;
    scanf("%d %d", &n, &k);
    int *arr = malloc(sizeof(int) * k);

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            arr[j++] = i;

            if (j == k)
                break;
        }
    }

    printf("%d", arr[k - 1]);
}