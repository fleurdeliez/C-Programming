#include <stdio.h>

void bubbleSort(int arr[], int n){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (n-1); j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArr(int arr[], int n){
    printf("Sorted Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int n;
    printf("Enter the number of elements to be stored in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("element %d: ", i+1);
        scanf("%d", &arr[i]);        
    }

    bubbleSort(arr, n);
    printArr(arr, n);
    return 0;
}