/*
Create a program that add numbers until the user enters zero.
For example:
Enter a number: 56.6
Enter a number: 48.3
Enter a number: 69.3
Enter a number: 0.3
Enter a number: 0.10
Enter a number: 80.3
Enter a number: 89
Enter a number: 0
Sum = 343.90
*/

#include <stdio.h>

int main() {
    double number, sum = 0;

    do {
        printf("Enter a number: ");
        scanf("%lf", &number);
        sum += number;
    } while (number != 0);

    printf("Sum = %.2lf\n", sum);

    return 0;
}