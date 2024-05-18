// 5.18.24

#include <stdio.h>

int main() {
    int n;
    printf("Input the number of elements to be stored in the first array: ");
    scanf("%d", &n);
    printf("Input %d elements in the array:\n", n);
    int arr1[n];
    for (int i = 0; i < n; i++) {
        printf("element - %d: ", i);
        scanf("%d", &arr1[i]);        
    }

    int m;
    printf("Input the number of elements to be stored in the second array: ");
    scanf("%d", &m);
    printf("Input %d elements in the array:\n", m);
    int arr2[m];
    for (int i = 0; i < m; i++) {
        printf("element - %d: ", i);
        scanf("%d", &arr2[i]);        
    }

    int size = n + m, mergedArr[size], index = 0;
    for (int i = 0; i < n; i++) {
        mergedArr[index++] = arr1[i];
        mergedArr[index++] = arr2[i];
    }
    
    printf("The merged array in descending order is:\n");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", mergedArr[i]);
    }

    return 0;
}