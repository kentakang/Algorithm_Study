#include <stdio.h>

int gcd(int a, int b)
{
    return (a % b == 0 ? b : gcd(b, a % b)); 
}

int lcm(int a, int b)
{
    return a * b / gcd(a , b);
}

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d\n%d", gcd(a , b), lcm(a, b));
}