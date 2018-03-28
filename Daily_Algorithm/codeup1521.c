#include <stdio.h>

int main()
{
    int n, k, cnt = 0;
    int arr[50][50];
    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] != -1 && arr[i][j] + k <= 5)
            {
                cnt++;
            }
        }
    }

    printf("%d", cnt);
}