#include <stdio.h>

long long sum(int *a, int n) {
    long long ans = 0;

    for (int i = 0; i < n; i++) {
        ans += a[i];
    }

    return ans;
}

int main() {
    int arr[10] = { 1, 3, 6, 8, 3, 9, 4, 20, 1, 4 };

    printf("%lld", sum(arr, 10));

    return 0;
}
