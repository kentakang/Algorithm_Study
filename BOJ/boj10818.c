#include <stdio.h>

int main(int argc, char const *argv[])
{
    int len, max, min;

    scanf("%d", &len);

    int arr[len];

    for (int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);

        if (i == 0) {
            max = arr[i];
            min = arr[i];
        } else {
            max = max < arr[i] ? arr[i] : max;
            min = min > arr[i] ? arr[i] : min;
        }
    }

    printf("%d %d", min, max);
}
