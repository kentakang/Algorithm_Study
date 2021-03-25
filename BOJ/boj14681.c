#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x, y;
    int quadrant = 0;

    scanf("%d", &x);
    scanf("%d", &y);

    if (x > 0 && y > 0)
        quadrant = 1;

    if (x < 0 && y > 0)
        quadrant = 2;

    if (x < 0 && y < 0)
        quadrant = 3;

    if (x > 0 && y < 0)
        quadrant = 4;

    printf("%d", quadrant);
}