// IF STATEMENT

/* Write a program that will allow the user to input a double precision floating point value. Print the
word NEGATIVE if the number is a negative value and print the word POSITIVE if the number is a
positive value.*/

#include <stdio.h>

int main() {
    float num; // input

    // get the input from the user
    printf("Enter a number: ");
    scanf("%.2f", &num);

    // if statement to check if the number is positive or negative
    if (num < 0) {
        printf("NEGATIVE");
    }
    if (num >= 0) {
        printf("POSITIVE");   
    }

    return 0;
}