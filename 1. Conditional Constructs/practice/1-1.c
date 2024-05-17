// 5.17.24

#include <stdio.h>

int main() {
    int num;

    printf("Input a number: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("NEGATIVE");
    }
    if (num >= 0) {
        printf("POSITIVE");
    }
    return 0;
}