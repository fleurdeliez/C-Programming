#include <stdio.h>
#include <stdbool.h>

#define MAX_LENGHT 100
#define FNAME_SIZE 50

int main(){
    FILE *fp, *tmp;
    char filename[FNAME_SIZE], tmpfile[FNAME_SIZE];
    char buffer[MAX_LENGHT], replace[MAX_LENGHT];
    int replaceLine;

    printf("Input the file name to be opened: ");
    scanf("%s", filename);

    printf("Input the content of the new line: ");
    getchar();
    fgets(replace, MAX_LENGHT, stdin);

    printf("Input the line number you want to replace: ");
    scanf("%d", &replaceLine);

    tmpnam(tmpfile);

    fp = fopen(filename, "r");
    tmp = fopen(tmpfile, "w");
    if(fp == NULL || tmp == NULL){
        puts("Error opening file(s).\n");
        return 1;
    }

    bool keepReading = true;
    int currentLine = 1;

    do{
        fgets(buffer, MAX_LENGHT, fp);
        if(feof(fp)){
            puts("\nReplacement did successfully...!!");
            keepReading = false;
        } else if(currentLine == replaceLine){
            fputs(replace, tmp);
        } else {
            fputs(buffer, tmp);
        }
        currentLine++;
    } while (keepReading);

    fclose(fp);
    fclose(tmp);

    remove(filename);
    rename(tmpfile, filename);
    return 0;
}
