#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *) a - *(int *) b);
}

int main() {
    int n = 0;

    scanf("%d", &n);

    int *num_ptr = malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &num_ptr[i]);
    }

    qsort(num_ptr, n, sizeof(int), compare);

    for (int i = 0; i < n; i++) {
        printf("%d\n", num_ptr[i]);
    }

    return 0;
}