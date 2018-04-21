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
    if (n == 0)
        printf("zero");
    else
        printf("non zero");
}