#include <stdio.h>

int main()
{
    int sum = 0, num;

    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &num);
        sum += num;
    }

    switch (sum)
    {
        case 1:
            printf("µµ");
            break;
        case 2:
            printf("°³");
            break;
        case 3:
            printf("°É");
            break;
        case 4:
            printf("À·");
            break;
        default:
            printf("¸ğ");
            break;
    }
}