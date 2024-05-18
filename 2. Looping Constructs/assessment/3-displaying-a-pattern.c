/*
Situation: Write a program to display the following pattern using nested for loops.
1
22
333
4444
55555
*/

#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}