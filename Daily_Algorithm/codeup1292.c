#include <stdio.h>

int main()
{
    int num, sum = 0;
    char str[10];
    scanf("%s", str);

    for (int i = 0; i < 10; i++)
    {
        sum += str[i] - 48;
    }

    if (sum % 7 == 4)
    {
        printf("suspect");
    }
    else
    {
        printf("citizen");
    }
}