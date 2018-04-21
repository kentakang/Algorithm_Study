#include <stdio.h>

int main()
{
    int result = 0;
    int num;
    char operator;

    scanf("%d", &num);
    result = num;

    while (1)
    {
        scanf("%c", &operator);

        if (operator == '=')
            break;
        
        scanf("%d", &num);

        if (operator == '+')
            result += num;
        else if (operator == '-')
            result -= num;
        else if (operator == '*')
            result *= num;
        else if (operator == '/')
            result /= num;
    }

    printf("%d", result);
}