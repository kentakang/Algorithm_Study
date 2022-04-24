#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return *(int*) a > *(int*) b ? 1 : (*(int*) a  < *(int*) b ? -1 : 0);
}

int binary_search(int arr[], int key, int size) {
    int front, rear, pivot;

    front = 0;
    rear = size - 1;

    while (1) {
        pivot = (front + rear) / 2;

        if (arr[pivot] == key) {
            return 1;
        }

        if (arr[front] == key) {
            return 1;
        }

        if (arr[rear] == key) {
            return 1;
        }

        if (arr[pivot] < key) {
            front = pivot + 1;
        } else {
            rear = pivot - 1;
        }

        if (front >= rear) {
            return 0;
        }
    }
}

int main() {
    int n = 0;
    int arr[100000] = { 0, };
    int arrCompare[100000] = { 0, };

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int m = 0;

    scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        scanf("%d", &arrCompare[i]);
    }

    qsort(arr, n, sizeof(int), compare);

    for (int i = 0; i < m; i++) {
        printf("%d\n", binary_search(arr, arrCompare[i], n));
    }

    return 0;
}