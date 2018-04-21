#include <stdio.h>

int main()
{
    int arr[5] = { 400, 340, 170, 100, 70 };
    int a, b;

    scanf("%d %d", &a, &b);
    
    if (arr[a - 1] + arr[b - 1] > 500)
        printf("angry");
    else
        printf("no angry");

    return 0;
}