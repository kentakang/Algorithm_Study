#include <stdio.h>

int main()
{
    int hour, min, time;
    scanf("%d %d %d", &hour, &min, &time);
    min += time;

    while (min >= 60)
    {
        hour += 1;
        min -= 60;
    }

    while (hour >= 24)
    {
        hour -= 24;
    }

    printf("%d %d", hour, min);
}