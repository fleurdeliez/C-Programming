/* 
    Develop a C program to calculate the simple interest using a function with three arguments - principal amount, rate of interest, and time period. 
    The function should take these three values as arguments and return the calculated simple interest. 
*/

#include <stdio.h>

// Function to calculate simple interest
float calculateSimpleInterest(float principal, float rate, float time) {
    float interest = (principal * rate * time) / 100;
    return interest;
}

int main() {
    float principal, rate, time;

    // Input principal amount
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    // Input rate of interest
    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    // Input time period
    printf("Enter time period: ");
    scanf("%f", &time);

    // Calculate simple interest using the function
    float simpleInterest = calculateSimpleInterest(principal, rate, time);

    // Print the calculated simple interest
    printf("Simple Interest: %.2f\n", simpleInterest);

    return 0;
}