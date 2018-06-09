#include <stdio.h>
#include <stdlib.h>

void sortRank();
int *score;
int *rank;
int *rank2;
int n;

int main()
{
    int cnt = 0, idx = 0, prev = 0, next = 0, isSame = 0;
    scanf("%d", &n);

    score = malloc(sizeof(int) * n);
    rank = malloc(sizeof(int) * n);
    rank2 = malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
        scanf("%d", &score[i]);

    for (int i = 0; i < n; i++)
        scanf("%d", &rank[i]);

    for (int i = 0; i < n; i++)
    {
        int temp = score[i];
        score[i] = 0;
        cnt = 0;

        sortRank();

        for (int j = 0; j < n; j++)
        {
            if (rank[j] != rank2[j])
                cnt++;
        }

        score[i] = temp;

        if (cnt == 2)
        {
            idx = i + 1;
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (rank[i] == rank[j])
            {
                isSame = 1;
            }
        }
    }

    printf("%d\n", idx);

    prev = rank[idx - 1] - 1;
    next = rank[idx - 1] + 1;

    if (isSame)
    {
        int sameIdx = 0;

        for (int i = 0; i < n; i++)
        {
            if (i == idx - 1)
                continue;

            if (rank[i] == rank[idx - 1])
            {
                sameIdx = i;
            }
        }

        printf("%d %d", score[sameIdx], score[sameIdx]);
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (rank[i] == prev)
            {
                prev = score[i];
            }

            if (rank[i] == next)
            {
                next = score[i];
            }
        }

        printf("%d %d", next + 1, prev - 1);
    }
}

void sortRank()
{
    int cnt;

    for (int i = 0; i < n; i++)
    {
        cnt = 0;

        for (int j = 0; j < n; j++)
        {
            if (score[i] < score[j])
                cnt++;
        }

        rank2[i] = cnt + 1;
    }
}