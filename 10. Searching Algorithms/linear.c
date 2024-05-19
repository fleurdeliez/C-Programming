#include <stdio.h>

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Return the index of the target
        }
    }
    return -1; // Target not found
}

int main() {
    int arr[] = {3, 5, 2, 9, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;
    int result = linearSearch(arr, n, target);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
