#include <stdio.h>

int a, b;

int gcd(int, int);

int main()
{
    scanf("%d %d", &a, &b);
    printf("%d\n", gcd(a, b));
}

int gcd(int n, int m)
{
    int swap;

    while (m)
    {
        swap = n % m;
        n = m;
        m = swap;
    }

    return n;
}