#include <stdio.h>
#include <string.h>

int main()
{
    char plate[50];
    int height = 0;

    scanf("%s", plate);

    for (int i = 0; i < strlen(plate); i++)
    {
        if (i == 0)
        {
            height += 10;
            continue;
        }

        if (plate[i] == plate[i - 1])
        {
            height += 5;
        }
        else
        {
            height += 10;
        }
    }

    printf("%d", height);
}