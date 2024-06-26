#include <stdio.h>

int main(){
    FILE *fp;
    fp = fopen("test.txt", "r");
    if(fp == NULL){
        printf("File is empty.");
        return 1;
    }

    char str1[50], str2[50];
    fscanf(fp, "%s%s", str1, str2);
    printf("%s %s", str1, str2);
    fclose(fp);
    return 0;
}
