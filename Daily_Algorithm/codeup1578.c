#include <stdio.h>

int mymax(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", mymax(a, b));
}