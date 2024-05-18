#include <stdio.h>

int main() {

    int n, m;
    printf("\nInput the number of elements to be stored in the first array: ");
    scanf("%d", &n); 
    
    int arr1[n];
    printf("Input %d elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d: ", i);
        scanf("%d", &arr1[i]); 
    }

    printf("\nInput the number of elements to be stored in the second array: ");
    scanf("%d", &m); 
    
    int arr2[m];
    printf("Input %d elements in the array:\n", m);
    for (int i = 0; i < m; i++) {
        printf("element - %d: ", i);
        scanf("%d", &arr2[i]); 
    }

    int size = n + m;
    int mergedArr[size];  
    int mergedIndex = 0;

    for (int i = 0; i < size; i++) {
        mergedArr[mergedIndex++] = arr1[i];
        mergedArr[mergedIndex++] = arr2[i];
    }

    printf("\nThe merged array in descending order is:\n");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", mergedArr[i]);
    }

    return 0;
}