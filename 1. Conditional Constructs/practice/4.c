// 5.17.24

#include <stdio.h>

int main() {

    int dayOfCall, time, duration;
    double rate, charge;

    printf("Input the day the call was made in its numeric form: ");
    scanf("%d", &dayOfCall);
    printf("Input the time in 24 hour format: ");
    scanf("%d", &time);
    printf("Input the call duration in minutes: ");
    scanf("%d", &duration);

    if (dayOfCall <= 1 && dayOfCall >= 5) { //weekday
        if (time >= 6 && time <= 18) { // between 6AM to 6PM
            rate  = 2.5;
        } else { // any other time
            rate = 2;
        }
    } else if (dayOfCall == 6 || dayOfCall == 7 ){
        rate = 1.5;
    } else {
        printf("Invalid Day.");
    }

    charge = duration * rate;
    
    printf("Charge = %.2lf Pesos", charge);
    
    return 0;
}