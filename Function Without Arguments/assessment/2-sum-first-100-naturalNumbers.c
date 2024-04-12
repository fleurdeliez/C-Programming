/* Write a program to display the sum of the first 100 natural numbers using function without  argument.*/

#include <stdio.h>

// function to calculate the sum of the first 100 natural numbers
int calculate_sum() {
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    // call the function to calculate the sum
    int sum = calculate_sum();

    // display the sum
    printf("The sum of the first 100 natural numbers is: %d\n", sum);

    return 0;
}