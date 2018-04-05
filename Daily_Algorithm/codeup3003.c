#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5000000; i++)
    {
        int n;

        scanf("%d", &n);

        if (i % 50 == 0)
            printf("%d ", n);
    }
}