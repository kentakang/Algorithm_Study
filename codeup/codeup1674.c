#include <stdio.h>

int main()
{
    int n, sum = 0;
    scanf("%d", &n);

    for (int i = 0; i < 10; i++)
    {
        sum += n % 10;
        n /= 10;
    }

    if (sum % 7 == 4)
    {
        printf("Bad");
    }
    else
    {
        printf("Good");
    }
}