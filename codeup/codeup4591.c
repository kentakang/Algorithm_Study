#include <stdio.h>

int main()
{
    int arr[9], max, maxIdx = 0;

    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for (int i = 0; i < 9; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxIdx = i;
        }
    }

    printf("%d\n%d", max, maxIdx + 1);
}