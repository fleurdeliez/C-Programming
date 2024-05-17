// 5.17.24

#include <stdio.h>

int main() {
    int num1, num2;
    
    printf("Input the first number: ");
    scanf("%d", &num1);
    printf("Input the second number: ");
    scanf("%d", &num2);
    
    if (num1 < num2) {
        printf("NUMBER1 IS SMALLER");
    } else if (num2 < num1) {
        printf("NUMBER2 IS SMALLER");
    } else {
        printf("NUMBER1 AND NUMBER2 ARE EQUAL");
    }
    return 0;
}