#include <stdio.h>

int main()
{
    int arr[5], result = 0;

    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < 5; i++)
        result += arr[i] * arr[i];

    printf("%d", result % 10);
}