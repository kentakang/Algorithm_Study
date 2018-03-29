#include <stdio.h>
#include <stdbool.h>

int n;

int zero(int);

int plus(int);

int main()
{
  scanf("%d", &n);
  if(zero(n)) printf("zero\n");
  else printf("%s", plus(n)?"plus\n":"minus\n");
}

int zero(int k)
{
    return !k;
}

int plus(int k)
{
    return k > 0;
}