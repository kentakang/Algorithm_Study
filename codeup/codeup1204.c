#include <stdio.h>

int main()
{
    int num;

    scanf("%d", &num);

    if (num % 10 == 1 && num != 11)
        printf("%dst", num);
    else if (num % 10 == 2 && num != 12)
        printf("%dnd", num);
    else if (num % 10 == 3 && num != 13)
        printf("%drd", num);
    else
        printf("%dth", num);    
}