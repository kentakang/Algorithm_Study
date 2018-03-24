#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (b - c > a)
        printf("advertise");
    else if (b - c == a)
        printf("does not matter");
    else
        printf("do not advertise");
}