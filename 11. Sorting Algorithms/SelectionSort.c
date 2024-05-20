#include <stdio.h>
void selectionSort(int arr[], int n){
    for (int i = 0; i < n-1; i++) {
        int min_index = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[min_index]) min_index = j;

        if (min_index != i) {
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
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

    selectionSort(arr, n);
    printArr(arr, n);
    return 0;
}