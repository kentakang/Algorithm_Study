#include <stdio.h>

int main()
{
    int n, m, num = 0;
    int arr[100][100];

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = ++num;
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (i % 2 != 0)
        {
            for (int j = 0; j < m; j++)
            {
                printf("%d ", arr[i][j]);
            }
        }
        else
        {
            for (int j = m - 1; j >= 0; j--)
            {
                printf("%d ", arr[i][j]);
            }
        }
        
        printf("\n");
    }
}