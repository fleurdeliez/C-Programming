/*
Write a program in C to show the simple structure of a function.
The total is: 11
*/

#include <stdio.h>

// Function declaration
int calculateTotal(int a, int b);

int main() {
    int num1 = 5;
    int num2 = 6;
    int total;

    // Function call
    total = calculateTotal(num1, num2);

    printf("The total is: %d\n", total);

    return 0;
}

// Function definition
int calculateTotal(int a, int b) {
    int sum = a + b;
    return sum;
}