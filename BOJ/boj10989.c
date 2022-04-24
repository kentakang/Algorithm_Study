#include <stdio.h>

int main() {
    int n = 0;
    int arr[10001] = { 0, };

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int temp = 0;

        scanf("%d", &temp);
        arr[temp]++;
    }

    for (int i = 0; i < 10001; i++) {
        for (int j = 0; j < arr[i]; j++) {
            printf("%d\n", i);
        }
    }

    return 0;
}