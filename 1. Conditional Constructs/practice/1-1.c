/*
    • Write a program that will allow the user to input a double precision floating point value. Print the
    word NEGATIVE if the number is a negative value and print the word POSITIVE if the number is a
    positive value. 
*/

// IF STATEMENT

#include <stdio.h>

int main() {
    float num; // input: floating point value

    // get the user input
    printf("Input a number: ");
    scanf("%f", &num); 

    // output the word "NEGATIVE" if the number is a negative value
    if (num < 0) {
        printf("NEGATIVE");
    }

    // output the word "POSITIVE" if the number is a positive value
    if (num > 0) {
        printf("POSITIVE");
    }
    return 0;
}