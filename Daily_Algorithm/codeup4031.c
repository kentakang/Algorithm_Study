#include <stdio.h>

int main()
{
    int evenMax = 0, oddMax = 0, n;

    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &n);

        if (n % 2 == 0)
        {
            if (n > evenMax)
                evenMax = n;
        }
        else
        {
            if (n > oddMax)
                oddMax = n;
        }
    }

    printf("%d", evenMax + oddMax);
}