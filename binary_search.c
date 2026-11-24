#include <stdio.h>

int main() {
    int a[5], i, key, low = 0, high = 4, mid;

    printf("Implementing Binary Search\n");
    printf("Enter 5 sorted elements:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    while (low <= high) {
        mid = (low + high) / 2;
        if (a[mid] == key) {
            printf("Element found at position %d\n", mid + 1);
            return 0;
        } else if (a[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    printf("Element not found\n");
    return 0;
}