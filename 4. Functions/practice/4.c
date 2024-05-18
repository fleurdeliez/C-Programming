// 5.18.24

#include <stdio.h>
void decimal_to_binary(int decimal);

int main() {
    int decimal;
    printf("Input any decimal number: ");
    scanf("%d", &decimal);

    decimal_to_binary(decimal);
    
    return 0;
}

void decimal_to_binary(int decimal){
    int binary[32], i = 0;
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    };

    printf("The Binary value is: ");   
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}