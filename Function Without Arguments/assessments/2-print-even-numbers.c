/* Write a program to print the first 10 even numbers without passing any arguments to the  function. */

#include <stdio.h>

int main() {

    int count = 1; // counter
    int num = 2; // first even number
    
    // print the first 10 even numbers
    while (count <= 10) {
        printf("%d ", num); 
        num += 2; // increment by 2 to get the next even number
        count++; // increment the counter
    }
    
    return 0;
}

