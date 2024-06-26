#include <stdio.h>
#include <string.h>

int main(){
    FILE *fp;
    fp = fopen("test.txt", "a");
    if(fp == NULL){
        printf("Failed to create/open file.");
        return 1;
    };

    char str[25];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("You entered: ");
    fprintf(fp, "%s", str);

    char ch;
    fp = fopen("test.txt", "r");
    while (!feof(fp)){
        ch = fgetc(fp);
        printf("%c", ch);
    }

    fclose(fp);
    return 0;
}
