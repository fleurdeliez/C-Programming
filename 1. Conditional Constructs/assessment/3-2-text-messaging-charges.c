// IF...ELSE IF STATEMENT

/* You’ve been hired as a programmer by SFT (Send Fail Telecoms) – a mobile telecommunications
company. You are to write a program that will ask the user to input the number of text messages
incurred by a SFT cellphone subscriber. The text messaging charge is then computed based on the
number of text messages. The charge is zero for the first 200 messages. Text messages beyond
that are charged by 0.5 peso per message. The program should output the charge incurred.*/

#include <stdio.h>

int main() {
    int numMessages; // input
    float charge; // output

    printf("Enter the number of text messages incurred: ");
    scanf("%d", &numMessages);

    if (numMessages <= 200) {
        charge = 0;
    } else if (numMessages > 200) {
        charge = 0.5;
    } else {
        printf("Invalid input.");
    }

    // calculate and display the charge incurred
    charge = charge * (numMessages - 200);
    printf("Charge Incurred: %.2f", charge);
    
    return 0;
}