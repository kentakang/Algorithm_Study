#include <stdio.h>

int n;

int prime(int);

int main()
{
  scanf("%d", &n);
  if(prime(n)) printf("prime\n");
  else printf("composite\n");
}

int prime(int n)
{
    int cnt = 0;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            cnt++;    
    }

    return !cnt;
}