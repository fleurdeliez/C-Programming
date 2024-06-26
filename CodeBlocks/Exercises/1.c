#include <stdio.h>
#include <string.h>

int main(){
    FILE *fp;
    char str[50];

    fp = fopen("test.txt", "w");
    if (fp == NULL){
        puts("File is empty.");
        return 1;
    }

    printf("Input a sentence for the file: ");
    fgets(str, 50, stdin);
    fprintf(fp, "%s", str);
    puts("\nThe file test.txt was created successfully...!!");

    fclose(fp);
    return 0;
}
