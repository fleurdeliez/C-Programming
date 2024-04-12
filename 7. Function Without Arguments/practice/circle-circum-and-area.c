#include <stdio.h>
#include <math.h>
#define PI 3.14159 // pi constant

int main() {
    
    // declare the radius, radius squared, area, and circumference
    double radius, r2, area, circumference; 

    // input the radius of the circle
    printf("\nEnter the radius of the circle: ");
    scanf("%lf", &radius);

    //function call
    r2 = pow(radius, 2);

    // calculate the area and circumference of the circle
    area = PI * r2; // or remove the pow(); area = PI * radius * radius
    circumference = 2 * PI * radius;

    // output the area and circumference of the circle
    printf("\nThe are of the circle is %.2lf.", area);
    printf("\nThe circumference of the circle is %.2lf.\n\n", circumference);

    return 0;
}

/* Macro Definition or the #define directive doesn't end with a semi-colon and 
it is placed before any other code*/