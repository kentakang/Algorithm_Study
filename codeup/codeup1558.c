#include <stdio.h>

long long int n;

long long int f(long long int);

int main()
{
  scanf("%lld", &n);
  printf("%lld\n", f(n));
}

long long int f(long long int n)
{
    long long int result = 0;

    while (n)
    {
        result = (result * 10) + (n % 10);
        n /= 10; 
    }

    return result;
}