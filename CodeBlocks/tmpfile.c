#include <stdio.h>
#include <string.h>

int main(){
    FILE *tmp;
    tmp = tmpfile();

    if (tmp != NULL){
        puts("temp file created\n");
    } else {
        puts("unable to create temporary file");
    }

    char str[] = "hello world";
    int lenght = strlen(str);
    int counter = -1;

    while(++counter < lenght){
        fputc(str[counter], tmp);
    }

    rewind(tmp);

    while(!feof(tmp)){
        putchar(fgetc(tmp));
    }

    return 0;
}
