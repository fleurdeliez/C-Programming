// 5.18.24

#include <stdio.h>

int main() {
    int num, sum = 0;
    
    do {
        printf("Enter a number: ");
        scanf("%d", &num);
        sum += num;
    } while (num != 0);

    printf("Sum = %d", sum);
    return 0;
}