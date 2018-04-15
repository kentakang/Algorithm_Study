#include <stdio.h>

int main()
{
    int num, sum = -1, min = 100;

    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &num);

        if (num % 2 != 0)
        {
            sum += num;
            
            if (min > num)
            {
                min = num;
            }
        }
    }

    printf("%d", sum + 1);

    if (min < 100)
    {
        printf("\n%d", min);
    }
}