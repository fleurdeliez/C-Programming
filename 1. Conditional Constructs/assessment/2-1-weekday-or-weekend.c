// IF...ELSE STATEMENT

/* Write a program that will be able to determine which of the two numbers is smaller. The program
should print “NUMBER1 IS SMALLER” if the first integer is indeed smaller than the second. If the
second number is the one that is smaller, it should print “NUMBER2 IS SMALLER”. If the two
numbers are equivalent, print the word, “NUMBER1 AND NUMBER2 ARE EQUAL”.*/

#include <stdio.h>

int main() {
    int dayoftheWeek; //input

    printf("Enter the day of the week (Monday = 1, Tuesday = 2, ...): ");
    scanf("%d", &dayoftheWeek);

    // if else statement to check if it's a weekday or a weekend
    if (dayoftheWeek <= 5) {
        printf("WEEKDAY");
    } else {
        printf("WEEKEND");
    }
    return 0;
}