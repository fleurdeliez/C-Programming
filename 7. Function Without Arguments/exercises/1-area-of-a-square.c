/* Write a program to calculate and print the area of a square without passing any arguments to the  function.*/

#include <stdio.h>

double calculateArea() {
    double side; // input
    double area; // output

    // input the side of the square
    printf("\nEnter the side of the square: ");
    scanf("%lf", &side);

    // calculate the area of the square
    area = side * side;

    return area;
}

int main() {
    double area = calculateArea();

    // output the area of the square
    printf("\nThe area of the square is %.2lf.\n\n", area);

    return 0;
}