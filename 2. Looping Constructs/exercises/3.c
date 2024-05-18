// Write a C program that will generate the numbers from 100 down to 0, i.e., 100, 99, 98, 97, 96, 95, 94,93, 92, 91…0

#include <stdio.h>

int main() {
    int i;
    
    for (i = 100; i >= 0; i--) {
        printf("%d ", i);
    }
    
    return 0;
}