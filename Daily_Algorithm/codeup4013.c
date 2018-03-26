#include <stdio.h>

int main()
{
    int n, n2, binaryCnt = 0;
    int binary[16];

    scanf("%d", &n);
    n2 = n;

    for (int i = 0; n > 0; i++)
    {
        binary[i] = n % 2;
        n /= 2;
        binaryCnt++;
    }

    printf("2 ");

    for (int i = binaryCnt - 1; i >= 0; i--)
        printf("%d", binary[i]);

    printf("\n8 %o\n", n2);
    printf("16 %X", n2);
}