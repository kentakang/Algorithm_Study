#include <stdio.h>
#include <string.h>

int main()
{
    int sum = 0, notZeroCount = 0;
    char str[7];

    scanf("%s", str);

    for (int i = strlen(str) - 1; i >= 0; i--)
    {
        if (str[i] == '0' && notZeroCount == 0)
            continue;
        
        notZeroCount++;
        printf("%c", str[i]);
        sum += str[i] - 48;
    }

    printf("\n%d", sum);
}