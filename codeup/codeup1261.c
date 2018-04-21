#include <stdio.h>

int main()
{
    int n, count = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &n);
        if (n % 5 == 0)
        {
            count = n;
            break;
        }
    }

    printf("%d", count);
}