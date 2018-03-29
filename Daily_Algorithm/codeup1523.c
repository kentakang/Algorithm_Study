#include <stdio.h>

int main()
{
    int map[9][9] = {0,};
    int a1, a2, b1, b2, c1, c2, d1, d2;
    int wardInBush = 0;
    int wardInLens = 0;
    int cnt = 0;
    scanf("%d %d %d %d %d %d %d %d", &a1, &a2, &b1, &b2, &c1, &c2, &d1, &d2);
    map[a1 -1][a2 - 1] = 1;

    // 부쉬 부분 처리
    for (int i = (c1 -1); i <= (d1 - 1); i++)
    {
        for (int j = (c2 - 1); j <= (d2 - 1); j++)
        {
            if (map[i][j] == 1)
            {
                wardInBush = 1;
                continue;
            }

            map[i][j] = 3;
        }
    }

    // 와드 시야 부분
    for (int i = (a1 - 1) - 2; i < (a1 - 1) + 3; i++)
    {
        for (int j = (a2 - 1) - 2; j < (a2 - 1) + 3; j++)
        {
            if (map[i][j] != 0 || i < 0 || i >= 9 || j < 0 || j > 8)
                continue;

            map[i][j] = 2;
        }
    }

    // 와드가 부쉬안에 있을 경우
    if (wardInBush == 1)
    {
        for (int i = (c1 -1); i <= (d1 - 1); i++)
        {
            for (int j = (c2 - 1); j <= (d2 - 1); j++)
            {
                if (map[i][j] == 1)
                    continue;
                
                map[i][j] = 2;
            }
        }
    }

    // 렌즈 처리 부분
    for (int i = (b1 - 1) - 2; i < (b1 - 1) + 2; i++)
    {
        for (int j = (b2 - 1) - 2; j < (b2 - 1) + 2; j++)
        {
            if (i < 0 || i > 8 || j < 0 || j > 8)
                continue;

            //printf("map[%d][%d] = %d ", i, j, map[i][j]);

            if (map[i][j] == 1)
                wardInLens = 1;

            map[i][j] = 0;
        }

        //printf("\n");
    }

    // 와드가 렌즈 범위에 포함될 경우
    if (wardInLens == 1)
    {
        if (wardInBush == 1)
        {
            for (int i = (c1 -1); i <= (d1 - 1); i++)
            {
                for (int j = (c2 - 1); j <= (d2 - 1); j++)
                {
                    map[i][j] = 0;
                }
            }
        }
        else
        {
            for (int i = (a1 - 1) - 2; i < (a1 - 1) + 3; i++)
            {
                for (int j = (a2 - 1) - 2; j < (a2 - 1) + 3; j++)
                {
                    map[i][j] = 0;
                }
            }
        }
    }

    // 맵 출력
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (map[i][j] == 2 || map[i][j] == 1)
                cnt++;
        }
    }

    printf("%d", cnt);

    return 0;
}