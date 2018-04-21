#include <stdio.h>

int getNumberLength(int n);

int main()
{
    int n;
    scanf("%d", &n);

    while (getNumberLength(n) > 1)
    {
        int temp = n;
        int sum = 0;
        
        for (int i = 0; i < getNumberLength(n); i++)
        {
            sum += temp % 10;
            temp /= 10;
        }

        sum += temp % 10;
        n = sum;
    }

    printf("%d", n);
}

int getNumberLength(int n)
{
    if (n == 10)
        return 2;
        
    int i = 1, num_len = 0;

    while (n > i)
    {
        i *= 10;
        num_len++;
    }

    return num_len;
}