#include <stdio.h>

int main(){
    FILE *fp;
    fp = fopen("test.txt", "w");
    if(fp == NULL){
        printf("File is empty.");
        return 1;
    }

    // code

    fclose(fp);
    return 0;
}
