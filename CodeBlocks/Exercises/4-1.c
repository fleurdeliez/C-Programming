#include <stdio.h>
#include <stdbool.h>

#define FNAME_SIZE 50
#define MAX_LENGHT 100 // max characters per line

int main(){
    FILE *fp, *tmp;
    char filename[FNAME_SIZE], tmpname[FNAME_SIZE];
    char buffer[MAX_LENGHT]; // original lines
    char replace[MAX_LENGHT]; // replacement line
    int replaceLine = 0;

    printf("Input the file name to be opened: ");
    scanf("%s", filename);

    printf("Input the content of the new line: ");
    getchar();
    fgets(replace, MAX_LENGHT, stdin);

    printf("Input the line number you want to replace: ");
    scanf("%d", &replaceLine);

    tmpnam(tmpname); // generate a temp name

    fp = fopen(filename, "r");
    tmp = fopen(tmpname, "w");

    if(fp == NULL || tmp == NULL){
        puts("\nError opening file(s).");
        return 1;
    }

    bool keepReading = true;
    int currentLine = 1;

    do{
       fgets(buffer, MAX_LENGHT, fp);
       if(feof(fp)){
            keepReading = false;
       } else if (currentLine == replaceLine){
            fputs(replace, tmp);
       } else {
            fputs(buffer, tmp);
       }
       currentLine++;
       }while(keepReading);

    fclose(fp);
    fclose(tmp);

    remove(filename);
    rename(tmpname, filename);

    return 0;
}
