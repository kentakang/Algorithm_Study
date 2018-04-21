#include <stdio.h>
#include <math.h>

int isSquare(int num)
{
    int temp;
    
    switch(num & 0x0f)
    {
        case 0:
        case 1:
        case 4:
        case 9:
            temp = (int) (sqrt((double) num) + 0.5);
            if (temp * temp == num)
                return 1;
        default:
            return 0;
    }
}

int main()
{
    int n, a, b = 0;
    scanf("%d", &n);

    for (int i = n; i > 0; i--)
    {
        if (isSquare(i))
        {
            a = i;
            break;
        }
        else
        {
            b++;
        }
    }

    printf("%d %d", b, (int) sqrt((double) a));
}