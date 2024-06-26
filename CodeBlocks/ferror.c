// syntax:
// int ferror(FILE *fp);
// void clearerr(FILE *fp);

#include <stdio.h>

int main(){
    FILE *fp;
    fp = fopen("test.txt", "r");
    if(fp == NULL){
        printf("File is empty.");
        return 1;
    }

    int status;
    char str[20] = "hello world";
    fprintf(fp, "%s", str);

    status = ferror(fp);
    printf("Status = %d\n", status);

    clearerr(fp);
    status = ferror(fp);
    printf("Status = %d\n", status);

    if (status == 0){
        puts("No errors.");
    } else {
        puts("Error occured.");
    }

    fclose(fp);
    return 0;
}
