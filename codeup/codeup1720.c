#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, wrongCase = -1, fixedAnswer = 0;
    scanf("%d", &n);
    int **testCase = malloc(sizeof(int *) * n);

    for (int i = 0; i < n; i++)
    {
        int answer;
        testCase[i] = malloc(sizeof(int) * 3);

        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &testCase[i][j]);
        }
        
        scanf("%d", &answer);

        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                if (testCase[i][k] > testCase[i][k + 1])
                {
                    int temp = testCase[i][k];
                    testCase[i][k] = testCase[i][k + 1];
                    testCase[i][k + 1] = temp;
                }
            }
        }

        if (wrongCase == -1 && testCase[i][0] != answer)
        {
            wrongCase = i + 1;
            fixedAnswer = testCase[i][0];
        }

        free(testCase[i]);
    }

    free(testCase);
    if (fixedAnswer != 0)
        printf("%d %d", wrongCase, fixedAnswer);
    else
        printf("%d", wrongCase);
}