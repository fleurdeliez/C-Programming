#include <stdio.h>

int main() {

    int n1, *n1p = &n1;
    int n2, *n2p = &n2;
    int sum;
    
    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);
    
    printf("The sum of %d and %d is %d", n1, n2, sum);
    
    return 0;
}