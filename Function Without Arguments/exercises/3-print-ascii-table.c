/* Create a program to print the ASCII table (characters from 0 to 127) without using any  arguments in the function.*/

#include <stdio.h>

void printAsciiTable() {
    for (int i = 0; i <= 127; i++) { 
        printf("%d: %c\n", i, i); // print the ASCII value and the corresponding character
    }
}

int main() {
    printAsciiTable(); // call the function to print the ASCII table
    return 0;
}
