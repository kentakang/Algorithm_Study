#include <stdio.h>

int myabs(int n)
{
    if (n < 0)
    {
        return -(n);
    }

    return n;
}

int main()
{
    printf("%d", myabs(-1));
}