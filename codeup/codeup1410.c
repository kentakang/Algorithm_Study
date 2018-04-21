#include <stdio.h>
#include <string.h>

int main()
{
    char str[100000];
    scanf("%s", str);
    int cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '(')
            cnt1++;
        else
            cnt2++;
    }

    printf("%d %d", cnt1, cnt2);
}