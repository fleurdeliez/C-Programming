// 5.17.24

#include <stdio.h>

int main() {
    int num, factorial = 1;

    printf("Input a number: ");
    scanf("%d", &num);

    while (num > 1) {
        factorial *= num;
        num--;
    }; 

    printf("Factorial: %d", factorial);

    return 0;
}