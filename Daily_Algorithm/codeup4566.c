#include <stdio.h>
#include <stdlib.h>

void eratos(int n, int m)
{
    int *arr = malloc(sizeof(int) * m);
    int sum = 0;
    int min = m;
    int cnt = 0;

    for (int i = n; i <= m; i++)
    {
        arr[i] = i;
    }

    for (int i = 2; i <= m; i++)
    {
        for (int j = n; j <= m; j++)
        {
            if ((arr[j] != i && arr[j] % i == 0) || arr[j] == 1)
                arr[j] = 0;
        }
    }

    for (int i = n; i <= m; i++)
    {
        if (arr[i] != 0)
        {
            sum += arr[i];
            
            if (arr[i] < min)
                min = arr[i];

            cnt++;
        }
    }

    if (cnt == 0)
        printf("-1");
    else
        printf("%d\n%d", sum, min);
}

int main()
{
    int n, m;

    scanf("%d %d", &n, &m);
    eratos(n, m);
}