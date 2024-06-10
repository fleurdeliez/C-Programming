#include <stdio.h>

int add(int, int);
int subtract(int, int);
int multiply(int, int);
int divide(int, int);

int main() {
    int n1, n2, choice;
    int (*operation)(int n1, int n2);

    printf("Input the first number: ");
    scanf("%d", &n1);
    printf("Input the second number: ");
    scanf("%d", &n2);
    
    printf("\nMenu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
        
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
                printf("\nInvalid Choice. Try again.");       
    }

    printf("\nResult: %d\n", operation(n1, n2));

    return 0;
}

int add(int a, int b){
    return a + b;
}
int subtract(int a, int b){
    return a - b;
}
int multiply(int a, int b){
    return a * b;
}
int divide(int a, int b){
    if (b == 0) {
        printf("Invalid. Divisor cannot be zero");
    } else {
        return a / b;
    }
}