/* Situation: Your task is to create a program that calculates the factorial of a given number. Use a while
loop to compute the factorial of a user-input integer.*/

#include <stdio.h>

int main() {
    
    int num; // input
    int factorial = 1; // output

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 1) {
        factorial *= num;
        num--;
    }

    printf("Factorial: %d", factorial);
    return 0;
}