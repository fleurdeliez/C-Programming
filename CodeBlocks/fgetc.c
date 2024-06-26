#include <stdio.h>

int main(){
    FILE *fp;
    fp = fopen("test.txt.", "r");
    if(fp == NULL){
        puts("Error opening file.");
        return 1;
    }

    char ch;
    while(!feof(fp)){
        ch = fgetc(fp);
        printf("%c", ch);
    }

    fclose(fp);
    return 0;
}
