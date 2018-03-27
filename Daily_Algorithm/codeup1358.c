#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2)
    {
        for (int j = (n - i) / 2 - 1; j >= 0; j--)
            printf(" ");
        
        for (int j = i; j > 0; j--)
        {
            printf("*");
        }

        printf("\n");
    }
}