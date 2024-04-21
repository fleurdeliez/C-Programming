/* 
    Write a C program to calculate the power of a number using recursion and a function with  two arguments - the base and exponent. 
    The function should take the base and exponent as  arguments and return the result of base raised to the power of exponent using recursion.
*/

#include <stdio.h>

// Function to calculate the power of a number using recursion
int power(int base, int exponent) {
    // Base case: exponent is 0, return 1
    if (exponent == 0) {
        return 1;
    }
    // Recursive case: multiply base with power(base, exponent - 1)
    else {
        return base * power(base, exponent - 1);
    }
}

int main() {
    int base, exponent;
    
    printf("Enter the base: ");
    scanf("%d", &base);
    
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    
    // Calculate the power using the power() function
    int result = power(base, exponent);
    
    printf("%d raised to the power of %d is %d\n", base, exponent, result);
    
    return 0;
}