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
    if (n == 1)
        return 1;
    
    return n * f(n - 1);
}