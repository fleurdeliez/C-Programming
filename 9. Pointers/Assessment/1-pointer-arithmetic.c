/*
Imagine you have an array of integers, and you need to perform various operations 
using  pointers: 
1. Declare an integer array of size 5 and initialize it with some values. 
2. Declare an integer pointer and assign it the address of the first element of the 
array. 
3. Use pointer arithmetic to perform the following operations: 
a) Print the value at the third element of the array using the pointer. 
b) Increment the pointer by 2 positions and print the value it points to. 
c) Subtract 1 from the value pointed to by the pointer and print the result. 
d) Move the pointer back to the first element and print the value using the pointer. 
*/

#include <stdio.h>

int main() {
    // declare an integer array of size 5 and initialize it with some values.
    int arr[5] = {1, 2, 3, 4, 5};

    // declare an integer pointer and assign it the address of the first element of the array.
    int *ptr = &arr[0];

    // use pointer arithmetic to perform the following operations:

    // a) Print the value at the third element of the array using the pointer.
    printf("Value at the third element: %d\n", *(ptr + 2));

    // b) Increment the pointer by 2 positions and print the value it points to.
    ptr += 2;
    printf("Value after increment: %d\n", *ptr);

    // c) Subtract 1 from the value pointed to by the pointer and print the result.
    (*ptr)--;
    printf("Value after subtraction: %d\n", *ptr);

    // d) Move the pointer back to the first element and print the value using the pointer.
    ptr -= 2;
    printf("Value at the first element: %d\n", *ptr);

    return 0;
}