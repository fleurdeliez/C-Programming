/* Situation: You are tasked with writing a program that counts and prints all even numbers between 1 and
20 using a loop. Use a for loop to iterate through the numbers and print only the even ones.*/

#include <stdio.h>

int main() {

    int num[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int count = 0;

    for (int i = 0; i < 20; ++i) {
        if (num[i] % 2 == 0) {
        printf("%d ", num[i]);
        count++;
        }
    }

    printf("\nCount = %d", count);
    
    return 0;
}