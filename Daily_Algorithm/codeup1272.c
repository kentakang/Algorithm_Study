#include <stdio.h>

int main()
{
    int k, h, a, b;

    scanf("%d %d", &k, &h);

    if (k % 2 == 0)
        a = k * 2 - 1;
    else
        a = (k / 2) * 10;
    
    if (h % 2 == 0)
        b = h * 2 - 1;
    else
        b = (h / 2) * 10;

    printf("%d", a + b);

    return 0;
}