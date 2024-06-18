/*
    2. Write a program in C to read an existing file. 
    Test Data : 
    Input the file name to be opened : test.txt 
    Expected Output : 
    The content of the file test.txt is : 
    This is the content of the file test.txt. 

 */
 
#include <stdio.h>

int main() {
    FILE *fpointer;

    char filename[50];
    printf("Input the file name to be opened: ");
    scanf("%s", &filename);
    fpointer = fopen(filename, "r");
    
    char text[50];
    printf("The content of the file text.txt is:\n");
    fgets(text, 50, fpointer);
    printf("%s", text);

    fclose(fpointer);
    return 0;
}