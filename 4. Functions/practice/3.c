// 5.18.24

#include <stdio.h>
void odd_even(int);

int main() {
    int n;
    printf("Input any number: ");
    scanf("%d", &n);

    odd_even(n);
    
    return 0;
}

void odd_even(int num){
    if (num % 2 == 0) {
        printf("The entered number is even.");
    } else {
        printf("The entered number is odd.");
    }
}