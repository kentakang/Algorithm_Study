#include <stdio.h>

int main()
{
    int a, b, c, d, e, cnt = 0;

    scanf("%d %d %d", &a, &b, &c);
    scanf("%d %d", &d, &e);

    if (a + b == c)
    {
        printf("%d", d + e);
        cnt++;
    }
    
    if (a - b == c)
    {
        if (cnt != 0)
        {
            printf("\n%d", d - e);
            cnt++;
        }
        else
        {
            printf("%d", d - e);
            cnt++;
        }
    }

    if (a * b == c)
    {
        if (cnt != 0)
        {
            printf("\n%d", d * e);
            cnt++;
        }
        else
        {
            printf("%d", d * e);
            cnt++;
        }
    }

    if (a / b == c)
    {
        if (cnt != 0)
        {
            printf("\n%d", d / e);
            cnt++;
        }
        else
        {
            printf("%d", d / e);
            cnt++;
        }
    }

    if (cnt == 0)
    {
        printf("NO");
    }
}