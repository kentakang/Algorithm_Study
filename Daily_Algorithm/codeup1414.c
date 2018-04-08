#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int cCnt = 0, ccCnt = 0;
    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'c' || str[i] == 'C')
        {
            cCnt++;
        }

        if (i != strlen(str) - 1)
        {
            if ((str[i] == 'c' || str[i] == 'C') && (str[i + 1] == 'c' || str[i + 1] == 'C'))
            ccCnt++;
        }
    }

    printf("%d\n%d", cCnt, ccCnt);
}