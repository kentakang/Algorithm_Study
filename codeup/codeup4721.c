#include <stdio.h>

struct Candidate {
    int num;
    int score;
    int rank[3];
};

int main()
{
    struct Candidate candidate[3] = {
        {1, 0, {0,}},
        {2, 0, {0,}},
        {3, 0, {0,}}
    };

    int n, input;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &input);
            candidate[j].score += input;
            candidate[j].rank[input - 1]++;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (candidate[j].score < candidate[j + 1].score)
            {
                struct Candidate temp = candidate[j];
                candidate[j] = candidate[j + 1];
                candidate[j + 1] = temp;
            }
        }
    }

    if (candidate[0].score == candidate[1].score)
    {
        if (candidate[0].rank[2] == candidate[1].rank[2])
        {
            if (candidate[0].rank[1] == candidate[1].rank[1])
            {
                printf("%d %d", 0, candidate[0].score);
            }
            else
            {
                int idx = candidate[0].rank[1] > candidate[1].rank[1] ? 0 : 1;
                printf("%d %d", candidate[idx].num, candidate[idx].score);
            }
        }
        else
        {
            int idx = candidate[0].rank[2] > candidate[1].rank[2] ? 0 : 1;
            printf("%d %d", candidate[idx].num, candidate[idx].score);
        }
    }
    else
    {
        printf("%d %d", candidate[0].num, candidate[0].score);
    }
}