#include <stdio.h>

void swapPointers(int*, int*);

int main() {
    int a = 5, *ptrA = &a;
    int b = 6, *ptrB = &b;

    printf("\nBefore swapping: %d %d", *ptrA, *ptrB);

    swapPointers(ptrA, ptrB);

    printf("\nAfter swapping: %d %d", *ptrA, *ptrB);

    return 0;
}

void swapPointers(int *n1, int *n2){
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
