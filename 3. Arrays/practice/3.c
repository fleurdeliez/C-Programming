// 5.18.24

#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Enter the number of elements to be stored in the array: ");
    scanf("%d", &n);

    printf("Input %d elements in the array:\n", n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("element - %d: ", i);
        scanf("%d", &arr[i]);
        
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j] && arr[j] != -1) {
                count++;
                arr[j] = -1;
            }
        }
    }

    printf("Total number of duplicate elements found in the array is: %d", count);

    return 0;
}