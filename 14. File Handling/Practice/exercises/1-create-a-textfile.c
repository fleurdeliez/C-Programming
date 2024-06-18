/*
    1. Write a program in C to create and store information in a text file. 
    Test Data : 
    Input a sentence for the file : This is the content of the file test.txt. 
    Expected Output : 
    The file test.txt was created successfully...!! 
*/

#include <stdio.h>

int main() {
    FILE *fpointer; // opening a file
    fpointer = fopen("test.txt", "w");
    char string[50];
    printf("Input a sentence for the file: "); // user-input string
    fgets(string, 50, stdin);
    fprintf(fpointer, "%s", string); // writing the string in the file

    puts("\nThe file test.txt was created successfully...!!");
    
    fclose(fpointer);
    return 0;
}