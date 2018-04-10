#include <stdio.h>

int a, n;

long long int pow(int, int);

int main()
{
  scanf("%d%d", &a, &n);
  printf("%lld\n", pow(a, n));
}

long long int pow(int a, int b)
{
    long long int c = 1;
    if (a <= 1)
        return a;

    for (int i = 1; i <= b; i++)
    {
        c *= a;
    }

    return (long long int) c;
}