#include <stdio.h>

int main(int argc, char const *argv[])
{
    int hour, minute;

    scanf("%d %d", &hour, &minute);

    if (minute < 45) {
        hour = hour == 0 ? 23 : hour - 1;
        minute = (minute - 45) + 60;
    } else {
        minute -= 45;
    }

    printf("%d %d", hour, minute);
}
