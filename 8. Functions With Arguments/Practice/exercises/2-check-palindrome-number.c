/* 
    Write a C program to check whether a given number is a palindrome or not. Use a function  with one argument to determine if the number 
    is a palindrome. The function should take an  integer as an argument and return 1 if it is a palindrome, otherwise return 0.
*/

#include <stdio.h>

// Function to check if a number is palindrome
int isPalindrome(int num) {
    int reversedNum = 0;
    int originalNum = num;

    // Reverse the number
    while (num != 0) {
        int remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // Check if the reversed number is equal to the original number
    if (reversedNum == originalNum) {
        return 1; // Palindrome
    } else {
        return 0; // Not a palindrome
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is a palindrome
    if (isPalindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}