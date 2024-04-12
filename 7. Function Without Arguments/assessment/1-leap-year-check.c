/* Create a program that checks if a given year is a leap year or not using a function without  argument.*/

#include <stdio.h>

int isLeapYear();  // function prototype

int main() {
    int year; // input

    printf("Enter a year: ");
    scanf("%d", &year);

    // check if the year is a leap year
    if (isLeapYear(year)) {
        printf("%d is a leap year.\n", year); // output
    } else {
        printf("%d is not a leap year.\n", year); // output
    }

    return 0;
}

// function to check if a year is a leap year or not
int isLeapYear(int year) {
    if (year % 4 == 0) { // check if the year is divisible by 4
        if (year % 100 == 0) { // check if the year is divisible by 100
            if (year % 400 == 0) { // check if the year is divisible by 400
                return 1;
            } else {
                return 0;
            }
        } else {
            return 1;
        }
    } else {
        return 0;
    }
}