#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(){
    FILE *fp;
    char filename[50], ch;
    int nChars = 0, nWords = 0;
    bool whitespace = true;

    printf("Input the file name to be opened: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if(fp == NULL){
        puts("\nError opening file.");
        return 1;
    }

    printf("The content of the file %s are:\n", filename);
    while(!feof(fp)){
        putchar(fgetc(fp));
    }

    rewind(fp);

    while((ch = fgetc(fp)) != EOF){
        if(!isspace(ch)){
            nChars++;
        }
        if(whitespace && !isspace(ch)){
            nWords++;
            whitespace = false;
        } else if (!whitespace && isspace(ch)){
            whitespace = true;
        }
    }

    fclose(fp);

    printf("\nThe number of words in the file %s are: %d", filename, nWords);
    printf("\nThe number of characters in the file %s are: %d", filename, nChars);

    return 0;
}
