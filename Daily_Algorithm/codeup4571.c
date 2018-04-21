#include <stdio.h>

int main()
{
    int n, m;
    int min, sum = 0;
    
    scanf("%d %d", &n, &m);
    min = m;

    for (int i = 1; i * i <= m; i++)
    {
        if (i * i >= n && i * i <= m)
        {
            if (i * i < min)
                min = i * i;

            sum += i * i;
        }
    }

    if (!sum)
        printf("-1");
    else
        printf("%d\n%d", sum, min);
}