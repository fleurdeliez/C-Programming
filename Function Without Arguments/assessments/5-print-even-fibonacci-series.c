/* Write a program to print the even numbers in the Fibonacci series up to the 10th term  without 
passing any arguments to the function. */

#include <stdio.h>

int main() {
    
    // initialize the first and second term
    int first = 0;
    int second = 1;

    // print the first two terms
    printf("%d %d ", first, second);

    //print the remaining fibonacci numbers
    int count = 2;
    while (count <= 10) {
        int next = first + second;
        if (next % 2 == 0) {
            printf("%d ", next);
        }
        first = second;
        second = next;
        count++;
    }

    return 0;
}