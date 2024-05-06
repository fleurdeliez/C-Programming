#include <stdio.h>

int main() {

    int n, count = 0;

    printf("Enter the number of elements to be stored in the array: ");
    scanf("%d", &n); 

    int arr[n]; 

    printf("Input %d elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d: ", i);
        scanf("%d", &arr[i]); 
    }

    // loop to count the duplicate elements
    for (int i = 0; i < n; i++) {
        if (arr[i] == arr[i + 1]) {
            count++;
            break;
        }
    }

    printf("Total number of duplicate elements found in the array is: %d ", count);
    
    return 0;
}