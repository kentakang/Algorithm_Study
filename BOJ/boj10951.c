#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x, y;

    while (scanf("%d %d", &x, &y) != EOF) {
        printf("%d\n", x + y);
    }
}
