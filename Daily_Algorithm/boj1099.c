#include <stdio.h>

int main()
{
    int arr[10][10];
    int x = 1, y = 1;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
            scanf("%d", &arr[i][j]);
    }

    while (arr[x][y] != 2)
    {
        arr[x][y] = 9;
        if (arr[x][y + 1] != 1)
            y += 1;
        else if (arr[x + 1][y] != 1)
            x += 1;
        else
            break;
    }

    arr[x][y] = 9;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}