#include <stdio.h>

int main()
{
    int arr[10];
    int k;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);
    printf("%d", arr[k - 1]);
}