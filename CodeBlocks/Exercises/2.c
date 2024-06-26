#include <stdio.h>

int main(){
    FILE *fp;
    char filename[50];
    int numWords = 0, numChars = 0;

    printf("Input the file name to be opened: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if(fp == NULL){
        puts("\nFile is empty.");
        return 1;
    }

    puts("The content of the file test.txt is:");
    while(!feof(fp)){
        putchar(fgetc(fp));
    }

    rewind(fp);

    while(!feof(fp)){
        char ch = fgetc(fp);
        if (ch != " " || ch != "\n" || ch != "\t"){
            numChars++;
        }
    }

    printf("\nThe number of words in the file test.txt are: %d", numWords);
    printf("\nThe number of characters in the file test.txt are: %d", numChars);

    fclose(fp);
    return 0;
}
