#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (((double) n / 4) - (n / 4) > 0.5)
    {
        printf("%d", (n / 4) + 1);
    }
    else
    {
        printf("%d", n / 4);
    }
}