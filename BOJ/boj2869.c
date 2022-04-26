#include <stdio.h>
#include <math.h>

int main() {
    int a, b, v = 0;

    scanf("%d %d %d", &a, &b, &v);
    printf("%d", (int) ceil((double) (v -b) / (a - b)));

    return 0;
}