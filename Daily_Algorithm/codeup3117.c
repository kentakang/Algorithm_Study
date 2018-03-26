#include <stdio.h>

int stack[100000];
int top = -1;

void push(int data)
{
    stack[++top] = data;
}

int peek()
{
    return stack[top--];
}

int main()
{
    int k, n, sum = 0;
    scanf("%d", &k);

    for (int i = 0; i < k; i++)
    {
        scanf("%d", &n);

        if (n == 0)
        {
            sum -= peek();
        }
        else
        {
            push(n);
            sum += n;
        }
    }

    printf("%d", sum);
}