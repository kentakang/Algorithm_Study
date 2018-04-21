#include <stdio.h>

int main()
{
    int sum = 0, cnt = 0, n;

    for  (int i = 0; i < 7; i++)
    {
        scanf("%d", &n);

        if (n % 2 != 0)
        {
            sum += n;
            cnt++;
        }
    }

    if (cnt == 0)
        printf("-1");
    else
        printf("%d", sum);
}