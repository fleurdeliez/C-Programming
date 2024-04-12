/* Create a simple calculator program that allows users to perform basic arithmetic operations  (addition, subtraction, multiplication, division). define functions for each operation and use  a menu-driven approach in the main function to allow users to select the operation they want  to perform.*/

#include <stdio.h>

// function to perform addition
void addition() {
    float num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    result = num1 + num2;
    printf("Result: %.2f\n", result);
}

// function to perform subtraction
void subtraction() {
    float num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    result = num1 - num2;
    printf("Result: %.2f\n", result);
}

// function to perform multiplication
void multiplication() {
    float num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    result = num1 * num2;
    printf("Result: %.2f\n", result);
}

// function to perform division
void division() {
    float num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    if (num2 != 0) {
        result = num1 / num2;
        printf("Result: %.2f\n", result);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}

int main() {
    int choice;
    
    // menu-driven approach
    printf("Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            addition();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            division();
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }
    
    return 0;
}