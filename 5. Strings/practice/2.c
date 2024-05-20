// 5.20.24

#include <stdio.h>
#include <string.h>

int main() {
    char str[50], copy[50];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    strcpy(copy, str);
    puts(copy);
    
    return 0;
}