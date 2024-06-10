#include <stdio.h>

int main() {
    int arr[5] = {1,2,3,4,5};
    int* ptr = arr;

    printf("\nvalue at the third element: %d", *ptr+2);

    ptr+=2;
    printf("\nvalue after increment: %d", *ptr);

    (*ptr)--;
    printf("\nvalue after subtraction: %d", *ptr);

    ptr -= 2;
    printf("\nvalue after increment: %d", *ptr);

    return 0;
}