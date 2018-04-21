#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
        return a;

    gcd(b, a % b);
}

int gcd2(int a, int b, int c)
{
    return gcd(gcd(a, b), c);
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    printf("%d", gcd2(a, b, c));
}