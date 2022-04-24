#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m = 0;

    scanf("%d %d", &n, &m);

    int *num_ptr = malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &num_ptr[i]);
    }

    int max = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                int result = num_ptr[i] + num_ptr[j] + num_ptr[k];

                if (result <= m && result > max) {
                    max = result;
                }
            }
        }
    }

    free(num_ptr);

    printf("%d", max);

    return 0;
}