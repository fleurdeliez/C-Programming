/*
Write a program in C to find the square of any number using the function.
Test Data:
Input any number for square: 20
Expected Output:
The square of 20 is: 400.00
*/

#include <stdio.h>

// Function to calculate the square of a number
double square(double num) {
    return num * num;
}

int main() {
    double number, result;

    printf("Input any number for square: ");
    scanf("%lf", &number);

    result = square(number);

    printf("The square of %.2lf is: %.2lf\n", number, result);

    return 0;
}