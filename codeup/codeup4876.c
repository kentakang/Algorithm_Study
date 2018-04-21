#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int a[100] = {0,};
        int b[100] = {0,};
        int n;

        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &n);
            
            for (int k = 0; k < n; k++)
            {
                int num;

                scanf("%d", &num);
                
                if (j == 0)
                {
                    a[num - 1]++;
                }
                else
                {
                    b[num - 1]++;
                }
            }
        }

        for (int j = 3; j >= 0; j--)
        {
            if (a[j] > b[j])
            {
                printf("A\n");
                break;
            }
            else if (b[j] > a[j])
            {
                printf("B\n");
                break;
            }
            
            if (j == 0 && a[j] == b[j])
            {
                printf("D\n");
            }
        }
    }
}