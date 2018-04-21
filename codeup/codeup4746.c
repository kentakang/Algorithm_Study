#include <stdio.h>

int main()
{
    int hour, min, second, time;
    scanf("%d %d %d %d", &hour, &min, &second, &time);
    second += time;

    while (second >= 60)
    {
        min += 1;
        second -= 60;
    }

    while (min >= 60)
    {
        hour += 1;
        min -= 60;
    }

    while (hour >= 24)
    {
        hour -= 24;
    }

    printf("%d %d %d", hour, min, second);
}