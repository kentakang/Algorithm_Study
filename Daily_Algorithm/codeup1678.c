#include <stdio.h>

int main()
{
    int arr[5][5], sum, max = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sum = 0;

            for (int k = i - 1; k <= i + 1; k++)
            {
                if (k < 0 || k > 4)
                    continue;

                for (int y = j - 1; y <= j + 1; y++)
                {
                    if (y < 0 || y > 4)
                        continue;
                        
                    sum += arr[k][y];
                }
            }

            if (sum > max)
                max = sum;
        }
    }

    printf("%d", max);
}