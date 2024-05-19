// 5.18.24
// 5.19.24

#include <stdio.h>
void total(int, int);

int main() {

    int n1 = 5, n2 = 6;
    total(n1, n2);
    
    return 0;
}

void total(int num1, int num2){
    int sum;
    sum = num1 + num2;
    printf("The total is: %d", sum);
}