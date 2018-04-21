#include <stdio.h>
#include <stdlib.h>

struct Players {
    int country;
    int studentId;
    int score;
};

int main()
{
    int n, idx = 0;
    scanf("%d", &n);
    struct Players *table = malloc(sizeof(struct Players) * n);
    struct Players *medalist = malloc(sizeof(struct Players) * 3);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &table[i].country, &table[i].studentId, &table[i].score);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (table[j].score < table[j + 1].score)
            {
                struct Players temp = table[j];
                table[j] = table[j + 1];
                table[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        
        for (int j = 0; j < idx; j++)
        {
            if (medalist[j].country == table[i].country)
                cnt++;
        }

        if (cnt < 2)
            medalist[idx++] = table[i];
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d %d\n", medalist[i].country, medalist[i].studentId);
    }
}