#include <stdio.h>
/*
syntax tmpnam():
    char *tmpnam(char *nam);
*/

int main(){

    char name[L_tmpnam+1];

    tmpnam(name);
    puts(name);

    return 0;
}
