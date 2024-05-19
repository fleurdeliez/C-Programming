// 5.19.24

#include <stdio.h>
double calculateArea(){
    double side, area;
    printf("Enter the side: ");
    scanf("%lf", &side);
    
    area = side * side;
    
    return area;
}

int main() {
    double area = calculateArea();

    printf("Area of the square: %.2lf", area);

    return 0;
}