#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    double n = a;

    for (int i = 0; i < b; i++)
    {
        double k;

        scanf("%lf", &k);

        if (k < 0)
        {
            n -= -(n * (k / 100));
        }
        else
        {
            n += (n * (k / 100));
        }
    }

    if (a < n)
    {
        printf("%.0f\ngood", (double) n - a);
    }
    else if (a > n)
    {
        printf("-%.0f\nbad", (double) a - n);
    }
    else
    {
        printf("%.0f\nsame", (double) a - n);
    }
}