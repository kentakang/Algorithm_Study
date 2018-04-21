#include <stdio.h>

int main()
{
    int score[10], averageUp = 0, averageDown = 0, sum = 0;
    double avg;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &score[i]);
        sum += score[i];
    }

    avg = (double) sum / 10;

    for (int i = 0; i < 10; i++)
    {
        if (score[i] >= avg)
            averageUp++;
        else
            averageDown++;
    }

    printf("%.1f\n%d %d", avg, averageUp, averageDown);
}