#include <stdio.h>

int main() {
    
    int x = 5, *ptr = &x; // * value of operator, & address operator
    printf("%x\n", &x);
    printf("%d", *ptr);

    int m = 300;
    float fx = 300.6;
    char cht = 'z';

    printf("value at address of m = %d\n", *(&m));
    printf("value at address of fx = %f\n", *(&fx));
    printf("value at address of cht = %c\n", *(&cht));
    return 0;
}