#include <stdio.h>

void multiplyByTwo(int*, int);

int main() {
    int arr[5] = {1,2,3,4,5};
    int *ptr = arr;

    multiplyByTwo(ptr, sizeof(arr)/sizeof(arr[0]));

    printf("Modified Value:\n");
    for (int i = 0; i < 5; i++) {
        printf("element - %d: %d\n", i, *ptr);
        ptr++;
    }

    return 0;
}

void multiplyByTwo(int* p, int size){
    for (int i = 0; i < size; i++) {
        *p *=2;
        p++;
    }
}