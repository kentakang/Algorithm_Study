#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dataCount;
    scanf("%d", &dataCount);
    int *data = malloc(sizeof(int) * dataCount);

    for (int i = 0; i < dataCount; i++)
    {
        scanf("%d", &data[i]);
    }

    for (int i = 0; i < dataCount; i++)
    {
        for (int j = 0; j < dataCount - 1; j++)
        {
            if (data[i] > data[i + 1])
            {
                int temp = data[i];
                data[i] = data[i + 1];
                data[i + 1] = temp;
            }
        }
    }

    for (int i = 0; i < dataCount; i++)
    {
        printf("%d ", data[i]);
    }
}