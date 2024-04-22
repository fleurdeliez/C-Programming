/*
    Write a program that will be able to determine which of the two numbers is smaller. The program
should print “NUMBER1 IS SMALLER” if the first integer is indeed smaller than the second. If the
second number is the one that is smaller, it should print “NUMBER2 IS SMALLER”. If the two
numbers are equivalent, print the word, “NUMBER1 AND NUMBER2 ARE EQUAL”.
*/

// IF STATEMENT

#include <stdio.h>

int main() {
    int num1, num2; // input: two integers
    
    // get the first number
    printf("Enter the first number: ");
    scanf("%d", &num1); 

    // get the second number
    printf("Enter the second number");
    scanf("%d", &num2); 
    
    // output "NUMBER1 IS SMALLER" if the first integer is smaller
    if (num1 < num2) {
        printf("NUMBER1 IS SMALLER");        
    }

    // output "NUMBER2 IS SMALLER" if the second integer is smaller
    if (num2 < num1) {
        printf("NUMBER2 IS SMALLER");
    }
    
    // output "NUMBER1 AND NUMBER2 ARE EQUAL" if the two numbers are equivalent
    if (num1 == num2) {
        printf("NUMBER1 AND NUMBER2 ARE EQUAL");
    }
    
    return 0;
}