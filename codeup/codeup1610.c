#include <stdio.h>

void subString(char *str, int start, int count)
{
    for (int i = start; i < start + count; i++)
    {
        printf("%c", str[i]);
    }
}

int main()
{
    int start, count;
    char str[100];

    scanf("%s", str);
    scanf("%d %d", &start, &count);

    subString(str, start, count);
}