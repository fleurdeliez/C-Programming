#include <stdio.h>
#include <string.h>

int main(){
    FILE *fp;
    fp = fopen("test.txt", "w");
    if(fp == NULL){
        printf("File is empty.");
        return 1;
    }

    char str[25];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; i < 25; i++){
        fputc(str[i], fp);
    }

    fclose(fp);
    return 0;
}
