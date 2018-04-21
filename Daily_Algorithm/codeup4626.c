#include <stdio.h>

int main()
{
    int sum = 0, score = 1, n, input;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &input);

        if (input)
        {
            sum += score++;
        }
        else
        {
            score = 1;
        }
    }

    printf("%d", sum);
}