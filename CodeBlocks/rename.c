
#include <stdio.h>

int main(){

    if (rename("test.txt", "Test.txt")== 0){
        puts("File renamed sucessfully.");
    } else {
        puts("Failed to rename the file.");
    }

    return 0;
}
