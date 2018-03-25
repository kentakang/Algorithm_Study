#include <stdio.h>

int main()
{
    int lottoNum[7];
    int haveNum[6];
    int n, count = 0;

    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &n);
        lottoNum[i] = n;
    }

    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &n);
        haveNum[i] = n;
    }

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (haveNum[i] == lottoNum[j])
            {
                count++;
                break;
            }
        }
    }

    if (count == 5)
    {
        for (int i = 0; i < 6; i++)
        {
            if (haveNum[i] == lottoNum[6])
            {
                count += 2;
                break;
            }
        }
    }

    switch (count)
    {
        case 7:
            printf("2");
            break;
        case 6:
            printf("1");
            break;
        case 5:
            printf("3");
            break;
        case 4:
            printf("4");
            break;
        case 3:
            printf("5");
            break;
        default:
            printf("0");
            break;
    }
    
    return 0;
}