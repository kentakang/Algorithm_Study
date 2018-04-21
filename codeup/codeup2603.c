#include <stdio.h>

int main()
{
    int score[10];

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &score[i]);
        score[i] /= 10;
    }

    for (int i = 10; i > 0; i--)
    {
        for (int j = 0; j < 10; j++)
        {
            if (score[j] >= i)
                printf("# ");
            else
                printf("  ");
        }

        printf("\n");
    }
}