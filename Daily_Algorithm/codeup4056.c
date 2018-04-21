#include <stdio.h>

int main()
{
    int money;

    scanf("%d", &money);

    if (money <= 500)
    {
        printf("%.0f", (double) money * 70 / 100);
    }
    else if (money <= 1500)
    {
        printf("%.0f", (double) 350 + (money - 500) * 40 / 100);
    }
    else if (money <= 4500)
    {
        printf("%.0f", (double) 750 + (money - 1500) * 15 / 100);
    }
    else if (money <= 10000)
    {
        printf("%.0f", (double) 1200 + (money - 4500) * 5 / 100);
    }
    else
    {
        printf("%.0f", (double) 1475 + (money - 10000) * 2 / 100);
    }
}