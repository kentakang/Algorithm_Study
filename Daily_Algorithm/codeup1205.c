#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;
    float max = 0;

    scanf("%d %d", &a, &b);

    max = (a + b) > max ? a + b : max;
    max = (a - b) > max ? a - b : max;
    max = (b - a) > max ? b - a : max;
    max = (a * b) > max ? a * b : max;
    max = (a / b) > max ? a / b : max;
    max = (b / a) > max ? b / a : max;
    max = (pow(a, b)) > max ? pow(a, b) : max;
    max = (pow(b, a)) > max ? pow(b, a) : max;

    printf("%lf", max);
}