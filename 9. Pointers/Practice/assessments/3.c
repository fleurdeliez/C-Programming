#include <stdio.h>
void swapPointers(int*, int*);

int main() {
    int a = 1, b = 2;
    int *ptrA = &a, *ptrB = &b;

    printf("Before swapping:\n");
    printf("Value of ptrA: %d\n", *ptrA);
    printf("Value of ptrB: %d\n", *ptrB);

    swapPointers(ptrA, ptrB);

    printf("\nAfter swapping:\n");
    printf("Value of ptrA: %d\n", *ptrA);
    printf("Value of ptrB: %d\n", *ptrB);

    return 0;
}

void swapPointers(int* x, int* y){
    int temp = *x; 
    *x = *y;
    *y = temp;
}