#include <stdio.h>

void insertionSort(int[], int);
void printArr(int[], int);

int main() {
    int n;
    printf("Enter the number of elements to be stored in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("element %d: ", i+1);
        scanf("%d", &arr[i]);
    } 
    
    insertionSort(arr, n);
    printArr(arr, n);

    return 0;
}

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i-1;

        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j = j-1;
        }
    }
}

void printArr(int arr[], int n) {
    printf("Sorted Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}