#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int map[10][10];
int copyMap[10][10];
void bombEvent(int i, int j);
void showMap();

int main()
{
    int n;
    int *characterInfo;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            scanf("%d", &map[i][j]);
        }
    }

    memcpy(copyMap, map, sizeof(map));

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (map[i][j] >= 1)
                bombEvent(i, j);
        }
    }
    
    scanf("%d", &n);
    characterInfo = malloc(sizeof(int) * n);
    memcpy(map, copyMap, sizeof(copyMap));
    
    for (int i = 0; i < n; i++)
    {
        int x, y;

        scanf("%d %d", &x, &y);

        if (map[x - 1][y - 1] == -2)
        {
            characterInfo[i] = 1;
        }
        else
        {
            map[x- 1][y - 1] = i + 1;
            characterInfo[i] = 0;
        }
    }

    showMap();
    printf("Character Information\n");

    for (int i = 0; i < n; i++)
    {
        if (characterInfo[i] == 1)
            printf("player %d dead\n", i + 1);
        else
            printf("player %d survive\n", i + 1);
    }

    free(characterInfo);
}

void bombEvent(int x, int y)
{
    int bombSize = map[x][y];

    for (int i = x; i <= x + bombSize; i++)
    {
        if (map[i][y] == -1)
            break;
        
        if (i > 9)
            continue;

        copyMap[i][y] = -2;
    }

    for (int i = x; i >= x - bombSize; i--)
    {
        if (map[i][y] == -1)
            break;
        
        if (i < 0)
            continue;

        copyMap[i][y] = -2;
    }

    for (int i = y; i <= y + bombSize; i++)
    {
        if (map[x][i] == -1)
            break;
        
        if (i > 9)
            continue;

        copyMap[x][i] = -2;
    }

    for (int i = y; i >= y - bombSize; i--)
    {
        if (map[x][i] == -1)
            break;
        
        if (i < 0)
            continue;

        copyMap[x][i] = -2;
    }
}

void showMap()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", map[i][j]);
        }

        printf("\n");
    }
}