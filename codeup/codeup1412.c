#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int arr[26] = {0,};
    scanf("%[^\n]", str);

    for (int i = strlen(str) - 1; i >= 0; i--)
    {
        if (str[i] - 97 >= 0 && str[i] - 97 <= 26)
        {
            arr[str[i] - 97]++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        printf("%c:%d\n", i + 97, arr[i]);
    }
}