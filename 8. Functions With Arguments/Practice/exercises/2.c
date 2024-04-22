/*
    Check Palindrome Number
    Write a C program to check whether a given number is a palindrome or not. Use a function
    with one argument to determine if the number is a palindrome. The function should take an
    integer as an argument and return 1 if it is a palindrome, otherwise return 0.
*/

#include <stdio.h>
int checkPalindrome(int n); // function prototype;

int main() {
    int num; // input

    // get the user input
    printf("Enter a number: ");
    scanf("%d", &num); 

    // check if the number is a palindrome
    if (checkPalindrome(num)) {
        printf("%d is a Palindrome.", num);
    } else {
        printf("%d is not a Palindrome", num);
    }

    return 0;
}

// function definition
int checkPalindrome(int n){
    int reversedNum = 0;
    int originalNum = n;

    // reverse the number
    while (n != 0) {
        int remainder = n % 10;
        reversedNum = reversedNum * 10 + remainder;
        n /= 10;
    }

    // check if the reversed number is equal to the reversed number
    if (reversedNum == originalNum) {
        return 1; // palindrome
    } else {
        return 0; // not a palindrome
    }
}
