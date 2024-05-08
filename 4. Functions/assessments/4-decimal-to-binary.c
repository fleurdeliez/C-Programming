/*
Write a program in C to convert decimal number to binary number using the
function.
Test Data:
Input any decimal number: 65
Expected Output:
The Binary value is: 1000001
*/

#include <stdio.h>

void decimalToBinary(int decimal) {
    int binary[32];
    int i = 0;

    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    printf("The Binary value is: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    int decimal;

    printf("Input any decimal number: ");
    scanf("%d", &decimal);

    decimalToBinary(decimal);

    return 0;
}