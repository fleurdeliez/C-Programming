#include <stdio.h>
void bubbleSort(int, int);
void swap(int, int);
void printArr(int, int);

int main() {
    int n,
    printf("Enter the number of elements to be stored in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("element %d: ", i+1);
        scanf("%d", &arr[i]);
        
    bubbleSort(arr, n);
    printArr(arr, n);
    }
    return 0;
}

void bubbleSort(int arr[], int n){
    do {
        int i = 0;
        bool swapped;
        for (int j = 0; j < (n-1-i); j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
                swapped = true;
            }
        } i++;
    } while (swapped);
}

void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void printArr(int arr[], int n){
    printf("\nSorted Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}