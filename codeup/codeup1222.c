#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    for (int i = a; i < 90; i += 5)
    {
        b++;
    }
    
    if (b > c)
        printf("win");
    else if (b < c)
        printf("lose");
    else
        printf("same");
}