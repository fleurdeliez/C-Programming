// 5.14.24

#include <stdio.h>
int add(int, int);

int main() {
    
    printf("The total is %d", add(5, 6));

    return 0;
}

int add(int i, int j){
    int sum = i + j;
    return sum;
}