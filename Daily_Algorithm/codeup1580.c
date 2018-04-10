#include <stdio.h>

float circle(int r)
{
    return r * r * 3.14;
}

int main()
{
    printf("%f", circle(5));
}