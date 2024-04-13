/* Situation: Your task is to create a program that calculates the factorial of a given number. Use a while
loop to compute the factorial of a user-input integer.*/

#include <stdio.h>

int main() {
    
    int n; // input
    int count = 1; 
    int factorial = 0; // output

    printf("Enter a number: ");
    scanf("%d", &n);

    // calculate and display the factorial of the given number
    while (count < n) {
        factorial *= count;
        count++; 
    }

    printf("Factorial: %d", factorial);

    return 0;
}