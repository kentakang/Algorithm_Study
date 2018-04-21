#include <stdio.h>

int main()
{
    int arr[3];
    
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("%d %d %d", arr[0], arr[1], arr[2]);
}