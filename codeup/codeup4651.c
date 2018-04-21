#include <stdio.h>

int main()
{
    int a, b, c, d;
    
    for (int i = 0; i < 3; i++)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);

        if (68 - (a + b + c + d) < 65)
            printf("E\n");
        else
            printf("%c\n", 68 - (a + b + c + d));
    }
}