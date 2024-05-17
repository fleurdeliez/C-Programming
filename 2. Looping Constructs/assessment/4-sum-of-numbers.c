/*Write a program to find the sum of all numbers between 1 and 100 that are
divisible by 3. Use a do while loop to iterate through the numbers.*/

#include <stdio.h>

int main() {

    int number = 1;
    int sum = 0; // output

    // loop to iterate between numbers 1-100
    do {
        if (number % 3 == 0) { // conditional statement to check if divisible by three
            sum += number;
        }
        number++;
    } while (number <= 100);

    // print the total sum    
    printf("Sum of numbers between 1 and 100 that are divisible by 3 is %d.", sum);
    
    return 0;
}