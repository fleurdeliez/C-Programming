#include <stdio.h>

int main(){
    int status = remove("folder/sample.txt");
    if (status == 0){
        puts("File deleted successfully.");
    } else {
        puts("Error while deleting file");
    }
    return 0;
}
