// NESTED IF STATEMENT

/* You were hired as a programmer by TNP (Telepono ng Pilipino), a Telephone company. TNP
employs a metering scheme in computing the telephone bill. The metering scheme is as follows:
• Calls made on a weekday between 6:00 AM to 6:00 PM are charged at 2.50 pesos per
minute. Charges made at other times during a weekday are charged a discounted rate of
2.00 pesos per minute. Calls made anytime on a weekend are charged a weekend rate of
1.50 pesos per minute. Your job is to write a program that will ask the user to enter the
following information: (a) an integer representing the day the call was made, let 1
represent Monday, 2 represent Tuesday and so on, (b) an integer representing the time (in 24 hour format) the call started (c) an integer representing the length of time or
duration of the call in minutes (assume that all calls are rounded to the next minute, i.e.
a call lasting 2 minutes and 35 seconds is billed as a 3 minute call). The rate applied
depends on the day the call was made and on the time the call was started (not when it
ended). Based on the information entered, the program should print the bill
corresponding to the call.*/

#include <stdio.h>

int main() {
    int day; // day the call was made
    int time; // time the call was started
    int duration; // duration of the call in minutes
    float rate; // rate of the call
    float bill; // output

    printf("Enter the numeric form of the day the call was made: ");
    scanf("%d", &day);
    printf("Enter the time the call was started (in 24-hr format): ");
    scanf("%d", &time);
    printf("Enter the duration of the call in minutes: ");
    scanf("%d", &duration);

    if (day <= 5) { // weekdays
        if (time >= 6 && time <= 12) { // between 6 AM to 12PM
            rate = 2.50;
        } else { // other times during a weekday
            rate = 2.00;
        }
    } else if (day <= 7) { // weekends
        rate = 1.50;
    } else {
        printf("Invalid input. Enter 1-7 only.");
    }

    // calculate and display the bill of the call
    bill = duration * rate;
    printf("Bill: %.2f", bill);

    return 0;
}