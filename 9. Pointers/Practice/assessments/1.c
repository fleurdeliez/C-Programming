#include <stdio.h>

int main() {
    int arr[5] = {1,2,3,4,5};
    int *ptr = arr;

    printf("third element: %d\n", *(ptr+2));

    ptr += 2;
    printf("value at the pointer incremented by 2: %d\n", *ptr);

    (*ptr)--;
    printf("subract 1: %d\n", *ptr);

    ptr-=2;
    printf("first element: %d\n", *ptr);

    return 0;
}