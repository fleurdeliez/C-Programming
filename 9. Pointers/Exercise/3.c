/* 
Write a program in C to add numbers using call by reference.
Test Data:
Input the first number: 5
Input the second number: 6
Expected Output:
The sum of 5 and 6 is 11
*/

#include <stdio.h>

void addNumbers(int *a, int *b, int *sum) {
    *sum = *a + *b;
}

int main() {
    int num1, num2, sum;

    printf("Input the first number: ");
    scanf("%d", &num1);

    printf("Input the second number: ");
    scanf("%d", &num2);

    addNumbers(&num1, &num2, &sum);

    printf("The sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}