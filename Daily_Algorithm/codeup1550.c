#include <stdio.h>

long long int n;

int sqrt(long long int);

int main()
{
  scanf("%lld", &n);
  printf("%d\n", sqrt(n));
}

int sqrt(long long int n)
{
    double next;
    double temp;

    next = 0.5 * (1 + (n / 1));

    while (1)
    {
        temp = next;
        next = 0.5 * (next + (n / next));

        if (temp - next < 0.005 || temp - next < -0.005)
            break;
    }

    return (int) next;
}