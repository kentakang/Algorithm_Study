#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;

    scanf("%d %d", &a, &b);
    
    if (a > b) {
        printf(">");
    } else if (a < b) {
        printf("<");
    } else {
        printf("==");
    }

    return 0;
}
