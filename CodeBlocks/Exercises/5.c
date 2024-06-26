
#include <stdio.h>
#define MAX_LINES 10
#define MAX_LENGTH 100

int main() {
    FILE *fp;
    char filename[50];
    int numLines;

    printf("Input the file name to be opened: ");
    scanf("%s", filename);

    printf("Input the number of lines to be written: ");
    scanf("%d", &numLines);

    if (numLines > MAX_LINES) {
        puts("Max lines limit reached. Try again.");
        return 1;
    }

    char content[MAX_LINES][MAX_LENGTH];

    fp = fopen(filename, "a");
    if (fp == NULL) {
        puts("\nError opening file.");
        return 1;
    }

    printf("\nThe lines are:\n");
    getchar();
    fputc('\n', fp);
    for (int i = 0; i < numLines; i++) {
        fgets(content[i], MAX_LENGTH, stdin);
        fputs(content[i], fp);
    }
    fclose(fp);

    return 0;
}
