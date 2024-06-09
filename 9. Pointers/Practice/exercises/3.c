#include <stdio.h>

void add(int, int, int*);

int main() {
    int n1, n2, sum;
    printf("Input the first number: ");
    scanf("%d", &n1);
    printf("Input the second number: ");
    scanf("%d", &n2);

    add(n1, n2, &sum);

    printf("The sum of %d and %d is %d", n1, n2, sum);
    
    return 0;
}

void add(int a, int b, int* sum){ 
    *sum = a + b;
}