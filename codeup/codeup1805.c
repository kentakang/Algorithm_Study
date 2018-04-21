#include <stdio.h>
#include <stdlib.h>

struct Device {
    int deviceNumber;
    int gas;
};

int main()
{
    int n;
    scanf("%d", &n);
    struct Device *arr = malloc(sizeof(struct Device) * n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &arr[i].deviceNumber, &arr[i].gas);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j].deviceNumber > arr[j + 1].deviceNumber)
            {
                struct Device temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d %d\n", arr[i].deviceNumber, arr[i].gas);
    }

    free(arr);
}