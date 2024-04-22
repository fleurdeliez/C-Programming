/*
    Write a program that will ask the user to input an integer value representing the day of the week.
For example, 1 represents Monday, 2 represents Tuesday..., 6 for Saturday and 7 for Sunday. The
program should output the word WEEKDAY if the numeric day corresponds to a weekday,
otherwise it should output the word WEEKEND.
*/

// IF-ELSE STATEMENT

#include <stdio.h>

int main() {
    int numDay; // input: day of the week in numeric form
        
    // get the user input
    printf("Enter the day of the week in numeric form: ");
    scanf("%d", &numDay); 
    
    // output the word "WEEKDAY" if the numeric day corresponds to a weekday
    if (numDay >= 1 && numDay <= 5) {
        printf("WEEKDAY");
    } else {
        printf("WEEKEND");  // output the word "WEEKEND" otherwise
    }    

    return 0;
}