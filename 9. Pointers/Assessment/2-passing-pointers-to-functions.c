/*
Consider a scenario where you need to write a function that modifies the values in an array: 
1. Declare an integer array of size 5 and initialize it with some values. 
2. Write a function called multiplyByTwo that takes an integer pointer as an argument and  multiplies each element in the array by 2. 
3. Call the multiplyByTwo function, passing the address of the first element of the array. 4. Print the modified array to verify that the values have been multiplied by 2. 
*/

#include <stdio.h>

// function to multiply each element in the array by 2
void multiplyByTwo(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
}

int main() {
    // declare and initialize the integer array
    int arr[5] = {1, 2, 3, 4, 5};

    // call the multiplyByTwo function, passing the address of the first element of the array
    multiplyByTwo(arr, sizeof(arr) / sizeof(arr[0]));

    // print the modified array
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}