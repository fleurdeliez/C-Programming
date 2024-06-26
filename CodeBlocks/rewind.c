/*
syntax:
void rewind(file *fp)
*/
#include <stdio.h>

int main(){
    FILE *fp;
    fp = fopen("test.txt", "r");

    if (fp == NULL){
        puts("Failed to open the file.");
        return 1;
    }

    while(!feof(fp)){
        putchar(fgetc(fp));
    }

    rewind(fp);
    printf("\n");

    while(!feof(fp)){
        putchar(fgetc(fp));
    }

    fclose(fp);
    return 0;
}
