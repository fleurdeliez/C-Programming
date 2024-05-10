/*
Create a program that demonstrates the use of function pointers. Define multiple functions 
that  perform different mathematical operations, such as addition, subtraction, 
multiplication, and  division. Use a function pointer to dynamically select and call one of 
these functions based on  user input. 
*/

#include <stdio.h>

// function prototypes
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main() {
    int a, b, choice, result;
    int (*operation)(int, int); // function pointer declaration

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Select operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // assign function pointer based on user choice
    switch (choice) {
        case 1:
            operation = add;
            break;
        case 2:
            operation = subtract;
            break;
        case 3:
            operation = multiply;
            break;
        case 4:
            operation = divide;
            break;
        default:
            printf("Invalid choice!\n");
            return 1;
    }

    // call the selected function using function pointer
    result = operation(a, b);

    printf("Result: %d\n", result);

    return 0;
}

// function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero!\n");
        return 0;
    }
}