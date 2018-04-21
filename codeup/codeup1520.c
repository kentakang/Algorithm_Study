#include <stdio.h>
#include <stdlib.h>

int row, col, birthNeighbor, liveNeighbor, deathNeighbor, generation;
int **map;
int **copiedMap;

void initializeMap();
void copyMap(char parameter);
void showMap();
int checkNearLife(int x, int y);

int main()
{
    scanf("%d %d", &row, &col);
    scanf("%d %d %d", &birthNeighbor, &liveNeighbor, &deathNeighbor);
    initializeMap();

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &map[i][j]);
        }
    }

    scanf("%d", &generation);

    for (int i = 0; i < generation; i++)
    {
        copyMap('c');

        for (int x = 0; x < row ; x++)
        {
            for (int y = 0; y < col; y++)
            {
                int nearLife = checkNearLife(x, y);

                if (map[x][y] == 0)
                {
                    if (nearLife == birthNeighbor)
                    {
                        copiedMap[x][y] = 1;
                    }
                }
                else
                {
                    copiedMap[x][y] = (liveNeighbor <= nearLife && nearLife < deathNeighbor) ? 1 : 0;
                }
            }
        }

        copyMap('o');
    }

    showMap();
}

void initializeMap()
{
    map = (int **) malloc(sizeof(int *) * row);
    copiedMap = (int **) malloc(sizeof(int *) * row);

    for (int i = 0; i < row; i++)
    {
        map[i] = (int *) malloc(sizeof(int) * col);
        copiedMap[i] = (int *) malloc(sizeof(int) * col);

        for (int j = 0; j < col; j++)
        {
            map[i][j] = 0;
            copiedMap[i][j] = 0;
        }
    }
}

void copyMap(char parameter)
{
    if (parameter == 'c')
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                copiedMap[i][j] = map[i][j];
            }
        }
    }
    else if (parameter == 'o')
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                map[i][j] = copiedMap[i][j];
            }
        }
    }
}

void showMap()
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", map[i][j]);
        }

        printf("\n");
    }
}

int checkNearLife(int x, int y)
{
    int nearLife = 0;

    for (int i = x - 1; i <= x + 1; i++)
    {
        for (int j = y - 1; j <= y + 1; j++)
        {
            if ((i < 0 || i > row - 1) || (j < 0 || j > col - 1) || (i == x && j == y))
                continue;

            if (map[i][j] == 1)
            {
                nearLife++;
            }
        }
    }

    return nearLife;
}