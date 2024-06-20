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

int main() {
    FILE *file;
    char filename[100];
    char ch;
    int wordCount = 0, charCount = 0;

    printf("Input the file name to be opened: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    printf("The content of the file %s are:\n", filename);

    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
        charCount++;

        if (ch == ' ' || ch == '\n' || ch == '\t') {
            wordCount++;
        }
    }

    fclose(file);

    printf("\nThe number of words in the file %s are: %d\n", filename, wordCount + 1);
    printf("The number of characters in the file %s are: %d\n", filename, charCount);

    return 0;
}