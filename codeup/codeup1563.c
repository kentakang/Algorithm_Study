#include <stdio.h>

int n, m, x;

int max(int p, int q) { return p >= q ? p : q; }

int min(int p, int q) { return p < q ? p : q; }

int mid(int a, int b, int c)
{
    return max(a, b)^max(b, c)^max(c ,a);
}

int main()
{
    scanf("%d %d %d", &n, &m, &x);
    printf("%d\n", mid(n, m, x));
}