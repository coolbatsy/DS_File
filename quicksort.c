#include <stdio.h>

void quickSort(int a[], int low, int high) {
    if (low < high) {
        int pivot = a[high], i = low - 1, j, temp;
        for (j = low; j < high; j++) {
            if (a[j] < pivot) {
                i++;
                temp = a[i]; a[i] = a[j]; a[j] = temp;
            }
        }
        temp = a[i + 1]; a[i + 1] = a[high]; a[high] = temp;
        int pi = i + 1;

        quickSort(a, low, pi - 1);
        quickSort(a, pi + 1, high);
    }
}

int main() {
    int a[5], i;

    printf("Implementing Quick Sort\n");
    printf("Enter 5 elements:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    quickSort(a, 0, 4);

    printf("Sorted array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}