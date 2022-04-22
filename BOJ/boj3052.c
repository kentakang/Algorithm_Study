#include <stdio.h>

int main() {
    int nums[10] = { 0, };
    int remains[10] = { 0, };
    int temp[10] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };
    int remainCount = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &nums[i]);
        remains[i] = nums[i] % 42;
    }

    for (int i = 0; i < 10; i++) {
        int include_count = 0;

        for (int j = 0; j < 10; j++) {
            if (remains[i] % 42 == temp[j]) {
                include_count++;
            }
        }

        if (include_count == 0) {
            remainCount++;
            temp[i] = remains[i] % 42;
        }
    }

    printf("%d", remainCount);

    return 0;
}