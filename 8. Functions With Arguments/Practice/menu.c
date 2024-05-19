#include <stdio.h>

//functi prototype
void printMenu(void);


int main() {
    printMenu(); // function call
    return 0;
}
//function definition
void printMenu() {
    printf("Menu:\n");
    printf("1. Option 1\n");
    printf("2. Option 2\n");
    printf("3. Option 3\n");
    printf("4. Quit\n");
}
