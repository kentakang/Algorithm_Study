#include <stdio.h>

int main()
{
    int n, num = 0;
    int arr[100][100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = ++num;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d ", arr[i - 1][j]);
            }
        }
        else
        {
            for (int j = n - 1; j >= 0; j--)
            {
                printf("%d ", arr[i - 1][j]);
            }
        }
        
        printf("\n");
    }
}