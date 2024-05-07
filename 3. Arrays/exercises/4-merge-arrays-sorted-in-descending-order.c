/*
Write a program in C to merge two arrays of same size sorted in descending order.

Test Data :
Input the number of elements to be stored in the first array : 3
Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
Input the number of elements to be stored in the second array : 3
Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3

Expected Output :
The merged array in descending order is :
3 3 2 2 1 1
*/

#include <stdio.h>

int main() {
    int size;
    printf("Input the number of elements to be stored in the first array : ");
    scanf("%d", &size);

    int firstArray[size];
    printf("Input %d elements in the array:\n", size);
    for (int i = 0; i < size; i++) {
        printf("element - %d : ", i);
        scanf("%d", &firstArray[i]);
    }

    printf("Input the number of elements to be stored in the second array : ");
    scanf("%d", &size);

    int secondArray[size];
    printf("Input %d elements in the array:\n", size);
    for (int i = 0; i < size; i++) {
        printf("element - %d : ", i);
        scanf("%d", &secondArray[i]);
    }

    int mergedArray[size * 2];
    int mergedIndex = 0;

    // merge the arrays in descending order
    for (int i = 0; i < size; i++) {
        mergedArray[mergedIndex++] = firstArray[i];
        mergedArray[mergedIndex++] = secondArray[i];
    }

    // print the merged array in descending order
    printf("The merged array in descending order is:\n");
    for (int i = size * 2 - 1; i >= 0; i--) {
        printf("%d ", mergedArray[i]);
    }

    return 0;
}

