#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (170 >= a)
        printf("CRASH %d", a);
    else if (170 >= b)
        printf("CRASH %d", b);
    else if (170 >= c)
        printf("CRASH %d", c);
    else
        printf("PASS");
}