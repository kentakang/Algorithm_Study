#include <stdio.h>

int main()
{
    int n, cnt = 0;
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
            cnt++;
    }

    if (cnt == 1)
        printf("prime");
    else
        printf("not prime");
}