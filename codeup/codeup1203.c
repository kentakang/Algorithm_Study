#include <stdio.h>

int main()
{
    int bmi;

    scanf("%d", &bmi);

    if (bmi <= 10)
        printf("정상");
    else if (bmi <= 20)
        printf("과체중");
    else
        printf("비만");

    return 0;
}