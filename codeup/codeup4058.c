#include <stdio.h>
#include <string.h>

int main()
{
    char word[20];
    char reverseWord[20];
    scanf("%s", word);

    for (int i = 0; i < strlen(word); i++)
    {
        reverseWord[strlen(word) - 1 - i] = word[i];
    }

    for (int i = 0; i < strlen(word); i++)
    {
        int position = 0;
        int num = reverseWord[i];
        int binary[8] = {0,};

        while (1)
        {
            binary[position++] = num % 2;
            num /= 2;

            if (num == 0)
                break;
        }

        for (int i = position - 1; i >= 0; i--)
        {
            printf("%d", binary[i] == 0 ? 1 : 0);
        }

        printf("\n");
    }
}