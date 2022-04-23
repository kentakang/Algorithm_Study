#include <stdio.h>

int main() {
    int n, temp, digit, gen = 0;

    scanf("%d", &n);

    temp = n;

    while (temp > 0) {
        temp /= 10;
        digit++;
    }

    temp = n;
    temp = temp - digit * 9;

    if (temp < 0) {
        temp = 0;
    }

    int num, sum = 0;

    for (int i = temp; i <= n; i++) {
        num = i;
        sum += num;

        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }

        if (sum == n) {
            gen = i;
            break;
        }

        sum = 0;
    }

    printf("%d", gen);

    return 0;
}