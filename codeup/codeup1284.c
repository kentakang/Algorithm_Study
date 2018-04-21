#include <stdio.h>

int main()
{
    int n, cnt = 0;
    int num[5];
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            n /= i;
            num[cnt++] = i;
            i = 1;

            if (cnt > 2)
                break;
        }
    }

    if (cnt == 2)
    {
        printf("%d %d", num[0], num[1]);
    }
    else
    {
        printf("wrong number");
    }
}