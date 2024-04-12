// IF...ELSE STATEMENT

/* Write a program that will ask the user to input a letter. If the user entered a lower-case letter,
output the words LOWER CASE, otherwise output the word UPPER CASE.*/

#include <stdio.h>

int main() {
    char letter; // input

    printf("Enter a letter: ");
    scanf("%c", &letter);

    if (letter >= 'a' && letter <= 'z') {
        printf("LOWER CASE");
    } else {
        printf("UPPER CASE");
    }

    return 0;
}