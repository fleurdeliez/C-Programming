/* Situation: You are tasked with writing a program that counts and prints all even numbers between 1 and
20 using a loop. Use a for loop to iterate through the numbers and print only the even ones.*/

#include <stdio.h>

int main() {

    for (int i = 2; i < 20; i += 2) {
        printf("%d ", i);
    }
    return 0;
}