#include <stdio.h>

int main()
{
    int board[11][10];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            scanf("%d", &board[i][j]);
        }
    }

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &board[10][i]);
    }

    for (int i = 0; i < 10; i++)
    {
        int crash = 0;

        if (board[10][i] == 0)
            continue;
        
        for (int j = 9; j >= 0; j--)
        {
            if (board[j][i] == 0)
                continue;
            else
            {
                crash = board[j][i];
                break;
            }
        }

        if (crash == 0)
        {
            printf("%d safe\n", i + 1);
        }
        else if (crash > 0)
        {
            printf("%d crash\n", i + 1);
        }
        else if (crash < 0)
        {
            printf("%d fall\n", i + 1);
        }
    }
}