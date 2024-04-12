// IF STATEMENT

/* Write a program that will be able to determine which of the two numbers is smaller. The program
should print “NUMBER1 IS SMALLER” if the first integer is indeed smaller than the second. If the
second number is the one that is smaller, it should print “NUMBER2 IS SMALLER”. If the two
numbers are equivalent, print the word, “NUMBER1 AND NUMBER2 ARE EQUAL”.*/

#include <stdio.h>

int main() {
    float first, second; // input

    // input from the user
    printf("Enter the first number: ");
    scanf("%f", &first);
    printf("Enter the second number: ");
    scanf("%f", &second);

    // if statement to check which number is smaller or if they are equal
    if (first < second) {
        printf("NUMBER1 IS SMALLER");
    }
    if (second < first) {
        printf("NUMBER2 IS SMALLER");
    }
    if (first == second) {
        printf("NUMBER1 AND NUMBER 2 ARE EQUAL");
    }
    return 0;
}