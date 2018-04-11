#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    n += 56;
    n %= 60;

    printf("%c%d", (n % 12 + 65), n % 10);
}