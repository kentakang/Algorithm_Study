#include <stdio.h>
#include <math.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    printf("%d", (int) pow((double) n, (double) k));
}