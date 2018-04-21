#include <stdio.h>

int main()
{
    int sum = 0;
    int take, getoff, max = 0;

    for (int i = 0; i < 4; i++)
    {
        scanf("%d %d", &getoff, &take);
        sum = sum - getoff + take;

        if (sum > max)
        {
            max = sum;
        }
    }

    printf("%d", max);
}