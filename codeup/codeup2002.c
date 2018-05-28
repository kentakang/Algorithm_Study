#include <stdio.h>
#include <string.h>

int main()
{
    int k;
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char str[20];

    scanf("%d", &k);
    scanf("%s", str);

    for (int i = 1; i <= strlen(str); i++)
    {
        int s = (3 * i) + k;
        char * pch = strchr(alphabet, str[i - 1]);
        int n = pch - alphabet - s;

        if (n < 0)
            n += 26;

        printf("%c", alphabet[n]);
    }
}