#include <stdio.h>

int main()
{
    int k, h, a = 0, b = 0;
    scanf("%d %d", &k, &h);

    if (k % 2 == 0)
    {
        for (int i = 1; i <= k; i++)
        {
            if (i % 2 == 0)
                a += 10;
        }
    }
    else
    {
        for (int i = 1; i <= k; i++)
        {
            if (i % 2 != 0)
                a += 1;
        }
    }
    
    if (h % 2 == 0)
    {
        for (int i = 1; i <= h; i++)
        {
            if (i % 2 == 0)
                b += 10;
        }
    }
    else
    {
        for (int i = 1; i <= h; i++)
        {
            if (i % 2 != 0)
                b += 1;
        }
    }

    printf("%d", a + b);

    return 0;
}