#include <stdio.h>

int main()
{
    int h, k;
    char d;
    scanf("%d %d %c", &h, &k, &d);

    if (d == 'R')
    {
        for (int i = 1; i <= h; i++)
        {
            for (int j = 0; j < h - i; j++)
            {
                printf(" ");
            }

            for (int j = 0; j < k; j++)
            {
                printf("*");
            }

            printf("\n");
        }
    }
    else
    {
        for (int i = 1; i <= h; i++)
        {
            for (int j = 0; j < i - 1; j++)
            {
                printf(" ");
            }

            for (int j = 0; j < k; j++)
            {
                printf("*");
            }

            printf("\n");
        }
    }
}