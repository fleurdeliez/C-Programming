/*
    Calculate Simple Interest
    Develop a C program to calculate the simple interest using a function with three arguments
    - principal amount, rate of interest, and time period. The function should take these three
    values as arguments and return the calculated simple interest.
*/

#include <stdio.h>
    float calc_simpleInterest(float, float, float); // function prototype

int main() {
    float principal, rate, time; // input: principal amount, rate of interest, time period
    float simpleInterest; // output: simple interest
    
    // get the user input
    printf("Enter the principal amount: ");
    scanf("%f", &principal); 
    printf("Enter the rate  of interest: ");
    scanf("%f", &rate); 
    printf("Enter the time period: ");
    scanf("%f", &time); 
    
    // function call
    simpleInterest = calc_simpleInterest(principal, rate, time);

    // output the simple interest
    printf("\nSimple Interest: %.2f.", simpleInterest);
    return 0;
}

// function definition
float calc_simpleInterest(float p, float r, float t){
        float interest = (p * r * t) / 100;
        return interest;
    }

    