#include <stdio.h>
void multiplyByTwo(int *arr, int size);

int main() {
    int arr[5] = {1,2,3,4,5,};
    multiplyByTwo(arr, sizeof(arr)/sizeof(arr[0]));
    
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

void multiplyByTwo(int *arr, int size){
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
}