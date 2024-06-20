/*
Write a program in C to replace a specific line with another text in a file.  
Assume that the content of the file test.txt is : 
test line 1 
test line 2 
test line 3 
test line 4 
Test Data : 
Input the file name to be opened : test.txt 
Input the content of the new line : Yes, I am the new text instead of test line 2  
Input the line number you want to replace : 2 
Expected Output : 
Replacement did successfully...!! 
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fpointer;
    char fileName[50];
    char text[100];
    int line, count = 1;
    
    printf("Input the file name to be opened: ");
    scanf("%s", fileName);
    
    fpointer = fopen(fileName, "r+");
    
    if (fpointer == NULL) {
        printf("File not found.\n");
        return 1;;
    }
    
    printf("Input the content of the new line: ");
    getchar(); 
    fgets(text, 100, stdin);
    
    printf("Input the line number you want to replace: ");
    scanf("%d", &line);
    
    rewind(fpointer); 
    
    while (!feof(fpointer)) {
        if (count == line) {
            fprintf(fpointer, "%s\n", line);
        } else {
            fprintf(fpointer, "%s", line);
        }
        
        if (fgetc(fpointer) == '\n') {
            count++;
        }
    }
    
    printf("Replacement did successfully...!!\n");
    fclose(fpointer);
    
    return 0;
}

// FUNCTIONS USED:

/*
fseek() - Move the file pointer to a specific location in the file.
syntax: int fseek(FILE *file_pointer, long int offset, int origin);
    offset: Number of bytes to offset from origin.
    origin: Position from where offset is added. It can be:
SEEK_SET (beginning of the file)
SEEK_CUR (current position of the file pointer)
SEEK_END (end of the file)
*/

/*
ftell: Get the current position of the file pointer.
syntax: long int ftell(FILE *stream);
    Return Value: Current file position on success, or -1L on error.
ex: 
    fseek(file_pointer, 0, SEEK_SET); // Move to the beginning of the file
    long int position = ftell(file_pointer); // Get the current file position
    printf("Current file position: %ld\n", position);
*/

/* 
fgetc: Read a single character from the file.
syntax: int fgetc(FILE *stream);
    Return Value: The character read as an unsigned char cast to an int, or EOF on end of file or error.
*/

/*
fputs: Write a string to the file.
syntax: int fputs(const char *str, FILE *stream);
*/