#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k;
    int sum = 0;
    int max = -10000;
    scanf("%d %d", &n, &k);
    int *arr = malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        sum += arr[i];

        if (i >= k - 1)
        {
            if (sum > max)
                max = sum;

            sum -= arr[i - k + 1];
        }
    }
    
    printf("%d", max);
}