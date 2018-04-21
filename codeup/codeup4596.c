#include <stdio.h>

int main()
{
    int arr[9][9];
    int maxI = 0, maxJ = 0, max;

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    max = arr[0][0];

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                maxI = i;
                maxJ = j;
            }
        }
    }

    printf("%d\n%d %d", max, maxI + 1, maxJ + 1);
}