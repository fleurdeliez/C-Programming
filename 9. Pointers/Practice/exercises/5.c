#include <stdio.h>
void sortArr(int *array, int size);

int main() {
    int n;
    printf("Input the number of elements to store in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Input %d number of elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d: ", i+1);
        scanf("%d", &arr[i]);        
    }

    sortArr(arr, n);

    printf("The elements in the array after sorting:\n");
    for (int i = n; i < length; i++) {
        printf("element - %d: %d\n", i+1, arr[i]);
    }

    return 0;
}

void sortArr(int *array, int size){
    
}
