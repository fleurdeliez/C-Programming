/* display the square root of two numbers provided as input data 
 (first and second) and the square root of their sum*/

#include <stdio.h>
#include <math.h>

int main() {
    
    double first, second; // input: first and second number
    double first_sqrt, second_sqrt, sum_sqrt; // output: square root of the first number, the second number, and their sum 

    // input the first and second number
    printf("\nEnter the first number: ", first);
    scanf("%lf", &first);
    printf("Enter the second number: ", second);
    scanf("%lf", &second);

    // execute and output the square root of the first number
    first_sqrt = sqrt(first);
    printf("\nThe square root of the first number is %.2lf.", first_sqrt);

    // execute and output the square root of the second number
    second_sqrt = sqrt(second);
    printf("\nThe square root of the second number is %.2lf.", second_sqrt);

    // execute and output the square root of the sum of the first and second number
    sum_sqrt = sqrt(first + second);
    printf("\nThe square root of the sum of the first and second number is %.2lf\n\n", sum_sqrt);
    
    return 0;
}