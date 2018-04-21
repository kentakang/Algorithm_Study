#include <stdio.h>
#include <stdlib.h>

int static compare (const void* first, const void* second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}

int main()
{
    int n, max = 0;
    int dice[4];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int score = 0;

        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &dice[j]);
        }

        qsort(dice, 4, sizeof(int), compare);

        if (dice[0] == dice[3])
            score = 50000 + (5000 * dice[0]);
        else if (dice[0] == dice[2] || dice[1] == dice[3])
            score = 10000 + dice[2] * 1000;
        else if (dice[0] != dice[1] && dice[1] != dice[2] && dice[2] != dice[3])
            score = dice[3] * 100;
        else if (dice[0] == dice[1] && dice[2] == dice[3])
            score = 2000 + dice[0] * 500 + dice[2] * 500;
        else if (dice[0] == dice[1])
            score = 1000 + dice[0] * 100;
        else
            score =  1000 + dice[2] * 100;

        if (score > max)
            max = score;
    }

    printf("%d", max);
}