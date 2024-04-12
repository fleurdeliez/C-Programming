// IF...ELSE IF STATEMENT

/* Write a program that will allow the user to input an integer value representing the days of the
week. Let 1 represent Monday, 2 for Tuesday, 3 for Wednesday, and so on. The output of the
program should be the day of the of the week in words. If the input is not within the scope of a
week, display INVALID INPUT. An example of interaction is as follows:
Input day in numeric form: 7
That day is a Sunday.
Have a nice day!*/

#include <stdio.h>

int main() {
    int numWeek; //input

    printf("\nInput day in numeric form: ");
    scanf("%d", &numWeek);

    if (numWeek == 1) {
        printf("\nThat day is a Monday.");
    } else if (numWeek == 2) {
        printf("\nThat day is a Tuesday.");
    } else if (numWeek == 3) {
        printf("\nThat day is a Wednesday.");
    } else if (numWeek == 4) {
        printf("\nThat day is a Thursday.");
    } else if (numWeek == 5) {
        printf("\nThat day is a Friday.");
    } else if (numWeek == 6) {
        printf("\nThat day is a Saturday.");
    } else if (numWeek == 7) {
        printf("\nThat day is a Sunday.");
    } else {
        printf("\nINVALID OUTPUT");
    }

    printf("\n\nHave a nice day!");
    return 0;
}