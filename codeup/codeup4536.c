#include <stdio.h>

int main()
{
    int arr[10][2] = {0, };
    int num, sum = 0, mode = 0, modeCnt = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num);

        for (int j = 0; j < 10; j++)
        {
            if (num == arr[j][0])
            {
                arr[j][1]++;
            }
        }

        arr[i][0] = num;
    }

    mode = arr[0][0];
    modeCnt = arr[0][1];

    for (int i = 0; i < 10; i++)
    {
        if (arr[i][1] > modeCnt)
        {
            mode = arr[i][0];
            modeCnt = arr[i][1];
        }

        sum += arr[i][0];
    }

    printf("%.0f\n", (double) sum / 10);
    printf("%d", mode);
}