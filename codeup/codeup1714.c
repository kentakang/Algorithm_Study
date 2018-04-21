#include <stdio.h>
#include <string.h>

char stack[20];
int top = -1;

void push(char a)
{
    stack[++top] = a;
}

char pop()
{
    return stack[top--];
}

int main()
{
    char str[20];
    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++)
    {
        push(str[i]);
    }

    for (int i = 0; i < strlen(str); i++)
    {
        printf("%c", pop());
    }
}