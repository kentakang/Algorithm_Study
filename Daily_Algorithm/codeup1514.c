#include <stdio.h>

int board[7][7] = {0, };

void Laser();

int main()
{
    int x, y;

    for (int i = 0; i < 7; i++)
    {
        board[3][i] = 1;
    }

    for (int i = 0; i < 3; i++)
    {
        scanf("%d %d", &x, &y);
        board[x - 1][y - 1] = 2;
    }

    Laser();
    Laser();
    
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            printf("%d ", board[i][j]);
        }

        printf("\n");
    }
}

void Laser()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (board[i][j] == 2 )
            {
                int laserCnt = 0;

                for (int k = 0; k < 7; k++)
                {
                    if (board[i][k] != 0)
                    {
                        laserCnt++;
                    }
                }

                for (int k = 0; k < 7; k++)
                {
                    if (board[k][j] != 0)
                    {
                        laserCnt++;
                    }
                }

                if (laserCnt >= 7)
                {
                    for (int k = 0; k < 7; k++)
                    {
                        if (board[i][k] == 2)
                            continue;

                        board[i][k] = 1;
                    }

                    for (int k = 0; k < 7; k++)
                    {
                        if (board[k][j] == 2)
                            continue;
                    
                        board[k][j] = 1;
                    }
                }
            }
        }
    }
}