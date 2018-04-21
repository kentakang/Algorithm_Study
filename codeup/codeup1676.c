#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Company{
    int sold;
    int rank;
};

int main()
{
    int n, rank = 1;
    scanf("%d", &n);
    struct Company *companyList = malloc(sizeof(struct Company) * n);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &companyList[i].sold);
        companyList[i].rank = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        int max = 0;
        int cnt = 0;

        for (int j = 0; j < n; j++)
        {
            if (companyList[j].sold > max && companyList[j].rank == 0)
                max = companyList[j].sold;
        }

        for (int j = 0; j < n; j++)
        {
            if (companyList[j].sold == max)
            {
                if (rank >= n)
                    rank = n;

                companyList[j].rank = rank;
                cnt++;
            }
        }

        rank += cnt;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", companyList[i].rank);
    }
}