/*
Write a program in C to get the largest element of an array using the function.
Test Data:
Input the number of elements to be stored in the array :5
Input 5 elements in the array:
element - 0: 1
element - 1: 2
element - 2: 3
element - 3: 4
element - 4: 5
Expected Output:
The largest element in the array is: 5
*/

#include <stdio.h>

int findLargestElement(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Input %d elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d: ", i);
        scanf("%d", &arr[i]);
    }

    int largest = findLargestElement(arr, n);
    printf("The largest element in the array is: %d\n", largest);

    return 0;
}