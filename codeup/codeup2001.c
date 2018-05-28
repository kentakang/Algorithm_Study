#include <stdio.h>

int main()
{
    int n, pastaMin, juiceMin;

    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
            scanf("%d", &pastaMin);
        else
        {
            scanf("%d", &n);

            if (n < pastaMin)
                pastaMin = n;
        }
    }

    for (int i = 0; i < 2; i++)
    {
        if (i == 0)
            scanf("%d", &juiceMin);
        else
        {
            scanf("%d", &n);

            if (n < juiceMin)
                juiceMin = n;
        }
    }

    printf("%.1f", (pastaMin + juiceMin) + (double) (pastaMin + juiceMin) * 10 / 100);
}