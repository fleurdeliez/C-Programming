// IF STATEMENT

/* Write a program that will be able to determine which of the two numbers is smaller. The program
should print “NUMBER1 IS SMALLER” if the first integer is indeed smaller than the second. If the
second number is the one that is smaller, it should print “NUMBER2 IS SMALLER”. If the two
numbers are equivalent, print the word, “NUMBER1 AND NUMBER2 ARE EQUAL”.*/


#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter number 1: ");
    scanf("%d", &num1);
    
    printf("Enter number 2: ");
    scanf("%d", &num2);
    
    if (num1 > num2) {
        printf("NUMBER2 IS SMALLER");
    } else {
        printf("NUMBER1 IS SMALLER");
    }
    return 0;
}