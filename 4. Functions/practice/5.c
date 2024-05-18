// 5.18.24

#include <stdio.h>
int find_largest(int arr[], int num);

int main() {
    int n;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Input %d elements in the array:\n");
    for (int i = 0; i < n; i++) {
        printf("element - %d: ", i);
        scanf("%d", &arr[i]);        
    }

    int largest = find_largest(arr, n);

    printf("The largest element in the array is: %d", largest);
    
    return 0;
}

int find_largest(int arr[], int num){
    int max = arr[0];
    for (int i = 0; i < num; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}