#include <stdio.h>
#include <string.h>

int main()
{
    char alphabet[26];
    char password[100];

    for (int i = 0; i < 26; i++)
    {
        scanf("%c", &alphabet[i]);
    }

    scanf("%s", password);

    for (int i = 0; i < strlen(password); i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (password[i] == alphabet[j])
            {
                printf("%c", j + 97);
                break;
            }
        }
    }
}