#include <stdio.h>

int main()
{
    int num, count = 0;
    int binary[100];
    
    scanf("%d", &num);

    if (num == 0)
        printf("0");

    while (num > 0)
    {
        binary[count++] = num % 2;
        num /= 2;
    }

    for (int i = count - 1; i >= 0; i--)
        printf("%d", binary[i]);
}