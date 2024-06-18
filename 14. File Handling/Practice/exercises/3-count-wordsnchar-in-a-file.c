/*
3. Write a program in C to count a number of words and characters in a file. 
Test Data : 
Input the file name to be opened : test.txt 
Expected Output : 
The content of the file test.txt are : 
test line 1 
test line 2 
test line 3 
test line 4 
The number of words in the file test.txt are : 12 
The number of characters in the file test.txt are : 36 
 */

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fpointer;
    char filename[50];
    printf("Input the file to be opened: ");
    scanf("%s", &filename);
    fpointer = fopen(filename, "r");

    if (fpointer == NULL) {
        perror("\nError opening file.");
        return 1;
    };

    int ch, wordCount = 0, charCount = 0, inWord = 0;

    printf("The content of the %s file are:\n", filename);
    while ((ch = fgetc(fpointer)) != EOF) {
        putchar(ch);
        charCount++;
        if (isspace(ch) || ch == '\n' || ch == '\t') {
            if (inWord) {
                inWord = 0;
                wordCount++;
            }
        } else {
            inWord = 1;
        }
    }
    if (inWord) {
        wordCount++;
}

    printf("\nThe number of words in the file %s are: %d\n", filename, wordCount);
    printf("The number of characters in the file %s are: %d\n", filename, charCount);

    fclose(fpointer);
    
    return 0;
}

