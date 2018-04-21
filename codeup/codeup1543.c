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
    for (int i = 0; i < n; i++)
    {
        printf("love\n");
    }
}