#include <stdio.h>

int main() {
    while (1) {
        int x, y, z = 0;
        int temp = 0;

        scanf("%d %d %d", &x, &y, &z);

        if (x == 0 && y == 0 && z == 0) {
            break;
        }

        if (x > y) {
            temp = y;
            y = x;
            x = temp;
        }

        if (y > z) {
            temp = z;
            z = y;
            y = temp;
        }

        if (z*z == x * x + y * y) {
            printf("right\n");
        } else {
            printf("wrong\n");
        }
    }

    return 0;
}