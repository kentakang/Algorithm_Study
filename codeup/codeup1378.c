#include <stdio.h>

int suyeol(int n)
{
    if (n == 1)
        return 1;
    else
        return n + suyeol(n - 1);
}

int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++)
    {
        sum += suyeol(i);
    }

    printf("%d", sum);
}