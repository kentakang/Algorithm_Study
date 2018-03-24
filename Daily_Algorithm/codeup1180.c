#include <stdio.h>

int main()
{
    int a, b;

    scanf("%01d%01d", &a, &b);

    if ((10 * b + a) * 2 % 100 <= 50)
        printf("%d\nGOOD", (10 * b + a) * 2 % 100);
    else
        printf("%d\nOH MY GOD", (10 * b + a) * 2 % 100);

    return 0;
}