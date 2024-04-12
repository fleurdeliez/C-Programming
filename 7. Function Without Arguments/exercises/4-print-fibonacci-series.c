/* Write a program to print the Fibonacci series up to the 10th term without passing any  arguments to the function.*/

#include <stdio.h>

void printFibonacciSeries() {
    // initialize the first two terms of the Fibonacci series
    int first = 0;
    int second = 1;

    // print the first two terms of the Fibonacci series
    printf("%d %d ", first, second);

    // print the remaining terms of the Fibonacci series
    for (int i = 3; i <= 10; i++) {
        int next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }
}

int main() {
    // call the function to print the Fibonacci series
    printFibonacciSeries();

    return 0;
}