#include <stdio.h>

int main()
{
    int sum = 0;
    double start, end, sumTime = 0;

    for (int i = 0; i < 5; i++)
    {
        double time;

        scanf("%lf %lf", &start, &end);

        time = (end - start) - 1;

        if (time <= 0)
            continue;

        if (time >= 4)
            time = 4;

        sum += time * 10000;
        sumTime += time;
    }

    if (sumTime >= 15)
    {
        printf("%.0f", (double) sum - (sum * 0.05));
    }
    else if (sumTime <= 5)
    {
        printf("%.0f", (double) sum + (sum * 0.05));
    }
    else
    {
        printf("%d", sum);
    }
}