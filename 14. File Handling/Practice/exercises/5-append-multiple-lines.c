/*
Write a program in C to append multiple lines at the end of a text file.  
Assume that the content of the file test.txt is : 
test line 1 
test line 2 
test line 3 
test line 4
Test Data : 
Input the file name to be opened : test.txt  
Input the number of lines to be written : 3  
The lines are : 
test line 5 
test line 6 
test line 7 
Expected Output : 
The content of the file test.txt is : 
test line 1 
test line 2 
test line 3 
test line 4 
test line 5 
test line 6 
test line 7
*/

#include <stdio.h>

#define MAX_FILENAME 100
#define MAX_LINE 100

int main() {
    FILE *file;
    char filename[MAX_FILENAME];
    char line[MAX_LINE];
    int numLines, i;

    printf("Input the file name to be opened: ");
    scanf("%s", filename);

    printf("Input the number of lines to be written: ");
    if (scanf("%d", &numLines) != 1 || numLines <= 0) {
        printf("Invalid input for number of lines.\n");
        return 1;
    }

    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    while (getchar() != '\n');
    printf("The lines are:\n");
    for (i = 0; i < numLines; i++) {
        fgets(line, MAX_LINE, stdin);
        fprintf(file, "%s", line);
    }

    fclose(file);

    printf("The content of the file %s is:\n", filename);
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

    fclose(file);

    return 0;
}