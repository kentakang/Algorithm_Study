#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], cnt = 0;

    scanf("%[^\n]", str);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'l' && str[i + 1] == 'o' && str[i + 2] == 'v' && str[i + 3] == 'e')
        {
            cnt++;
            i += 3;
        }
    }

    printf("%d", cnt);
}