// IF STATEMENT

/* Write a program that will allow the user to input a double precision floating point value. Print the
word NEGATIVE if the number is a negative value and print the word POSITIVE if the number is a
positive value.*/

#include <stdio.h>

int main() {
    double number;
    
    printf("Enter an integer: ");
    scanf("%lf", &number);

    if (number < 0) {
        printf("NEGATIVE");
    } else {
        printf("POSITIVE");
    }

    return 0;
}

