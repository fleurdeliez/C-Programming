/*
Write a program in C to sort an array using Pointer.
Test Data:
Input the number of elements to store in the array: 5
Input 5 number of elements in the array:
element - 1: 25
element - 2: 45
element - 3: 89
element - 4: 15
element - 5: 82
Expected Output:
The elements in the array after sorting:
element - 1: 15
element - 2: 25
element - 3: 45
element - 4: 82
element - 5: 89
*/

#include <stdio.h>

void sortArray(int *arr, int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int size, i;
    printf("Input the number of elements to store in the array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Input %d number of elements in the array:\n", size);
    for (i = 0; i < size; i++) {
        printf("element - %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    sortArray(arr, size);
    
    printf("The elements in the array after sorting:\n");
    for (i = 0; i < size; i++) {
        printf("element - %d: %d\n", i + 1, arr[i]);
    }
    
    return 0;
}