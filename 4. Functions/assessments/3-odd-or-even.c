/*
Write a program in C to check a given number is even or odd using the function.
Test Data:
Input any number: 5
Expected Output:
The entered number is odd.
*/

#include <stdio.h>

// Function to check if a number is even or odd
void checkEvenOdd(int num) {
    if (num % 2 == 0) {
        printf("The entered number is even.\n");
    } else {
        printf("The entered number is odd.\n");
    }
}

int main() {
    int number;

    printf("Input any number: ");
    scanf("%d", &number);

    // Call the function to check if the number is even or odd
    checkEvenOdd(number);

    return 0;
}