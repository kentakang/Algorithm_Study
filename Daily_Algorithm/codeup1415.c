#include <stdio.h>

int main()
{
    int num, maxOdd = 0, maxEven = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            if (num > maxEven)
                maxEven = num;
        }
        else
        {
            if (num > maxOdd)
                maxOdd = num;
        }
    }

    if (maxOdd == 0)
    {
        printf("%d", maxEven);
    }
    else if (maxEven == 0)
    {
        printf("%d", maxOdd);
    }
    else
    {
        printf("%d %d", maxOdd, maxEven);
    }
}