#include <stdio.h>

int main()
{
    int score[3][4];
    int sum = 0;
    int finalSum = 0;
    
    for (int i = 0; i < 3; i++)
    {
        sum = 0;

        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &score[i][j]);
            sum += score[i][j];
        }

        score[i][3] = sum;

        for (int j = 0; j < 4; j++)
        {
            printf("%d ", score[i][j]);
        }

        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        sum = 0;

        for (int j = 0; j < 3; j++)
        {
            sum += score[j][i];
        }

        printf("%d ", sum);

        finalSum += sum;
    }

    printf("%d ", finalSum);
}