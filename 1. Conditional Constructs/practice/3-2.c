// 5.17.24

#include <stdio.h>

int main() {
    int messages;
    double charge;

    printf("Input the number of text messages incurred: ");
    scanf("%d", &messages);

    charge = (messages - 200) * 0.5; 
    
    printf("Charge incurred: %.2lf Pesos", charge);

    return 0;
}