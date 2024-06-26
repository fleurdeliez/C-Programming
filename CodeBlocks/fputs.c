#include <stdio.h>
#include <string.h>

int main(){
    FILE *fp;
    fp = fopen("test.txt", "w");
    if(fp == NULL){
        printf("File is empty.");
        return 1;
    }

    char str[20];
    printf("Enter a string: ");
    fgets(str, 20, stdin);
    fputs(str, fp);

    fclose(fp);
    return 0;
}
