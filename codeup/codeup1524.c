#include <stdio.h>

int main()
{
    int map[9][9];
    int r, c, cnt = 0;

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            scanf("%d", &map[i][j]);
        }
    }

    scanf("%d %d", &r, &c);
    r -= 1;
    c -= 1;

    for (int i = r - 1; i <= r + 1; i++)
    {
        for (int j = c - 1; j <= c + 1; j++)
        {
            if ((i < 0 || i > 8) || (j < 0 || j > 8))
                continue;
            
            if (map[i][j] == 1)
                cnt++;
        }
    }

    if (map[r][c] == 1)
        cnt = -1;

    printf("%d", cnt);
}