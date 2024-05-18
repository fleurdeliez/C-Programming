// 5.18.24

#include <stdio.h>
double square(double);

int main() {
    double n;
    printf("Input any number for square: ");
    scanf("%lf", &n);

    double result = square(n);

    printf("%.2lf", result);
    
    return 0;
}

double square(double num){
    int square;
    square = num * num;
    return square;
}