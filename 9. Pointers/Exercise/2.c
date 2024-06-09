/*
Write a program in C to add three numbers using pointers.
Test Data:
Input the first number: 5
Input the second number: 10
Input the third number: 15
Expected Output:
The sum of the entered numbers is: 30
*/

#include <stdio.h>

int main() {

    int n1, *n1p = &n1;
    int n2, *n2p = &n2;
    int n3, *n3p = &n3;
    int sum;

    printf("Input the first number: ");
    scanf("%d", &n1);
    printf("Input the second number: ");
    scanf("%d", &n2);
    printf("Input the third number: ");
    scanf("%d", &n3);

    sum = *n1p + *n2p + *n3p;

    printf("The sum of the entered numbers is: %d", sum);
    
    return 0;
}