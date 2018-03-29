#include <stdio.h>

int n;

long long int f(int);

int main()
{
  scanf("%d", &n);
  printf("%lld\n", f(n));
}

long long int f(int n)
{
    long long int sum = 0;

    for (int i = 1; i <= n; i++)
        sum += i;
    
    return sum;
}