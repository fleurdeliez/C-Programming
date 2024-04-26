/*
 In an online shopping system, you are tasked with implementing a function to calculate the total
 price of an order, including taxes and discounts. The function calculateTotalPrice takes three
 arguments (subtotal, tax rate discount rate). Write a C program that implements the
 calculateTotalPrice function and prompts the user to enter the subtotal, tax rate, and discount rate.
 Calculate the total price using the function and display it to the user.
*/

#include <stdio.h>

// Function to calculate the total price
float calculateTotalPrice(float subtotal, float taxRate, float discountRate) {
    // Calculate the tax amount
    float taxAmount = subtotal * taxRate / 100;

    // Calculate the discount amount
    float discountAmount = subtotal * discountRate / 100;

    // Calculate the total price
    float totalPrice = subtotal + taxAmount - discountAmount;

    return totalPrice;
}

int main() {
    // Variables to store user input
    float subtotal, taxRate, discountRate;

    // Prompt the user to enter the subtotal
    printf("Enter the subtotal: ");
    scanf("%f", &subtotal);

    // Prompt the user to enter the tax rate
    printf("Enter the tax rate: ");
    scanf("%f", &taxRate);

    // Prompt the user to enter the discount rate
    printf("Enter the discount rate: ");
    scanf("%f", &discountRate);

    // Calculate the total price using the calculateTotalPrice function
    float totalPrice = calculateTotalPrice(subtotal, taxRate, discountRate);

    // Display the total price to the user
    printf("Total price: %.2f\n", totalPrice);

    return 0;
}
