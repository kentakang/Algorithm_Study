#include <stdio.h>

int n;

void f(int);

int main()
{
  scanf("%d", &n);
  f(n);
}

void f(int n)
{
    int cnt = 0;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            cnt++;    
    }

    if (cnt == 0)
        printf("prime");
    else
        printf("composite");
}