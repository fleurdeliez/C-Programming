/* 
Write a program that would store 11 numbers in a one-dimensional array. Store the sum of the two
succeeding pairs in another array. Hence, only 10 integers will be stored in the second array.

Sample run:
Enter eleven numbers: 1 2 3 4 5 6 7 8 9 10 11
SUM of TWO succeeding pairs: 3 5 7 9 11 13 15 17 19 21
*/

#include <stdio.h>

int main() {
    int arr1[11]; // input of eleven numbers
    int arr2[10]; // output of ten numbers

    printf("Enter 11 numbers: "); // loop to store the input in the first array
    for (int i = 0; i < 11; i++) {
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < 10; i++) { // loop to calculate and store the sum of the two succeeding pairs
        arr2[i] = arr1[i] + arr1[i + 1];
    }

    // loop to print the output
    printf("Sum of TWO succeeding pairs: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}