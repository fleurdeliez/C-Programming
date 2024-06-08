#include <stdio.h>
int add(int *n1p, int *n2p);

int main() {
    int n1, n2, sum;

    printf("Input the first number: ");
    scanf("%d", &n1);
    printf("Input the second number: ");
    scanf("%d", &n2);

    sum = add(&n1, &n2);
    
    printf("The sum of %d and %d is: %d", n1, n2, sum);

    return 0;
}

int add(int *n1p, int *n2p){
    return *n1p + *n2p;
}