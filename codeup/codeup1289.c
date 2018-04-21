#include <stdio.h>

int main()
{
    int a, b, max = 0;

    for (int i = 0; i < 3; i++)
    {
        scanf("%d %d", &a, &b);

        if ((a * b) > max)
            max = a * b;
    }

    printf("%d", max);
}