#include <stdio.h>
#include <math.h>

int main()
{
    double a, b;
    double c, d;
    double x, y;
    
    scanf("%lf %lf", &a, &b);
    scanf("%lf %lf", &c, &d);

    x = pow(a - c, 2);
    y = pow(b - d, 2);
    printf("%.2f", sqrt(x + y));
}