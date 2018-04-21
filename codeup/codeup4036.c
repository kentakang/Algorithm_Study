#include <stdio.h>

int main()
{
    int n, m;

    scanf("%d %d", &n, &m);
    printf("%d\n%d", (n + m) / 2, n - ((n + m) / 2));
}