#include <stdio.h>
#include <string.h>

int main()
{
    int map[25][25];
    int copyMap[25][25];

    for (int i = 0; i < 25; i++)
    {
        for (int j = 0; j < 25; j++)
        {
            scanf("%d", &map[i][j]);
        }
    }

    memcpy(copyMap, map, sizeof(map));

    for (int x = 0; x < 25; x++)
    {
        for (int y = 0; y < 25; y++)
        {
            int nearLife = 0;

            for (int i = x - 1; i <= x + 1; i++)
            {
                for (int j = y - 1; j <= y + 1; j++)
                {
                    if (i < 0 || i > 24 || j < 0 | j > 24 || (i == x && j == y))
                        continue;

                    if (map[i][j] == 1)
                    {
                        nearLife++;
                    }
                }
            }

            if (map[x][y] == 0)
            {
                if (nearLife == 3)
                {
                    copyMap[x][y] = 1;
                }
            }
            else
            {
                if (nearLife >= 4 || nearLife <= 1)
                {
                    copyMap[x][y] = 0;
                }
                else if (nearLife == 2 || nearLife == 3)
                {
                    copyMap[x][y] = 1;
                }
            }
        }
    }

    for (int i = 0; i < 25; i++)
    {
        for (int j = 0; j < 25; j++)
        {
            printf("%d ", copyMap[i][j]);
        }

        printf("\n");
    }
}